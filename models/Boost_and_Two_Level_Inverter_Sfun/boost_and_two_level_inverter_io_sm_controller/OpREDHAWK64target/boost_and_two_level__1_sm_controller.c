/*
 * boost_and_two_level__1_sm_controller.c
 *
 * Third Party Support License -- for use only to support products
 * interfaced to MathWorks software under terms specified in your
 * company's restricted use license agreement.
 *
 * Code generation for model "boost_and_two_level__1_sm_controller".
 *
 * Model version              : 7.1
 * Simulink Coder version : 9.6 (R2021b) 14-May-2021
 * C source code generated on : Thu Oct 31 13:47:23 2024
 *
 * Target selection: rtlab_rtmodel.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Intel->x86-64 (Linux 64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "boost_and_two_level__1_sm_controller.h"
#include "boost_and_two_level__1_sm_controller_private.h"

/* Block signals (default storage) */
B_boost_and_two_level__1_sm_controller_T boost_and_two_level__1_sm_controller_B;

/* Block states (default storage) */
DW_boost_and_two_level__1_sm_controller_T
  boost_and_two_level__1_sm_controller_DW;

/* Real-time model */
static RT_MODEL_boost_and_two_level__1_sm_controller_T
  boost_and_two_level__1_sm_controller_M_;
RT_MODEL_boost_and_two_level__1_sm_controller_T *const
  boost_and_two_level__1_sm_controller_M =
  &boost_and_two_level__1_sm_controller_M_;
uint32_T plook_u32d_bincka(real_T u, const real_T bp[], uint32_T maxIndex)
{
  uint32_T bpIndex;

  /* Prelookup - Index only
     Index Search method: 'binary'
     Extrapolation method: 'Clip'
     Use previous index: 'off'
     Use last breakpoint for index at or above upper limit: 'on'
     Remove protection against out-of-range input in generated code: 'off'
   */
  if (u <= bp[0U]) {
    bpIndex = 0U;
  } else if (u < bp[maxIndex]) {
    bpIndex = binsearch_u32d(u, bp, maxIndex >> 1U, maxIndex);
  } else {
    bpIndex = maxIndex;
  }

  return bpIndex;
}

uint32_T binsearch_u32d(real_T u, const real_T bp[], uint32_T startIndex,
  uint32_T maxIndex)
{
  uint32_T bpIdx;
  uint32_T bpIndex;
  uint32_T iRght;

  /* Binary Search */
  bpIdx = startIndex;
  bpIndex = 0U;
  iRght = maxIndex;
  while (iRght - bpIndex > 1U) {
    if (u < bp[bpIdx]) {
      iRght = bpIdx;
    } else {
      bpIndex = bpIdx;
    }

    bpIdx = (iRght + bpIndex) >> 1U;
  }

  return bpIndex;
}

