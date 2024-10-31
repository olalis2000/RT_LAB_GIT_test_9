/*
 * boost_and_two_level__1_sm_controller_data.c
 *
 * Third Party Support License -- for use only to support products
 * interfaced to MathWorks software under terms specified in your
 * company's restricted use license agreement.
 *
 * Code generation for model "boost_and_two_level__1_sm_controller".
 *
 * Model version              : 7.1
 * Simulink Coder version : 9.6 (R2021b) 14-May-2021
 * C source code generated on : Thu Oct 31 14:15:28 2024
 *
 * Target selection: rtlab_rtmodel.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Intel->x86-64 (Linux 64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "boost_and_two_level__1_sm_controller.h"
#include "boost_and_two_level__1_sm_controller_private.h"

/* Block parameters (default storage) */
P_boost_and_two_level__1_sm_controller_T boost_and_two_level__1_sm_controller_P =
{
  /* Variable: Inv_PWM_Phases
   * Referenced by:
   *   '<S6>/Three-phase Sine Wave' (Parameter: Phase)
   *   '<S12>/Three-phase Sine Wave' (Parameter: Phase)
   */
  { 0.0, -2.0943951023931953, 2.0943951023931953 },

  /* Variable: Ts
   * Referenced by: '<S11>/Adder_Gain' (Parameter: Gain)
   */
  2.0E-5,

  /* Mask Parameter: CompareToConstant_const
   * Referenced by: '<S55>/Constant' (Parameter: Value)
   */
  1.0,

  /* Mask Parameter: DataInDriver_isConfigured
   * Referenced by: '<S19>/enable dataIn' (Parameter: Value)
   */
  1.0,

  /* Mask Parameter: forceResetSolverBit_BitMask
   * Referenced by: '<S51>/forceResetSolverBit' (Parameter: BitMask)
   */
  1U,

  /* Mask Parameter: DetectChange_vinit
   * Referenced by: '<S54>/Delay Input1' (Parameter: InitialCondition)
   */
  0U,

  /* Expression: [1 1 1 1]
   * Referenced by: '<S25>/FormatingGains' (Parameter: Gain)
   */
  { 1.0, 1.0, 1.0, 1.0 },

  /* Expression: [1.79769313486232e+308 1.79769313486232e+308 1.79769313486232e+308 1.79769313486232e+308]
   * Referenced by: '<S25>/Saturation' (Parameter: UpperLimit)
   */
  { 0.0, 0.0, 0.0, 0.0 },

  /* Expression: [-1.79769313486232e+308 -1.79769313486232e+308 -1.79769313486232e+308 -1.79769313486232e+308]
   * Referenced by: '<S25>/Saturation' (Parameter: LowerLimit)
   */
  { 0.0, 0.0, 0.0, 0.0 },

  /* Computed Parameter: DataInSend_P1_Size
   * Referenced by: '<S26>/DataIn Send' (Parameter: P1Size)
   */
  { 1.0, 6.0 },

  /* Computed Parameter: DataInSend_P1
   * Referenced by: '<S26>/DataIn Send' (Parameter: P1)
   */
  { 79.0, 112.0, 67.0, 116.0, 114.0, 108.0 },

  /* Computed Parameter: DataInSend_P2_Size
   * Referenced by: '<S26>/DataIn Send' (Parameter: P2Size)
   */
  { 1.0, 1.0 },

  /* Expression: FcnNos
   * Referenced by: '<S26>/DataIn Send' (Parameter: P2)
   */
  1.0,

  /* Computed Parameter: DataInSend_P3_Size
   * Referenced by: '<S26>/DataIn Send' (Parameter: P3Size)
   */
  { 1.0, 1.0 },

  /* Expression: width
   * Referenced by: '<S26>/DataIn Send' (Parameter: P3)
   */
  4.0,

  /* Computed Parameter: DataInSend_P4_Size
   * Referenced by: '<S26>/DataIn Send' (Parameter: P4Size)
   */
  { 1.0, 1.0 },

  /* Expression: portType
   * Referenced by: '<S26>/DataIn Send' (Parameter: P4)
   */
  2.0,

  /* Computed Parameter: DataInSend_P5_Size
   * Referenced by: '<S26>/DataIn Send' (Parameter: P5Size)
   */
  { 1.0, 1.0 },

  /* Expression: checkVersion
   * Referenced by: '<S26>/DataIn Send' (Parameter: P5)
   */
  0.0,

  /* Computed Parameter: DataInSend_P6_Size
   * Referenced by: '<S26>/DataIn Send' (Parameter: P6Size)
   */
  { 1.0, 1.0 },

  /* Expression: expectedId
   * Referenced by: '<S26>/DataIn Send' (Parameter: P6)
   */
  0.0,

  /* Computed Parameter: DataInSend_P7_Size
   * Referenced by: '<S26>/DataIn Send' (Parameter: P7Size)
   */
  { 1.0, 1.0 },

  /* Expression: expectedVersion
   * Referenced by: '<S26>/DataIn Send' (Parameter: P7)
   */
  0.0,

  /* Computed Parameter: DataInSend_P8_Size
   * Referenced by: '<S26>/DataIn Send' (Parameter: P8Size)
   */
  { 1.0, 1.0 },

  /* Expression: opComp
   * Referenced by: '<S26>/DataIn Send' (Parameter: P8)
   */
  1.0,

  /* Expression: 0
   * Referenced by: '<S25>/Constant' (Parameter: Value)
   */
  0.0,

  /* Computed Parameter: LoadIn_P1_Size
   * Referenced by: '<S52>/LoadIn' (Parameter: P1Size)
   */
  { 1.0, 6.0 },

  /* Computed Parameter: LoadIn_P1
   * Referenced by: '<S52>/LoadIn' (Parameter: P1)
   */
  { 79.0, 112.0, 67.0, 116.0, 114.0, 108.0 },

  /* Computed Parameter: LoadIn_P2_Size
   * Referenced by: '<S52>/LoadIn' (Parameter: P2Size)
   */
  { 1.0, 1.0 },

  /* Expression: FcnNos
   * Referenced by: '<S52>/LoadIn' (Parameter: P2)
   */
  2.0,

  /* Computed Parameter: LoadIn_P3_Size
   * Referenced by: '<S52>/LoadIn' (Parameter: P3Size)
   */
  { 1.0, 1.0 },

  /* Expression: width
   * Referenced by: '<S52>/LoadIn' (Parameter: P3)
   */
  1.0,

  /* Computed Parameter: LoadIn_P4_Size
   * Referenced by: '<S52>/LoadIn' (Parameter: P4Size)
   */
  { 1.0, 1.0 },

  /* Expression: portType
   * Referenced by: '<S52>/LoadIn' (Parameter: P4)
   */
  2.0,

  /* Expression: 0
   * Referenced by: '<S1>/S-Function1' (Parameter: Value)
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S1>/S-Function' (Parameter: InitialCondition)
   */
  0.0,

  /* Computed Parameter: DataOutRecv_P1_Size
   * Referenced by: '<S33>/DataOut Recv' (Parameter: P1Size)
   */
  { 1.0, 6.0 },

  /* Computed Parameter: DataOutRecv_P1
   * Referenced by: '<S33>/DataOut Recv' (Parameter: P1)
   */
  { 79.0, 112.0, 67.0, 116.0, 114.0, 108.0 },

  /* Computed Parameter: DataOutRecv_P2_Size
   * Referenced by: '<S33>/DataOut Recv' (Parameter: P2Size)
   */
  { 1.0, 1.0 },

  /* Expression: FcnNos
   * Referenced by: '<S33>/DataOut Recv' (Parameter: P2)
   */
  1.0,

  /* Computed Parameter: DataOutRecv_P3_Size
   * Referenced by: '<S33>/DataOut Recv' (Parameter: P3Size)
   */
  { 1.0, 1.0 },

  /* Expression: width
   * Referenced by: '<S33>/DataOut Recv' (Parameter: P3)
   */
  9.0,

  /* Computed Parameter: DataOutRecv_P4_Size
   * Referenced by: '<S33>/DataOut Recv' (Parameter: P4Size)
   */
  { 1.0, 1.0 },

  /* Expression: portType
   * Referenced by: '<S33>/DataOut Recv' (Parameter: P4)
   */
  2.0,

  /* Computed Parameter: DataOutRecv_P5_Size
   * Referenced by: '<S33>/DataOut Recv' (Parameter: P5Size)
   */
  { 1.0, 1.0 },

  /* Expression: sampleTime
   * Referenced by: '<S33>/DataOut Recv' (Parameter: P5)
   */
  -1.0,

  /* Computed Parameter: DataOutRecv_P6_Size
   * Referenced by: '<S33>/DataOut Recv' (Parameter: P6Size)
   */
  { 1.0, 1.0 },

  /* Expression: checkVersion
   * Referenced by: '<S33>/DataOut Recv' (Parameter: P6)
   */
  0.0,

  /* Computed Parameter: DataOutRecv_P7_Size
   * Referenced by: '<S33>/DataOut Recv' (Parameter: P7Size)
   */
  { 1.0, 1.0 },

  /* Expression: expectedId
   * Referenced by: '<S33>/DataOut Recv' (Parameter: P7)
   */
  0.0,

  /* Computed Parameter: DataOutRecv_P8_Size
   * Referenced by: '<S33>/DataOut Recv' (Parameter: P8Size)
   */
  { 1.0, 1.0 },

  /* Expression: expectedVersion
   * Referenced by: '<S33>/DataOut Recv' (Parameter: P8)
   */
  0.0,

  /* Computed Parameter: DataOutRecv_P9_Size
   * Referenced by: '<S33>/DataOut Recv' (Parameter: P9Size)
   */
  { 1.0, 1.0 },

  /* Expression: opComp
   * Referenced by: '<S33>/DataOut Recv' (Parameter: P9)
   */
  1.0,

  /* Expression: 0
   * Referenced by: '<S34>/Constant' (Parameter: Value)
   */
  0.0,

  /* Expression: [1 1 1 1 1 1 1 1 1]
   * Referenced by: '<S34>/FormatingGains' (Parameter: Gain)
   */
  { 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0 },

  /* Computed Parameter: SFunction_P1_Size
   * Referenced by: '<S57>/S-Function' (Parameter: P1Size)
   */
  { 1.0, 1.0 },

  /* Expression: Acqu_group
   * Referenced by: '<S57>/S-Function' (Parameter: P1)
   */
  1.0,

  /* Computed Parameter: SFunction_P1_Size_b
   * Referenced by: '<S13>/S-Function' (Parameter: P1Size)
   */
  { 1.0, 1.0 },

  /* Expression: Data_width
   * Referenced by: '<S13>/S-Function' (Parameter: P1)
   */
  9.0,

  /* Computed Parameter: SFunction_P2_Size
   * Referenced by: '<S13>/S-Function' (Parameter: P2Size)
   */
  { 9.0, 1.0 },

  /* Expression: InitialConditions
   * Referenced by: '<S13>/S-Function' (Parameter: P2)
   */
  { 100.0, 25.0, 1.0, 10000.0, 0.7, 55000.0, 50.0, 0.8, 0.00349065850398866 },

  /* Expression: 0.95
   * Referenced by: '<S12>/Saturation' (Parameter: UpperLimit)
   */
  0.95,

  /* Expression: 0.05
   * Referenced by: '<S12>/Saturation' (Parameter: LowerLimit)
   */
  0.05,

  /* Expression: 2*pi
   * Referenced by: '<S11>/Constant3' (Parameter: Value)
   */
  6.2831853071795862,

  /* Expression: 0
   * Referenced by: '<S11>/Memory' (Parameter: InitialCondition)
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S11>/Switch' (Parameter: Threshold)
   */
  0.0,

  /* Expression: 1
   * Referenced by: '<S12>/Three-phase Sine Wave' (Parameter: Amplitude)
   */
  1.0,

  /* Expression: 0
   * Referenced by: '<S12>/Three-phase Sine Wave' (Parameter: Bias)
   */
  0.0,

  /* Expression: 1
   * Referenced by: '<S12>/Three-phase Sine Wave' (Parameter: Frequency)
   */
  1.0,

  /* Expression: 0.5
   * Referenced by: '<S12>/Gain' (Parameter: Gain)
   */
  0.5,

  /* Expression: 0.5
   * Referenced by: '<S12>/Constant' (Parameter: Value)
   */
  0.5,

  /* Expression: ones(1,3)
   * Referenced by: '<S7>/Gain' (Parameter: Gain)
   */
  { 1.0, 1.0, 1.0 },

  /* Computed Parameter: PWMOut_P1_Size
   * Referenced by: '<S7>/PWM Out' (Parameter: P1Size)
   */
  { 1.0, 6.0 },

  /* Computed Parameter: PWMOut_P1
   * Referenced by: '<S7>/PWM Out' (Parameter: P1)
   */
  { 79.0, 112.0, 67.0, 116.0, 114.0, 108.0 },

  /* Computed Parameter: PWMOut_P2_Size
   * Referenced by: '<S7>/PWM Out' (Parameter: P2Size)
   */
  { 0.0, 0.0 },

  /* Computed Parameter: PWMOut_P3_Size
   * Referenced by: '<S7>/PWM Out' (Parameter: P3Size)
   */
  { 1.0, 1.0 },

  /* Expression: portNb
   * Referenced by: '<S7>/PWM Out' (Parameter: P3)
   */
  11.0,

  /* Computed Parameter: PWMOut_P4_Size
   * Referenced by: '<S7>/PWM Out' (Parameter: P4Size)
   */
  { 1.0, 1.0 },

  /* Expression: size
   * Referenced by: '<S7>/PWM Out' (Parameter: P4)
   */
  64.0,

  /* Computed Parameter: PWMOut_P5_Size
   * Referenced by: '<S7>/PWM Out' (Parameter: P5Size)
   */
  { 1.0, 1.0 },

  /* Expression: numchan
   * Referenced by: '<S7>/PWM Out' (Parameter: P5)
   */
  4.0,

  /* Computed Parameter: PWMOut_P6_Size
   * Referenced by: '<S7>/PWM Out' (Parameter: P6Size)
   */
  { 1.0, 1.0 },

  /* Expression: polarity
   * Referenced by: '<S7>/PWM Out' (Parameter: P6)
   */
  1.0,

  /* Computed Parameter: PWMOut_P7_Size
   * Referenced by: '<S7>/PWM Out' (Parameter: P7Size)
   */
  { 1.0, 1.0 },

  /* Expression: symMode
   * Referenced by: '<S7>/PWM Out' (Parameter: P7)
   */
  2.0,

  /* Computed Parameter: PWMOut_P8_Size
   * Referenced by: '<S7>/PWM Out' (Parameter: P8Size)
   */
  { 1.0, 1.0 },

  /* Expression: complementary
   * Referenced by: '<S7>/PWM Out' (Parameter: P8)
   */
  0.0,

  /* Computed Parameter: PWMOut_P9_Size
   * Referenced by: '<S7>/PWM Out' (Parameter: P9Size)
   */
  { 1.0, 4.0 },

  /* Expression: deadTime
   * Referenced by: '<S7>/PWM Out' (Parameter: P9)
   */
  { 0.0, 0.0, 0.0, 0.0 },

  /* Computed Parameter: PWMOut_P10_Size
   * Referenced by: '<S7>/PWM Out' (Parameter: P10Size)
   */
  { 1.0, 1.0 },

  /* Expression: loadnb
   * Referenced by: '<S7>/PWM Out' (Parameter: P10)
   */
  4.0,

  /* Computed Parameter: PWMOut_P11_Size
   * Referenced by: '<S7>/PWM Out' (Parameter: P11Size)
   */
  { 1.0, 1.0 },

  /* Expression: rtPhaseShiftEnabled
   * Referenced by: '<S7>/PWM Out' (Parameter: P11)
   */
  0.0,

  /* Computed Parameter: PWMOut_P12_Size
   * Referenced by: '<S7>/PWM Out' (Parameter: P12Size)
   */
  { 1.0, 1.0 },

  /* Expression: rtDeadTimeEnabled
   * Referenced by: '<S7>/PWM Out' (Parameter: P12)
   */
  0.0,

  /* Computed Parameter: PWMOut_P13_Size
   * Referenced by: '<S7>/PWM Out' (Parameter: P13Size)
   */
  { 1.0, 4.0 },

  /* Expression: initphase
   * Referenced by: '<S7>/PWM Out' (Parameter: P13)
   */
  { 0.0, 0.0, 0.0, 0.0 },

  /* Computed Parameter: PWMOut_P14_Size
   * Referenced by: '<S7>/PWM Out' (Parameter: P14Size)
   */
  { 1.0, 1.0 },

  /* Expression: maxcount
   * Referenced by: '<S7>/PWM Out' (Parameter: P14)
   */
  8.0,

  /* Computed Parameter: PWMOut_P15_Size
   * Referenced by: '<S7>/PWM Out' (Parameter: P15Size)
   */
  { 1.0, 1.0 },

  /* Expression: allowDisablingChannel
   * Referenced by: '<S7>/PWM Out' (Parameter: P15)
   */
  0.0,

  /* Expression: 1
   * Referenced by: '<S6>/Three-phase Sine Wave' (Parameter: Amplitude)
   */
  1.0,

  /* Expression: 0
   * Referenced by: '<S6>/Three-phase Sine Wave' (Parameter: Bias)
   */
  0.0,

  /* Expression: 1
   * Referenced by: '<S6>/Three-phase Sine Wave' (Parameter: Frequency)
   */
  1.0,

  /* Expression: 0
   * Referenced by: '<S16>/Memory' (Parameter: InitialCondition)
   */
  0.0,

  /* Expression: OrderedIndices
   * Referenced by: '<S16>/ParameterSetToIndexMap' (Parameter: Table)
   */
  { -1.0, 0.0 },

  /* Expression: OrderedList
   * Referenced by: '<S16>/ParameterSetToIndexMap' (Parameter: BreakpointsForDimension1)
   */
  { -1.0, 0.0 },

  /* Expression: 0
   * Referenced by: '<S2>/g1' (Parameter: Value)
   */
  0.0,

  /* Expression: 2.^[0:1:7]
   * Referenced by: '<S49>/shift' (Parameter: Gain)
   */
  { 1.0, 2.0, 4.0, 8.0, 16.0, 32.0, 64.0, 128.0 },

  /* Computed Parameter: datain_P1_Size
   * Referenced by: '<S49>/datain' (Parameter: P1Size)
   */
  { 1.0, 6.0 },

  /* Computed Parameter: datain_P1
   * Referenced by: '<S49>/datain' (Parameter: P1)
   */
  { 79.0, 112.0, 67.0, 116.0, 114.0, 108.0 },

  /* Computed Parameter: datain_P2_Size
   * Referenced by: '<S49>/datain' (Parameter: P2Size)
   */
  { 1.0, 1.0 },

  /* Expression: FcnNos
   * Referenced by: '<S49>/datain' (Parameter: P2)
   */
  2.0,

  /* Computed Parameter: datain_P3_Size
   * Referenced by: '<S49>/datain' (Parameter: P3Size)
   */
  { 1.0, 1.0 },

  /* Expression: width
   * Referenced by: '<S49>/datain' (Parameter: P3)
   */
  1.0,

  /* Computed Parameter: datain_P4_Size
   * Referenced by: '<S49>/datain' (Parameter: P4Size)
   */
  { 1.0, 1.0 },

  /* Expression: portType
   * Referenced by: '<S49>/datain' (Parameter: P4)
   */
  2.0,

  /* Computed Parameter: datain_P5_Size
   * Referenced by: '<S49>/datain' (Parameter: P5Size)
   */
  { 1.0, 1.0 },

  /* Expression: checkVersion
   * Referenced by: '<S49>/datain' (Parameter: P5)
   */
  0.0,

  /* Computed Parameter: datain_P6_Size
   * Referenced by: '<S49>/datain' (Parameter: P6Size)
   */
  { 1.0, 1.0 },

  /* Expression: expectedId
   * Referenced by: '<S49>/datain' (Parameter: P6)
   */
  0.0,

  /* Computed Parameter: datain_P7_Size
   * Referenced by: '<S49>/datain' (Parameter: P7Size)
   */
  { 1.0, 1.0 },

  /* Expression: expectedVersion
   * Referenced by: '<S49>/datain' (Parameter: P7)
   */
  0.0,

  /* Computed Parameter: datain_P8_Size
   * Referenced by: '<S49>/datain' (Parameter: P8Size)
   */
  { 1.0, 1.0 },

  /* Expression: opComp
   * Referenced by: '<S49>/datain' (Parameter: P8)
   */
  1.0,

  /* Expression: 0
   * Referenced by: '<S22>/Constant2' (Parameter: Value)
   */
  0.0,

  /* Computed Parameter: LoadIn_P1_Size_a
   * Referenced by: '<S22>/LoadIn' (Parameter: P1Size)
   */
  { 1.0, 6.0 },

  /* Computed Parameter: LoadIn_P1_n
   * Referenced by: '<S22>/LoadIn' (Parameter: P1)
   */
  { 79.0, 112.0, 67.0, 116.0, 114.0, 108.0 },

  /* Computed Parameter: LoadIn_P2_Size_j
   * Referenced by: '<S22>/LoadIn' (Parameter: P2Size)
   */
  { 1.0, 1.0 },

  /* Expression: fpga_port_in
   * Referenced by: '<S22>/LoadIn' (Parameter: P2)
   */
  1.0,

  /* Computed Parameter: LoadIn_P3_Size_f
   * Referenced by: '<S22>/LoadIn' (Parameter: P3Size)
   */
  { 1.0, 23.0 },

  /* Computed Parameter: LoadIn_P3_d
   * Referenced by: '<S22>/LoadIn' (Parameter: P3)
   */
  { 97.0, 100.0, 100.0, 111.0, 110.0, 95.0, 100.0, 114.0, 105.0, 118.0, 101.0,
    114.0, 115.0, 95.0, 49.0, 53.0, 53.0, 51.0, 49.0, 46.0, 109.0, 97.0, 116.0 },

  /* Expression: 0
   * Referenced by: '<S17>/IndexToParameterSet' (Parameter: Table)
   */
  0.0,

  /* Computed Parameter: OpCtrl_P1_Size
   * Referenced by: '<S2>/OpCtrl' (Parameter: P1Size)
   */
  { 1.0, 6.0 },

  /* Computed Parameter: OpCtrl_P1
   * Referenced by: '<S2>/OpCtrl' (Parameter: P1)
   */
  { 79.0, 112.0, 67.0, 116.0, 114.0, 108.0 },

  /* Computed Parameter: OpCtrl_P2_Size
   * Referenced by: '<S2>/OpCtrl' (Parameter: P2Size)
   */
  { 1.0, 1.0 },

  /* Expression: boardid
   * Referenced by: '<S2>/OpCtrl' (Parameter: P2)
   */
  0.0,

  /* Computed Parameter: OpCtrl_P3_Size
   * Referenced by: '<S2>/OpCtrl' (Parameter: P3Size)
   */
  { 1.0, 1.0 },

  /* Expression: mode
   * Referenced by: '<S2>/OpCtrl' (Parameter: P3)
   */
  1.0,

  /* Computed Parameter: OpCtrl_P4_Size
   * Referenced by: '<S2>/OpCtrl' (Parameter: P4Size)
   */
  { 1.0, 1.0 },

  /* Expression: externalClock
   * Referenced by: '<S2>/OpCtrl' (Parameter: P4)
   */
  0.0,

  /* Computed Parameter: OpCtrl_P5_Size
   * Referenced by: '<S2>/OpCtrl' (Parameter: P5Size)
   */
  { 1.0, 1.0 },

  /* Expression: decimRtsi
   * Referenced by: '<S2>/OpCtrl' (Parameter: P5)
   */
  0.0,

  /* Computed Parameter: OpCtrl_P6_Size
   * Referenced by: '<S2>/OpCtrl' (Parameter: P6Size)
   */
  { 1.0, 1.0 },

  /* Expression: 1
   * Referenced by: '<S2>/OpCtrl' (Parameter: P6)
   */
  1.0,

  /* Computed Parameter: OpCtrl_P7_Size
   * Referenced by: '<S2>/OpCtrl' (Parameter: P7Size)
   */
  { 1.0, 1.0 },

  /* Expression: SampleTime
   * Referenced by: '<S2>/OpCtrl' (Parameter: P7)
   */
  0.0,

  /* Computed Parameter: OpCtrl_P8_Size
   * Referenced by: '<S2>/OpCtrl' (Parameter: P8Size)
   */
  { 1.0, 1.0 },

  /* Expression: calibIO
   * Referenced by: '<S2>/OpCtrl' (Parameter: P8)
   */
  0.0,

  /* Computed Parameter: OpCtrl_P9_Size
   * Referenced by: '<S2>/OpCtrl' (Parameter: P9Size)
   */
  { 1.0, 1.0 },

  /* Expression: numconfig
   * Referenced by: '<S2>/OpCtrl' (Parameter: P9)
   */
  -1.0,

  /* Computed Parameter: OpCtrl_P10_Size
   * Referenced by: '<S2>/OpCtrl' (Parameter: P10Size)
   */
  { 1.0, 1.0 },

  /* Expression: loadinport
   * Referenced by: '<S2>/OpCtrl' (Parameter: P10)
   */
  -1.0,

  /* Computed Parameter: OpCtrl_P11_Size
   * Referenced by: '<S2>/OpCtrl' (Parameter: P11Size)
   */
  { 1.0, 1.0 },

  /* Expression: BoardType
   * Referenced by: '<S2>/OpCtrl' (Parameter: P11)
   */
  5.0,

  /* Computed Parameter: OpCtrl_P12_Size
   * Referenced by: '<S2>/OpCtrl' (Parameter: P12Size)
   */
  { 1.0, 1.0 },

  /* Expression: sync_type
   * Referenced by: '<S2>/OpCtrl' (Parameter: P12)
   */
  1.0,

  /* Computed Parameter: OpCtrl_P13_Size
   * Referenced by: '<S2>/OpCtrl' (Parameter: P13Size)
   */
  { 1.0, 1.0 },

  /* Expression: scope_enable
   * Referenced by: '<S2>/OpCtrl' (Parameter: P13)
   */
  0.0,

  /* Computed Parameter: OpCtrl_P14_Size
   * Referenced by: '<S2>/OpCtrl' (Parameter: P14Size)
   */
  { 1.0, 67.0 },

  /* Computed Parameter: OpCtrl_P14
   * Referenced by: '<S2>/OpCtrl' (Parameter: P14)
   */
  { 86.0, 67.0, 55.0, 48.0, 55.0, 95.0, 50.0, 45.0, 69.0, 88.0, 45.0, 48.0, 48.0,
    48.0, 49.0, 45.0, 51.0, 95.0, 54.0, 95.0, 48.0, 95.0, 56.0, 49.0, 56.0, 45.0,
    101.0, 72.0, 83.0, 120.0, 49.0, 50.0, 56.0, 95.0, 71.0, 101.0, 110.0, 52.0,
    95.0, 77.0, 97.0, 99.0, 104.0, 105.0, 110.0, 101.0, 115.0, 95.0, 73.0, 79.0,
    67.0, 111.0, 110.0, 102.0, 105.0, 103.0, 49.0, 45.0, 51.0, 53.0, 45.0, 54.0,
    49.0, 46.0, 102.0, 115.0, 100.0 },

  /* Computed Parameter: OpCtrl_P15_Size
   * Referenced by: '<S2>/OpCtrl' (Parameter: P15Size)
   */
  { 1.0, 1.0 },

  /* Expression: mismatch_disable
   * Referenced by: '<S2>/OpCtrl' (Parameter: P15)
   */
  0.0,

  /* Expression: .5
   * Referenced by: '<S4>/Constant' (Parameter: Value)
   */
  0.5,

  /* Expression: 0.5
   * Referenced by: '<S4>/Step' (Parameter: Time)
   */
  0.5,

  /* Expression: 0
   * Referenced by: '<S4>/Step' (Parameter: Before)
   */
  0.0,

  /* Expression: 1
   * Referenced by: '<S4>/Step' (Parameter: After)
   */
  1.0,

  /* Computed Parameter: OpTrigger_P1_Size
   * Referenced by: '<S4>/OpTrigger' (Parameter: P1Size)
   */
  { 1.0, 1.0 },

  /* Expression: Acq_Group
   * Referenced by: '<S4>/OpTrigger' (Parameter: P1)
   */
  1.0,

  /* Computed Parameter: OpTrigger_P2_Size
   * Referenced by: '<S4>/OpTrigger' (Parameter: P2Size)
   */
  { 1.0, 1.0 },

  /* Expression: Trig_Type
   * Referenced by: '<S4>/OpTrigger' (Parameter: P2)
   */
  4.0,

  /* Computed Parameter: OpTrigger_P3_Size
   * Referenced by: '<S4>/OpTrigger' (Parameter: P3Size)
   */
  { 1.0, 1.0 },

  /* Expression: Trig_Offset
   * Referenced by: '<S4>/OpTrigger' (Parameter: P3)
   */
  0.0,

  /* Computed Parameter: Saturation_UpperSat_n
   * Referenced by: '<S34>/Saturation' (Parameter: UpperLimit)
   */
  { 4294967295U, 4294967295U, 4294967295U, 4294967295U, 4294967295U, 4294967295U,
    4294967295U, 4294967295U, 0U },

  /* Computed Parameter: Saturation_LowerSat_k
   * Referenced by: '<S34>/Saturation' (Parameter: LowerLimit)
   */
  { 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U },

  /* Computed Parameter: Saturation_UpperSat_i
   * Referenced by: '<S35>/Saturation' (Parameter: UpperLimit)
   */
  65536U,

  /* Computed Parameter: Saturation_LowerSat_c
   * Referenced by: '<S35>/Saturation' (Parameter: LowerLimit)
   */
  1U,

  /* Computed Parameter: Constant_Value_k
   * Referenced by: '<S35>/Constant' (Parameter: Value)
   */
  { 1U, 0U },

  /* Computed Parameter: toogleload_Value
   * Referenced by: '<S49>/toogleload' (Parameter: Value)
   */
  1073741824U,

  /* Computed Parameter: lastdata_Value
   * Referenced by: '<S49>/lastdata' (Parameter: Value)
   */
  2147483648U,

  /* Computed Parameter: Constant5_Value
   * Referenced by: '<S22>/Constant5' (Parameter: Value)
   */
  { 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U },

  /* Computed Parameter: Constant_Value_ck
   * Referenced by: '<S50>/Constant' (Parameter: Value)
   */
  1U,

  /* Computed Parameter: DataStoreMemory_InitialValue
   * Referenced by: '<S23>/Data Store Memory' (Parameter: InitialValue)
   */
  0U
};
