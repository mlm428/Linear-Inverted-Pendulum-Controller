/*
 * LinearIPS_Controller_Observer_Final.c
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
#include "rtwtypes.h"
#include <emmintrin.h>
#include "rt_nonfinite.h"
#include "LinearIPS_Controller_Observer_Final_dt.h"

/* options for Simulink Desktop Real-Time board 0 */
static double SLDRTBoardOptions0[] = {
  255.0,
  0.0,
  0.0,
};

/* list of Simulink Desktop Real-Time timers */
const int SLDRTTimerCount = 1;
const double SLDRTTimers[2] = {
  0.01, 0.0,
};

/* list of Simulink Desktop Real-Time boards */
const int SLDRTBoardCount = 2;
SLDRTBOARD SLDRTBoards[2] = {
  { "Measurement_Computing/PCI-DAS6036", 4294967295U, 3, SLDRTBoardOptions0 },

  { "Measurement_Computing/PCI-QUAD04", 0U, 0, NULL },
};

/* Block signals (default storage) */
B_LinearIPS_Controller_Observer_Final_T LinearIPS_Controller_Observer_Final_B;

/* Block states (default storage) */
DW_LinearIPS_Controller_Observer_Final_T LinearIPS_Controller_Observer_Final_DW;

/* Real-time model */
static RT_MODEL_LinearIPS_Controller_Observer_Final_T
  LinearIPS_Controller_Observer_Final_M_;
RT_MODEL_LinearIPS_Controller_Observer_Final_T *const
  LinearIPS_Controller_Observer_Final_M =
  &LinearIPS_Controller_Observer_Final_M_;

/* Model output function */
void LinearIPS_Controller_Observer_Final_output(void)
{
  real_T rtb_EncoderInput;
  real_T rtb_EncoderInput1;

  /* DiscreteStateSpace: '<Root>/Discrete State-Space' */
  LinearIPS_Controller_Observer_Final_B.DiscreteStateSpace = 0.0;
  LinearIPS_Controller_Observer_Final_B.DiscreteStateSpace +=
    LinearIPS_Controller_Observer_Final_P.Co[0] *
    LinearIPS_Controller_Observer_Final_DW.DiscreteStateSpace_DSTATE[0];
  LinearIPS_Controller_Observer_Final_B.DiscreteStateSpace +=
    LinearIPS_Controller_Observer_Final_P.Co[1] *
    LinearIPS_Controller_Observer_Final_DW.DiscreteStateSpace_DSTATE[1];
  LinearIPS_Controller_Observer_Final_B.DiscreteStateSpace +=
    LinearIPS_Controller_Observer_Final_P.Co[2] *
    LinearIPS_Controller_Observer_Final_DW.DiscreteStateSpace_DSTATE[2];
  LinearIPS_Controller_Observer_Final_B.DiscreteStateSpace +=
    LinearIPS_Controller_Observer_Final_P.Co[3] *
    LinearIPS_Controller_Observer_Final_DW.DiscreteStateSpace_DSTATE[3];

  /* ManualSwitch: '<Root>/Manual Switch' incorporates:
   *  Constant: '<Root>/Constant1'
   */
  if (LinearIPS_Controller_Observer_Final_P.ManualSwitch_CurrentSetting == 1) {
    rtb_EncoderInput1 = LinearIPS_Controller_Observer_Final_B.DiscreteStateSpace;
  } else {
    rtb_EncoderInput1 = LinearIPS_Controller_Observer_Final_P.Constant1_Value;
  }

  /* End of ManualSwitch: '<Root>/Manual Switch' */

  /* S-Function (sldrtao): '<Root>/Analog Output2' */
  /* S-Function Block: <Root>/Analog Output2 */
  {
    {
      ANALOGIOPARM parm;
      parm.mode = (RANGEMODE)
        LinearIPS_Controller_Observer_Final_P.AnalogOutput2_RangeMode;
      parm.rangeidx =
        LinearIPS_Controller_Observer_Final_P.AnalogOutput2_VoltRange;
      RTBIO_DriverIO(0, ANALOGOUTPUT, IOWRITE, 1,
                     &LinearIPS_Controller_Observer_Final_P.AnalogOutput2_Channels,
                     ((real_T*) (&rtb_EncoderInput1)), &parm);
    }
  }

  /* S-Function (sldrtei): '<Root>/Encoder Input1' */
  /* S-Function Block: <Root>/Encoder Input1 */
  {
    ENCODERINPARM parm;
    parm.quad = (QUADMODE) 2;
    parm.index = (INDEXPULSE) 2;
    parm.infilter =
      LinearIPS_Controller_Observer_Final_P.EncoderInput1_InputFilter;
    RTBIO_DriverIO(1, ENCODERINPUT, IOREAD, 1,
                   &LinearIPS_Controller_Observer_Final_P.EncoderInput1_Channels,
                   &rtb_EncoderInput1, &parm);
  }

  /* S-Function (sldrtei): '<Root>/Encoder Input' */
  /* S-Function Block: <Root>/Encoder Input */
  {
    ENCODERINPARM parm;
    parm.quad = (QUADMODE) 2;
    parm.index = (INDEXPULSE) 2;
    parm.infilter =
      LinearIPS_Controller_Observer_Final_P.EncoderInput_InputFilter;
    RTBIO_DriverIO(1, ENCODERINPUT, IOREAD, 1,
                   &LinearIPS_Controller_Observer_Final_P.EncoderInput_Channels,
                   &rtb_EncoderInput, &parm);
  }

  /* Gain: '<Root>/x3' */
  LinearIPS_Controller_Observer_Final_B.x3 =
    LinearIPS_Controller_Observer_Final_P.x3_Gain * rtb_EncoderInput1;

  /* Sum: '<Root>/Add' incorporates:
   *  Constant: '<Root>/Constant'
   *  Gain: '<Root>/x1'
   */
  LinearIPS_Controller_Observer_Final_B.Add =
    LinearIPS_Controller_Observer_Final_P.x1_Gain * rtb_EncoderInput +
    LinearIPS_Controller_Observer_Final_P.Constant_Value;

  /* SignalConversion generated from: '<Root>/Discrete State-Space' */
  LinearIPS_Controller_Observer_Final_B.TmpSignalConversionAtDiscreteStateSpaceInport1
    [0] = LinearIPS_Controller_Observer_Final_B.Add;
  LinearIPS_Controller_Observer_Final_B.TmpSignalConversionAtDiscreteStateSpaceInport1
    [1] = LinearIPS_Controller_Observer_Final_B.x3;
}