/* Model output function */
static void boost_and_two_level__1_sm_controller_output(void)
{
  real_T currentTime;
  real_T tmp_1;
  real_T tmp_2;
  real_T tmp_3;
  real_T tmp_4;
  real_T tmp_5;
  real_T tmp_6;
  real_T u0_0;
  real_T u0_1;
  real_T u0_2;
  real_T u0_3;
  real_T u0_4;
  real_T u1_1;
  real_T u1_2;
  real_T u1_3;
  real_T u1_4;
  real_T u2_1;
  real_T u2_2;
  real_T u2_3;
  real_T u2_4;
  real_T y_1;
  real_T y_2;
  real_T y_3;
  real_T y_4;
  int32_T i;
  int32_T i_0;
  int32_T i_1;
  int32_T i_2;
  int32_T i_3;
  uint32_T bpIdx;
  uint32_T tmp;
  uint32_T tmp_0;
  uint32_T u0;
  uint32_T u0_5;
  uint32_T u1;
  uint32_T u1_0;
  uint32_T u1_5;
  uint32_T u2;
  uint32_T u2_0;
  uint32_T u2_5;
  uint32_T y;
  uint32_T y_0;

  /* Memory: '<S1>/S-Function' */
  boost_and_two_level__1_sm_controller_B.SFunction =
    boost_and_two_level__1_sm_controller_DW.SFunction_PreviousInput;

  /* Sum: '<S1>/Sum' incorporates:
   *  Constant: '<S1>/S-Function1'
   */
  boost_and_two_level__1_sm_controller_B.Sum =
    boost_and_two_level__1_sm_controller_P.SFunction1_Value +
    boost_and_two_level__1_sm_controller_B.SFunction;

  /* Stop: '<S1>/Stop Simulation' */
  if (boost_and_two_level__1_sm_controller_B.Sum != 0.0) {
    rtmSetStopRequested(boost_and_two_level__1_sm_controller_M, 1);
  }

  /* End of Stop: '<S1>/Stop Simulation' */

  /* S-Function (sfun_fct_op7160ex1_recv): '<S33>/DataOut Recv' */

  /* Level2 S-Function Block: '<S33>/DataOut Recv' (sfun_fct_op7160ex1_recv) */
  {
    SimStruct *rts = boost_and_two_level__1_sm_controller_M->childSfunctions[6];
    sfcnOutputs(rts,0);
  }

  /* DataTypeConversion: '<S34>/Data Type Conversion' incorporates:
   *  Constant: '<S34>/Constant'
   */
  tmp_4 = floor(boost_and_two_level__1_sm_controller_P.Constant_Value_l);
  if (rtIsNaN(tmp_4) || rtIsInf(tmp_4)) {
    tmp_3 = 0.0;
  } else {
    tmp_3 = fmod(tmp_4, 4.294967296E+9);
  }

  /* DataTypeConversion: '<S34>/Data Type Conversion' */
  boost_and_two_level__1_sm_controller_B.DataTypeConversion_j = tmp_3 < 0.0 ?
    (uint32_T)-(int32_T)(uint32_T)-tmp_3 : (uint32_T)tmp_3;
  for (i = 0; i < 8; i = i + 1) {
    /* Saturate: '<S34>/Saturation' */
    u0 = boost_and_two_level__1_sm_controller_B.DataOutRecv_o1[i];
    u1_0 = boost_and_two_level__1_sm_controller_P.Saturation_LowerSat_k[i];
    u2_0 = boost_and_two_level__1_sm_controller_P.Saturation_UpperSat_n[i];
    if (u0 > u2_0) {
      y_0 = u2_0;
    } else if (u0 < u1_0) {
      y_0 = u1_0;
    } else {
      y_0 = u0;
    }

    /* Saturate: '<S34>/Saturation' */
    boost_and_two_level__1_sm_controller_B.Saturation_m[i] = y_0;
  }

  /* Saturate: '<S34>/Saturation' */
  u1 = boost_and_two_level__1_sm_controller_P.Saturation_LowerSat_k[8];
  u2 = boost_and_two_level__1_sm_controller_P.Saturation_UpperSat_n[8];
  if (boost_and_two_level__1_sm_controller_B.DataTypeConversion_j > u2) {
    y = u2;
  } else if (boost_and_two_level__1_sm_controller_B.DataTypeConversion_j < u1) {
    y = u1;
  } else {
    y = boost_and_two_level__1_sm_controller_B.DataTypeConversion_j;
  }

  /* Saturate: '<S34>/Saturation' */
  boost_and_two_level__1_sm_controller_B.Saturation_m[8] = y;

  /* S-Function (sfun_SFP2DBL): '<S37>/Convert  Single floating-point (FPGA)  to double' */

  /* Level2 S-Function Block: '<S37>/Convert  Single floating-point (FPGA)  to double' (sfun_SFP2DBL) */
  {
    SimStruct *rts = boost_and_two_level__1_sm_controller_M->childSfunctions[7];
    sfcnOutputs(rts,0);
  }

  /* S-Function (sfun_SFP2DBL): '<S38>/Convert  Single floating-point (FPGA)  to double' */

  /* Level2 S-Function Block: '<S38>/Convert  Single floating-point (FPGA)  to double' (sfun_SFP2DBL) */
  {
    SimStruct *rts = boost_and_two_level__1_sm_controller_M->childSfunctions[8];
    sfcnOutputs(rts,0);
  }

  /* S-Function (sfun_SFP2DBL): '<S39>/Convert  Single floating-point (FPGA)  to double' */

  /* Level2 S-Function Block: '<S39>/Convert  Single floating-point (FPGA)  to double' (sfun_SFP2DBL) */
  {
    SimStruct *rts = boost_and_two_level__1_sm_controller_M->childSfunctions[9];
    sfcnOutputs(rts,0);
  }

  /* S-Function (sfun_SFP2DBL): '<S40>/Convert  Single floating-point (FPGA)  to double' */

  /* Level2 S-Function Block: '<S40>/Convert  Single floating-point (FPGA)  to double' (sfun_SFP2DBL) */
  {
    SimStruct *rts = boost_and_two_level__1_sm_controller_M->childSfunctions[10];
    sfcnOutputs(rts,0);
  }

  /* S-Function (sfun_SFP2DBL): '<S41>/Convert  Single floating-point (FPGA)  to double' */

  /* Level2 S-Function Block: '<S41>/Convert  Single floating-point (FPGA)  to double' (sfun_SFP2DBL) */
  {
    SimStruct *rts = boost_and_two_level__1_sm_controller_M->childSfunctions[11];
    sfcnOutputs(rts,0);
  }

  /* S-Function (sfun_SFP2DBL): '<S42>/Convert  Single floating-point (FPGA)  to double' */

  /* Level2 S-Function Block: '<S42>/Convert  Single floating-point (FPGA)  to double' (sfun_SFP2DBL) */
  {
    SimStruct *rts = boost_and_two_level__1_sm_controller_M->childSfunctions[12];
    sfcnOutputs(rts,0);
  }

  /* S-Function (sfun_SFP2DBL): '<S43>/Convert  Single floating-point (FPGA)  to double' */

  /* Level2 S-Function Block: '<S43>/Convert  Single floating-point (FPGA)  to double' (sfun_SFP2DBL) */
  {
    SimStruct *rts = boost_and_two_level__1_sm_controller_M->childSfunctions[13];
    sfcnOutputs(rts,0);
  }

  /* S-Function (sfun_SFP2DBL): '<S44>/Convert  Single floating-point (FPGA)  to double' */

  /* Level2 S-Function Block: '<S44>/Convert  Single floating-point (FPGA)  to double' (sfun_SFP2DBL) */
  {
    SimStruct *rts = boost_and_two_level__1_sm_controller_M->childSfunctions[14];
    sfcnOutputs(rts,0);
  }

  /* S-Function (sfun_SFP2DBL): '<S45>/Convert  Single floating-point (FPGA)  to double' */

  /* Level2 S-Function Block: '<S45>/Convert  Single floating-point (FPGA)  to double' (sfun_SFP2DBL) */
  {
    SimStruct *rts = boost_and_two_level__1_sm_controller_M->childSfunctions[15];
    sfcnOutputs(rts,0);
  }

  /* Gain: '<S34>/FormatingGains' */
  boost_and_two_level__1_sm_controller_B.FormatingGains[0] =
    boost_and_two_level__1_sm_controller_P.FormatingGains_Gain_m[0] *
    boost_and_two_level__1_sm_controller_B.ConvertSinglefloatingpointFPGAt;
  boost_and_two_level__1_sm_controller_B.FormatingGains[1] =
    boost_and_two_level__1_sm_controller_P.FormatingGains_Gain_m[1] *
    boost_and_two_level__1_sm_controller_B.ConvertSinglefloatingpointFPG_i;
  boost_and_two_level__1_sm_controller_B.FormatingGains[2] =
    boost_and_two_level__1_sm_controller_P.FormatingGains_Gain_m[2] *
    boost_and_two_level__1_sm_controller_B.ConvertSinglefloatingpointFPG_g;
  boost_and_two_level__1_sm_controller_B.FormatingGains[3] =
    boost_and_two_level__1_sm_controller_P.FormatingGains_Gain_m[3] *
    boost_and_two_level__1_sm_controller_B.ConvertSinglefloatingpointFP_ik;
  boost_and_two_level__1_sm_controller_B.FormatingGains[4] =
    boost_and_two_level__1_sm_controller_P.FormatingGains_Gain_m[4] *
    boost_and_two_level__1_sm_controller_B.ConvertSinglefloatingpointFP_ib;
  boost_and_two_level__1_sm_controller_B.FormatingGains[5] =
    boost_and_two_level__1_sm_controller_P.FormatingGains_Gain_m[5] *
    boost_and_two_level__1_sm_controller_B.ConvertSinglefloatingpointFPG_b;
  boost_and_two_level__1_sm_controller_B.FormatingGains[6] =
    boost_and_two_level__1_sm_controller_P.FormatingGains_Gain_m[6] *
    boost_and_two_level__1_sm_controller_B.ConvertSinglefloatingpointFP_i0;
  boost_and_two_level__1_sm_controller_B.FormatingGains[7] =
    boost_and_two_level__1_sm_controller_P.FormatingGains_Gain_m[7] *
    boost_and_two_level__1_sm_controller_B.ConvertSinglefloatingpointFPG_c;
  boost_and_two_level__1_sm_controller_B.FormatingGains[8] =
    boost_and_two_level__1_sm_controller_P.FormatingGains_Gain_m[8] *
    boost_and_two_level__1_sm_controller_B.ConvertSinglefloatingpointFPG_l;

  /* Saturate: '<S35>/Saturation' */
  u0_5 = boost_and_two_level__1_sm_controller_B.DataOutRecv_o1[8];
  u1_5 = boost_and_two_level__1_sm_controller_P.Saturation_LowerSat_c;
  u2_5 = boost_and_two_level__1_sm_controller_P.Saturation_UpperSat_i;
  if (u0_5 > u2_5) {
    /* Saturate: '<S35>/Saturation' */
    boost_and_two_level__1_sm_controller_B.Saturation_a = u2_5;
  } else if (u0_5 < u1_5) {
    /* Saturate: '<S35>/Saturation' */
    boost_and_two_level__1_sm_controller_B.Saturation_a = u1_5;
  } else {
    /* Saturate: '<S35>/Saturation' */
    boost_and_two_level__1_sm_controller_B.Saturation_a = u0_5;
  }

  /* End of Saturate: '<S35>/Saturation' */
  for (i_2 = 0; i_2 < 8; i_2 = i_2 + 1) {
    /* Product: '<S32>/Divide' */
    boost_and_two_level__1_sm_controller_B.Divide[i_2] =
      boost_and_two_level__1_sm_controller_B.FormatingGains[i_2] / (real_T)
      boost_and_two_level__1_sm_controller_B.Saturation_a;
  }

  /* S-Function (OP_SEND): '<S57>/S-Function' */

  /* Level2 S-Function Block: '<S57>/S-Function' (OP_SEND) */
  {
    SimStruct *rts = boost_and_two_level__1_sm_controller_M->childSfunctions[16];
    sfcnOutputs(rts,0);
  }

  /* S-Function (RECV_Param): '<S13>/S-Function' */

  /* Level2 S-Function Block: '<S13>/S-Function' (RECV_Param) */
  {
    SimStruct *rts = boost_and_two_level__1_sm_controller_M->childSfunctions[17];
    sfcnOutputs(rts,0);
  }

  /* Saturate: '<S12>/Saturation' */
  u0_0 = boost_and_two_level__1_sm_controller_B.SFunction_g[7];
  if (u0_0 > boost_and_two_level__1_sm_controller_P.Saturation_UpperSat_c) {
    /* Saturate: '<S12>/Saturation' */
    boost_and_two_level__1_sm_controller_B.Saturation =
      boost_and_two_level__1_sm_controller_P.Saturation_UpperSat_c;
  } else if (u0_0 < boost_and_two_level__1_sm_controller_P.Saturation_LowerSat_m)
  {
    /* Saturate: '<S12>/Saturation' */
    boost_and_two_level__1_sm_controller_B.Saturation =
      boost_and_two_level__1_sm_controller_P.Saturation_LowerSat_m;
  } else {
    /* Saturate: '<S12>/Saturation' */
    boost_and_two_level__1_sm_controller_B.Saturation = u0_0;
  }

  /* End of Saturate: '<S12>/Saturation' */

  /* Gain: '<S11>/Adder_Gain' */
  currentTime = 6.2831853071795862 * boost_and_two_level__1_sm_controller_P.Ts;

  /* Gain: '<S11>/Adder_Gain' */
  boost_and_two_level__1_sm_controller_B.Adder_Gain = currentTime *
    boost_and_two_level__1_sm_controller_B.SFunction_g[6];

  /* Memory: '<S11>/Memory' */
  boost_and_two_level__1_sm_controller_B.Memory =
    boost_and_two_level__1_sm_controller_DW.Memory_PreviousInput;

  /* Sum: '<S11>/Adder' */
  boost_and_two_level__1_sm_controller_B.Adder =
    boost_and_two_level__1_sm_controller_B.Adder_Gain +
    boost_and_two_level__1_sm_controller_B.Memory;

  /* Sum: '<S11>/Adder_Pred' incorporates:
   *  Constant: '<S11>/Constant3'
   */
  boost_and_two_level__1_sm_controller_B.Adder_Pred =
    boost_and_two_level__1_sm_controller_B.Adder -
    boost_and_two_level__1_sm_controller_P.Constant3_Value;

  /* Switch: '<S11>/Switch' */
  if (boost_and_two_level__1_sm_controller_B.Adder_Pred >
      boost_and_two_level__1_sm_controller_P.Switch_Threshold) {
    /* Switch: '<S11>/Switch' */
    boost_and_two_level__1_sm_controller_B.Switch =
      boost_and_two_level__1_sm_controller_B.Adder_Pred;
  } else {
    /* Switch: '<S11>/Switch' */
    boost_and_two_level__1_sm_controller_B.Switch =
      boost_and_two_level__1_sm_controller_B.Adder;
  }

  /* End of Switch: '<S11>/Switch' */

  /* Sum: '<S5>/Sum' */
  boost_and_two_level__1_sm_controller_B.Sum_l =
    boost_and_two_level__1_sm_controller_B.Switch +
    boost_and_two_level__1_sm_controller_B.SFunction_g[8];

  /* Sin: '<S12>/Three-phase Sine Wave' */
  boost_and_two_level__1_sm_controller_B.ThreephaseSineWave[0] = sin
    (boost_and_two_level__1_sm_controller_P.ThreephaseSineWave_Freq *
     boost_and_two_level__1_sm_controller_B.Sum_l +
     boost_and_two_level__1_sm_controller_P.Inv_PWM_Phases[0]) *
    boost_and_two_level__1_sm_controller_P.ThreephaseSineWave_Amp +
    boost_and_two_level__1_sm_controller_P.ThreephaseSineWave_Bias;
  boost_and_two_level__1_sm_controller_B.ThreephaseSineWave[1] = sin
    (boost_and_two_level__1_sm_controller_P.ThreephaseSineWave_Freq *
     boost_and_two_level__1_sm_controller_B.Sum_l +
     boost_and_two_level__1_sm_controller_P.Inv_PWM_Phases[1]) *
    boost_and_two_level__1_sm_controller_P.ThreephaseSineWave_Amp +
    boost_and_two_level__1_sm_controller_P.ThreephaseSineWave_Bias;
  boost_and_two_level__1_sm_controller_B.ThreephaseSineWave[2] = sin
    (boost_and_two_level__1_sm_controller_P.ThreephaseSineWave_Freq *
     boost_and_two_level__1_sm_controller_B.Sum_l +
     boost_and_two_level__1_sm_controller_P.Inv_PWM_Phases[2]) *
    boost_and_two_level__1_sm_controller_P.ThreephaseSineWave_Amp +
    boost_and_two_level__1_sm_controller_P.ThreephaseSineWave_Bias;

  /* Product: '<S12>/Product' */
  boost_and_two_level__1_sm_controller_B.Product[0] =
    boost_and_two_level__1_sm_controller_B.Saturation *
    boost_and_two_level__1_sm_controller_B.ThreephaseSineWave[0];
  boost_and_two_level__1_sm_controller_B.Product[1] =
    boost_and_two_level__1_sm_controller_B.Saturation *
    boost_and_two_level__1_sm_controller_B.ThreephaseSineWave[1];
  boost_and_two_level__1_sm_controller_B.Product[2] =
    boost_and_two_level__1_sm_controller_B.Saturation *
    boost_and_two_level__1_sm_controller_B.ThreephaseSineWave[2];

  /* Gain: '<S12>/Gain' */
  boost_and_two_level__1_sm_controller_B.Gain[0] =
    boost_and_two_level__1_sm_controller_P.Gain_Gain *
    boost_and_two_level__1_sm_controller_B.Product[0];
  boost_and_two_level__1_sm_controller_B.Gain[1] =
    boost_and_two_level__1_sm_controller_P.Gain_Gain *
    boost_and_two_level__1_sm_controller_B.Product[1];
  boost_and_two_level__1_sm_controller_B.Gain[2] =
    boost_and_two_level__1_sm_controller_P.Gain_Gain *
    boost_and_two_level__1_sm_controller_B.Product[2];

  /* Sum: '<S12>/Sum' incorporates:
   *  Constant: '<S12>/Constant'
   */
  boost_and_two_level__1_sm_controller_B.Sum_k[0] =
    boost_and_two_level__1_sm_controller_B.Gain[0] +
    boost_and_two_level__1_sm_controller_P.Constant_Value_c;
  boost_and_two_level__1_sm_controller_B.Sum_k[1] =
    boost_and_two_level__1_sm_controller_B.Gain[1] +
    boost_and_two_level__1_sm_controller_P.Constant_Value_c;
  boost_and_two_level__1_sm_controller_B.Sum_k[2] =
    boost_and_two_level__1_sm_controller_B.Gain[2] +
    boost_and_two_level__1_sm_controller_P.Constant_Value_c;

  /* DataTypeConversion: '<S7>/Data Type Conversion' */
  boost_and_two_level__1_sm_controller_B.DataTypeConversion[0] =
    boost_and_two_level__1_sm_controller_B.Sum_k[0];
  boost_and_two_level__1_sm_controller_B.DataTypeConversion[1] =
    boost_and_two_level__1_sm_controller_B.Sum_k[1];
  boost_and_two_level__1_sm_controller_B.DataTypeConversion[2] =
    boost_and_two_level__1_sm_controller_B.Sum_k[2];

  /* Gain: '<S7>/Gain' */
  boost_and_two_level__1_sm_controller_B.Gain_l[0] =
    boost_and_two_level__1_sm_controller_P.Gain_Gain_c[0] *
    boost_and_two_level__1_sm_controller_B.SFunction_g[5];
  boost_and_two_level__1_sm_controller_B.Gain_l[1] =
    boost_and_two_level__1_sm_controller_P.Gain_Gain_c[1] *
    boost_and_two_level__1_sm_controller_B.SFunction_g[5];
  boost_and_two_level__1_sm_controller_B.Gain_l[2] =
    boost_and_two_level__1_sm_controller_P.Gain_Gain_c[2] *
    boost_and_two_level__1_sm_controller_B.SFunction_g[5];

  /* S-Function (sfun_op7160ex1_pwm_out): '<S7>/PWM Out' */

  /* Level2 S-Function Block: '<S7>/PWM Out' (sfun_op7160ex1_pwm_out) */
  {
    SimStruct *rts = boost_and_two_level__1_sm_controller_M->childSfunctions[18];
    sfcnOutputs(rts,0);
  }

  /* Sin: '<S6>/Three-phase Sine Wave' */
  boost_and_two_level__1_sm_controller_B.ThreephaseSineWave_i[0] = sin
    (boost_and_two_level__1_sm_controller_P.ThreephaseSineWave_Freq_e *
     boost_and_two_level__1_sm_controller_B.Switch +
     boost_and_two_level__1_sm_controller_P.Inv_PWM_Phases[0]) *
    boost_and_two_level__1_sm_controller_P.ThreephaseSineWave_Amp_c +
    boost_and_two_level__1_sm_controller_P.ThreephaseSineWave_Bias_n;
  boost_and_two_level__1_sm_controller_B.ThreephaseSineWave_i[1] = sin
    (boost_and_two_level__1_sm_controller_P.ThreephaseSineWave_Freq_e *
     boost_and_two_level__1_sm_controller_B.Switch +
     boost_and_two_level__1_sm_controller_P.Inv_PWM_Phases[1]) *
    boost_and_two_level__1_sm_controller_P.ThreephaseSineWave_Amp_c +
    boost_and_two_level__1_sm_controller_P.ThreephaseSineWave_Bias_n;
  boost_and_two_level__1_sm_controller_B.ThreephaseSineWave_i[2] = sin
    (boost_and_two_level__1_sm_controller_P.ThreephaseSineWave_Freq_e *
     boost_and_two_level__1_sm_controller_B.Switch +
     boost_and_two_level__1_sm_controller_P.Inv_PWM_Phases[2]) *
    boost_and_two_level__1_sm_controller_P.ThreephaseSineWave_Amp_c +
    boost_and_two_level__1_sm_controller_P.ThreephaseSineWave_Bias_n;

  /* Product: '<S6>/Amplitude_Gain' */
  boost_and_two_level__1_sm_controller_B.Amplitude_Gain[0] =
    boost_and_two_level__1_sm_controller_B.SFunction_g[1] *
    boost_and_two_level__1_sm_controller_B.ThreephaseSineWave_i[0];
  boost_and_two_level__1_sm_controller_B.Amplitude_Gain[1] =
    boost_and_two_level__1_sm_controller_B.SFunction_g[1] *
    boost_and_two_level__1_sm_controller_B.ThreephaseSineWave_i[1];
  boost_and_two_level__1_sm_controller_B.Amplitude_Gain[2] =
    boost_and_two_level__1_sm_controller_B.SFunction_g[1] *
    boost_and_two_level__1_sm_controller_B.ThreephaseSineWave_i[2];

  /* DataTypeConversion: '<S16>/Data Type Conversion' */
  boost_and_two_level__1_sm_controller_B.DataTypeConversion_m = 0U;

  /* DataTypeConversion: '<S16>/Data Type Conversion1' */
  boost_and_two_level__1_sm_controller_B.DataTypeConversion1 = (real_T)
    boost_and_two_level__1_sm_controller_B.DataTypeConversion_m;

  /* Memory: '<S16>/Memory' */
  boost_and_two_level__1_sm_controller_B.Memory_d =
    boost_and_two_level__1_sm_controller_DW.Memory_PreviousInput_n;

  /* MultiPortSwitch: '<S16>/UserParameterSetFilter' */
  switch ((int32_T)boost_and_two_level__1_sm_controller_B.DataTypeConversion1) {
   case 0:
    /* MultiPortSwitch: '<S16>/UserParameterSetFilter' */
    boost_and_two_level__1_sm_controller_B.UserParameterSetFilter =
      boost_and_two_level__1_sm_controller_B.DataTypeConversion1;
    break;

   default:
    /* MultiPortSwitch: '<S16>/UserParameterSetFilter' */
    boost_and_two_level__1_sm_controller_B.UserParameterSetFilter =
      boost_and_two_level__1_sm_controller_B.Memory_d;
    break;
  }

  /* End of MultiPortSwitch: '<S16>/UserParameterSetFilter' */

  /* Lookup_n-D: '<S16>/ParameterSetToIndexMap' incorporates:
   *  MultiPortSwitch: '<S16>/UserParameterSetFilter'
   */
  bpIdx = plook_u32d_bincka
    (boost_and_two_level__1_sm_controller_B.UserParameterSetFilter,
     boost_and_two_level__1_sm_controller_P.ParameterSetToIndexMap_bp01Data, 1U);

  /* Lookup_n-D: '<S16>/ParameterSetToIndexMap' */
  boost_and_two_level__1_sm_controller_B.ParameterSetToIndexMap =
    boost_and_two_level__1_sm_controller_P.ParameterSetToIndexMap_tableDat[bpIdx];

  /* Constant: '<S35>/Constant' */
  boost_and_two_level__1_sm_controller_B.Constant_h[0] =
    boost_and_two_level__1_sm_controller_P.Constant_Value_k[0];
  boost_and_two_level__1_sm_controller_B.Constant_h[1] =
    boost_and_two_level__1_sm_controller_P.Constant_Value_k[1];

  /* Outputs for Enabled SubSystem: '<S19>/driver' incorporates:
   *  EnablePort: '<S24>/Enable'
   */
  /* Constant: '<S19>/enable dataIn' */
  if (boost_and_two_level__1_sm_controller_P.DataInDriver_isConfigured > 0.0) {
    /* Gain: '<S25>/FormatingGains' */
    boost_and_two_level__1_sm_controller_B.FormatingGains_h[0] =
      boost_and_two_level__1_sm_controller_P.FormatingGains_Gain[0] *
      boost_and_two_level__1_sm_controller_B.SFunction_g[0];
    boost_and_two_level__1_sm_controller_B.FormatingGains_h[1] =
      boost_and_two_level__1_sm_controller_P.FormatingGains_Gain[1] *
      boost_and_two_level__1_sm_controller_B.Amplitude_Gain[0];
    boost_and_two_level__1_sm_controller_B.FormatingGains_h[2] =
      boost_and_two_level__1_sm_controller_P.FormatingGains_Gain[2] *
      boost_and_two_level__1_sm_controller_B.Amplitude_Gain[1];
    boost_and_two_level__1_sm_controller_B.FormatingGains_h[3] =
      boost_and_two_level__1_sm_controller_P.FormatingGains_Gain[3] *
      boost_and_two_level__1_sm_controller_B.Amplitude_Gain[2];

    /* Saturate: '<S25>/Saturation' */
    u0_1 = boost_and_two_level__1_sm_controller_B.FormatingGains_h[0];
    u1_1 = boost_and_two_level__1_sm_controller_P.Saturation_LowerSat[0];
    u2_1 = boost_and_two_level__1_sm_controller_P.Saturation_UpperSat[0];
    if (u0_1 > u2_1) {
      y_1 = u2_1;
    } else if (u0_1 < u1_1) {
      y_1 = u1_1;
    } else {
      y_1 = u0_1;
    }

    /* Saturate: '<S25>/Saturation' */
    boost_and_two_level__1_sm_controller_B.Saturation_n[0] = y_1;

    /* Saturate: '<S25>/Saturation' */
    u0_2 = boost_and_two_level__1_sm_controller_B.FormatingGains_h[1];
    u1_2 = boost_and_two_level__1_sm_controller_P.Saturation_LowerSat[1];
    u2_2 = boost_and_two_level__1_sm_controller_P.Saturation_UpperSat[1];
    if (u0_2 > u2_2) {
      y_2 = u2_2;
    } else if (u0_2 < u1_2) {
      y_2 = u1_2;
    } else {
      y_2 = u0_2;
    }

    /* Saturate: '<S25>/Saturation' */
    boost_and_two_level__1_sm_controller_B.Saturation_n[1] = y_2;

    /* Saturate: '<S25>/Saturation' */
    u0_3 = boost_and_two_level__1_sm_controller_B.FormatingGains_h[2];
    u1_3 = boost_and_two_level__1_sm_controller_P.Saturation_LowerSat[2];
    u2_3 = boost_and_two_level__1_sm_controller_P.Saturation_UpperSat[2];
    if (u0_3 > u2_3) {
      y_3 = u2_3;
    } else if (u0_3 < u1_3) {
      y_3 = u1_3;
    } else {
      y_3 = u0_3;
    }

    /* Saturate: '<S25>/Saturation' */
    boost_and_two_level__1_sm_controller_B.Saturation_n[2] = y_3;

    /* Saturate: '<S25>/Saturation' */
    u0_4 = boost_and_two_level__1_sm_controller_B.FormatingGains_h[3];
    u1_4 = boost_and_two_level__1_sm_controller_P.Saturation_LowerSat[3];
    u2_4 = boost_and_two_level__1_sm_controller_P.Saturation_UpperSat[3];
    if (u0_4 > u2_4) {
      y_4 = u2_4;
    } else if (u0_4 < u1_4) {
      y_4 = u1_4;
    } else {
      y_4 = u0_4;
    }

    /* Saturate: '<S25>/Saturation' */
    boost_and_two_level__1_sm_controller_B.Saturation_n[3] = y_4;

    /* S-Function (sfun_DBL2SFP): '<S28>/Convert double to  Single floating-point (FPGA)' */

    /* Level2 S-Function Block: '<S28>/Convert double to  Single floating-point (FPGA)' (sfun_DBL2SFP) */
    {
      SimStruct *rts = boost_and_two_level__1_sm_controller_M->childSfunctions[0];
      sfcnOutputs(rts,0);
    }

    /* S-Function (sfun_DBL2SFP): '<S29>/Convert double to  Single floating-point (FPGA)' */

    /* Level2 S-Function Block: '<S29>/Convert double to  Single floating-point (FPGA)' (sfun_DBL2SFP) */
    {
      SimStruct *rts = boost_and_two_level__1_sm_controller_M->childSfunctions[1];
      sfcnOutputs(rts,0);
    }

    /* S-Function (sfun_DBL2SFP): '<S30>/Convert double to  Single floating-point (FPGA)' */

    /* Level2 S-Function Block: '<S30>/Convert double to  Single floating-point (FPGA)' (sfun_DBL2SFP) */
    {
      SimStruct *rts = boost_and_two_level__1_sm_controller_M->childSfunctions[2];
      sfcnOutputs(rts,0);
    }

    /* S-Function (sfun_DBL2SFP): '<S31>/Convert double to  Single floating-point (FPGA)' */

    /* Level2 S-Function Block: '<S31>/Convert double to  Single floating-point (FPGA)' (sfun_DBL2SFP) */
    {
      SimStruct *rts = boost_and_two_level__1_sm_controller_M->childSfunctions[3];
      sfcnOutputs(rts,0);
    }

    /* SignalConversion generated from: '<S26>/DataIn Send' */
    boost_and_two_level__1_sm_controller_B.TmpSignalConversionAtDataInSend[0] =
      boost_and_two_level__1_sm_controller_B.ConvertdoubletoSinglefloatingpo;
    boost_and_two_level__1_sm_controller_B.TmpSignalConversionAtDataInSend[1] =
      boost_and_two_level__1_sm_controller_B.ConvertdoubletoSinglefloating_e;
    boost_and_two_level__1_sm_controller_B.TmpSignalConversionAtDataInSend[2] =
      boost_and_two_level__1_sm_controller_B.ConvertdoubletoSinglefloating_n;
    boost_and_two_level__1_sm_controller_B.TmpSignalConversionAtDataInSend[3] =
      boost_and_two_level__1_sm_controller_B.ConvertdoubletoSinglefloating_i;

    /* S-Function (sfun_fct_op7160ex1_send): '<S26>/DataIn Send' */

    /* Level2 S-Function Block: '<S26>/DataIn Send' (sfun_fct_op7160ex1_send) */
    {
      SimStruct *rts = boost_and_two_level__1_sm_controller_M->childSfunctions[4];
      sfcnOutputs(rts,0);
    }

    /* Selector: '<S25>/Selector' incorporates:
     *  Constant: '<S25>/Constant'
     */
    boost_and_two_level__1_sm_controller_B.Selector =
      boost_and_two_level__1_sm_controller_P.Constant_Value;

    /* DataTypeConversion: '<S25>/Data Type Conversion' */
    boost_and_two_level__1_sm_controller_B.DataTypeConversion_c =
      boost_and_two_level__1_sm_controller_B.Selector;
  }

  /* End of Constant: '<S19>/enable dataIn' */
  /* End of Outputs for SubSystem: '<S19>/driver' */

  /* SignalConversion generated from: '<S49>/shift' incorporates:
   *  Constant: '<S2>/g1'
   */
  boost_and_two_level__1_sm_controller_B.TmpSignalConversionAtshiftInpor[0] =
    boost_and_two_level__1_sm_controller_P.g1_Value;
  boost_and_two_level__1_sm_controller_B.TmpSignalConversionAtshiftInpor[1] =
    boost_and_two_level__1_sm_controller_B.SFunction_g[2];
  for (i_0 = 0; i_0 < 6; i_0 = i_0 + 1) {
    boost_and_two_level__1_sm_controller_B.TmpSignalConversionAtshiftInpor[i_0 +
      2] = 0.0;
  }

  /* End of SignalConversion generated from: '<S49>/shift' */

  /* Gain: '<S49>/shift' */
  tmp_0 = 0U;
  for (i_3 = 0; i_3 < 8; i_3 = i_3 + 1) {
    tmp_6 = floor(boost_and_two_level__1_sm_controller_P.shift_Gain[i_3] *
                  boost_and_two_level__1_sm_controller_B.TmpSignalConversionAtshiftInpor
                  [i_3]);
    if (rtIsNaN(tmp_6) || rtIsInf(tmp_6)) {
      tmp_5 = 0.0;
    } else {
      tmp_5 = fmod(tmp_6, 4.294967296E+9);
    }

    tmp_0 = tmp_0 + (tmp_5 < 0.0 ? (uint32_T)-(int32_T)(uint32_T)-tmp_5 :
                     (uint32_T)tmp_5);
  }

  tmp = tmp_0;

  /* Gain: '<S49>/shift' */
  boost_and_two_level__1_sm_controller_B.shift = tmp;

  /* Sum: '<S49>/Sum' incorporates:
   *  Constant: '<S49>/lastdata'
   *  Constant: '<S49>/toogleload'
   */
  boost_and_two_level__1_sm_controller_B.Sum_i =
    (boost_and_two_level__1_sm_controller_B.shift +
     boost_and_two_level__1_sm_controller_P.toogleload_Value) +
    boost_and_two_level__1_sm_controller_P.lastdata_Value;

  /* S-Function (sfun_fct_op7160ex1_send): '<S49>/datain' */

  /* Level2 S-Function Block: '<S49>/datain' (sfun_fct_op7160ex1_send) */
  {
    SimStruct *rts = boost_and_two_level__1_sm_controller_M->childSfunctions[19];
    sfcnOutputs(rts,0);
  }

  /* S-Function (fcgen): '<S23>/Function-Call Generator' incorporates:
   *  SubSystem: '<S23>/writeStatus'
   */
  /* DataTypeConversion: '<S51>/Cast' */
  tmp_2 = floor(boost_and_two_level__1_sm_controller_B.ParameterSetToIndexMap);
  if (rtIsNaN(tmp_2) || rtIsInf(tmp_2)) {
    tmp_1 = 0.0;
  } else {
    tmp_1 = fmod(tmp_2, 4.294967296E+9);
  }

  /* DataTypeConversion: '<S51>/Cast' */
  boost_and_two_level__1_sm_controller_B.Cast = tmp_1 < 0.0 ? (uint32_T)
    -(int32_T)(uint32_T)-tmp_1 : (uint32_T)tmp_1;

  /* ArithShift: '<S51>/Shift Arithmetic' incorporates:
   *  DataTypeConversion: '<S51>/Cast'
   */
  boost_and_two_level__1_sm_controller_B.shiftedScenarioIndex =
    boost_and_two_level__1_sm_controller_B.Cast << 2;

  /* RelationalOperator: '<S55>/Compare' incorporates:
   *  Constant: '<S55>/Constant'
   */
  boost_and_two_level__1_sm_controller_B.Compare = (0.0 <
    boost_and_two_level__1_sm_controller_P.CompareToConstant_const);

  /* DataStoreRead: '<S53>/Data Store Read' */
  boost_and_two_level__1_sm_controller_B.DataStoreRead =
    boost_and_two_level__1_sm_controller_DW.isInitialResetDone;

  /* Logic: '<S53>/AND' */
  boost_and_two_level__1_sm_controller_B.notReset =
    (boost_and_two_level__1_sm_controller_B.Compare &&
     (boost_and_two_level__1_sm_controller_B.DataStoreRead != 0));

  /* Switch: '<S51>/Switch' */
  if (boost_and_two_level__1_sm_controller_B.notReset) {
    /* Switch: '<S51>/Switch' */
    boost_and_two_level__1_sm_controller_B.status =
      boost_and_two_level__1_sm_controller_B.shiftedScenarioIndex;
  } else {
    /* S-Function (sfix_bitop): '<S51>/forceResetSolverBit' */
    boost_and_two_level__1_sm_controller_B.forceResetSolverBit =
      boost_and_two_level__1_sm_controller_B.shiftedScenarioIndex |
      boost_and_two_level__1_sm_controller_P.forceResetSolverBit_BitMask;

    /* Switch: '<S51>/Switch' */
    boost_and_two_level__1_sm_controller_B.status =
      boost_and_two_level__1_sm_controller_B.forceResetSolverBit;
  }

  /* End of Switch: '<S51>/Switch' */

  /* UnitDelay: '<S54>/Delay Input1' */
  boost_and_two_level__1_sm_controller_B.Uk1 =
    boost_and_two_level__1_sm_controller_DW.DelayInput1_DSTATE;

  /* RelationalOperator: '<S54>/FixPt Relational Operator' */
  boost_and_two_level__1_sm_controller_B.FixPtRelationalOperator =
    (boost_and_two_level__1_sm_controller_B.status !=
     boost_and_two_level__1_sm_controller_B.Uk1);

  /* Logic: '<S52>/Logical Operator' */
  boost_and_two_level__1_sm_controller_B.LogicalOperator =
    boost_and_two_level__1_sm_controller_B.FixPtRelationalOperator;

  /* DataTypeConversion: '<S52>/Data Type Conversion' */
  boost_and_two_level__1_sm_controller_B.DataTypeConversion_i = (real_T)
    boost_and_two_level__1_sm_controller_B.LogicalOperator;

  /* S-Function (sfun_fct_op7160ex1_load_in): '<S52>/LoadIn' */

  /* Level2 S-Function Block: '<S52>/LoadIn' (sfun_fct_op7160ex1_load_in) */
  {
    SimStruct *rts = boost_and_two_level__1_sm_controller_M->childSfunctions[5];
    sfcnOutputs(rts,0);
  }

  /* Update for UnitDelay: '<S54>/Delay Input1' */
  boost_and_two_level__1_sm_controller_DW.DelayInput1_DSTATE =
    boost_and_two_level__1_sm_controller_B.status;

  /* S-Function (fcgen): '<S23>/Function-Call Generator' incorporates:
   *  SubSystem: '<S23>/setInitialResetDone'
   */
  /* DataStoreWrite: '<S50>/Data Store Write' incorporates:
   *  Constant: '<S50>/Constant'
   */
  boost_and_two_level__1_sm_controller_DW.isInitialResetDone =
    boost_and_two_level__1_sm_controller_P.Constant_Value_ck;

  /* End of Outputs for S-Function (fcgen): '<S23>/Function-Call Generator' */

  /* Constant: '<S22>/Constant2' */
  boost_and_two_level__1_sm_controller_B.Constant2 =
    boost_and_two_level__1_sm_controller_P.Constant2_Value;
  for (i_1 = 0; i_1 < 10; i_1 = i_1 + 1) {
    /* Constant: '<S22>/Constant5' */
    boost_and_two_level__1_sm_controller_B.Constant5[i_1] =
      boost_and_two_level__1_sm_controller_P.Constant5_Value[i_1];
  }

  /* S-Function (sfun_efs_solver_cfg): '<S22>/LoadIn' */

  /* Level2 S-Function Block: '<S22>/LoadIn' (sfun_efs_solver_cfg) */
  {
    SimStruct *rts = boost_and_two_level__1_sm_controller_M->childSfunctions[20];
    sfcnOutputs(rts,0);
  }

  /* LookupNDDirect: '<S17>/IndexToParameterSet'
   *
   * About '<S17>/IndexToParameterSet':
   *  1-dimensional Direct Look-Up returning a Scalar,
   *
   *     Remove protection against out-of-range input in generated code: 'off'
   */
  boost_and_two_level__1_sm_controller_B.parameter_set_output_id =
    boost_and_two_level__1_sm_controller_P.IndexToParameterSet_table;

  /* S-Function (sfun_ctrl_op7160ex1): '<S2>/OpCtrl' */

  /* Level2 S-Function Block: '<S2>/OpCtrl' (sfun_ctrl_op7160ex1) */
  {
    SimStruct *rts = boost_and_two_level__1_sm_controller_M->childSfunctions[21];
    sfcnOutputs(rts,0);
  }

  /* Constant: '<S4>/Constant' */
  boost_and_two_level__1_sm_controller_B.Constant =
    boost_and_two_level__1_sm_controller_P.Constant_Value_g;

  /* Step: '<S4>/Step' */
  currentTime = boost_and_two_level__1_sm_controller_M->Timing.t[0];
  if (currentTime < boost_and_two_level__1_sm_controller_P.Step_Time) {
    /* Step: '<S4>/Step' */
    boost_and_two_level__1_sm_controller_B.Step =
      boost_and_two_level__1_sm_controller_P.Step_Y0;
  } else {
    /* Step: '<S4>/Step' */
    boost_and_two_level__1_sm_controller_B.Step =
      boost_and_two_level__1_sm_controller_P.Step_YFinal;
  }

  /* End of Step: '<S4>/Step' */

  /* S-Function (optrigger): '<S4>/OpTrigger' */

  /* Level2 S-Function Block: '<S4>/OpTrigger' (optrigger) */
  {
    SimStruct *rts = boost_and_two_level__1_sm_controller_M->childSfunctions[22];
    sfcnOutputs(rts,0);
  }
}

