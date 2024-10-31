/*
 * builtin_typeid_types.h
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

#ifndef BUILTIN_TYPEID_TYPES_H
#define BUILTIN_TYPEID_TYPES_H
#include "rtwtypes.h"
#ifndef BUILTIN_TYPEID_TYPES
#define BUILTIN_TYPEID_TYPES

/* Enumeration of built-in data types */
typedef enum {
  SS_DOUBLE = 0,                       /* real_T    */
  SS_SINGLE = 1,                       /* real32_T  */
  SS_INT8 = 2,                         /* int8_T    */
  SS_UINT8 = 3,                        /* uint8_T   */
  SS_INT16 = 4,                        /* int16_T   */
  SS_UINT16 = 5,                       /* uint16_T  */
  SS_INT32 = 6,                        /* int32_T   */
  SS_UINT32 = 7,                       /* uint32_T  */
  SS_BOOLEAN = 8                       /* boolean_T */
} BuiltInDTypeId;

#define SS_NUM_BUILT_IN_DTYPE          ((int_T)SS_BOOLEAN+1)

/* Enumeration for MAT-file logging code */
typedef int_T DTypeId;

#endif                                 /* BUILTIN_TYPEID_TYPES */
#endif                                 /* BUILTIN_TYPEID_TYPES_H */