/* Model update function */
void LinearIPS_Controller_Observer_Final_update(void)
{
  real_T xnew[4];
  int_T i;
  for (i = 0; i <= 2; i += 2) {
    /* Update for DiscreteStateSpace: '<Root>/Discrete State-Space' */
    _mm_storeu_pd(&xnew[i], _mm_add_pd(_mm_mul_pd(_mm_loadu_pd
      (&LinearIPS_Controller_Observer_Final_P.Bo[i + 4]), _mm_set1_pd
      (LinearIPS_Controller_Observer_Final_B.TmpSignalConversionAtDiscreteStateSpaceInport1
       [1])), _mm_add_pd(_mm_mul_pd(_mm_loadu_pd
      (&LinearIPS_Controller_Observer_Final_P.Bo[i]), _mm_set1_pd
      (LinearIPS_Controller_Observer_Final_B.TmpSignalConversionAtDiscreteStateSpaceInport1
       [0])), _mm_add_pd(_mm_mul_pd(_mm_loadu_pd
      (&LinearIPS_Controller_Observer_Final_P.Ao[i + 12]), _mm_set1_pd
      (LinearIPS_Controller_Observer_Final_DW.DiscreteStateSpace_DSTATE[3])),
                         _mm_add_pd(_mm_mul_pd(_mm_loadu_pd
      (&LinearIPS_Controller_Observer_Final_P.Ao[i + 8]), _mm_set1_pd
      (LinearIPS_Controller_Observer_Final_DW.DiscreteStateSpace_DSTATE[2])),
      _mm_add_pd(_mm_mul_pd(_mm_loadu_pd
      (&LinearIPS_Controller_Observer_Final_P.Ao[i + 4]), _mm_set1_pd
      (LinearIPS_Controller_Observer_Final_DW.DiscreteStateSpace_DSTATE[1])),
                 _mm_add_pd(_mm_mul_pd(_mm_loadu_pd
      (&LinearIPS_Controller_Observer_Final_P.Ao[i]), _mm_set1_pd
      (LinearIPS_Controller_Observer_Final_DW.DiscreteStateSpace_DSTATE[0])),
      _mm_set1_pd(0.0))))))));
  }

  /* Update for DiscreteStateSpace: '<Root>/Discrete State-Space' */
  LinearIPS_Controller_Observer_Final_DW.DiscreteStateSpace_DSTATE[0] = xnew[0];
  LinearIPS_Controller_Observer_Final_DW.DiscreteStateSpace_DSTATE[1] = xnew[1];
  LinearIPS_Controller_Observer_Final_DW.DiscreteStateSpace_DSTATE[2] = xnew[2];
  LinearIPS_Controller_Observer_Final_DW.DiscreteStateSpace_DSTATE[3] = xnew[3];

  /* Update absolute time for base rate */
  /* The "clockTick0" counts the number of times the code of this task has
   * been executed. The absolute time is the multiplication of "clockTick0"
   * and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
   * overflow during the application lifespan selected.
   * Timer of this task consists of two 32 bit unsigned integers.
   * The two integers represent the low bits Timing.clockTick0 and the high bits
   * Timing.clockTickH0. When the low bit overflows to 0, the high bits increment.
   */
  if (!(++LinearIPS_Controller_Observer_Final_M->Timing.clockTick0)) {
    ++LinearIPS_Controller_Observer_Final_M->Timing.clockTickH0;
  }

  LinearIPS_Controller_Observer_Final_M->Timing.t[0] =
    LinearIPS_Controller_Observer_Final_M->Timing.clockTick0 *
    LinearIPS_Controller_Observer_Final_M->Timing.stepSize0 +
    LinearIPS_Controller_Observer_Final_M->Timing.clockTickH0 *
    LinearIPS_Controller_Observer_Final_M->Timing.stepSize0 * 4294967296.0;
}