/* Model update function */
static void boost_and_two_level__1_sm_controller_update(void)
{
  /* Update for Memory: '<S1>/S-Function' */
  boost_and_two_level__1_sm_controller_DW.SFunction_PreviousInput =
    boost_and_two_level__1_sm_controller_B.Sum;

  /* Update for Memory: '<S11>/Memory' */
  boost_and_two_level__1_sm_controller_DW.Memory_PreviousInput =
    boost_and_two_level__1_sm_controller_B.Switch;

  /* Update for Memory: '<S16>/Memory' */
  boost_and_two_level__1_sm_controller_DW.Memory_PreviousInput_n =
    boost_and_two_level__1_sm_controller_B.UserParameterSetFilter;

  /* Update absolute time for base rate */
  /* The "clockTick0" counts the number of times the code of this task has
   * been executed. The absolute time is the multiplication of "clockTick0"
   * and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
   * overflow during the application lifespan selected.
   * Timer of this task consists of two 32 bit unsigned integers.
   * The two integers represent the low bits Timing.clockTick0 and the high bits
   * Timing.clockTickH0. When the low bit overflows to 0, the high bits increment.
   */
  if (!(++boost_and_two_level__1_sm_controller_M->Timing.clockTick0)) {
    ++boost_and_two_level__1_sm_controller_M->Timing.clockTickH0;
  }

  boost_and_two_level__1_sm_controller_M->Timing.t[0] =
    boost_and_two_level__1_sm_controller_M->Timing.clockTick0 *
    boost_and_two_level__1_sm_controller_M->Timing.stepSize0 +
    boost_and_two_level__1_sm_controller_M->Timing.clockTickH0 *
    boost_and_two_level__1_sm_controller_M->Timing.stepSize0 * 4294967296.0;
}

