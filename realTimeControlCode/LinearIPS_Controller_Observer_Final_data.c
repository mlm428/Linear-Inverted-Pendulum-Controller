/*
 * LinearIPS_Controller_Observer_Final_data.c
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "LinearIPS_Controller_Observer_Final".
 *
 * Model version              : 4.2
 * Simulink Coder version : 9.7 (R2022a) 13-Nov-2021
 * C source code generated on : Sun May 15 18:25:19 2022
 *
 * Target selection: sldrt.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Intel->x86-64 (Linux 64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "LinearIPS_Controller_Observer_Final.h"

/* Block parameters (default storage) */
P_LinearIPS_Controller_Observer_Final_T LinearIPS_Controller_Observer_Final_P =
  {
  /* Variable: Ao
   * Referenced by: '<Root>/Discrete State-Space'
   */
  { 0.35939160605161224, -16.205446683827859, -2.7317761892193229,
    -123.0437214968731, 0.0056017392566627064, 0.12309269784879284,
    -0.028134244818875019, -5.61113785169518, 0.031425930815208787,
    0.45191995749516789, 1.0806459011464844, 2.6800518421385284,
    0.00041910748533663823, 0.083608968507132134, 0.012677778758593839,
    1.5340603896618836 },

  /* Variable: Bo
   * Referenced by: '<Root>/Discrete State-Space'
   */
  { 0.61757262072293251, 11.610830584333057, 2.5747850864357638,
    91.733170071756817, -0.030692166461804869, -0.3055391772375039,
    -0.075957703803074691, -1.7450304211201615 },

  /* Variable: Co
   * Referenced by: '<Root>/Discrete State-Space'
   */
  { -63.928520910695838, -11.456577005448249, 1.90908603473435,
    1.1244362380569373 },

  /* Variable: Do
   * Referenced by: '<Root>/Discrete State-Space'
   */
  { 0.0, 0.0 },

  /* Mask Parameter: AnalogOutput2_FinalValue
   * Referenced by: '<Root>/Analog Output2'
   */
  0.0,

  /* Mask Parameter: AnalogOutput2_InitialValue
   * Referenced by: '<Root>/Analog Output2'
   */
  0.0,

  /* Mask Parameter: EncoderInput1_InputFilter
   * Referenced by: '<Root>/Encoder Input1'
   */
  0.0,

  /* Mask Parameter: EncoderInput_InputFilter
   * Referenced by: '<Root>/Encoder Input'
   */
  0.0,

  /* Mask Parameter: AnalogOutput2_MaxMissedTicks
   * Referenced by: '<Root>/Analog Output2'
   */
  10.0,

  /* Mask Parameter: EncoderInput1_MaxMissedTicks
   * Referenced by: '<Root>/Encoder Input1'
   */
  10.0,

  /* Mask Parameter: EncoderInput_MaxMissedTicks
   * Referenced by: '<Root>/Encoder Input'
   */
  10.0,

  /* Mask Parameter: AnalogOutput2_YieldWhenWaiting
   * Referenced by: '<Root>/Analog Output2'
   */
  0.0,

  /* Mask Parameter: EncoderInput1_YieldWhenWaiting
   * Referenced by: '<Root>/Encoder Input1'
   */
  0.0,

  /* Mask Parameter: EncoderInput_YieldWhenWaiting
   * Referenced by: '<Root>/Encoder Input'
   */
  0.0,

  /* Mask Parameter: AnalogOutput2_Channels
   * Referenced by: '<Root>/Analog Output2'
   */
  0,

  /* Mask Parameter: EncoderInput1_Channels
   * Referenced by: '<Root>/Encoder Input1'
   */
  1,

  /* Mask Parameter: EncoderInput_Channels
   * Referenced by: '<Root>/Encoder Input'
   */
  0,

  /* Mask Parameter: AnalogOutput2_RangeMode
   * Referenced by: '<Root>/Analog Output2'
   */
  0,

  /* Mask Parameter: AnalogOutput2_VoltRange
   * Referenced by: '<Root>/Analog Output2'
   */
  0,

  /* Expression: 0
   * Referenced by: '<Root>/Constant1'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<Root>/Discrete State-Space'
   */
  0.0,

  /* Expression: pi/2000
   * Referenced by: '<Root>/x3'
   */
  0.0015707963267948967,

  /* Expression: pi/2000
   * Referenced by: '<Root>/x1'
   */
  0.0015707963267948967,

  /* Expression: -pi
   * Referenced by: '<Root>/Constant'
   */
  -3.1415926535897931,

  /* Computed Parameter: ManualSwitch_CurrentSetting
   * Referenced by: '<Root>/Manual Switch'
   */
  1U
};