/* Model initialize function */
void LinearIPS_Controller_Observer_Final_initialize(void)
{
  /* Start for S-Function (sldrtao): '<Root>/Analog Output2' */

  /* S-Function Block: <Root>/Analog Output2 */
  {
    {
      ANALOGIOPARM parm;
      parm.mode = (RANGEMODE)
        LinearIPS_Controller_Observer_Final_P.AnalogOutput2_RangeMode;
      parm.rangeidx =
        LinearIPS_Controller_Observer_Final_P.AnalogOutput2_VoltRange;
      RTBIO_DriverIO(0, ANALOGOUTPUT, IOWRITE, 1,
                     &LinearIPS_Controller_Observer_Final_P.AnalogOutput2_Channels,
                     &LinearIPS_Controller_Observer_Final_P.AnalogOutput2_InitialValue,
                     &parm);
    }
  }

  /* InitializeConditions for DiscreteStateSpace: '<Root>/Discrete State-Space' */
  LinearIPS_Controller_Observer_Final_DW.DiscreteStateSpace_DSTATE[0] =
    LinearIPS_Controller_Observer_Final_P.DiscreteStateSpace_InitialCondition;
  LinearIPS_Controller_Observer_Final_DW.DiscreteStateSpace_DSTATE[1] =
    LinearIPS_Controller_Observer_Final_P.DiscreteStateSpace_InitialCondition;
  LinearIPS_Controller_Observer_Final_DW.DiscreteStateSpace_DSTATE[2] =
    LinearIPS_Controller_Observer_Final_P.DiscreteStateSpace_InitialCondition;
  LinearIPS_Controller_Observer_Final_DW.DiscreteStateSpace_DSTATE[3] =
    LinearIPS_Controller_Observer_Final_P.DiscreteStateSpace_InitialCondition;

  /* InitializeConditions for S-Function (sldrtei): '<Root>/Encoder Input1' */

  /* S-Function Block: <Root>/Encoder Input1 */
  {
    ENCODERINPARM parm;
    parm.quad = (QUADMODE) 2;
    parm.index = (INDEXPULSE) 2;
    parm.infilter =
      LinearIPS_Controller_Observer_Final_P.EncoderInput1_InputFilter;
    RTBIO_DriverIO(1, ENCODERINPUT, IORESET, 1,
                   &LinearIPS_Controller_Observer_Final_P.EncoderInput1_Channels,
                   NULL, &parm);
  }

  /* InitializeConditions for S-Function (sldrtei): '<Root>/Encoder Input' */

  /* S-Function Block: <Root>/Encoder Input */
  {
    ENCODERINPARM parm;
    parm.quad = (QUADMODE) 2;
    parm.index = (INDEXPULSE) 2;
    parm.infilter =
      LinearIPS_Controller_Observer_Final_P.EncoderInput_InputFilter;
    RTBIO_DriverIO(1, ENCODERINPUT, IORESET, 1,
                   &LinearIPS_Controller_Observer_Final_P.EncoderInput_Channels,
                   NULL, &parm);
  }
}