/* Model initialize function */
static void boost_and_two_level__1_sm_controller_initialize(void)
{
  {
    int32_T i;

    /* Start for DataStoreMemory: '<S23>/Data Store Memory' */
    boost_and_two_level__1_sm_controller_DW.isInitialResetDone =
      boost_and_two_level__1_sm_controller_P.DataStoreMemory_InitialValue;

    /* Start for Constant: '<S22>/Constant2' */
    boost_and_two_level__1_sm_controller_B.Constant2 =
      boost_and_two_level__1_sm_controller_P.Constant2_Value;
    for (i = 0; i < 10; i = i + 1) {
      /* Start for Constant: '<S22>/Constant5' */
      boost_and_two_level__1_sm_controller_B.Constant5[i] =
        boost_and_two_level__1_sm_controller_P.Constant5_Value[i];
    }

    /* Start for Constant: '<S4>/Constant' */
    boost_and_two_level__1_sm_controller_B.Constant =
      boost_and_two_level__1_sm_controller_P.Constant_Value_g;
  }

  /* user code (Initialize function Body) */

  /* System '<Root>' */

  /* Opal-RT Technologies */
  opalSizeDwork = sizeof(rtDWork);
  if (Opal_rtmGetNumBlockIO(pRtModel) != 0)
    opalSizeBlockIO = sizeof(rtB);
  else
    opalSizeBlockIO = 0;
  if (Opal_rtmGetNumBlockParams(pRtModel) != 0)
    opalSizeRTP = sizeof(rtP);
  else
    opalSizeRTP = 0;

  /* InitializeConditions for Memory: '<S1>/S-Function' */
  boost_and_two_level__1_sm_controller_DW.SFunction_PreviousInput =
    boost_and_two_level__1_sm_controller_P.SFunction_InitialCondition;

  /* InitializeConditions for S-Function (sfun_fct_op7160ex1_recv): '<S33>/DataOut Recv' */
  /* Level2 S-Function Block: '<S33>/DataOut Recv' (sfun_fct_op7160ex1_recv) */
  {
    SimStruct *rts = boost_and_two_level__1_sm_controller_M->childSfunctions[6];
    sfcnInitializeConditions(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* InitializeConditions for S-Function (OP_SEND): '<S57>/S-Function' */
  /* Level2 S-Function Block: '<S57>/S-Function' (OP_SEND) */
  {
    SimStruct *rts = boost_and_two_level__1_sm_controller_M->childSfunctions[16];
    sfcnInitializeConditions(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* InitializeConditions for S-Function (RECV_Param): '<S13>/S-Function' */
  /* Level2 S-Function Block: '<S13>/S-Function' (RECV_Param) */
  {
    SimStruct *rts = boost_and_two_level__1_sm_controller_M->childSfunctions[17];
    sfcnInitializeConditions(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* InitializeConditions for Memory: '<S11>/Memory' */
  boost_and_two_level__1_sm_controller_DW.Memory_PreviousInput =
    boost_and_two_level__1_sm_controller_P.Memory_InitialCondition;

  /* InitializeConditions for S-Function (sfun_op7160ex1_pwm_out): '<S7>/PWM Out' */
  /* Level2 S-Function Block: '<S7>/PWM Out' (sfun_op7160ex1_pwm_out) */
  {
    SimStruct *rts = boost_and_two_level__1_sm_controller_M->childSfunctions[18];
    sfcnInitializeConditions(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* InitializeConditions for Memory: '<S16>/Memory' */
  boost_and_two_level__1_sm_controller_DW.Memory_PreviousInput_n =
    boost_and_two_level__1_sm_controller_P.Memory_InitialCondition_j;

  /* InitializeConditions for S-Function (sfun_fct_op7160ex1_send): '<S49>/datain' */
  /* Level2 S-Function Block: '<S49>/datain' (sfun_fct_op7160ex1_send) */
  {
    SimStruct *rts = boost_and_two_level__1_sm_controller_M->childSfunctions[19];
    sfcnInitializeConditions(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* InitializeConditions for S-Function (sfun_efs_solver_cfg): '<S22>/LoadIn' */
  /* Level2 S-Function Block: '<S22>/LoadIn' (sfun_efs_solver_cfg) */
  {
    SimStruct *rts = boost_and_two_level__1_sm_controller_M->childSfunctions[20];
    sfcnInitializeConditions(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* InitializeConditions for S-Function (sfun_ctrl_op7160ex1): '<S2>/OpCtrl' */
  /* Level2 S-Function Block: '<S2>/OpCtrl' (sfun_ctrl_op7160ex1) */
  {
    SimStruct *rts = boost_and_two_level__1_sm_controller_M->childSfunctions[21];
    sfcnInitializeConditions(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* InitializeConditions for S-Function (optrigger): '<S4>/OpTrigger' */
  /* Level2 S-Function Block: '<S4>/OpTrigger' (optrigger) */
  {
    SimStruct *rts = boost_and_two_level__1_sm_controller_M->childSfunctions[22];
    sfcnInitializeConditions(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* SystemInitialize for Enabled SubSystem: '<S19>/driver' */

  /* InitializeConditions for S-Function (sfun_fct_op7160ex1_send): '<S26>/DataIn Send' */
  /* Level2 S-Function Block: '<S26>/DataIn Send' (sfun_fct_op7160ex1_send) */
  {
    SimStruct *rts = boost_and_two_level__1_sm_controller_M->childSfunctions[4];
    sfcnInitializeConditions(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* End of SystemInitialize for SubSystem: '<S19>/driver' */

  /* SystemInitialize for S-Function (fcgen): '<S23>/Function-Call Generator' incorporates:
   *  SubSystem: '<S23>/writeStatus'
   */
  /* InitializeConditions for UnitDelay: '<S54>/Delay Input1' */
  boost_and_two_level__1_sm_controller_DW.DelayInput1_DSTATE =
    boost_and_two_level__1_sm_controller_P.DetectChange_vinit;

  /* InitializeConditions for S-Function (sfun_fct_op7160ex1_load_in): '<S52>/LoadIn' */
  /* Level2 S-Function Block: '<S52>/LoadIn' (sfun_fct_op7160ex1_load_in) */
  {
    SimStruct *rts = boost_and_two_level__1_sm_controller_M->childSfunctions[5];
    sfcnInitializeConditions(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* End of SystemInitialize for S-Function (fcgen): '<S23>/Function-Call Generator' */
}

/* Model terminate function */
static void boost_and_two_level__1_sm_controller_terminate(void)
{
  /* Terminate for S-Function (sfun_fct_op7160ex1_recv): '<S33>/DataOut Recv' */
  /* Level2 S-Function Block: '<S33>/DataOut Recv' (sfun_fct_op7160ex1_recv) */
  {
    SimStruct *rts = boost_and_two_level__1_sm_controller_M->childSfunctions[6];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (sfun_SFP2DBL): '<S37>/Convert  Single floating-point (FPGA)  to double' */
  /* Level2 S-Function Block: '<S37>/Convert  Single floating-point (FPGA)  to double' (sfun_SFP2DBL) */
  {
    SimStruct *rts = boost_and_two_level__1_sm_controller_M->childSfunctions[7];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (sfun_SFP2DBL): '<S38>/Convert  Single floating-point (FPGA)  to double' */
  /* Level2 S-Function Block: '<S38>/Convert  Single floating-point (FPGA)  to double' (sfun_SFP2DBL) */
  {
    SimStruct *rts = boost_and_two_level__1_sm_controller_M->childSfunctions[8];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (sfun_SFP2DBL): '<S39>/Convert  Single floating-point (FPGA)  to double' */
  /* Level2 S-Function Block: '<S39>/Convert  Single floating-point (FPGA)  to double' (sfun_SFP2DBL) */
  {
    SimStruct *rts = boost_and_two_level__1_sm_controller_M->childSfunctions[9];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (sfun_SFP2DBL): '<S40>/Convert  Single floating-point (FPGA)  to double' */
  /* Level2 S-Function Block: '<S40>/Convert  Single floating-point (FPGA)  to double' (sfun_SFP2DBL) */
  {
    SimStruct *rts = boost_and_two_level__1_sm_controller_M->childSfunctions[10];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (sfun_SFP2DBL): '<S41>/Convert  Single floating-point (FPGA)  to double' */
  /* Level2 S-Function Block: '<S41>/Convert  Single floating-point (FPGA)  to double' (sfun_SFP2DBL) */
  {
    SimStruct *rts = boost_and_two_level__1_sm_controller_M->childSfunctions[11];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (sfun_SFP2DBL): '<S42>/Convert  Single floating-point (FPGA)  to double' */
  /* Level2 S-Function Block: '<S42>/Convert  Single floating-point (FPGA)  to double' (sfun_SFP2DBL) */
  {
    SimStruct *rts = boost_and_two_level__1_sm_controller_M->childSfunctions[12];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (sfun_SFP2DBL): '<S43>/Convert  Single floating-point (FPGA)  to double' */
  /* Level2 S-Function Block: '<S43>/Convert  Single floating-point (FPGA)  to double' (sfun_SFP2DBL) */
  {
    SimStruct *rts = boost_and_two_level__1_sm_controller_M->childSfunctions[13];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (sfun_SFP2DBL): '<S44>/Convert  Single floating-point (FPGA)  to double' */
  /* Level2 S-Function Block: '<S44>/Convert  Single floating-point (FPGA)  to double' (sfun_SFP2DBL) */
  {
    SimStruct *rts = boost_and_two_level__1_sm_controller_M->childSfunctions[14];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (sfun_SFP2DBL): '<S45>/Convert  Single floating-point (FPGA)  to double' */
  /* Level2 S-Function Block: '<S45>/Convert  Single floating-point (FPGA)  to double' (sfun_SFP2DBL) */
  {
    SimStruct *rts = boost_and_two_level__1_sm_controller_M->childSfunctions[15];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (OP_SEND): '<S57>/S-Function' */
  /* Level2 S-Function Block: '<S57>/S-Function' (OP_SEND) */
  {
    SimStruct *rts = boost_and_two_level__1_sm_controller_M->childSfunctions[16];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (RECV_Param): '<S13>/S-Function' */
  /* Level2 S-Function Block: '<S13>/S-Function' (RECV_Param) */
  {
    SimStruct *rts = boost_and_two_level__1_sm_controller_M->childSfunctions[17];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (sfun_op7160ex1_pwm_out): '<S7>/PWM Out' */
  /* Level2 S-Function Block: '<S7>/PWM Out' (sfun_op7160ex1_pwm_out) */
  {
    SimStruct *rts = boost_and_two_level__1_sm_controller_M->childSfunctions[18];
    sfcnTerminate(rts);
  }

  /* Terminate for Enabled SubSystem: '<S19>/driver' */

  /* Terminate for S-Function (sfun_DBL2SFP): '<S28>/Convert double to  Single floating-point (FPGA)' */
  /* Level2 S-Function Block: '<S28>/Convert double to  Single floating-point (FPGA)' (sfun_DBL2SFP) */
  {
    SimStruct *rts = boost_and_two_level__1_sm_controller_M->childSfunctions[0];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (sfun_DBL2SFP): '<S29>/Convert double to  Single floating-point (FPGA)' */
  /* Level2 S-Function Block: '<S29>/Convert double to  Single floating-point (FPGA)' (sfun_DBL2SFP) */
  {
    SimStruct *rts = boost_and_two_level__1_sm_controller_M->childSfunctions[1];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (sfun_DBL2SFP): '<S30>/Convert double to  Single floating-point (FPGA)' */
  /* Level2 S-Function Block: '<S30>/Convert double to  Single floating-point (FPGA)' (sfun_DBL2SFP) */
  {
    SimStruct *rts = boost_and_two_level__1_sm_controller_M->childSfunctions[2];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (sfun_DBL2SFP): '<S31>/Convert double to  Single floating-point (FPGA)' */
  /* Level2 S-Function Block: '<S31>/Convert double to  Single floating-point (FPGA)' (sfun_DBL2SFP) */
  {
    SimStruct *rts = boost_and_two_level__1_sm_controller_M->childSfunctions[3];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (sfun_fct_op7160ex1_send): '<S26>/DataIn Send' */
  /* Level2 S-Function Block: '<S26>/DataIn Send' (sfun_fct_op7160ex1_send) */
  {
    SimStruct *rts = boost_and_two_level__1_sm_controller_M->childSfunctions[4];
    sfcnTerminate(rts);
  }

  /* End of Terminate for SubSystem: '<S19>/driver' */

  /* Terminate for S-Function (sfun_fct_op7160ex1_send): '<S49>/datain' */
  /* Level2 S-Function Block: '<S49>/datain' (sfun_fct_op7160ex1_send) */
  {
    SimStruct *rts = boost_and_two_level__1_sm_controller_M->childSfunctions[19];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (fcgen): '<S23>/Function-Call Generator' incorporates:
   *  SubSystem: '<S23>/writeStatus'
   */

  /* Terminate for S-Function (sfun_fct_op7160ex1_load_in): '<S52>/LoadIn' */
  /* Level2 S-Function Block: '<S52>/LoadIn' (sfun_fct_op7160ex1_load_in) */
  {
    SimStruct *rts = boost_and_two_level__1_sm_controller_M->childSfunctions[5];
    sfcnTerminate(rts);
  }

  /* End of Terminate for S-Function (fcgen): '<S23>/Function-Call Generator' */

  /* Terminate for S-Function (sfun_efs_solver_cfg): '<S22>/LoadIn' */
  /* Level2 S-Function Block: '<S22>/LoadIn' (sfun_efs_solver_cfg) */
  {
    SimStruct *rts = boost_and_two_level__1_sm_controller_M->childSfunctions[20];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (sfun_ctrl_op7160ex1): '<S2>/OpCtrl' */
  /* Level2 S-Function Block: '<S2>/OpCtrl' (sfun_ctrl_op7160ex1) */
  {
    SimStruct *rts = boost_and_two_level__1_sm_controller_M->childSfunctions[21];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (optrigger): '<S4>/OpTrigger' */
  /* Level2 S-Function Block: '<S4>/OpTrigger' (optrigger) */
  {
    SimStruct *rts = boost_and_two_level__1_sm_controller_M->childSfunctions[22];
    sfcnTerminate(rts);
  }
}

/*========================================================================*
 * Start of Classic call interface                                        *
 *========================================================================*/
void MdlOutputs(int_T tid)
{
  boost_and_two_level__1_sm_controller_output();
  UNUSED_PARAMETER(tid);
}

void MdlUpdate(int_T tid)
{
  boost_and_two_level__1_sm_controller_update();
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
  boost_and_two_level__1_sm_controller_initialize();
}

void MdlTerminate(void)
{
  boost_and_two_level__1_sm_controller_terminate();
}

/* Registration function */
RT_MODEL_boost_and_two_level__1_sm_controller_T
  *boost_and_two_level__1_sm_controller(void)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* non-finite (run-time) assignments */
  boost_and_two_level__1_sm_controller_P.Saturation_UpperSat[0] = rtInf;
  boost_and_two_level__1_sm_controller_P.Saturation_UpperSat[1] = rtInf;
  boost_and_two_level__1_sm_controller_P.Saturation_UpperSat[2] = rtInf;
  boost_and_two_level__1_sm_controller_P.Saturation_UpperSat[3] = rtInf;
  boost_and_two_level__1_sm_controller_P.Saturation_LowerSat[0] = rtMinusInf;
  boost_and_two_level__1_sm_controller_P.Saturation_LowerSat[1] = rtMinusInf;
  boost_and_two_level__1_sm_controller_P.Saturation_LowerSat[2] = rtMinusInf;
  boost_and_two_level__1_sm_controller_P.Saturation_LowerSat[3] = rtMinusInf;

  /* initialize real-time model */
  (void) memset((void *)boost_and_two_level__1_sm_controller_M, 0,
                sizeof(RT_MODEL_boost_and_two_level__1_sm_controller_T));
  rtsiSetSolverName(&boost_and_two_level__1_sm_controller_M->solverInfo,
                    "FixedStepDiscrete");
  boost_and_two_level__1_sm_controller_M->solverInfoPtr =
    (&boost_and_two_level__1_sm_controller_M->solverInfo);

  /* Initialize timing info */
  {
    int_T *mdlTsMap =
      boost_and_two_level__1_sm_controller_M->Timing.sampleTimeTaskIDArray;
    mdlTsMap[0] = 0;

    /* polyspace +2 MISRA2012:D4.1 [Justified:Low] "boost_and_two_level__1_sm_controller_M points to
       static memory which is guaranteed to be non-NULL" */
    boost_and_two_level__1_sm_controller_M->Timing.sampleTimeTaskIDPtr =
      (&mdlTsMap[0]);
    boost_and_two_level__1_sm_controller_M->Timing.sampleTimes =
      (&boost_and_two_level__1_sm_controller_M->Timing.sampleTimesArray[0]);
    boost_and_two_level__1_sm_controller_M->Timing.offsetTimes =
      (&boost_and_two_level__1_sm_controller_M->Timing.offsetTimesArray[0]);

    /* task periods */
    boost_and_two_level__1_sm_controller_M->Timing.sampleTimes[0] = (2.0E-5);

    /* task offsets */
    boost_and_two_level__1_sm_controller_M->Timing.offsetTimes[0] = (0.0);
  }

  rtmSetTPtr(boost_and_two_level__1_sm_controller_M,
             &boost_and_two_level__1_sm_controller_M->Timing.tArray[0]);

  {
    int_T *mdlSampleHits =
      boost_and_two_level__1_sm_controller_M->Timing.sampleHitArray;
    mdlSampleHits[0] = 1;
    boost_and_two_level__1_sm_controller_M->Timing.sampleHits = (&mdlSampleHits
      [0]);
  }

  rtmSetTFinal(boost_and_two_level__1_sm_controller_M, -1);
  boost_and_two_level__1_sm_controller_M->Timing.stepSize0 = 2.0E-5;

  /* Setup for data logging */
  {
    static RTWLogInfo rt_DataLoggingInfo;
    rt_DataLoggingInfo.loggingInterval = (NULL);
    boost_and_two_level__1_sm_controller_M->rtwLogInfo = &rt_DataLoggingInfo;
  }

  /* Setup for data logging */
  {
    rtliSetLogXSignalInfo(boost_and_two_level__1_sm_controller_M->rtwLogInfo,
                          (NULL));
    rtliSetLogXSignalPtrs(boost_and_two_level__1_sm_controller_M->rtwLogInfo,
                          (NULL));
    rtliSetLogT(boost_and_two_level__1_sm_controller_M->rtwLogInfo, "");
    rtliSetLogX(boost_and_two_level__1_sm_controller_M->rtwLogInfo, "");
    rtliSetLogXFinal(boost_and_two_level__1_sm_controller_M->rtwLogInfo, "");
    rtliSetLogVarNameModifier(boost_and_two_level__1_sm_controller_M->rtwLogInfo,
      "rt_");
    rtliSetLogFormat(boost_and_two_level__1_sm_controller_M->rtwLogInfo, 0);
    rtliSetLogMaxRows(boost_and_two_level__1_sm_controller_M->rtwLogInfo, 1000);
    rtliSetLogDecimation(boost_and_two_level__1_sm_controller_M->rtwLogInfo, 1);
    rtliSetLogY(boost_and_two_level__1_sm_controller_M->rtwLogInfo, "");
    rtliSetLogYSignalInfo(boost_and_two_level__1_sm_controller_M->rtwLogInfo,
                          (NULL));
    rtliSetLogYSignalPtrs(boost_and_two_level__1_sm_controller_M->rtwLogInfo,
                          (NULL));
  }

  boost_and_two_level__1_sm_controller_M->solverInfoPtr =
    (&boost_and_two_level__1_sm_controller_M->solverInfo);
  boost_and_two_level__1_sm_controller_M->Timing.stepSize = (2.0E-5);
  rtsiSetFixedStepSize(&boost_and_two_level__1_sm_controller_M->solverInfo,
                       2.0E-5);
  rtsiSetSolverMode(&boost_and_two_level__1_sm_controller_M->solverInfo,
                    SOLVER_MODE_SINGLETASKING);

  /* block I/O */
  boost_and_two_level__1_sm_controller_M->ModelData.blockIO = ((void *)
    &boost_and_two_level__1_sm_controller_B);
  (void) memset(((void *) &boost_and_two_level__1_sm_controller_B), 0,
                sizeof(B_boost_and_two_level__1_sm_controller_T));

  {
    int32_T i;
    for (i = 0; i < 9; i++) {
      boost_and_two_level__1_sm_controller_B.FormatingGains[i] = 0.0;
    }

    for (i = 0; i < 8; i++) {
      boost_and_two_level__1_sm_controller_B.Divide[i] = 0.0;
    }

    for (i = 0; i < 9; i++) {
      boost_and_two_level__1_sm_controller_B.SFunction_g[i] = 0.0;
    }

    for (i = 0; i < 8; i++) {
      boost_and_two_level__1_sm_controller_B.TmpSignalConversionAtshiftInpor[i] =
        0.0;
    }

    for (i = 0; i < 8; i++) {
      boost_and_two_level__1_sm_controller_B.OpCtrl_o2[i] = 0.0;
    }

    boost_and_two_level__1_sm_controller_B.SFunction = 0.0;
    boost_and_two_level__1_sm_controller_B.Sum = 0.0;
    boost_and_two_level__1_sm_controller_B.DataOutRecv_o2 = 0.0;
    boost_and_two_level__1_sm_controller_B.ConvertSinglefloatingpointFPGAt = 0.0;
    boost_and_two_level__1_sm_controller_B.ConvertSinglefloatingpointFPG_i = 0.0;
    boost_and_two_level__1_sm_controller_B.ConvertSinglefloatingpointFPG_g = 0.0;
    boost_and_two_level__1_sm_controller_B.ConvertSinglefloatingpointFP_ik = 0.0;
    boost_and_two_level__1_sm_controller_B.ConvertSinglefloatingpointFP_ib = 0.0;
    boost_and_two_level__1_sm_controller_B.ConvertSinglefloatingpointFPG_b = 0.0;
    boost_and_two_level__1_sm_controller_B.ConvertSinglefloatingpointFP_i0 = 0.0;
    boost_and_two_level__1_sm_controller_B.ConvertSinglefloatingpointFPG_c = 0.0;
    boost_and_two_level__1_sm_controller_B.ConvertSinglefloatingpointFPG_l = 0.0;
    boost_and_two_level__1_sm_controller_B.Saturation = 0.0;
    boost_and_two_level__1_sm_controller_B.Adder_Gain = 0.0;
    boost_and_two_level__1_sm_controller_B.Memory = 0.0;
    boost_and_two_level__1_sm_controller_B.Adder = 0.0;
    boost_and_two_level__1_sm_controller_B.Adder_Pred = 0.0;
    boost_and_two_level__1_sm_controller_B.Switch = 0.0;
    boost_and_two_level__1_sm_controller_B.Sum_l = 0.0;
    boost_and_two_level__1_sm_controller_B.ThreephaseSineWave[0] = 0.0;
    boost_and_two_level__1_sm_controller_B.ThreephaseSineWave[1] = 0.0;
    boost_and_two_level__1_sm_controller_B.ThreephaseSineWave[2] = 0.0;
    boost_and_two_level__1_sm_controller_B.Product[0] = 0.0;
    boost_and_two_level__1_sm_controller_B.Product[1] = 0.0;
    boost_and_two_level__1_sm_controller_B.Product[2] = 0.0;
    boost_and_two_level__1_sm_controller_B.Gain[0] = 0.0;
    boost_and_two_level__1_sm_controller_B.Gain[1] = 0.0;
    boost_and_two_level__1_sm_controller_B.Gain[2] = 0.0;
    boost_and_two_level__1_sm_controller_B.Sum_k[0] = 0.0;
    boost_and_two_level__1_sm_controller_B.Sum_k[1] = 0.0;
    boost_and_two_level__1_sm_controller_B.Sum_k[2] = 0.0;
    boost_and_two_level__1_sm_controller_B.DataTypeConversion[0] = 0.0;
    boost_and_two_level__1_sm_controller_B.DataTypeConversion[1] = 0.0;
    boost_and_two_level__1_sm_controller_B.DataTypeConversion[2] = 0.0;
    boost_and_two_level__1_sm_controller_B.Gain_l[0] = 0.0;
    boost_and_two_level__1_sm_controller_B.Gain_l[1] = 0.0;
    boost_and_two_level__1_sm_controller_B.Gain_l[2] = 0.0;
    boost_and_two_level__1_sm_controller_B.PWMOut = 0.0;
    boost_and_two_level__1_sm_controller_B.ThreephaseSineWave_i[0] = 0.0;
    boost_and_two_level__1_sm_controller_B.ThreephaseSineWave_i[1] = 0.0;
    boost_and_two_level__1_sm_controller_B.ThreephaseSineWave_i[2] = 0.0;
    boost_and_two_level__1_sm_controller_B.Amplitude_Gain[0] = 0.0;
    boost_and_two_level__1_sm_controller_B.Amplitude_Gain[1] = 0.0;
    boost_and_two_level__1_sm_controller_B.Amplitude_Gain[2] = 0.0;
    boost_and_two_level__1_sm_controller_B.DataTypeConversion1 = 0.0;
    boost_and_two_level__1_sm_controller_B.Memory_d = 0.0;
    boost_and_two_level__1_sm_controller_B.UserParameterSetFilter = 0.0;
    boost_and_two_level__1_sm_controller_B.ParameterSetToIndexMap = 0.0;
    boost_and_two_level__1_sm_controller_B.datain = 0.0;
    boost_and_two_level__1_sm_controller_B.Constant2 = 0.0;
    boost_and_two_level__1_sm_controller_B.LoadIn = 0.0;
    boost_and_two_level__1_sm_controller_B.parameter_set_output_id = 0.0;
    boost_and_two_level__1_sm_controller_B.OpCtrl_o1 = 0.0;
    boost_and_two_level__1_sm_controller_B.Constant = 0.0;
    boost_and_two_level__1_sm_controller_B.Step = 0.0;
    boost_and_two_level__1_sm_controller_B.OpTrigger = 0.0;
    boost_and_two_level__1_sm_controller_B.DataTypeConversion_i = 0.0;
    boost_and_two_level__1_sm_controller_B.LoadIn_g = 0.0;
    boost_and_two_level__1_sm_controller_B.FormatingGains_h[0] = 0.0;
    boost_and_two_level__1_sm_controller_B.FormatingGains_h[1] = 0.0;
    boost_and_two_level__1_sm_controller_B.FormatingGains_h[2] = 0.0;
    boost_and_two_level__1_sm_controller_B.FormatingGains_h[3] = 0.0;
    boost_and_two_level__1_sm_controller_B.Saturation_n[0] = 0.0;
    boost_and_two_level__1_sm_controller_B.Saturation_n[1] = 0.0;
    boost_and_two_level__1_sm_controller_B.Saturation_n[2] = 0.0;
    boost_and_two_level__1_sm_controller_B.Saturation_n[3] = 0.0;
    boost_and_two_level__1_sm_controller_B.DataInSend = 0.0;
    boost_and_two_level__1_sm_controller_B.Selector = 0.0;
    boost_and_two_level__1_sm_controller_B.DataTypeConversion_c = 0.0;
  }

  /* parameters */
  boost_and_two_level__1_sm_controller_M->ModelData.defaultParam = ((real_T *)
    &boost_and_two_level__1_sm_controller_P);

  /* states (dwork) */
  boost_and_two_level__1_sm_controller_M->ModelData.dwork = ((void *)
    &boost_and_two_level__1_sm_controller_DW);
  (void) memset((void *)&boost_and_two_level__1_sm_controller_DW, 0,
                sizeof(DW_boost_and_two_level__1_sm_controller_T));
  boost_and_two_level__1_sm_controller_DW.SFunction_PreviousInput = 0.0;
  boost_and_two_level__1_sm_controller_DW.Memory_PreviousInput = 0.0;
  boost_and_two_level__1_sm_controller_DW.Memory_PreviousInput_n = 0.0;

  /* child S-Function registration */
  {
    RTWSfcnInfo *sfcnInfo =
      &boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.sfcnInfo;
    boost_and_two_level__1_sm_controller_M->sfcnInfo = (sfcnInfo);
    rtssSetErrorStatusPtr(sfcnInfo, (&rtmGetErrorStatus
      (boost_and_two_level__1_sm_controller_M)));
    boost_and_two_level__1_sm_controller_M->Sizes.numSampTimes = (1);
    rtssSetNumRootSampTimesPtr(sfcnInfo,
      &boost_and_two_level__1_sm_controller_M->Sizes.numSampTimes);
    boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.taskTimePtrs[0] =
      &(rtmGetTPtr(boost_and_two_level__1_sm_controller_M)[0]);
    rtssSetTPtrPtr(sfcnInfo,
                   boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.taskTimePtrs);
    rtssSetTStartPtr(sfcnInfo, &rtmGetTStart
                     (boost_and_two_level__1_sm_controller_M));
    rtssSetTFinalPtr(sfcnInfo, &rtmGetTFinal
                     (boost_and_two_level__1_sm_controller_M));
    rtssSetTimeOfLastOutputPtr(sfcnInfo, &rtmGetTimeOfLastOutput
      (boost_and_two_level__1_sm_controller_M));
    rtssSetStepSizePtr(sfcnInfo,
                       &boost_and_two_level__1_sm_controller_M->Timing.stepSize);
    rtssSetStopRequestedPtr(sfcnInfo, &rtmGetStopRequested
      (boost_and_two_level__1_sm_controller_M));
    rtssSetDerivCacheNeedsResetPtr(sfcnInfo,
      &boost_and_two_level__1_sm_controller_M->ModelData.derivCacheNeedsReset);
    rtssSetZCCacheNeedsResetPtr(sfcnInfo,
      &boost_and_two_level__1_sm_controller_M->ModelData.zCCacheNeedsReset);
    rtssSetContTimeOutputInconsistentWithStateAtMajorStepPtr(sfcnInfo,
      &boost_and_two_level__1_sm_controller_M->ModelData.CTOutputIncnstWithState);
    rtssSetSampleHitsPtr(sfcnInfo,
                         &boost_and_two_level__1_sm_controller_M->Timing.sampleHits);
    rtssSetPerTaskSampleHitsPtr(sfcnInfo,
      &boost_and_two_level__1_sm_controller_M->Timing.perTaskSampleHits);
    rtssSetSimModePtr(sfcnInfo, &boost_and_two_level__1_sm_controller_M->simMode);
    rtssSetSolverInfoPtr(sfcnInfo,
                         &boost_and_two_level__1_sm_controller_M->solverInfoPtr);
  }

  boost_and_two_level__1_sm_controller_M->Sizes.numSFcns = (23);

  /* register each child */
  {
    (void) memset((void *)
                  &boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.childSFunctions
                  [0], 0,
                  23*sizeof(SimStruct));
    boost_and_two_level__1_sm_controller_M->childSfunctions =
      (&boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.childSFunctionPtrs
       [0]);

    {
      int_T i;
      for (i = 0; i < 23; i++) {
        boost_and_two_level__1_sm_controller_M->childSfunctions[i] =
          (&boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.childSFunctions
           [i]);
      }
    }

    /* Level2 S-Function Block: boost_and_two_level__1_sm_controller/<S28>/Convert double to  Single floating-point (FPGA) (sfun_DBL2SFP) */
    {
      SimStruct *rts = boost_and_two_level__1_sm_controller_M->childSfunctions[0];

      /* timing info */
      time_T *sfcnPeriod =
        boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.Sfcn0.sfcnPeriod;
      time_T *sfcnOffset =
        boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.Sfcn0.sfcnOffset;
      int_T *sfcnTsMap =
        boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.Sfcn0.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts,
                         &boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.blkInfo2
                         [0]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.inputOutputPortInfo2
        [0]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, boost_and_two_level__1_sm_controller_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.methods2
                           [0]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.methods3
                           [0]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.methods4
                           [0]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.statesInfo2
                         [0]);
        ssSetPeriodicStatesInfo(rts,
          &boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.periodicStatesInfo
          [0]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.Sfcn0.inputPortInfo
          [0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.Sfcn0.inputPortUnits
          [0]);
        ssSetInputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.Sfcn0.inputPortCoSimAttribute
          [0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.Sfcn0.UPtrs0;
          sfcnUPtrs[0] = &boost_and_two_level__1_sm_controller_B.Saturation_n[0];
          ssSetInputPortSignalPtrs(rts, 0, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.Sfcn0.outputPortInfo
          [0]);
        _ssSetNumOutputPorts(rts, 1);
        _ssSetPortInfo2ForOutputUnits(rts,
          &boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.Sfcn0.outputPortUnits
          [0]);
        ssSetOutputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForOutputCoSimAttribute(rts,
          &boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.Sfcn0.outputPortCoSimAttribute
          [0]);
        ssSetOutputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((uint32_T *)
            &boost_and_two_level__1_sm_controller_B.ConvertdoubletoSinglefloatingpo));
        }
      }

      /* path info */
      ssSetModelName(rts, "Convert double to \nSingle floating-point (FPGA)");
      ssSetPath(rts,
                "boost_and_two_level__1_sm_controller/SM_Controller/eHS1/eHSDrivers/addon_drivers_1/DataIn Driver/driver/DataIn Format/Reinterpreters/reinterpreter_1/Convert double to  Single floating-point (FPGA)");
      ssSetRTModel(rts,boost_and_two_level__1_sm_controller_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* registration */
      sfun_DBL2SFP(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 2.0E-5);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 0;

      /* set compiled values of dynamic vector attributes */
      ssSetInputPortWidth(rts, 0, 1);
      ssSetInputPortDataType(rts, 0, SS_DOUBLE);
      ssSetInputPortComplexSignal(rts, 0, 0);
      ssSetInputPortFrameData(rts, 0, 0);
      ssSetInputPortUnit(rts, 0, 0);
      ssSetInputPortIsContinuousQuantity(rts, 0, 0);
      ssSetOutputPortWidth(rts, 0, 1);
      ssSetOutputPortDataType(rts, 0, SS_UINT32);
      ssSetOutputPortComplexSignal(rts, 0, 0);
      ssSetOutputPortFrameData(rts, 0, 0);
      ssSetOutputPortUnit(rts, 0, 0);
      ssSetOutputPortIsContinuousQuantity(rts, 0, 0);
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
    }

    /* Level2 S-Function Block: boost_and_two_level__1_sm_controller/<S29>/Convert double to  Single floating-point (FPGA) (sfun_DBL2SFP) */
    {
      SimStruct *rts = boost_and_two_level__1_sm_controller_M->childSfunctions[1];

      /* timing info */
      time_T *sfcnPeriod =
        boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.Sfcn1.sfcnPeriod;
      time_T *sfcnOffset =
        boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.Sfcn1.sfcnOffset;
      int_T *sfcnTsMap =
        boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.Sfcn1.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts,
                         &boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.blkInfo2
                         [1]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.inputOutputPortInfo2
        [1]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, boost_and_two_level__1_sm_controller_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.methods2
                           [1]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.methods3
                           [1]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.methods4
                           [1]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.statesInfo2
                         [1]);
        ssSetPeriodicStatesInfo(rts,
          &boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.periodicStatesInfo
          [1]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.Sfcn1.inputPortInfo
          [0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.Sfcn1.inputPortUnits
          [0]);
        ssSetInputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.Sfcn1.inputPortCoSimAttribute
          [0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.Sfcn1.UPtrs0;
          sfcnUPtrs[0] = &boost_and_two_level__1_sm_controller_B.Saturation_n[1];
          ssSetInputPortSignalPtrs(rts, 0, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.Sfcn1.outputPortInfo
          [0]);
        _ssSetNumOutputPorts(rts, 1);
        _ssSetPortInfo2ForOutputUnits(rts,
          &boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.Sfcn1.outputPortUnits
          [0]);
        ssSetOutputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForOutputCoSimAttribute(rts,
          &boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.Sfcn1.outputPortCoSimAttribute
          [0]);
        ssSetOutputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((uint32_T *)
            &boost_and_two_level__1_sm_controller_B.ConvertdoubletoSinglefloating_e));
        }
      }

      /* path info */
      ssSetModelName(rts, "Convert double to \nSingle floating-point (FPGA)");
      ssSetPath(rts,
                "boost_and_two_level__1_sm_controller/SM_Controller/eHS1/eHSDrivers/addon_drivers_1/DataIn Driver/driver/DataIn Format/Reinterpreters/reinterpreter_2/Convert double to  Single floating-point (FPGA)");
      ssSetRTModel(rts,boost_and_two_level__1_sm_controller_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* registration */
      sfun_DBL2SFP(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 2.0E-5);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 0;

      /* set compiled values of dynamic vector attributes */
      ssSetInputPortWidth(rts, 0, 1);
      ssSetInputPortDataType(rts, 0, SS_DOUBLE);
      ssSetInputPortComplexSignal(rts, 0, 0);
      ssSetInputPortFrameData(rts, 0, 0);
      ssSetInputPortUnit(rts, 0, 0);
      ssSetInputPortIsContinuousQuantity(rts, 0, 0);
      ssSetOutputPortWidth(rts, 0, 1);
      ssSetOutputPortDataType(rts, 0, SS_UINT32);
      ssSetOutputPortComplexSignal(rts, 0, 0);
      ssSetOutputPortFrameData(rts, 0, 0);
      ssSetOutputPortUnit(rts, 0, 0);
      ssSetOutputPortIsContinuousQuantity(rts, 0, 0);
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
    }

    /* Level2 S-Function Block: boost_and_two_level__1_sm_controller/<S30>/Convert double to  Single floating-point (FPGA) (sfun_DBL2SFP) */
    {
      SimStruct *rts = boost_and_two_level__1_sm_controller_M->childSfunctions[2];

      /* timing info */
      time_T *sfcnPeriod =
        boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.Sfcn2.sfcnPeriod;
      time_T *sfcnOffset =
        boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.Sfcn2.sfcnOffset;
      int_T *sfcnTsMap =
        boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.Sfcn2.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts,
                         &boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.blkInfo2
                         [2]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.inputOutputPortInfo2
        [2]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, boost_and_two_level__1_sm_controller_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.methods2
                           [2]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.methods3
                           [2]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.methods4
                           [2]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.statesInfo2
                         [2]);
        ssSetPeriodicStatesInfo(rts,
          &boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.periodicStatesInfo
          [2]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.Sfcn2.inputPortInfo
          [0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.Sfcn2.inputPortUnits
          [0]);
        ssSetInputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.Sfcn2.inputPortCoSimAttribute
          [0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.Sfcn2.UPtrs0;
          sfcnUPtrs[0] = &boost_and_two_level__1_sm_controller_B.Saturation_n[2];
          ssSetInputPortSignalPtrs(rts, 0, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.Sfcn2.outputPortInfo
          [0]);
        _ssSetNumOutputPorts(rts, 1);
        _ssSetPortInfo2ForOutputUnits(rts,
          &boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.Sfcn2.outputPortUnits
          [0]);
        ssSetOutputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForOutputCoSimAttribute(rts,
          &boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.Sfcn2.outputPortCoSimAttribute
          [0]);
        ssSetOutputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((uint32_T *)
            &boost_and_two_level__1_sm_controller_B.ConvertdoubletoSinglefloating_n));
        }
      }

      /* path info */
      ssSetModelName(rts, "Convert double to \nSingle floating-point (FPGA)");
      ssSetPath(rts,
                "boost_and_two_level__1_sm_controller/SM_Controller/eHS1/eHSDrivers/addon_drivers_1/DataIn Driver/driver/DataIn Format/Reinterpreters/reinterpreter_3/Convert double to  Single floating-point (FPGA)");
      ssSetRTModel(rts,boost_and_two_level__1_sm_controller_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* registration */
      sfun_DBL2SFP(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 2.0E-5);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 0;

      /* set compiled values of dynamic vector attributes */
      ssSetInputPortWidth(rts, 0, 1);
      ssSetInputPortDataType(rts, 0, SS_DOUBLE);
      ssSetInputPortComplexSignal(rts, 0, 0);
      ssSetInputPortFrameData(rts, 0, 0);
      ssSetInputPortUnit(rts, 0, 0);
      ssSetInputPortIsContinuousQuantity(rts, 0, 0);
      ssSetOutputPortWidth(rts, 0, 1);
      ssSetOutputPortDataType(rts, 0, SS_UINT32);
      ssSetOutputPortComplexSignal(rts, 0, 0);
      ssSetOutputPortFrameData(rts, 0, 0);
      ssSetOutputPortUnit(rts, 0, 0);
      ssSetOutputPortIsContinuousQuantity(rts, 0, 0);
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
    }

    /* Level2 S-Function Block: boost_and_two_level__1_sm_controller/<S31>/Convert double to  Single floating-point (FPGA) (sfun_DBL2SFP) */
    {
      SimStruct *rts = boost_and_two_level__1_sm_controller_M->childSfunctions[3];

      /* timing info */
      time_T *sfcnPeriod =
        boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.Sfcn3.sfcnPeriod;
      time_T *sfcnOffset =
        boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.Sfcn3.sfcnOffset;
      int_T *sfcnTsMap =
        boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.Sfcn3.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts,
                         &boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.blkInfo2
                         [3]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.inputOutputPortInfo2
        [3]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, boost_and_two_level__1_sm_controller_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.methods2
                           [3]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.methods3
                           [3]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.methods4
                           [3]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.statesInfo2
                         [3]);
        ssSetPeriodicStatesInfo(rts,
          &boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.periodicStatesInfo
          [3]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.Sfcn3.inputPortInfo
          [0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.Sfcn3.inputPortUnits
          [0]);
        ssSetInputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.Sfcn3.inputPortCoSimAttribute
          [0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.Sfcn3.UPtrs0;
          sfcnUPtrs[0] = &boost_and_two_level__1_sm_controller_B.Saturation_n[3];
          ssSetInputPortSignalPtrs(rts, 0, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.Sfcn3.outputPortInfo
          [0]);
        _ssSetNumOutputPorts(rts, 1);
        _ssSetPortInfo2ForOutputUnits(rts,
          &boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.Sfcn3.outputPortUnits
          [0]);
        ssSetOutputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForOutputCoSimAttribute(rts,
          &boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.Sfcn3.outputPortCoSimAttribute
          [0]);
        ssSetOutputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((uint32_T *)
            &boost_and_two_level__1_sm_controller_B.ConvertdoubletoSinglefloating_i));
        }
      }

      /* path info */
      ssSetModelName(rts, "Convert double to \nSingle floating-point (FPGA)");
      ssSetPath(rts,
                "boost_and_two_level__1_sm_controller/SM_Controller/eHS1/eHSDrivers/addon_drivers_1/DataIn Driver/driver/DataIn Format/Reinterpreters/reinterpreter_4/Convert double to  Single floating-point (FPGA)");
      ssSetRTModel(rts,boost_and_two_level__1_sm_controller_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* registration */
      sfun_DBL2SFP(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 2.0E-5);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 0;

      /* set compiled values of dynamic vector attributes */
      ssSetInputPortWidth(rts, 0, 1);
      ssSetInputPortDataType(rts, 0, SS_DOUBLE);
      ssSetInputPortComplexSignal(rts, 0, 0);
      ssSetInputPortFrameData(rts, 0, 0);
      ssSetInputPortUnit(rts, 0, 0);
      ssSetInputPortIsContinuousQuantity(rts, 0, 0);
      ssSetOutputPortWidth(rts, 0, 1);
      ssSetOutputPortDataType(rts, 0, SS_UINT32);
      ssSetOutputPortComplexSignal(rts, 0, 0);
      ssSetOutputPortFrameData(rts, 0, 0);
      ssSetOutputPortUnit(rts, 0, 0);
      ssSetOutputPortIsContinuousQuantity(rts, 0, 0);
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
    }

    /* Level2 S-Function Block: boost_and_two_level__1_sm_controller/<S26>/DataIn Send (sfun_fct_op7160ex1_send) */
    {
      SimStruct *rts = boost_and_two_level__1_sm_controller_M->childSfunctions[4];

      /* timing info */
      time_T *sfcnPeriod =
        boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.Sfcn4.sfcnPeriod;
      time_T *sfcnOffset =
        boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.Sfcn4.sfcnOffset;
      int_T *sfcnTsMap =
        boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.Sfcn4.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts,
                         &boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.blkInfo2
                         [4]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.inputOutputPortInfo2
        [4]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, boost_and_two_level__1_sm_controller_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.methods2
                           [4]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.methods3
                           [4]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.methods4
                           [4]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.statesInfo2
                         [4]);
        ssSetPeriodicStatesInfo(rts,
          &boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.periodicStatesInfo
          [4]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.Sfcn4.inputPortInfo
          [0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.Sfcn4.inputPortUnits
          [0]);
        ssSetInputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.Sfcn4.inputPortCoSimAttribute
          [0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          ssSetInputPortRequiredContiguous(rts, 0, 1);
          ssSetInputPortSignal(rts, 0,
                               boost_and_two_level__1_sm_controller_B.TmpSignalConversionAtDataInSend);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 4);
        }
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.Sfcn4.outputPortInfo
          [0]);
        _ssSetNumOutputPorts(rts, 1);
        _ssSetPortInfo2ForOutputUnits(rts,
          &boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.Sfcn4.outputPortUnits
          [0]);
        ssSetOutputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForOutputCoSimAttribute(rts,
          &boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.Sfcn4.outputPortCoSimAttribute
          [0]);
        ssSetOutputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((real_T *)
            &boost_and_two_level__1_sm_controller_B.DataInSend));
        }
      }

      /* path info */
      ssSetModelName(rts, "DataIn Send");
      ssSetPath(rts,
                "boost_and_two_level__1_sm_controller/SM_Controller/eHS1/eHSDrivers/addon_drivers_1/DataIn Driver/driver/DataIn Send/DataIn Send");
      ssSetRTModel(rts,boost_and_two_level__1_sm_controller_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.Sfcn4.params;
        ssSetSFcnParamsCount(rts, 8);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       boost_and_two_level__1_sm_controller_P.DataInSend_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       boost_and_two_level__1_sm_controller_P.DataInSend_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       boost_and_two_level__1_sm_controller_P.DataInSend_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       boost_and_two_level__1_sm_controller_P.DataInSend_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)
                       boost_and_two_level__1_sm_controller_P.DataInSend_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)
                       boost_and_two_level__1_sm_controller_P.DataInSend_P6_Size);
        ssSetSFcnParam(rts, 6, (mxArray*)
                       boost_and_two_level__1_sm_controller_P.DataInSend_P7_Size);
        ssSetSFcnParam(rts, 7, (mxArray*)
                       boost_and_two_level__1_sm_controller_P.DataInSend_P8_Size);
      }

      /* work vectors */
      ssSetPWork(rts, (void **)
                 &boost_and_two_level__1_sm_controller_DW.DataInSend_PWORK);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.Sfcn4.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.Sfcn4.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* PWORK */
        ssSetDWorkWidth(rts, 0, 1);
        ssSetDWorkDataType(rts, 0,SS_POINTER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0,
                   &boost_and_two_level__1_sm_controller_DW.DataInSend_PWORK);
      }

      /* registration */
      sfun_fct_op7160ex1_send(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 2.0E-5);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 0;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);
      _ssSetOutputPortConnected(rts, 0, 0);
      _ssSetOutputPortBeingMerged(rts, 0, 0);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
    }

    /* Level2 S-Function Block: boost_and_two_level__1_sm_controller/<S52>/LoadIn (sfun_fct_op7160ex1_load_in) */
    {
      SimStruct *rts = boost_and_two_level__1_sm_controller_M->childSfunctions[5];

      /* timing info */
      time_T *sfcnPeriod =
        boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.Sfcn5.sfcnPeriod;
      time_T *sfcnOffset =
        boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.Sfcn5.sfcnOffset;
      int_T *sfcnTsMap =
        boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.Sfcn5.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts,
                         &boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.blkInfo2
                         [5]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.inputOutputPortInfo2
        [5]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, boost_and_two_level__1_sm_controller_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.methods2
                           [5]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.methods3
                           [5]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.methods4
                           [5]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.statesInfo2
                         [5]);
        ssSetPeriodicStatesInfo(rts,
          &boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.periodicStatesInfo
          [5]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 2);
        ssSetPortInfoForInputs(rts,
          &boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.Sfcn5.inputPortInfo
          [0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.Sfcn5.inputPortUnits
          [0]);
        ssSetInputPortUnit(rts, 0, 0);
        ssSetInputPortUnit(rts, 1, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.Sfcn5.inputPortCoSimAttribute
          [0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);
        ssSetInputPortIsContinuousQuantity(rts, 1, 0);

        /* port 0 */
        {
          ssSetInputPortRequiredContiguous(rts, 0, 1);
          ssSetInputPortSignal(rts, 0,
                               &boost_and_two_level__1_sm_controller_B.DataTypeConversion_i);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }

        /* port 1 */
        {
          ssSetInputPortRequiredContiguous(rts, 1, 1);
          ssSetInputPortSignal(rts, 1,
                               &boost_and_two_level__1_sm_controller_B.status);
          _ssSetInputPortNumDimensions(rts, 1, 1);
          ssSetInputPortWidth(rts, 1, 1);
        }
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.Sfcn5.outputPortInfo
          [0]);
        _ssSetNumOutputPorts(rts, 1);
        _ssSetPortInfo2ForOutputUnits(rts,
          &boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.Sfcn5.outputPortUnits
          [0]);
        ssSetOutputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForOutputCoSimAttribute(rts,
          &boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.Sfcn5.outputPortCoSimAttribute
          [0]);
        ssSetOutputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((real_T *)
            &boost_and_two_level__1_sm_controller_B.LoadIn_g));
        }
      }

      /* path info */
      ssSetModelName(rts, "LoadIn");
      ssSetPath(rts,
                "boost_and_two_level__1_sm_controller/SM_Controller/eHS1/eHSDrivers/addon_drivers_1/LoadIn eHS Status/writeStatus/LoadIn Send/LoadIn");
      ssSetRTModel(rts,boost_and_two_level__1_sm_controller_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.Sfcn5.params;
        ssSetSFcnParamsCount(rts, 4);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       boost_and_two_level__1_sm_controller_P.LoadIn_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       boost_and_two_level__1_sm_controller_P.LoadIn_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       boost_and_two_level__1_sm_controller_P.LoadIn_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       boost_and_two_level__1_sm_controller_P.LoadIn_P4_Size);
      }

      /* work vectors */
      ssSetPWork(rts, (void **)
                 &boost_and_two_level__1_sm_controller_DW.LoadIn_PWORK_n);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.Sfcn5.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.Sfcn5.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* PWORK */
        ssSetDWorkWidth(rts, 0, 1);
        ssSetDWorkDataType(rts, 0,SS_POINTER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0,
                   &boost_and_two_level__1_sm_controller_DW.LoadIn_PWORK_n);
      }

      /* registration */
      sfun_fct_op7160ex1_load_in(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 2.0E-5);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 0;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);
      _ssSetInputPortConnected(rts, 1, 1);
      _ssSetOutputPortConnected(rts, 0, 0);
      _ssSetOutputPortBeingMerged(rts, 0, 0);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
      ssSetInputPortBufferDstPort(rts, 1, -1);
    }

    /* Level2 S-Function Block: boost_and_two_level__1_sm_controller/<S33>/DataOut Recv (sfun_fct_op7160ex1_recv) */
    {
      SimStruct *rts = boost_and_two_level__1_sm_controller_M->childSfunctions[6];

      /* timing info */
      time_T *sfcnPeriod =
        boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.Sfcn6.sfcnPeriod;
      time_T *sfcnOffset =
        boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.Sfcn6.sfcnOffset;
      int_T *sfcnTsMap =
        boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.Sfcn6.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts,
                         &boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.blkInfo2
                         [6]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.inputOutputPortInfo2
        [6]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, boost_and_two_level__1_sm_controller_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.methods2
                           [6]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.methods3
                           [6]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.methods4
                           [6]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.statesInfo2
                         [6]);
        ssSetPeriodicStatesInfo(rts,
          &boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.periodicStatesInfo
          [6]);
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.Sfcn6.outputPortInfo
          [0]);
        _ssSetNumOutputPorts(rts, 2);
        _ssSetPortInfo2ForOutputUnits(rts,
          &boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.Sfcn6.outputPortUnits
          [0]);
        ssSetOutputPortUnit(rts, 0, 0);
        ssSetOutputPortUnit(rts, 1, 0);
        _ssSetPortInfo2ForOutputCoSimAttribute(rts,
          &boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.Sfcn6.outputPortCoSimAttribute
          [0]);
        ssSetOutputPortIsContinuousQuantity(rts, 0, 0);
        ssSetOutputPortIsContinuousQuantity(rts, 1, 0);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 9);
          ssSetOutputPortSignal(rts, 0, ((uint32_T *)
            boost_and_two_level__1_sm_controller_B.DataOutRecv_o1));
        }

        /* port 1 */
        {
          _ssSetOutputPortNumDimensions(rts, 1, 1);
          ssSetOutputPortWidth(rts, 1, 1);
          ssSetOutputPortSignal(rts, 1, ((real_T *)
            &boost_and_two_level__1_sm_controller_B.DataOutRecv_o2));
        }
      }

      /* path info */
      ssSetModelName(rts, "DataOut Recv");
      ssSetPath(rts,
                "boost_and_two_level__1_sm_controller/SM_Controller/eHS1/eHSDrivers/addon_drivers_1/DataOut Driver/Receive DataOut/DataOut Recv");
      ssSetRTModel(rts,boost_and_two_level__1_sm_controller_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.Sfcn6.params;
        ssSetSFcnParamsCount(rts, 9);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       boost_and_two_level__1_sm_controller_P.DataOutRecv_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       boost_and_two_level__1_sm_controller_P.DataOutRecv_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       boost_and_two_level__1_sm_controller_P.DataOutRecv_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       boost_and_two_level__1_sm_controller_P.DataOutRecv_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)
                       boost_and_two_level__1_sm_controller_P.DataOutRecv_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)
                       boost_and_two_level__1_sm_controller_P.DataOutRecv_P6_Size);
        ssSetSFcnParam(rts, 6, (mxArray*)
                       boost_and_two_level__1_sm_controller_P.DataOutRecv_P7_Size);
        ssSetSFcnParam(rts, 7, (mxArray*)
                       boost_and_two_level__1_sm_controller_P.DataOutRecv_P8_Size);
        ssSetSFcnParam(rts, 8, (mxArray*)
                       boost_and_two_level__1_sm_controller_P.DataOutRecv_P9_Size);
      }

      /* work vectors */
      ssSetPWork(rts, (void **)
                 &boost_and_two_level__1_sm_controller_DW.DataOutRecv_PWORK);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.Sfcn6.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.Sfcn6.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* PWORK */
        ssSetDWorkWidth(rts, 0, 1);
        ssSetDWorkDataType(rts, 0,SS_POINTER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0,
                   &boost_and_two_level__1_sm_controller_DW.DataOutRecv_PWORK);
      }

      /* registration */
      sfun_fct_op7160ex1_recv(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 2.0E-5);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 0;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortConnected(rts, 1, 0);
      _ssSetOutputPortBeingMerged(rts, 0, 0);
      _ssSetOutputPortBeingMerged(rts, 1, 0);

      /* Update the BufferDstPort flags for each input port */
    }

    /* Level2 S-Function Block: boost_and_two_level__1_sm_controller/<S37>/Convert  Single floating-point (FPGA)  to double (sfun_SFP2DBL) */
    {
      SimStruct *rts = boost_and_two_level__1_sm_controller_M->childSfunctions[7];

      /* timing info */
      time_T *sfcnPeriod =
        boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.Sfcn7.sfcnPeriod;
      time_T *sfcnOffset =
        boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.Sfcn7.sfcnOffset;
      int_T *sfcnTsMap =
        boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.Sfcn7.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts,
                         &boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.blkInfo2
                         [7]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.inputOutputPortInfo2
        [7]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, boost_and_two_level__1_sm_controller_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.methods2
                           [7]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.methods3
                           [7]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.methods4
                           [7]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.statesInfo2
                         [7]);
        ssSetPeriodicStatesInfo(rts,
          &boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.periodicStatesInfo
          [7]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.Sfcn7.inputPortInfo
          [0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.Sfcn7.inputPortUnits
          [0]);
        ssSetInputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.Sfcn7.inputPortCoSimAttribute
          [0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          uint32_T const **sfcnUPtrs = (uint32_T const **)
            &boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.Sfcn7.UPtrs0;
          sfcnUPtrs[0] = &boost_and_two_level__1_sm_controller_B.Saturation_m[0];
          ssSetInputPortSignalPtrs(rts, 0, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.Sfcn7.outputPortInfo
          [0]);
        _ssSetNumOutputPorts(rts, 1);
        _ssSetPortInfo2ForOutputUnits(rts,
          &boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.Sfcn7.outputPortUnits
          [0]);
        ssSetOutputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForOutputCoSimAttribute(rts,
          &boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.Sfcn7.outputPortCoSimAttribute
          [0]);
        ssSetOutputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((real_T *)
            &boost_and_two_level__1_sm_controller_B.ConvertSinglefloatingpointFPGAt));
        }
      }

      /* path info */
      ssSetModelName(rts, "Convert \nSingle floating-point (FPGA) \nto double");
      ssSetPath(rts,
                "boost_and_two_level__1_sm_controller/SM_Controller/eHS1/eHSDrivers/addon_drivers_1/DataOut Driver/DataOut Format/DataOut Formatter/Reinterpreters/reinterpreter_1/Convert  Single floating-point (FPGA)  to double");
      ssSetRTModel(rts,boost_and_two_level__1_sm_controller_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* registration */
      sfun_SFP2DBL(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 2.0E-5);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 0;

      /* set compiled values of dynamic vector attributes */
      ssSetInputPortWidth(rts, 0, 1);
      ssSetInputPortDataType(rts, 0, SS_UINT32);
      ssSetInputPortComplexSignal(rts, 0, 0);
      ssSetInputPortFrameData(rts, 0, 0);
      ssSetInputPortUnit(rts, 0, 0);
      ssSetInputPortIsContinuousQuantity(rts, 0, 0);
      ssSetOutputPortWidth(rts, 0, 1);
      ssSetOutputPortDataType(rts, 0, SS_DOUBLE);
      ssSetOutputPortComplexSignal(rts, 0, 0);
      ssSetOutputPortFrameData(rts, 0, 0);
      ssSetOutputPortUnit(rts, 0, 0);
      ssSetOutputPortIsContinuousQuantity(rts, 0, 0);
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
    }

    /* Level2 S-Function Block: boost_and_two_level__1_sm_controller/<S38>/Convert  Single floating-point (FPGA)  to double (sfun_SFP2DBL) */
    {
      SimStruct *rts = boost_and_two_level__1_sm_controller_M->childSfunctions[8];

      /* timing info */
      time_T *sfcnPeriod =
        boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.Sfcn8.sfcnPeriod;
      time_T *sfcnOffset =
        boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.Sfcn8.sfcnOffset;
      int_T *sfcnTsMap =
        boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.Sfcn8.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts,
                         &boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.blkInfo2
                         [8]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.inputOutputPortInfo2
        [8]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, boost_and_two_level__1_sm_controller_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.methods2
                           [8]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.methods3
                           [8]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.methods4
                           [8]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.statesInfo2
                         [8]);
        ssSetPeriodicStatesInfo(rts,
          &boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.periodicStatesInfo
          [8]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.Sfcn8.inputPortInfo
          [0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.Sfcn8.inputPortUnits
          [0]);
        ssSetInputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.Sfcn8.inputPortCoSimAttribute
          [0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          uint32_T const **sfcnUPtrs = (uint32_T const **)
            &boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.Sfcn8.UPtrs0;
          sfcnUPtrs[0] = &boost_and_two_level__1_sm_controller_B.Saturation_m[1];
          ssSetInputPortSignalPtrs(rts, 0, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.Sfcn8.outputPortInfo
          [0]);
        _ssSetNumOutputPorts(rts, 1);
        _ssSetPortInfo2ForOutputUnits(rts,
          &boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.Sfcn8.outputPortUnits
          [0]);
        ssSetOutputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForOutputCoSimAttribute(rts,
          &boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.Sfcn8.outputPortCoSimAttribute
          [0]);
        ssSetOutputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((real_T *)
            &boost_and_two_level__1_sm_controller_B.ConvertSinglefloatingpointFPG_i));
        }
      }

      /* path info */
      ssSetModelName(rts, "Convert \nSingle floating-point (FPGA) \nto double");
      ssSetPath(rts,
                "boost_and_two_level__1_sm_controller/SM_Controller/eHS1/eHSDrivers/addon_drivers_1/DataOut Driver/DataOut Format/DataOut Formatter/Reinterpreters/reinterpreter_2/Convert  Single floating-point (FPGA)  to double");
      ssSetRTModel(rts,boost_and_two_level__1_sm_controller_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* registration */
      sfun_SFP2DBL(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 2.0E-5);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 0;

      /* set compiled values of dynamic vector attributes */
      ssSetInputPortWidth(rts, 0, 1);
      ssSetInputPortDataType(rts, 0, SS_UINT32);
      ssSetInputPortComplexSignal(rts, 0, 0);
      ssSetInputPortFrameData(rts, 0, 0);
      ssSetInputPortUnit(rts, 0, 0);
      ssSetInputPortIsContinuousQuantity(rts, 0, 0);
      ssSetOutputPortWidth(rts, 0, 1);
      ssSetOutputPortDataType(rts, 0, SS_DOUBLE);
      ssSetOutputPortComplexSignal(rts, 0, 0);
      ssSetOutputPortFrameData(rts, 0, 0);
      ssSetOutputPortUnit(rts, 0, 0);
      ssSetOutputPortIsContinuousQuantity(rts, 0, 0);
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
    }

    /* Level2 S-Function Block: boost_and_two_level__1_sm_controller/<S39>/Convert  Single floating-point (FPGA)  to double (sfun_SFP2DBL) */
    {
      SimStruct *rts = boost_and_two_level__1_sm_controller_M->childSfunctions[9];

      /* timing info */
      time_T *sfcnPeriod =
        boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.Sfcn9.sfcnPeriod;
      time_T *sfcnOffset =
        boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.Sfcn9.sfcnOffset;
      int_T *sfcnTsMap =
        boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.Sfcn9.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts,
                         &boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.blkInfo2
                         [9]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.inputOutputPortInfo2
        [9]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, boost_and_two_level__1_sm_controller_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.methods2
                           [9]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.methods3
                           [9]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.methods4
                           [9]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.statesInfo2
                         [9]);
        ssSetPeriodicStatesInfo(rts,
          &boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.periodicStatesInfo
          [9]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.Sfcn9.inputPortInfo
          [0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.Sfcn9.inputPortUnits
          [0]);
        ssSetInputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.Sfcn9.inputPortCoSimAttribute
          [0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          uint32_T const **sfcnUPtrs = (uint32_T const **)
            &boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.Sfcn9.UPtrs0;
          sfcnUPtrs[0] = &boost_and_two_level__1_sm_controller_B.Saturation_m[2];
          ssSetInputPortSignalPtrs(rts, 0, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.Sfcn9.outputPortInfo
          [0]);
        _ssSetNumOutputPorts(rts, 1);
        _ssSetPortInfo2ForOutputUnits(rts,
          &boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.Sfcn9.outputPortUnits
          [0]);
        ssSetOutputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForOutputCoSimAttribute(rts,
          &boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.Sfcn9.outputPortCoSimAttribute
          [0]);
        ssSetOutputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((real_T *)
            &boost_and_two_level__1_sm_controller_B.ConvertSinglefloatingpointFPG_g));
        }
      }

      /* path info */
      ssSetModelName(rts, "Convert \nSingle floating-point (FPGA) \nto double");
      ssSetPath(rts,
                "boost_and_two_level__1_sm_controller/SM_Controller/eHS1/eHSDrivers/addon_drivers_1/DataOut Driver/DataOut Format/DataOut Formatter/Reinterpreters/reinterpreter_3/Convert  Single floating-point (FPGA)  to double");
      ssSetRTModel(rts,boost_and_two_level__1_sm_controller_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* registration */
      sfun_SFP2DBL(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 2.0E-5);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 0;

      /* set compiled values of dynamic vector attributes */
      ssSetInputPortWidth(rts, 0, 1);
      ssSetInputPortDataType(rts, 0, SS_UINT32);
      ssSetInputPortComplexSignal(rts, 0, 0);
      ssSetInputPortFrameData(rts, 0, 0);
      ssSetInputPortUnit(rts, 0, 0);
      ssSetInputPortIsContinuousQuantity(rts, 0, 0);
      ssSetOutputPortWidth(rts, 0, 1);
      ssSetOutputPortDataType(rts, 0, SS_DOUBLE);
      ssSetOutputPortComplexSignal(rts, 0, 0);
      ssSetOutputPortFrameData(rts, 0, 0);
      ssSetOutputPortUnit(rts, 0, 0);
      ssSetOutputPortIsContinuousQuantity(rts, 0, 0);
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
    }

    /* Level2 S-Function Block: boost_and_two_level__1_sm_controller/<S40>/Convert  Single floating-point (FPGA)  to double (sfun_SFP2DBL) */
    {
      SimStruct *rts = boost_and_two_level__1_sm_controller_M->childSfunctions
        [10];

      /* timing info */
      time_T *sfcnPeriod =
        boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.Sfcn10.sfcnPeriod;
      time_T *sfcnOffset =
        boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.Sfcn10.sfcnOffset;
      int_T *sfcnTsMap =
        boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.Sfcn10.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts,
                         &boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.blkInfo2
                         [10]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.inputOutputPortInfo2
        [10]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, boost_and_two_level__1_sm_controller_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.methods2
                           [10]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.methods3
                           [10]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.methods4
                           [10]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.statesInfo2
                         [10]);
        ssSetPeriodicStatesInfo(rts,
          &boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.periodicStatesInfo
          [10]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.Sfcn10.inputPortInfo
          [0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.Sfcn10.inputPortUnits
          [0]);
        ssSetInputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.Sfcn10.inputPortCoSimAttribute
          [0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          uint32_T const **sfcnUPtrs = (uint32_T const **)
            &boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.Sfcn10.UPtrs0;
          sfcnUPtrs[0] = &boost_and_two_level__1_sm_controller_B.Saturation_m[3];
          ssSetInputPortSignalPtrs(rts, 0, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.Sfcn10.outputPortInfo
          [0]);
        _ssSetNumOutputPorts(rts, 1);
        _ssSetPortInfo2ForOutputUnits(rts,
          &boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.Sfcn10.outputPortUnits
          [0]);
        ssSetOutputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForOutputCoSimAttribute(rts,
          &boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.Sfcn10.outputPortCoSimAttribute
          [0]);
        ssSetOutputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((real_T *)
            &boost_and_two_level__1_sm_controller_B.ConvertSinglefloatingpointFP_ik));
        }
      }

      /* path info */
      ssSetModelName(rts, "Convert \nSingle floating-point (FPGA) \nto double");
      ssSetPath(rts,
                "boost_and_two_level__1_sm_controller/SM_Controller/eHS1/eHSDrivers/addon_drivers_1/DataOut Driver/DataOut Format/DataOut Formatter/Reinterpreters/reinterpreter_4/Convert  Single floating-point (FPGA)  to double");
      ssSetRTModel(rts,boost_and_two_level__1_sm_controller_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* registration */
      sfun_SFP2DBL(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 2.0E-5);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 0;

      /* set compiled values of dynamic vector attributes */
      ssSetInputPortWidth(rts, 0, 1);
      ssSetInputPortDataType(rts, 0, SS_UINT32);
      ssSetInputPortComplexSignal(rts, 0, 0);
      ssSetInputPortFrameData(rts, 0, 0);
      ssSetInputPortUnit(rts, 0, 0);
      ssSetInputPortIsContinuousQuantity(rts, 0, 0);
      ssSetOutputPortWidth(rts, 0, 1);
      ssSetOutputPortDataType(rts, 0, SS_DOUBLE);
      ssSetOutputPortComplexSignal(rts, 0, 0);
      ssSetOutputPortFrameData(rts, 0, 0);
      ssSetOutputPortUnit(rts, 0, 0);
      ssSetOutputPortIsContinuousQuantity(rts, 0, 0);
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
    }

    /* Level2 S-Function Block: boost_and_two_level__1_sm_controller/<S41>/Convert  Single floating-point (FPGA)  to double (sfun_SFP2DBL) */
    {
      SimStruct *rts = boost_and_two_level__1_sm_controller_M->childSfunctions
        [11];

      /* timing info */
      time_T *sfcnPeriod =
        boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.Sfcn11.sfcnPeriod;
      time_T *sfcnOffset =
        boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.Sfcn11.sfcnOffset;
      int_T *sfcnTsMap =
        boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.Sfcn11.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts,
                         &boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.blkInfo2
                         [11]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.inputOutputPortInfo2
        [11]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, boost_and_two_level__1_sm_controller_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.methods2
                           [11]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.methods3
                           [11]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.methods4
                           [11]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.statesInfo2
                         [11]);
        ssSetPeriodicStatesInfo(rts,
          &boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.periodicStatesInfo
          [11]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.Sfcn11.inputPortInfo
          [0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.Sfcn11.inputPortUnits
          [0]);
        ssSetInputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.Sfcn11.inputPortCoSimAttribute
          [0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          uint32_T const **sfcnUPtrs = (uint32_T const **)
            &boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.Sfcn11.UPtrs0;
          sfcnUPtrs[0] = &boost_and_two_level__1_sm_controller_B.Saturation_m[4];
          ssSetInputPortSignalPtrs(rts, 0, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.Sfcn11.outputPortInfo
          [0]);
        _ssSetNumOutputPorts(rts, 1);
        _ssSetPortInfo2ForOutputUnits(rts,
          &boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.Sfcn11.outputPortUnits
          [0]);
        ssSetOutputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForOutputCoSimAttribute(rts,
          &boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.Sfcn11.outputPortCoSimAttribute
          [0]);
        ssSetOutputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((real_T *)
            &boost_and_two_level__1_sm_controller_B.ConvertSinglefloatingpointFP_ib));
        }
      }

      /* path info */
      ssSetModelName(rts, "Convert \nSingle floating-point (FPGA) \nto double");
      ssSetPath(rts,
                "boost_and_two_level__1_sm_controller/SM_Controller/eHS1/eHSDrivers/addon_drivers_1/DataOut Driver/DataOut Format/DataOut Formatter/Reinterpreters/reinterpreter_5/Convert  Single floating-point (FPGA)  to double");
      ssSetRTModel(rts,boost_and_two_level__1_sm_controller_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* registration */
      sfun_SFP2DBL(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 2.0E-5);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 0;

      /* set compiled values of dynamic vector attributes */
      ssSetInputPortWidth(rts, 0, 1);
      ssSetInputPortDataType(rts, 0, SS_UINT32);
      ssSetInputPortComplexSignal(rts, 0, 0);
      ssSetInputPortFrameData(rts, 0, 0);
      ssSetInputPortUnit(rts, 0, 0);
      ssSetInputPortIsContinuousQuantity(rts, 0, 0);
      ssSetOutputPortWidth(rts, 0, 1);
      ssSetOutputPortDataType(rts, 0, SS_DOUBLE);
      ssSetOutputPortComplexSignal(rts, 0, 0);
      ssSetOutputPortFrameData(rts, 0, 0);
      ssSetOutputPortUnit(rts, 0, 0);
      ssSetOutputPortIsContinuousQuantity(rts, 0, 0);
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
    }

    /* Level2 S-Function Block: boost_and_two_level__1_sm_controller/<S42>/Convert  Single floating-point (FPGA)  to double (sfun_SFP2DBL) */
    {
      SimStruct *rts = boost_and_two_level__1_sm_controller_M->childSfunctions
        [12];

      /* timing info */
      time_T *sfcnPeriod =
        boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.Sfcn12.sfcnPeriod;
      time_T *sfcnOffset =
        boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.Sfcn12.sfcnOffset;
      int_T *sfcnTsMap =
        boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.Sfcn12.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts,
                         &boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.blkInfo2
                         [12]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.inputOutputPortInfo2
        [12]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, boost_and_two_level__1_sm_controller_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.methods2
                           [12]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.methods3
                           [12]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.methods4
                           [12]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.statesInfo2
                         [12]);
        ssSetPeriodicStatesInfo(rts,
          &boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.periodicStatesInfo
          [12]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.Sfcn12.inputPortInfo
          [0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.Sfcn12.inputPortUnits
          [0]);
        ssSetInputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.Sfcn12.inputPortCoSimAttribute
          [0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          uint32_T const **sfcnUPtrs = (uint32_T const **)
            &boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.Sfcn12.UPtrs0;
          sfcnUPtrs[0] = &boost_and_two_level__1_sm_controller_B.Saturation_m[5];
          ssSetInputPortSignalPtrs(rts, 0, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.Sfcn12.outputPortInfo
          [0]);
        _ssSetNumOutputPorts(rts, 1);
        _ssSetPortInfo2ForOutputUnits(rts,
          &boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.Sfcn12.outputPortUnits
          [0]);
        ssSetOutputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForOutputCoSimAttribute(rts,
          &boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.Sfcn12.outputPortCoSimAttribute
          [0]);
        ssSetOutputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((real_T *)
            &boost_and_two_level__1_sm_controller_B.ConvertSinglefloatingpointFPG_b));
        }
      }

      /* path info */
      ssSetModelName(rts, "Convert \nSingle floating-point (FPGA) \nto double");
      ssSetPath(rts,
                "boost_and_two_level__1_sm_controller/SM_Controller/eHS1/eHSDrivers/addon_drivers_1/DataOut Driver/DataOut Format/DataOut Formatter/Reinterpreters/reinterpreter_6/Convert  Single floating-point (FPGA)  to double");
      ssSetRTModel(rts,boost_and_two_level__1_sm_controller_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* registration */
      sfun_SFP2DBL(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 2.0E-5);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 0;

      /* set compiled values of dynamic vector attributes */
      ssSetInputPortWidth(rts, 0, 1);
      ssSetInputPortDataType(rts, 0, SS_UINT32);
      ssSetInputPortComplexSignal(rts, 0, 0);
      ssSetInputPortFrameData(rts, 0, 0);
      ssSetInputPortUnit(rts, 0, 0);
      ssSetInputPortIsContinuousQuantity(rts, 0, 0);
      ssSetOutputPortWidth(rts, 0, 1);
      ssSetOutputPortDataType(rts, 0, SS_DOUBLE);
      ssSetOutputPortComplexSignal(rts, 0, 0);
      ssSetOutputPortFrameData(rts, 0, 0);
      ssSetOutputPortUnit(rts, 0, 0);
      ssSetOutputPortIsContinuousQuantity(rts, 0, 0);
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
    }

    /* Level2 S-Function Block: boost_and_two_level__1_sm_controller/<S43>/Convert  Single floating-point (FPGA)  to double (sfun_SFP2DBL) */
    {
      SimStruct *rts = boost_and_two_level__1_sm_controller_M->childSfunctions
        [13];

      /* timing info */
      time_T *sfcnPeriod =
        boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.Sfcn13.sfcnPeriod;
      time_T *sfcnOffset =
        boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.Sfcn13.sfcnOffset;
      int_T *sfcnTsMap =
        boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.Sfcn13.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts,
                         &boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.blkInfo2
                         [13]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.inputOutputPortInfo2
        [13]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, boost_and_two_level__1_sm_controller_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.methods2
                           [13]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.methods3
                           [13]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.methods4
                           [13]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.statesInfo2
                         [13]);
        ssSetPeriodicStatesInfo(rts,
          &boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.periodicStatesInfo
          [13]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.Sfcn13.inputPortInfo
          [0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.Sfcn13.inputPortUnits
          [0]);
        ssSetInputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.Sfcn13.inputPortCoSimAttribute
          [0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          uint32_T const **sfcnUPtrs = (uint32_T const **)
            &boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.Sfcn13.UPtrs0;
          sfcnUPtrs[0] = &boost_and_two_level__1_sm_controller_B.Saturation_m[6];
          ssSetInputPortSignalPtrs(rts, 0, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.Sfcn13.outputPortInfo
          [0]);
        _ssSetNumOutputPorts(rts, 1);
        _ssSetPortInfo2ForOutputUnits(rts,
          &boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.Sfcn13.outputPortUnits
          [0]);
        ssSetOutputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForOutputCoSimAttribute(rts,
          &boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.Sfcn13.outputPortCoSimAttribute
          [0]);
        ssSetOutputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((real_T *)
            &boost_and_two_level__1_sm_controller_B.ConvertSinglefloatingpointFP_i0));
        }
      }

      /* path info */
      ssSetModelName(rts, "Convert \nSingle floating-point (FPGA) \nto double");
      ssSetPath(rts,
                "boost_and_two_level__1_sm_controller/SM_Controller/eHS1/eHSDrivers/addon_drivers_1/DataOut Driver/DataOut Format/DataOut Formatter/Reinterpreters/reinterpreter_7/Convert  Single floating-point (FPGA)  to double");
      ssSetRTModel(rts,boost_and_two_level__1_sm_controller_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* registration */
      sfun_SFP2DBL(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 2.0E-5);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 0;

      /* set compiled values of dynamic vector attributes */
      ssSetInputPortWidth(rts, 0, 1);
      ssSetInputPortDataType(rts, 0, SS_UINT32);
      ssSetInputPortComplexSignal(rts, 0, 0);
      ssSetInputPortFrameData(rts, 0, 0);
      ssSetInputPortUnit(rts, 0, 0);
      ssSetInputPortIsContinuousQuantity(rts, 0, 0);
      ssSetOutputPortWidth(rts, 0, 1);
      ssSetOutputPortDataType(rts, 0, SS_DOUBLE);
      ssSetOutputPortComplexSignal(rts, 0, 0);
      ssSetOutputPortFrameData(rts, 0, 0);
      ssSetOutputPortUnit(rts, 0, 0);
      ssSetOutputPortIsContinuousQuantity(rts, 0, 0);
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
    }

    /* Level2 S-Function Block: boost_and_two_level__1_sm_controller/<S44>/Convert  Single floating-point (FPGA)  to double (sfun_SFP2DBL) */
    {
      SimStruct *rts = boost_and_two_level__1_sm_controller_M->childSfunctions
        [14];

      /* timing info */
      time_T *sfcnPeriod =
        boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.Sfcn14.sfcnPeriod;
      time_T *sfcnOffset =
        boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.Sfcn14.sfcnOffset;
      int_T *sfcnTsMap =
        boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.Sfcn14.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts,
                         &boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.blkInfo2
                         [14]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.inputOutputPortInfo2
        [14]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, boost_and_two_level__1_sm_controller_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.methods2
                           [14]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.methods3
                           [14]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.methods4
                           [14]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.statesInfo2
                         [14]);
        ssSetPeriodicStatesInfo(rts,
          &boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.periodicStatesInfo
          [14]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.Sfcn14.inputPortInfo
          [0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.Sfcn14.inputPortUnits
          [0]);
        ssSetInputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.Sfcn14.inputPortCoSimAttribute
          [0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          uint32_T const **sfcnUPtrs = (uint32_T const **)
            &boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.Sfcn14.UPtrs0;
          sfcnUPtrs[0] = &boost_and_two_level__1_sm_controller_B.Saturation_m[7];
          ssSetInputPortSignalPtrs(rts, 0, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.Sfcn14.outputPortInfo
          [0]);
        _ssSetNumOutputPorts(rts, 1);
        _ssSetPortInfo2ForOutputUnits(rts,
          &boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.Sfcn14.outputPortUnits
          [0]);
        ssSetOutputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForOutputCoSimAttribute(rts,
          &boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.Sfcn14.outputPortCoSimAttribute
          [0]);
        ssSetOutputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((real_T *)
            &boost_and_two_level__1_sm_controller_B.ConvertSinglefloatingpointFPG_c));
        }
      }

      /* path info */
      ssSetModelName(rts, "Convert \nSingle floating-point (FPGA) \nto double");
      ssSetPath(rts,
                "boost_and_two_level__1_sm_controller/SM_Controller/eHS1/eHSDrivers/addon_drivers_1/DataOut Driver/DataOut Format/DataOut Formatter/Reinterpreters/reinterpreter_8/Convert  Single floating-point (FPGA)  to double");
      ssSetRTModel(rts,boost_and_two_level__1_sm_controller_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* registration */
      sfun_SFP2DBL(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 2.0E-5);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 0;

      /* set compiled values of dynamic vector attributes */
      ssSetInputPortWidth(rts, 0, 1);
      ssSetInputPortDataType(rts, 0, SS_UINT32);
      ssSetInputPortComplexSignal(rts, 0, 0);
      ssSetInputPortFrameData(rts, 0, 0);
      ssSetInputPortUnit(rts, 0, 0);
      ssSetInputPortIsContinuousQuantity(rts, 0, 0);
      ssSetOutputPortWidth(rts, 0, 1);
      ssSetOutputPortDataType(rts, 0, SS_DOUBLE);
      ssSetOutputPortComplexSignal(rts, 0, 0);
      ssSetOutputPortFrameData(rts, 0, 0);
      ssSetOutputPortUnit(rts, 0, 0);
      ssSetOutputPortIsContinuousQuantity(rts, 0, 0);
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
    }

    /* Level2 S-Function Block: boost_and_two_level__1_sm_controller/<S45>/Convert  Single floating-point (FPGA)  to double (sfun_SFP2DBL) */
    {
      SimStruct *rts = boost_and_two_level__1_sm_controller_M->childSfunctions
        [15];

      /* timing info */
      time_T *sfcnPeriod =
        boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.Sfcn15.sfcnPeriod;
      time_T *sfcnOffset =
        boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.Sfcn15.sfcnOffset;
      int_T *sfcnTsMap =
        boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.Sfcn15.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts,
                         &boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.blkInfo2
                         [15]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.inputOutputPortInfo2
        [15]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, boost_and_two_level__1_sm_controller_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.methods2
                           [15]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.methods3
                           [15]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.methods4
                           [15]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.statesInfo2
                         [15]);
        ssSetPeriodicStatesInfo(rts,
          &boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.periodicStatesInfo
          [15]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.Sfcn15.inputPortInfo
          [0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.Sfcn15.inputPortUnits
          [0]);
        ssSetInputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.Sfcn15.inputPortCoSimAttribute
          [0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          uint32_T const **sfcnUPtrs = (uint32_T const **)
            &boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.Sfcn15.UPtrs0;
          sfcnUPtrs[0] = &boost_and_two_level__1_sm_controller_B.Saturation_m[8];
          ssSetInputPortSignalPtrs(rts, 0, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.Sfcn15.outputPortInfo
          [0]);
        _ssSetNumOutputPorts(rts, 1);
        _ssSetPortInfo2ForOutputUnits(rts,
          &boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.Sfcn15.outputPortUnits
          [0]);
        ssSetOutputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForOutputCoSimAttribute(rts,
          &boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.Sfcn15.outputPortCoSimAttribute
          [0]);
        ssSetOutputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((real_T *)
            &boost_and_two_level__1_sm_controller_B.ConvertSinglefloatingpointFPG_l));
        }
      }

      /* path info */
      ssSetModelName(rts, "Convert \nSingle floating-point (FPGA) \nto double");
      ssSetPath(rts,
                "boost_and_two_level__1_sm_controller/SM_Controller/eHS1/eHSDrivers/addon_drivers_1/DataOut Driver/DataOut Format/DataOut Formatter/Reinterpreters/reinterpreter_9/Convert  Single floating-point (FPGA)  to double");
      ssSetRTModel(rts,boost_and_two_level__1_sm_controller_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* registration */
      sfun_SFP2DBL(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 2.0E-5);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 0;

      /* set compiled values of dynamic vector attributes */
      ssSetInputPortWidth(rts, 0, 1);
      ssSetInputPortDataType(rts, 0, SS_UINT32);
      ssSetInputPortComplexSignal(rts, 0, 0);
      ssSetInputPortFrameData(rts, 0, 0);
      ssSetInputPortUnit(rts, 0, 0);
      ssSetInputPortIsContinuousQuantity(rts, 0, 0);
      ssSetOutputPortWidth(rts, 0, 1);
      ssSetOutputPortDataType(rts, 0, SS_DOUBLE);
      ssSetOutputPortComplexSignal(rts, 0, 0);
      ssSetOutputPortFrameData(rts, 0, 0);
      ssSetOutputPortUnit(rts, 0, 0);
      ssSetOutputPortIsContinuousQuantity(rts, 0, 0);
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
    }

    /* Level2 S-Function Block: boost_and_two_level__1_sm_controller/<S57>/S-Function (OP_SEND) */
    {
      SimStruct *rts = boost_and_two_level__1_sm_controller_M->childSfunctions
        [16];

      /* timing info */
      time_T *sfcnPeriod =
        boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.Sfcn16.sfcnPeriod;
      time_T *sfcnOffset =
        boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.Sfcn16.sfcnOffset;
      int_T *sfcnTsMap =
        boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.Sfcn16.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts,
                         &boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.blkInfo2
                         [16]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.inputOutputPortInfo2
        [16]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, boost_and_two_level__1_sm_controller_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.methods2
                           [16]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.methods3
                           [16]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.methods4
                           [16]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.statesInfo2
                         [16]);
        ssSetPeriodicStatesInfo(rts,
          &boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.periodicStatesInfo
          [16]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.Sfcn16.inputPortInfo
          [0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.Sfcn16.inputPortUnits
          [0]);
        ssSetInputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.Sfcn16.inputPortCoSimAttribute
          [0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.Sfcn16.UPtrs0;

          {
            int_T i1;
            const real_T *u0 = boost_and_two_level__1_sm_controller_B.Divide;
            for (i1=0; i1 < 8; i1++) {
              sfcnUPtrs[i1] = &u0[i1];
            }
          }

          ssSetInputPortSignalPtrs(rts, 0, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 8);
        }
      }

      /* path info */
      ssSetModelName(rts, "S-Function");
      ssSetPath(rts,
                "boost_and_two_level__1_sm_controller/SM_Controller/rtlab_send_subsystem/Subsystem1/Send1/S-Function");
      ssSetRTModel(rts,boost_and_two_level__1_sm_controller_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.Sfcn16.params;
        ssSetSFcnParamsCount(rts, 1);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       boost_and_two_level__1_sm_controller_P.SFunction_P1_Size);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *)
                 &boost_and_two_level__1_sm_controller_DW.SFunction_IWORK[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.Sfcn16.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.Sfcn16.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 5);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0,
                   &boost_and_two_level__1_sm_controller_DW.SFunction_IWORK[0]);
      }

      /* registration */
      OP_SEND(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 2.0E-5);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 0;

      /* set compiled values of dynamic vector attributes */
      ssSetInputPortWidth(rts, 0, 8);
      ssSetInputPortDataType(rts, 0, SS_DOUBLE);
      ssSetInputPortComplexSignal(rts, 0, 0);
      ssSetInputPortFrameData(rts, 0, 0);
      ssSetInputPortUnit(rts, 0, 0);
      ssSetInputPortIsContinuousQuantity(rts, 0, 0);
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
    }

    /* Level2 S-Function Block: boost_and_two_level__1_sm_controller/<S13>/S-Function (RECV_Param) */
    {
      SimStruct *rts = boost_and_two_level__1_sm_controller_M->childSfunctions
        [17];

      /* timing info */
      time_T *sfcnPeriod =
        boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.Sfcn17.sfcnPeriod;
      time_T *sfcnOffset =
        boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.Sfcn17.sfcnOffset;
      int_T *sfcnTsMap =
        boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.Sfcn17.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts,
                         &boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.blkInfo2
                         [17]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.inputOutputPortInfo2
        [17]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, boost_and_two_level__1_sm_controller_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.methods2
                           [17]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.methods3
                           [17]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.methods4
                           [17]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.statesInfo2
                         [17]);
        ssSetPeriodicStatesInfo(rts,
          &boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.periodicStatesInfo
          [17]);
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.Sfcn17.outputPortInfo
          [0]);
        _ssSetNumOutputPorts(rts, 1);
        _ssSetPortInfo2ForOutputUnits(rts,
          &boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.Sfcn17.outputPortUnits
          [0]);
        ssSetOutputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForOutputCoSimAttribute(rts,
          &boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.Sfcn17.outputPortCoSimAttribute
          [0]);
        ssSetOutputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 9);
          ssSetOutputPortSignal(rts, 0, ((real_T *)
            boost_and_two_level__1_sm_controller_B.SFunction_g));
        }
      }

      /* path info */
      ssSetModelName(rts, "S-Function");
      ssSetPath(rts,
                "boost_and_two_level__1_sm_controller/SM_Controller/OpComm/Receive/S-Function");
      ssSetRTModel(rts,boost_and_two_level__1_sm_controller_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.Sfcn17.params;
        ssSetSFcnParamsCount(rts, 2);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       boost_and_two_level__1_sm_controller_P.SFunction_P1_Size_b);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       boost_and_two_level__1_sm_controller_P.SFunction_P2_Size);
      }

      /* registration */
      RECV_Param(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 2.0E-5);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 0;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);

      /* Update the BufferDstPort flags for each input port */
    }

    /* Level2 S-Function Block: boost_and_two_level__1_sm_controller/<S7>/PWM Out (sfun_op7160ex1_pwm_out) */
    {
      SimStruct *rts = boost_and_two_level__1_sm_controller_M->childSfunctions
        [18];

      /* timing info */
      time_T *sfcnPeriod =
        boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.Sfcn18.sfcnPeriod;
      time_T *sfcnOffset =
        boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.Sfcn18.sfcnOffset;
      int_T *sfcnTsMap =
        boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.Sfcn18.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts,
                         &boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.blkInfo2
                         [18]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.inputOutputPortInfo2
        [18]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, boost_and_two_level__1_sm_controller_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.methods2
                           [18]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.methods3
                           [18]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.methods4
                           [18]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.statesInfo2
                         [18]);
        ssSetPeriodicStatesInfo(rts,
          &boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.periodicStatesInfo
          [18]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 2);
        ssSetPortInfoForInputs(rts,
          &boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.Sfcn18.inputPortInfo
          [0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.Sfcn18.inputPortUnits
          [0]);
        ssSetInputPortUnit(rts, 0, 0);
        ssSetInputPortUnit(rts, 1, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.Sfcn18.inputPortCoSimAttribute
          [0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);
        ssSetInputPortIsContinuousQuantity(rts, 1, 0);

        /* port 0 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.Sfcn18.UPtrs0;
          sfcnUPtrs[0] = &boost_and_two_level__1_sm_controller_B.SFunction_g[3];
          sfcnUPtrs[1] = &boost_and_two_level__1_sm_controller_B.Gain_l[0];
          sfcnUPtrs[2] = &boost_and_two_level__1_sm_controller_B.Gain_l[1];
          sfcnUPtrs[3] = &boost_and_two_level__1_sm_controller_B.Gain_l[2];
          ssSetInputPortSignalPtrs(rts, 0, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 4);
        }

        /* port 1 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.Sfcn18.UPtrs1;
          sfcnUPtrs[0] = &boost_and_two_level__1_sm_controller_B.SFunction_g[4];
          sfcnUPtrs[1] =
            &boost_and_two_level__1_sm_controller_B.DataTypeConversion[0];
          sfcnUPtrs[2] =
            &boost_and_two_level__1_sm_controller_B.DataTypeConversion[1];
          sfcnUPtrs[3] =
            &boost_and_two_level__1_sm_controller_B.DataTypeConversion[2];
          ssSetInputPortSignalPtrs(rts, 1, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 1, 1);
          ssSetInputPortWidth(rts, 1, 4);
        }
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.Sfcn18.outputPortInfo
          [0]);
        _ssSetNumOutputPorts(rts, 1);
        _ssSetPortInfo2ForOutputUnits(rts,
          &boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.Sfcn18.outputPortUnits
          [0]);
        ssSetOutputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForOutputCoSimAttribute(rts,
          &boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.Sfcn18.outputPortCoSimAttribute
          [0]);
        ssSetOutputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((real_T *)
            &boost_and_two_level__1_sm_controller_B.PWMOut));
        }
      }

      /* path info */
      ssSetModelName(rts, "PWM Out");
      ssSetPath(rts,
                "boost_and_two_level__1_sm_controller/SM_Controller/Digital_Out/PWM Out");
      ssSetRTModel(rts,boost_and_two_level__1_sm_controller_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.Sfcn18.params;
        ssSetSFcnParamsCount(rts, 15);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       boost_and_two_level__1_sm_controller_P.PWMOut_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       boost_and_two_level__1_sm_controller_P.PWMOut_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       boost_and_two_level__1_sm_controller_P.PWMOut_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       boost_and_two_level__1_sm_controller_P.PWMOut_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)
                       boost_and_two_level__1_sm_controller_P.PWMOut_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)
                       boost_and_two_level__1_sm_controller_P.PWMOut_P6_Size);
        ssSetSFcnParam(rts, 6, (mxArray*)
                       boost_and_two_level__1_sm_controller_P.PWMOut_P7_Size);
        ssSetSFcnParam(rts, 7, (mxArray*)
                       boost_and_two_level__1_sm_controller_P.PWMOut_P8_Size);
        ssSetSFcnParam(rts, 8, (mxArray*)
                       boost_and_two_level__1_sm_controller_P.PWMOut_P9_Size);
        ssSetSFcnParam(rts, 9, (mxArray*)
                       boost_and_two_level__1_sm_controller_P.PWMOut_P10_Size);
        ssSetSFcnParam(rts, 10, (mxArray*)
                       boost_and_two_level__1_sm_controller_P.PWMOut_P11_Size);
        ssSetSFcnParam(rts, 11, (mxArray*)
                       boost_and_two_level__1_sm_controller_P.PWMOut_P12_Size);
        ssSetSFcnParam(rts, 12, (mxArray*)
                       boost_and_two_level__1_sm_controller_P.PWMOut_P13_Size);
        ssSetSFcnParam(rts, 13, (mxArray*)
                       boost_and_two_level__1_sm_controller_P.PWMOut_P14_Size);
        ssSetSFcnParam(rts, 14, (mxArray*)
                       boost_and_two_level__1_sm_controller_P.PWMOut_P15_Size);
      }

      /* work vectors */
      ssSetPWork(rts, (void **)
                 &boost_and_two_level__1_sm_controller_DW.PWMOut_PWORK);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.Sfcn18.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.Sfcn18.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* PWORK */
        ssSetDWorkWidth(rts, 0, 1);
        ssSetDWorkDataType(rts, 0,SS_POINTER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &boost_and_two_level__1_sm_controller_DW.PWMOut_PWORK);
      }

      /* registration */
      sfun_op7160ex1_pwm_out(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 2.0E-5);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 0;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);
      _ssSetInputPortConnected(rts, 1, 1);
      _ssSetOutputPortConnected(rts, 0, 0);
      _ssSetOutputPortBeingMerged(rts, 0, 0);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
      ssSetInputPortBufferDstPort(rts, 1, -1);
    }

    /* Level2 S-Function Block: boost_and_two_level__1_sm_controller/<S49>/datain (sfun_fct_op7160ex1_send) */
    {
      SimStruct *rts = boost_and_two_level__1_sm_controller_M->childSfunctions
        [19];

      /* timing info */
      time_T *sfcnPeriod =
        boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.Sfcn19.sfcnPeriod;
      time_T *sfcnOffset =
        boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.Sfcn19.sfcnOffset;
      int_T *sfcnTsMap =
        boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.Sfcn19.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts,
                         &boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.blkInfo2
                         [19]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.inputOutputPortInfo2
        [19]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, boost_and_two_level__1_sm_controller_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.methods2
                           [19]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.methods3
                           [19]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.methods4
                           [19]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.statesInfo2
                         [19]);
        ssSetPeriodicStatesInfo(rts,
          &boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.periodicStatesInfo
          [19]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.Sfcn19.inputPortInfo
          [0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.Sfcn19.inputPortUnits
          [0]);
        ssSetInputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.Sfcn19.inputPortCoSimAttribute
          [0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          ssSetInputPortRequiredContiguous(rts, 0, 1);
          ssSetInputPortSignal(rts, 0,
                               &boost_and_two_level__1_sm_controller_B.Sum_i);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.Sfcn19.outputPortInfo
          [0]);
        _ssSetNumOutputPorts(rts, 1);
        _ssSetPortInfo2ForOutputUnits(rts,
          &boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.Sfcn19.outputPortUnits
          [0]);
        ssSetOutputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForOutputCoSimAttribute(rts,
          &boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.Sfcn19.outputPortCoSimAttribute
          [0]);
        ssSetOutputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((real_T *)
            &boost_and_two_level__1_sm_controller_B.datain));
        }
      }

      /* path info */
      ssSetModelName(rts, "datain");
      ssSetPath(rts,
                "boost_and_two_level__1_sm_controller/SM_Controller/eHS1/eHSDrivers/addon_drivers_1/Gate Driver/ehsCpuGates/gates/send8Gates_00/datain");
      ssSetRTModel(rts,boost_and_two_level__1_sm_controller_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.Sfcn19.params;
        ssSetSFcnParamsCount(rts, 8);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       boost_and_two_level__1_sm_controller_P.datain_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       boost_and_two_level__1_sm_controller_P.datain_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       boost_and_two_level__1_sm_controller_P.datain_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       boost_and_two_level__1_sm_controller_P.datain_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)
                       boost_and_two_level__1_sm_controller_P.datain_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)
                       boost_and_two_level__1_sm_controller_P.datain_P6_Size);
        ssSetSFcnParam(rts, 6, (mxArray*)
                       boost_and_two_level__1_sm_controller_P.datain_P7_Size);
        ssSetSFcnParam(rts, 7, (mxArray*)
                       boost_and_two_level__1_sm_controller_P.datain_P8_Size);
      }

      /* work vectors */
      ssSetPWork(rts, (void **)
                 &boost_and_two_level__1_sm_controller_DW.datain_PWORK);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.Sfcn19.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.Sfcn19.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* PWORK */
        ssSetDWorkWidth(rts, 0, 1);
        ssSetDWorkDataType(rts, 0,SS_POINTER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &boost_and_two_level__1_sm_controller_DW.datain_PWORK);
      }

      /* registration */
      sfun_fct_op7160ex1_send(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 2.0E-5);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 0;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);
      _ssSetOutputPortConnected(rts, 0, 0);
      _ssSetOutputPortBeingMerged(rts, 0, 0);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
    }

    /* Level2 S-Function Block: boost_and_two_level__1_sm_controller/<S22>/LoadIn (sfun_efs_solver_cfg) */
    {
      SimStruct *rts = boost_and_two_level__1_sm_controller_M->childSfunctions
        [20];

      /* timing info */
      time_T *sfcnPeriod =
        boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.Sfcn20.sfcnPeriod;
      time_T *sfcnOffset =
        boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.Sfcn20.sfcnOffset;
      int_T *sfcnTsMap =
        boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.Sfcn20.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts,
                         &boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.blkInfo2
                         [20]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.inputOutputPortInfo2
        [20]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, boost_and_two_level__1_sm_controller_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.methods2
                           [20]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.methods3
                           [20]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.methods4
                           [20]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.statesInfo2
                         [20]);
        ssSetPeriodicStatesInfo(rts,
          &boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.periodicStatesInfo
          [20]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 2);
        ssSetPortInfoForInputs(rts,
          &boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.Sfcn20.inputPortInfo
          [0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.Sfcn20.inputPortUnits
          [0]);
        ssSetInputPortUnit(rts, 0, 0);
        ssSetInputPortUnit(rts, 1, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.Sfcn20.inputPortCoSimAttribute
          [0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);
        ssSetInputPortIsContinuousQuantity(rts, 1, 0);

        /* port 0 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.Sfcn20.UPtrs0;
          sfcnUPtrs[0] = &boost_and_two_level__1_sm_controller_B.Constant2;
          ssSetInputPortSignalPtrs(rts, 0, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }

        /* port 1 */
        {
          uint32_T const **sfcnUPtrs = (uint32_T const **)
            &boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.Sfcn20.UPtrs1;

          {
            int_T i1;
            const uint32_T *u1 =
              boost_and_two_level__1_sm_controller_B.Constant5;
            for (i1=0; i1 < 10; i1++) {
              sfcnUPtrs[i1] = &u1[i1];
            }
          }

          ssSetInputPortSignalPtrs(rts, 1, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 1, 1);
          ssSetInputPortWidth(rts, 1, 10);
        }
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.Sfcn20.outputPortInfo
          [0]);
        _ssSetNumOutputPorts(rts, 1);
        _ssSetPortInfo2ForOutputUnits(rts,
          &boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.Sfcn20.outputPortUnits
          [0]);
        ssSetOutputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForOutputCoSimAttribute(rts,
          &boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.Sfcn20.outputPortCoSimAttribute
          [0]);
        ssSetOutputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((real_T *)
            &boost_and_two_level__1_sm_controller_B.LoadIn));
        }
      }

      /* path info */
      ssSetModelName(rts, "LoadIn");
      ssSetPath(rts,
                "boost_and_two_level__1_sm_controller/SM_Controller/eHS1/eHSDrivers/addon_drivers_1/LoadIn Driver/LoadIn");
      ssSetRTModel(rts,boost_and_two_level__1_sm_controller_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.Sfcn20.params;
        ssSetSFcnParamsCount(rts, 3);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       boost_and_two_level__1_sm_controller_P.LoadIn_P1_Size_a);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       boost_and_two_level__1_sm_controller_P.LoadIn_P2_Size_j);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       boost_and_two_level__1_sm_controller_P.LoadIn_P3_Size_f);
      }

      /* work vectors */
      ssSetPWork(rts, (void **)
                 &boost_and_two_level__1_sm_controller_DW.LoadIn_PWORK[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.Sfcn20.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.Sfcn20.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* PWORK */
        ssSetDWorkWidth(rts, 0, 2);
        ssSetDWorkDataType(rts, 0,SS_POINTER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0,
                   &boost_and_two_level__1_sm_controller_DW.LoadIn_PWORK[0]);
      }

      /* registration */
      sfun_efs_solver_cfg(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 2.0E-5);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 0;

      /* set compiled values of dynamic vector attributes */
      ssSetInputPortWidth(rts, 1, 10);
      ssSetInputPortDataType(rts, 1, SS_UINT32);
      ssSetInputPortComplexSignal(rts, 1, 0);
      ssSetInputPortFrameData(rts, 1, 0);
      ssSetInputPortUnit(rts, 1, 0);
      ssSetInputPortIsContinuousQuantity(rts, 1, 0);
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);
      _ssSetInputPortConnected(rts, 1, 1);
      _ssSetOutputPortConnected(rts, 0, 0);
      _ssSetOutputPortBeingMerged(rts, 0, 0);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
      ssSetInputPortBufferDstPort(rts, 1, -1);
    }

    /* Level2 S-Function Block: boost_and_two_level__1_sm_controller/<S2>/OpCtrl (sfun_ctrl_op7160ex1) */
    {
      SimStruct *rts = boost_and_two_level__1_sm_controller_M->childSfunctions
        [21];

      /* timing info */
      time_T *sfcnPeriod =
        boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.Sfcn21.sfcnPeriod;
      time_T *sfcnOffset =
        boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.Sfcn21.sfcnOffset;
      int_T *sfcnTsMap =
        boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.Sfcn21.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts,
                         &boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.blkInfo2
                         [21]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.inputOutputPortInfo2
        [21]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, boost_and_two_level__1_sm_controller_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.methods2
                           [21]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.methods3
                           [21]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.methods4
                           [21]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.statesInfo2
                         [21]);
        ssSetPeriodicStatesInfo(rts,
          &boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.periodicStatesInfo
          [21]);
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.Sfcn21.outputPortInfo
          [0]);
        _ssSetNumOutputPorts(rts, 2);
        _ssSetPortInfo2ForOutputUnits(rts,
          &boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.Sfcn21.outputPortUnits
          [0]);
        ssSetOutputPortUnit(rts, 0, 0);
        ssSetOutputPortUnit(rts, 1, 0);
        _ssSetPortInfo2ForOutputCoSimAttribute(rts,
          &boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.Sfcn21.outputPortCoSimAttribute
          [0]);
        ssSetOutputPortIsContinuousQuantity(rts, 0, 0);
        ssSetOutputPortIsContinuousQuantity(rts, 1, 0);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((real_T *)
            &boost_and_two_level__1_sm_controller_B.OpCtrl_o1));
        }

        /* port 1 */
        {
          _ssSetOutputPortNumDimensions(rts, 1, 1);
          ssSetOutputPortWidth(rts, 1, 8);
          ssSetOutputPortSignal(rts, 1, ((real_T *)
            boost_and_two_level__1_sm_controller_B.OpCtrl_o2));
        }
      }

      /* path info */
      ssSetModelName(rts, "OpCtrl");
      ssSetPath(rts, "boost_and_two_level__1_sm_controller/SM_Controller/OpCtrl");
      ssSetRTModel(rts,boost_and_two_level__1_sm_controller_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.Sfcn21.params;
        ssSetSFcnParamsCount(rts, 15);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       boost_and_two_level__1_sm_controller_P.OpCtrl_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       boost_and_two_level__1_sm_controller_P.OpCtrl_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       boost_and_two_level__1_sm_controller_P.OpCtrl_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       boost_and_two_level__1_sm_controller_P.OpCtrl_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)
                       boost_and_two_level__1_sm_controller_P.OpCtrl_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)
                       boost_and_two_level__1_sm_controller_P.OpCtrl_P6_Size);
        ssSetSFcnParam(rts, 6, (mxArray*)
                       boost_and_two_level__1_sm_controller_P.OpCtrl_P7_Size);
        ssSetSFcnParam(rts, 7, (mxArray*)
                       boost_and_two_level__1_sm_controller_P.OpCtrl_P8_Size);
        ssSetSFcnParam(rts, 8, (mxArray*)
                       boost_and_two_level__1_sm_controller_P.OpCtrl_P9_Size);
        ssSetSFcnParam(rts, 9, (mxArray*)
                       boost_and_two_level__1_sm_controller_P.OpCtrl_P10_Size);
        ssSetSFcnParam(rts, 10, (mxArray*)
                       boost_and_two_level__1_sm_controller_P.OpCtrl_P11_Size);
        ssSetSFcnParam(rts, 11, (mxArray*)
                       boost_and_two_level__1_sm_controller_P.OpCtrl_P12_Size);
        ssSetSFcnParam(rts, 12, (mxArray*)
                       boost_and_two_level__1_sm_controller_P.OpCtrl_P13_Size);
        ssSetSFcnParam(rts, 13, (mxArray*)
                       boost_and_two_level__1_sm_controller_P.OpCtrl_P14_Size);
        ssSetSFcnParam(rts, 14, (mxArray*)
                       boost_and_two_level__1_sm_controller_P.OpCtrl_P15_Size);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *)
                 &boost_and_two_level__1_sm_controller_DW.OpCtrl_IWORK);
      ssSetPWork(rts, (void **)
                 &boost_and_two_level__1_sm_controller_DW.OpCtrl_PWORK);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.Sfcn21.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.Sfcn21.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 2);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 1);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &boost_and_two_level__1_sm_controller_DW.OpCtrl_IWORK);

        /* PWORK */
        ssSetDWorkWidth(rts, 1, 1);
        ssSetDWorkDataType(rts, 1,SS_POINTER);
        ssSetDWorkComplexSignal(rts, 1, 0);
        ssSetDWork(rts, 1, &boost_and_two_level__1_sm_controller_DW.OpCtrl_PWORK);
      }

      /* registration */
      sfun_ctrl_op7160ex1(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 2.0E-5);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 0;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetOutputPortConnected(rts, 0, 0);
      _ssSetOutputPortConnected(rts, 1, 0);
      _ssSetOutputPortBeingMerged(rts, 0, 0);
      _ssSetOutputPortBeingMerged(rts, 1, 0);

      /* Update the BufferDstPort flags for each input port */
    }

    /* Level2 S-Function Block: boost_and_two_level__1_sm_controller/<S4>/OpTrigger (optrigger) */
    {
      SimStruct *rts = boost_and_two_level__1_sm_controller_M->childSfunctions
        [22];

      /* timing info */
      time_T *sfcnPeriod =
        boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.Sfcn22.sfcnPeriod;
      time_T *sfcnOffset =
        boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.Sfcn22.sfcnOffset;
      int_T *sfcnTsMap =
        boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.Sfcn22.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts,
                         &boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.blkInfo2
                         [22]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.inputOutputPortInfo2
        [22]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, boost_and_two_level__1_sm_controller_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.methods2
                           [22]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.methods3
                           [22]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.methods4
                           [22]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.statesInfo2
                         [22]);
        ssSetPeriodicStatesInfo(rts,
          &boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.periodicStatesInfo
          [22]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 2);
        ssSetPortInfoForInputs(rts,
          &boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.Sfcn22.inputPortInfo
          [0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.Sfcn22.inputPortUnits
          [0]);
        ssSetInputPortUnit(rts, 0, 0);
        ssSetInputPortUnit(rts, 1, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.Sfcn22.inputPortCoSimAttribute
          [0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);
        ssSetInputPortIsContinuousQuantity(rts, 1, 0);

        /* port 0 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.Sfcn22.UPtrs0;
          sfcnUPtrs[0] = &boost_and_two_level__1_sm_controller_B.Step;
          ssSetInputPortSignalPtrs(rts, 0, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }

        /* port 1 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.Sfcn22.UPtrs1;
          sfcnUPtrs[0] = &boost_and_two_level__1_sm_controller_B.Constant;
          ssSetInputPortSignalPtrs(rts, 1, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 1, 1);
          ssSetInputPortWidth(rts, 1, 1);
        }
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.Sfcn22.outputPortInfo
          [0]);
        _ssSetNumOutputPorts(rts, 1);
        _ssSetPortInfo2ForOutputUnits(rts,
          &boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.Sfcn22.outputPortUnits
          [0]);
        ssSetOutputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForOutputCoSimAttribute(rts,
          &boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.Sfcn22.outputPortCoSimAttribute
          [0]);
        ssSetOutputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((real_T *)
            &boost_and_two_level__1_sm_controller_B.OpTrigger));
        }
      }

      /* path info */
      ssSetModelName(rts, "OpTrigger");
      ssSetPath(rts,
                "boost_and_two_level__1_sm_controller/SM_Controller/Acquisition Trigger/OpTrigger");
      ssSetRTModel(rts,boost_and_two_level__1_sm_controller_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.Sfcn22.params;
        ssSetSFcnParamsCount(rts, 3);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       boost_and_two_level__1_sm_controller_P.OpTrigger_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       boost_and_two_level__1_sm_controller_P.OpTrigger_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       boost_and_two_level__1_sm_controller_P.OpTrigger_P3_Size);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *)
                 &boost_and_two_level__1_sm_controller_DW.OpTrigger_IWORK[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.Sfcn22.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &boost_and_two_level__1_sm_controller_M->NonInlinedSFcns.Sfcn22.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 5);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0,
                   &boost_and_two_level__1_sm_controller_DW.OpTrigger_IWORK[0]);
      }

      /* registration */
      optrigger(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 2.0E-5);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 0;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);
      _ssSetInputPortConnected(rts, 1, 1);
      _ssSetOutputPortConnected(rts, 0, 0);
      _ssSetOutputPortBeingMerged(rts, 0, 0);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
      ssSetInputPortBufferDstPort(rts, 1, -1);
    }
  }

  /* Initialize Sizes */
  boost_and_two_level__1_sm_controller_M->Sizes.numContStates = (0);/* Number of continuous states */
  boost_and_two_level__1_sm_controller_M->Sizes.numY = (0);/* Number of model outputs */
  boost_and_two_level__1_sm_controller_M->Sizes.numU = (0);/* Number of model inputs */
  boost_and_two_level__1_sm_controller_M->Sizes.sysDirFeedThru = (0);/* The model is not direct feedthrough */
  boost_and_two_level__1_sm_controller_M->Sizes.numSampTimes = (1);/* Number of sample times */
  boost_and_two_level__1_sm_controller_M->Sizes.numBlocks = (94);/* Number of blocks */
  boost_and_two_level__1_sm_controller_M->Sizes.numBlockIO = (76);/* Number of block outputs */
  boost_and_two_level__1_sm_controller_M->Sizes.numBlockPrms = (445);/* Sum of parameter "widths" */
  return boost_and_two_level__1_sm_controller_M;
}

/*========================================================================*
 * End of Classic call interface                                          *
 *========================================================================*/
