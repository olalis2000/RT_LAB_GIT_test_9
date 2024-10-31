/*
 * boost_and_two_level__1_sm_controller_private.h
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

#ifndef RTW_HEADER_boost_and_two_level__1_sm_controller_private_h_
#define RTW_HEADER_boost_and_two_level__1_sm_controller_private_h_
#include "rtwtypes.h"
#include "builtin_typeid_types.h"
#include "multiword_types.h"
#include "zero_crossing_types.h"

extern uint32_T plook_u32d_bincka(real_T u, const real_T bp[], uint32_T maxIndex);
extern uint32_T binsearch_u32d(real_T u, const real_T bp[], uint32_T startIndex,
  uint32_T maxIndex);
extern void sfun_DBL2SFP(SimStruct *rts);
extern void sfun_fct_op7160ex1_send(SimStruct *rts);
extern void sfun_fct_op7160ex1_load_in(SimStruct *rts);
extern void sfun_fct_op7160ex1_recv(SimStruct *rts);
extern void sfun_SFP2DBL(SimStruct *rts);
extern void OP_SEND(SimStruct *rts);
extern void RECV_Param(SimStruct *rts);
extern void sfun_op7160ex1_pwm_out(SimStruct *rts);
extern void sfun_efs_solver_cfg(SimStruct *rts);
extern void sfun_ctrl_op7160ex1(SimStruct *rts);
extern void optrigger(SimStruct *rts);

#endif          /* RTW_HEADER_boost_and_two_level__1_sm_controller_private_h_ */