/* Model terminate function */
void LinearIPS_Controller_Observer_Final_terminate(void)
{
  /* Terminate for S-Function (sldrtao): '<Root>/Analog Output2' */

  /* S-Function Block: <Root>/Analog Output2 */
  {
    {
      ANALOGIOPARM parm;
      parm.mode = (RANGEMODE)
        LinearIPS_Controller_Observer_Final_P.AnalogOutput2_RangeMode;
      parm.rangeidx =
        LinearIPS_Controller_Observer_Final_P.AnalogOutput2_VoltRange;
      RTBIO_DriverIO(0, ANALOGOUTPUT, IOWRITE, 1,
                     &LinearIPS_Controller_Observer_Final_P.AnalogOutput2_Channels,
                     &LinearIPS_Controller_Observer_Final_P.AnalogOutput2_FinalValue,
                     &parm);
    }
  }
}

/*========================================================================*
 * Start of Classic call interface                                        *
 *========================================================================*/
void MdlOutputs(int_T tid)
{
  LinearIPS_Controller_Observer_Final_output();
  UNUSED_PARAMETER(tid);
}

void MdlUpdate(int_T tid)
{
  LinearIPS_Controller_Observer_Final_update();
  UNUSED_PARAMETER(tid);
}

void MdlInitializeSizes(void)
{
}

void MdlInitializeSampleTimes(void)
{
}

void MdlInitialize(void)
{
}

void MdlStart(void)
{
  LinearIPS_Controller_Observer_Final_initialize();
}

void MdlTerminate(void)
{
  LinearIPS_Controller_Observer_Final_terminate();
}

