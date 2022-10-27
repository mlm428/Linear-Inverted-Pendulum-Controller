    function targMap = targDataMap(),

    ;%***********************
    ;% Create Parameter Map *
    ;%***********************
    
        nTotData      = 0; %add to this count as we go
        nTotSects     = 4;
        sectIdxOffset = 0;

        ;%
        ;% Define dummy sections & preallocate arrays
        ;%
        dumSection.nData = -1;
        dumSection.data  = [];

        dumData.logicalSrcIdx = -1;
        dumData.dtTransOffset = -1;

        ;%
        ;% Init/prealloc paramMap
        ;%
        paramMap.nSections           = nTotSects;
        paramMap.sectIdxOffset       = sectIdxOffset;
            paramMap.sections(nTotSects) = dumSection; %prealloc
        paramMap.nTotData            = -1;

        ;%
        ;% Auto data (LinearIPS_Controller_Observer_Final_P)
        ;%
            section.nData     = 14;
            section.data(14)  = dumData; %prealloc

                    ;% LinearIPS_Controller_Observer_Final_P.Ao
                    section.data(1).logicalSrcIdx = 0;
                    section.data(1).dtTransOffset = 0;

                    ;% LinearIPS_Controller_Observer_Final_P.Bo
                    section.data(2).logicalSrcIdx = 1;
                    section.data(2).dtTransOffset = 16;

                    ;% LinearIPS_Controller_Observer_Final_P.Co
                    section.data(3).logicalSrcIdx = 2;
                    section.data(3).dtTransOffset = 24;

                    ;% LinearIPS_Controller_Observer_Final_P.Do
                    section.data(4).logicalSrcIdx = 3;
                    section.data(4).dtTransOffset = 28;

                    ;% LinearIPS_Controller_Observer_Final_P.AnalogOutput2_FinalValue
                    section.data(5).logicalSrcIdx = 4;
                    section.data(5).dtTransOffset = 30;

                    ;% LinearIPS_Controller_Observer_Final_P.AnalogOutput2_InitialValue
                    section.data(6).logicalSrcIdx = 5;
                    section.data(6).dtTransOffset = 31;

                    ;% LinearIPS_Controller_Observer_Final_P.EncoderInput1_InputFilter
                    section.data(7).logicalSrcIdx = 6;
                    section.data(7).dtTransOffset = 32;

                    ;% LinearIPS_Controller_Observer_Final_P.EncoderInput_InputFilter
                    section.data(8).logicalSrcIdx = 7;
                    section.data(8).dtTransOffset = 33;

                    ;% LinearIPS_Controller_Observer_Final_P.AnalogOutput2_MaxMissedTicks
                    section.data(9).logicalSrcIdx = 8;
                    section.data(9).dtTransOffset = 34;

                    ;% LinearIPS_Controller_Observer_Final_P.EncoderInput1_MaxMissedTicks
                    section.data(10).logicalSrcIdx = 9;
                    section.data(10).dtTransOffset = 35;

                    ;% LinearIPS_Controller_Observer_Final_P.EncoderInput_MaxMissedTicks
                    section.data(11).logicalSrcIdx = 10;
                    section.data(11).dtTransOffset = 36;

                    ;% LinearIPS_Controller_Observer_Final_P.AnalogOutput2_YieldWhenWaiting
                    section.data(12).logicalSrcIdx = 11;
                    section.data(12).dtTransOffset = 37;

                    ;% LinearIPS_Controller_Observer_Final_P.EncoderInput1_YieldWhenWaiting
                    section.data(13).logicalSrcIdx = 12;
                    section.data(13).dtTransOffset = 38;

                    ;% LinearIPS_Controller_Observer_Final_P.EncoderInput_YieldWhenWaiting
                    section.data(14).logicalSrcIdx = 13;
                    section.data(14).dtTransOffset = 39;

            nTotData = nTotData + section.nData;
            paramMap.sections(1) = section;
            clear section

            section.nData     = 5;
            section.data(5)  = dumData; %prealloc

                    ;% LinearIPS_Controller_Observer_Final_P.AnalogOutput2_Channels
                    section.data(1).logicalSrcIdx = 14;
                    section.data(1).dtTransOffset = 0;

                    ;% LinearIPS_Controller_Observer_Final_P.EncoderInput1_Channels
                    section.data(2).logicalSrcIdx = 15;
                    section.data(2).dtTransOffset = 1;

                    ;% LinearIPS_Controller_Observer_Final_P.EncoderInput_Channels
                    section.data(3).logicalSrcIdx = 16;
                    section.data(3).dtTransOffset = 2;

                    ;% LinearIPS_Controller_Observer_Final_P.AnalogOutput2_RangeMode
                    section.data(4).logicalSrcIdx = 17;
                    section.data(4).dtTransOffset = 3;

                    ;% LinearIPS_Controller_Observer_Final_P.AnalogOutput2_VoltRange
                    section.data(5).logicalSrcIdx = 18;
                    section.data(5).dtTransOffset = 4;

            nTotData = nTotData + section.nData;
            paramMap.sections(2) = section;
            clear section

            section.nData     = 5;
            section.data(5)  = dumData; %prealloc

                    ;% LinearIPS_Controller_Observer_Final_P.Constant1_Value
                    section.data(1).logicalSrcIdx = 19;
                    section.data(1).dtTransOffset = 0;

                    ;% LinearIPS_Controller_Observer_Final_P.DiscreteStateSpace_InitialCondition
                    section.data(2).logicalSrcIdx = 20;
                    section.data(2).dtTransOffset = 1;

                    ;% LinearIPS_Controller_Observer_Final_P.x3_Gain
                    section.data(3).logicalSrcIdx = 21;
                    section.data(3).dtTransOffset = 2;

                    ;% LinearIPS_Controller_Observer_Final_P.x1_Gain
                    section.data(4).logicalSrcIdx = 22;
                    section.data(4).dtTransOffset = 3;

                    ;% LinearIPS_Controller_Observer_Final_P.Constant_Value
                    section.data(5).logicalSrcIdx = 23;
                    section.data(5).dtTransOffset = 4;

            nTotData = nTotData + section.nData;
            paramMap.sections(3) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% LinearIPS_Controller_Observer_Final_P.ManualSwitch_CurrentSetting
                    section.data(1).logicalSrcIdx = 24;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            paramMap.sections(4) = section;
            clear section


            ;%
            ;% Non-auto Data (parameter)
            ;%


        ;%
        ;% Add final counts to struct.
        ;%
        paramMap.nTotData = nTotData;



    ;%**************************
    ;% Create Block Output Map *
    ;%**************************
    
        nTotData      = 0; %add to this count as we go
        nTotSects     = 1;
        sectIdxOffset = 0;

        ;%
        ;% Define dummy sections & preallocate arrays
        ;%
        dumSection.nData = -1;
        dumSection.data  = [];

        dumData.logicalSrcIdx = -1;
        dumData.dtTransOffset = -1;

        ;%
        ;% Init/prealloc sigMap
        ;%
        sigMap.nSections           = nTotSects;
        sigMap.sectIdxOffset       = sectIdxOffset;
            sigMap.sections(nTotSects) = dumSection; %prealloc
        sigMap.nTotData            = -1;

        ;%
        ;% Auto data (LinearIPS_Controller_Observer_Final_B)
        ;%
            section.nData     = 4;
            section.data(4)  = dumData; %prealloc

                    ;% LinearIPS_Controller_Observer_Final_B.DiscreteStateSpace
                    section.data(1).logicalSrcIdx = 0;
                    section.data(1).dtTransOffset = 0;

                    ;% LinearIPS_Controller_Observer_Final_B.x3
                    section.data(2).logicalSrcIdx = 1;
                    section.data(2).dtTransOffset = 1;

                    ;% LinearIPS_Controller_Observer_Final_B.Add
                    section.data(3).logicalSrcIdx = 2;
                    section.data(3).dtTransOffset = 2;

                    ;% LinearIPS_Controller_Observer_Final_B.TmpSignalConversionAtDiscreteStateSpaceInport1
                    section.data(4).logicalSrcIdx = 3;
                    section.data(4).dtTransOffset = 3;

            nTotData = nTotData + section.nData;
            sigMap.sections(1) = section;
            clear section


            ;%
            ;% Non-auto Data (signal)
            ;%


        ;%
        ;% Add final counts to struct.
        ;%
        sigMap.nTotData = nTotData;



    ;%*******************
    ;% Create DWork Map *
    ;%*******************
    
        nTotData      = 0; %add to this count as we go
        nTotSects     = 2;
        sectIdxOffset = 1;

        ;%
        ;% Define dummy sections & preallocate arrays
        ;%
        dumSection.nData = -1;
        dumSection.data  = [];

        dumData.logicalSrcIdx = -1;
        dumData.dtTransOffset = -1;

        ;%
        ;% Init/prealloc dworkMap
        ;%
        dworkMap.nSections           = nTotSects;
        dworkMap.sectIdxOffset       = sectIdxOffset;
            dworkMap.sections(nTotSects) = dumSection; %prealloc
        dworkMap.nTotData            = -1;

        ;%
        ;% Auto data (LinearIPS_Controller_Observer_Final_DW)
        ;%
            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% LinearIPS_Controller_Observer_Final_DW.DiscreteStateSpace_DSTATE
                    section.data(1).logicalSrcIdx = 0;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(1) = section;
            clear section

            section.nData     = 6;
            section.data(6)  = dumData; %prealloc

                    ;% LinearIPS_Controller_Observer_Final_DW.AnalogOutput2_PWORK
                    section.data(1).logicalSrcIdx = 1;
                    section.data(1).dtTransOffset = 0;

                    ;% LinearIPS_Controller_Observer_Final_DW.EncoderInput1_PWORK
                    section.data(2).logicalSrcIdx = 2;
                    section.data(2).dtTransOffset = 1;

                    ;% LinearIPS_Controller_Observer_Final_DW.EncoderInput_PWORK
                    section.data(3).logicalSrcIdx = 3;
                    section.data(3).dtTransOffset = 2;

                    ;% LinearIPS_Controller_Observer_Final_DW.MotorPosrad2_PWORK.LoggedData
                    section.data(4).logicalSrcIdx = 4;
                    section.data(4).dtTransOffset = 3;

                    ;% LinearIPS_Controller_Observer_Final_DW.MotorVelocity_PWORK.LoggedData
                    section.data(5).logicalSrcIdx = 5;
                    section.data(5).dtTransOffset = 4;

                    ;% LinearIPS_Controller_Observer_Final_DW.PendPosrad_PWORK.LoggedData
                    section.data(6).logicalSrcIdx = 6;
                    section.data(6).dtTransOffset = 5;

            nTotData = nTotData + section.nData;
            dworkMap.sections(2) = section;
            clear section


            ;%
            ;% Non-auto Data (dwork)
            ;%


        ;%
        ;% Add final counts to struct.
        ;%
        dworkMap.nTotData = nTotData;



    ;%
    ;% Add individual maps to base struct.
    ;%

    targMap.paramMap  = paramMap;
    targMap.signalMap = sigMap;
    targMap.dworkMap  = dworkMap;

    ;%
    ;% Add checksums to base struct.
    ;%


    targMap.checksum0 = 4060634015;
    targMap.checksum1 = 862425749;
    targMap.checksum2 = 2901487960;
    targMap.checksum3 = 3442139370;

