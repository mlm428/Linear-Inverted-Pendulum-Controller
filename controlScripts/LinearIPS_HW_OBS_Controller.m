Linear IPS Controller
Observer-Based Regulator for Cart/Pendulum System
Note: Must load sroots prior to running this script.
Input Parameters
T = 0.01;
Ts = 1; %Selected for Hardware
n = 20; %rad/m
g = 9.81; %m/s^2
Hardware Values
alpha=1.68; %C in ex. - sec^-1
beta=49.39; %D in ex. - rad/volt-sec^2
L = 30.7; %Sqaure of radian naturaly frequency
SSM Parameters
Xo = [0.17;0;0;0]; %Pendulum Leaning (~10deg>Rads)

A = [0 1 0 0; L 0 0 -L*alpha/(n*g); 0 0 0 1; 0 0 0 -alpha];
B = [0; L*beta/(n*g); 0; beta];
C = [1 0 0 0; 0 0 1 0];
D = [0; 0]; 
Part 1 - State Feedback Vector Calculation
roots = eig(A)';
[phi, gamma] = c2d(A,B,T);

%spoles = [s4/Ts]   %Norm-Bess. Poles

spoles = [-24.7 -6.44 s2/Ts];  %SDPP & Bessel Poles
zpoles = exp(T*spoles);
k = place(phi,gamma,zpoles);
dsm(phi,gamma,k)
Filter Parameters (Lab 2)
% f = 20 %fudge factor
% Tf = Ts/f %Filter settling timespl
% den = poly(s4/Tf) 
% num = [den(end) 0]
% vfilter_a = tf(num,den) %analog differ. w/ LPF
% vfilter_d = c2d(vfilter_a,T,'tustin') %dig differ. w/ LPF
% [Af,Bf,Cf,Df] = ssdata(vfilter_d) %convert vfilter_d to state space model
Part 2 - Full Order Observer Design
'Part 2'
% % % Tso = Ts/3;  %%This could be 3<=f<=5
% % % opoles = s4/Tso;
% % % zopoles = exp(T*opoles)';

% % Lo = place(phi', C', zopoles)';
% % 
% % dsm_regob(phi, gamma, C, k, Lo)
% % 
% % zopoles1 = eig(phi - Lo*C);

% Ao = phi - Lo*C - gamma*k;
% Bo = Lo;
% Co = -k;
% Do = [0 0];
% 
% I = C\(C*Xo);
% Io = [5.8824; 0; 0; 0];

%%%q = 10^(0.8/20); %%%This is some factor of perturbation (only for sims)

Part 3 - Robust Observer Design
'Part 3'
Tso = Ts/3;  %%This could be 3<=f<=5
opoles = s4/Tso;
zopoles = exp(T*opoles)';

[Lo2,delta1,delta2]=obg_reg(phi,gamma,C,k,zopoles,T)

dsm_regob(phi, gamma, C, k, Lo2)

zopoles2 = eig(phi - Lo2*C); %Check: compare with zopoles

Ao = phi - Lo2*C - gamma*k;
Bo = Lo2;
Co = -k;
Do = [0 0];

I = C\(C*Xo);