/* Registration function */
RT_MODEL_LinearIPS_Controller_Observer_Final_T
  *LinearIPS_Controller_Observer_Final(void)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* non-finite (run-time) assignments */
  LinearIPS_Controller_Observer_Final_P.EncoderInput1_InputFilter = rtInf;
  LinearIPS_Controller_Observer_Final_P.EncoderInput_InputFilter = rtInf;

  /* initialize real-time model */
  (void) memset((void *)LinearIPS_Controller_Observer_Final_M, 0,
                sizeof(RT_MODEL_LinearIPS_Controller_Observer_Final_T));

  /* Initialize timing info */
  {
    int_T *mdlTsMap =
      LinearIPS_Controller_Observer_Final_M->Timing.sampleTimeTaskIDArray;
    mdlTsMap[0] = 0;

    /* polyspace +2 MISRA2012:D4.1 [Justified:Low] "LinearIPS_Controller_Observer_Final_M points to
       static memory which is guaranteed to be non-NULL" */
    LinearIPS_Controller_Observer_Final_M->Timing.sampleTimeTaskIDPtr =
      (&mdlTsMap[0]);
    LinearIPS_Controller_Observer_Final_M->Timing.sampleTimes =
      (&LinearIPS_Controller_Observer_Final_M->Timing.sampleTimesArray[0]);
    LinearIPS_Controller_Observer_Final_M->Timing.offsetTimes =
      (&LinearIPS_Controller_Observer_Final_M->Timing.offsetTimesArray[0]);

    /* task periods */
    LinearIPS_Controller_Observer_Final_M->Timing.sampleTimes[0] = (0.01);

    /* task offsets */
    LinearIPS_Controller_Observer_Final_M->Timing.offsetTimes[0] = (0.0);
  }

  rtmSetTPtr(LinearIPS_Controller_Observer_Final_M,
             &LinearIPS_Controller_Observer_Final_M->Timing.tArray[0]);

  {
    int_T *mdlSampleHits =
      LinearIPS_Controller_Observer_Final_M->Timing.sampleHitArray;
    mdlSampleHits[0] = 1;
    LinearIPS_Controller_Observer_Final_M->Timing.sampleHits = (&mdlSampleHits[0]);
  }

  rtmSetTFinal(LinearIPS_Controller_Observer_Final_M, 240.0);
  LinearIPS_Controller_Observer_Final_M->Timing.stepSize0 = 0.01;

  /* External mode info */
  LinearIPS_Controller_Observer_Final_M->Sizes.checksums[0] = (4060634015U);
  LinearIPS_Controller_Observer_Final_M->Sizes.checksums[1] = (862425749U);
  LinearIPS_Controller_Observer_Final_M->Sizes.checksums[2] = (2901487960U);
  LinearIPS_Controller_Observer_Final_M->Sizes.checksums[3] = (3442139370U);

  {
    static const sysRanDType rtAlwaysEnabled = SUBSYS_RAN_BC_ENABLE;
    static RTWExtModeInfo rt_ExtModeInfo;
    static const sysRanDType *systemRan[2];
    LinearIPS_Controller_Observer_Final_M->extModeInfo = (&rt_ExtModeInfo);
    rteiSetSubSystemActiveVectorAddresses(&rt_ExtModeInfo, systemRan);
    systemRan[0] = &rtAlwaysEnabled;
    systemRan[1] = &rtAlwaysEnabled;
    rteiSetModelMappingInfoPtr
      (LinearIPS_Controller_Observer_Final_M->extModeInfo,
       &LinearIPS_Controller_Observer_Final_M->SpecialInfo.mappingInfo);
    rteiSetChecksumsPtr(LinearIPS_Controller_Observer_Final_M->extModeInfo,
                        LinearIPS_Controller_Observer_Final_M->Sizes.checksums);
    rteiSetTPtr(LinearIPS_Controller_Observer_Final_M->extModeInfo, rtmGetTPtr
                (LinearIPS_Controller_Observer_Final_M));
  }

  LinearIPS_Controller_Observer_Final_M->solverInfoPtr =
    (&LinearIPS_Controller_Observer_Final_M->solverInfo);
  LinearIPS_Controller_Observer_Final_M->Timing.stepSize = (0.01);
  rtsiSetFixedStepSize(&LinearIPS_Controller_Observer_Final_M->solverInfo, 0.01);
  rtsiSetSolverMode(&LinearIPS_Controller_Observer_Final_M->solverInfo,
                    SOLVER_MODE_SINGLETASKING);

  /* block I/O */
  LinearIPS_Controller_Observer_Final_M->blockIO = ((void *)
    &LinearIPS_Controller_Observer_Final_B);
  (void) memset(((void *) &LinearIPS_Controller_Observer_Final_B), 0,
                sizeof(B_LinearIPS_Controller_Observer_Final_T));

  /* parameters */
  LinearIPS_Controller_Observer_Final_M->defaultParam = ((real_T *)
    &LinearIPS_Controller_Observer_Final_P);

  /* states (dwork) */
  LinearIPS_Controller_Observer_Final_M->dwork = ((void *)
    &LinearIPS_Controller_Observer_Final_DW);
  (void) memset((void *)&LinearIPS_Controller_Observer_Final_DW, 0,
                sizeof(DW_LinearIPS_Controller_Observer_Final_T));

  /* data type transition information */
  {
    static DataTypeTransInfo dtInfo;
    (void) memset((char_T *) &dtInfo, 0,
                  sizeof(dtInfo));
    LinearIPS_Controller_Observer_Final_M->SpecialInfo.mappingInfo = (&dtInfo);
    dtInfo.numDataTypes = 22;
    dtInfo.dataTypeSizes = &rtDataTypeSizes[0];
    dtInfo.dataTypeNames = &rtDataTypeNames[0];

    /* Block I/O transition table */
    dtInfo.BTransTable = &rtBTransTable;

    /* Parameters transition table */
    dtInfo.PTransTable = &rtPTransTable;
  }

  /* Initialize Sizes */
  LinearIPS_Controller_Observer_Final_M->Sizes.numContStates = (0);/* Number of continuous states */
  LinearIPS_Controller_Observer_Final_M->Sizes.numY = (0);/* Number of model outputs */
  LinearIPS_Controller_Observer_Final_M->Sizes.numU = (0);/* Number of model inputs */
  LinearIPS_Controller_Observer_Final_M->Sizes.sysDirFeedThru = (0);/* The model is not direct feedthrough */
  LinearIPS_Controller_Observer_Final_M->Sizes.numSampTimes = (1);/* Number of sample times */
  LinearIPS_Controller_Observer_Final_M->Sizes.numBlocks = (15);/* Number of blocks */
  LinearIPS_Controller_Observer_Final_M->Sizes.numBlockIO = (4);/* Number of block outputs */
  LinearIPS_Controller_Observer_Final_M->Sizes.numBlockPrms = (51);/* Sum of parameter "widths" */
  return LinearIPS_Controller_Observer_Final_M;
}

/*========================================================================*
 * End of Classic call interface                                          *
 *========================================================================*/
