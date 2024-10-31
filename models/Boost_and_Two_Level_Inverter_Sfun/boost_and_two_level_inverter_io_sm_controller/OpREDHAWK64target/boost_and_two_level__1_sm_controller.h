/*
 * boost_and_two_level__1_sm_controller.h
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

#ifndef RTW_HEADER_boost_and_two_level__1_sm_controller_h_
#define RTW_HEADER_boost_and_two_level__1_sm_controller_h_
#include <stddef.h>
#include <string.h>
#include <math.h>
#ifndef boost_and_two_level__1_sm_controller_COMMON_INCLUDES_
#define boost_and_two_level__1_sm_controller_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "zero_crossing_types.h"
#include "simstruc.h"
#include "fixedpoint.h"
#include "rt_logging.h"
#endif               /* boost_and_two_level__1_sm_controller_COMMON_INCLUDES_ */

#include "boost_and_two_level__1_sm_controller_types.h"

/* Shared type includes */
#include "multiword_types.h"
#include "rt_nonfinite.h"
#include "rtGetInf.h"
#include "rt_defines.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetBlockIO
#define rtmGetBlockIO(rtm)             ((rtm)->ModelData.blockIO)
#endif

#ifndef rtmSetBlockIO
#define rtmSetBlockIO(rtm, val)        ((rtm)->ModelData.blockIO = (val))
#endif

#ifndef rtmGetChecksums
#define rtmGetChecksums(rtm)           ((rtm)->Sizes.checksums)
#endif

#ifndef rtmSetChecksums
#define rtmSetChecksums(rtm, val)      ((rtm)->Sizes.checksums = (val))
#endif

#ifndef rtmGetConstBlockIO
#define rtmGetConstBlockIO(rtm)        ((rtm)->ModelData.constBlockIO)
#endif

#ifndef rtmSetConstBlockIO
#define rtmSetConstBlockIO(rtm, val)   ((rtm)->ModelData.constBlockIO = (val))
#endif

#ifndef rtmGetContStateDisabled
#define rtmGetContStateDisabled(rtm)   ((rtm)->ModelData.contStateDisabled)
#endif

#ifndef rtmSetContStateDisabled
#define rtmSetContStateDisabled(rtm, val) ((rtm)->ModelData.contStateDisabled = (val))
#endif

#ifndef rtmGetContStates
#define rtmGetContStates(rtm)          ((rtm)->ModelData.contStates)
#endif

#ifndef rtmSetContStates
#define rtmSetContStates(rtm, val)     ((rtm)->ModelData.contStates = (val))
#endif

#ifndef rtmGetContTimeOutputInconsistentWithStateAtMajorStepFlag
#define rtmGetContTimeOutputInconsistentWithStateAtMajorStepFlag(rtm) ((rtm)->ModelData.CTOutputIncnstWithState)
#endif

#ifndef rtmSetContTimeOutputInconsistentWithStateAtMajorStepFlag
#define rtmSetContTimeOutputInconsistentWithStateAtMajorStepFlag(rtm, val) ((rtm)->ModelData.CTOutputIncnstWithState = (val))
#endif

#ifndef rtmGetCtrlRateMdlRefTiming
#define rtmGetCtrlRateMdlRefTiming(rtm) ()
#endif

#ifndef rtmSetCtrlRateMdlRefTiming
#define rtmSetCtrlRateMdlRefTiming(rtm, val) ()
#endif

#ifndef rtmGetCtrlRateMdlRefTimingPtr
#define rtmGetCtrlRateMdlRefTimingPtr(rtm) ()
#endif

#ifndef rtmSetCtrlRateMdlRefTimingPtr
#define rtmSetCtrlRateMdlRefTimingPtr(rtm, val) ()
#endif

#ifndef rtmGetCtrlRateNumTicksToNextHit
#define rtmGetCtrlRateNumTicksToNextHit(rtm) ()
#endif

#ifndef rtmSetCtrlRateNumTicksToNextHit
#define rtmSetCtrlRateNumTicksToNextHit(rtm, val) ()
#endif

#ifndef rtmGetDataMapInfo
#define rtmGetDataMapInfo(rtm)         ()
#endif

#ifndef rtmSetDataMapInfo
#define rtmSetDataMapInfo(rtm, val)    ()
#endif

#ifndef rtmGetDefaultParam
#define rtmGetDefaultParam(rtm)        ((rtm)->ModelData.defaultParam)
#endif

#ifndef rtmSetDefaultParam
#define rtmSetDefaultParam(rtm, val)   ((rtm)->ModelData.defaultParam = (val))
#endif

#ifndef rtmGetDerivCacheNeedsReset
#define rtmGetDerivCacheNeedsReset(rtm) ((rtm)->ModelData.derivCacheNeedsReset)
#endif

#ifndef rtmSetDerivCacheNeedsReset
#define rtmSetDerivCacheNeedsReset(rtm, val) ((rtm)->ModelData.derivCacheNeedsReset = (val))
#endif

#ifndef rtmGetDirectFeedThrough
#define rtmGetDirectFeedThrough(rtm)   ((rtm)->Sizes.sysDirFeedThru)
#endif

#ifndef rtmSetDirectFeedThrough
#define rtmSetDirectFeedThrough(rtm, val) ((rtm)->Sizes.sysDirFeedThru = (val))
#endif

#ifndef rtmGetErrorStatusFlag
#define rtmGetErrorStatusFlag(rtm)     ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatusFlag
#define rtmSetErrorStatusFlag(rtm, val) ((rtm)->errorStatus = (val))
#endif

#ifndef rtmGetFinalTime
#define rtmGetFinalTime(rtm)           ((rtm)->Timing.tFinal)
#endif

#ifndef rtmSetFinalTime
#define rtmSetFinalTime(rtm, val)      ((rtm)->Timing.tFinal = (val))
#endif

#ifndef rtmGetFirstInitCondFlag
#define rtmGetFirstInitCondFlag(rtm)   ()
#endif

#ifndef rtmSetFirstInitCondFlag
#define rtmSetFirstInitCondFlag(rtm, val) ()
#endif

#ifndef rtmGetIntgData
#define rtmGetIntgData(rtm)            ()
#endif

#ifndef rtmSetIntgData
#define rtmSetIntgData(rtm, val)       ()
#endif

#ifndef rtmGetMdlRefGlobalRuntimeEventIndices
#define rtmGetMdlRefGlobalRuntimeEventIndices(rtm) ()
#endif

#ifndef rtmSetMdlRefGlobalRuntimeEventIndices
#define rtmSetMdlRefGlobalRuntimeEventIndices(rtm, val) ()
#endif

#ifndef rtmGetMdlRefGlobalTID
#define rtmGetMdlRefGlobalTID(rtm)     ()
#endif

#ifndef rtmSetMdlRefGlobalTID
#define rtmSetMdlRefGlobalTID(rtm, val) ()
#endif

#ifndef rtmGetMdlRefTriggerTID
#define rtmGetMdlRefTriggerTID(rtm)    ()
#endif

#ifndef rtmSetMdlRefTriggerTID
#define rtmSetMdlRefTriggerTID(rtm, val) ()
#endif

#ifndef rtmGetModelMappingInfo
#define rtmGetModelMappingInfo(rtm)    ((rtm)->SpecialInfo.mappingInfo)
#endif

#ifndef rtmSetModelMappingInfo
#define rtmSetModelMappingInfo(rtm, val) ((rtm)->SpecialInfo.mappingInfo = (val))
#endif

#ifndef rtmGetModelName
#define rtmGetModelName(rtm)           ((rtm)->modelName)
#endif

#ifndef rtmSetModelName
#define rtmSetModelName(rtm, val)      ((rtm)->modelName = (val))
#endif

#ifndef rtmGetNonInlinedSFcns
#define rtmGetNonInlinedSFcns(rtm)     ((rtm)->NonInlinedSFcns)
#endif

#ifndef rtmSetNonInlinedSFcns
#define rtmSetNonInlinedSFcns(rtm, val) ((rtm)->NonInlinedSFcns = (val))
#endif

#ifndef rtmGetNumBlockIO
#define rtmGetNumBlockIO(rtm)          ((rtm)->Sizes.numBlockIO)
#endif

#ifndef rtmSetNumBlockIO
#define rtmSetNumBlockIO(rtm, val)     ((rtm)->Sizes.numBlockIO = (val))
#endif

#ifndef rtmGetNumBlockParams
#define rtmGetNumBlockParams(rtm)      ((rtm)->Sizes.numBlockPrms)
#endif

#ifndef rtmSetNumBlockParams
#define rtmSetNumBlockParams(rtm, val) ((rtm)->Sizes.numBlockPrms = (val))
#endif

#ifndef rtmGetNumBlocks
#define rtmGetNumBlocks(rtm)           ((rtm)->Sizes.numBlocks)
#endif

#ifndef rtmSetNumBlocks
#define rtmSetNumBlocks(rtm, val)      ((rtm)->Sizes.numBlocks = (val))
#endif

#ifndef rtmGetNumContStates
#define rtmGetNumContStates(rtm)       ((rtm)->Sizes.numContStates)
#endif

#ifndef rtmSetNumContStates
#define rtmSetNumContStates(rtm, val)  ((rtm)->Sizes.numContStates = (val))
#endif

#ifndef rtmGetNumDWork
#define rtmGetNumDWork(rtm)            ((rtm)->Sizes.numDwork)
#endif

#ifndef rtmSetNumDWork
#define rtmSetNumDWork(rtm, val)       ((rtm)->Sizes.numDwork = (val))
#endif

#ifndef rtmGetNumInputPorts
#define rtmGetNumInputPorts(rtm)       ((rtm)->Sizes.numIports)
#endif

#ifndef rtmSetNumInputPorts
#define rtmSetNumInputPorts(rtm, val)  ((rtm)->Sizes.numIports = (val))
#endif

#ifndef rtmGetNumNonSampledZCs
#define rtmGetNumNonSampledZCs(rtm)    ((rtm)->Sizes.numNonSampZCs)
#endif

#ifndef rtmSetNumNonSampledZCs
#define rtmSetNumNonSampledZCs(rtm, val) ((rtm)->Sizes.numNonSampZCs = (val))
#endif

#ifndef rtmGetNumOutputPorts
#define rtmGetNumOutputPorts(rtm)      ((rtm)->Sizes.numOports)
#endif

#ifndef rtmSetNumOutputPorts
#define rtmSetNumOutputPorts(rtm, val) ((rtm)->Sizes.numOports = (val))
#endif

#ifndef rtmGetNumPeriodicContStates
#define rtmGetNumPeriodicContStates(rtm) ((rtm)->Sizes.numPeriodicContStates)
#endif

#ifndef rtmSetNumPeriodicContStates
#define rtmSetNumPeriodicContStates(rtm, val) ((rtm)->Sizes.numPeriodicContStates = (val))
#endif

#ifndef rtmGetNumSFcnParams
#define rtmGetNumSFcnParams(rtm)       ((rtm)->Sizes.numSFcnPrms)
#endif

#ifndef rtmSetNumSFcnParams
#define rtmSetNumSFcnParams(rtm, val)  ((rtm)->Sizes.numSFcnPrms = (val))
#endif

#ifndef rtmGetNumSFunctions
#define rtmGetNumSFunctions(rtm)       ((rtm)->Sizes.numSFcns)
#endif

#ifndef rtmSetNumSFunctions
#define rtmSetNumSFunctions(rtm, val)  ((rtm)->Sizes.numSFcns = (val))
#endif

#ifndef rtmGetNumSampleTimes
#define rtmGetNumSampleTimes(rtm)      ((rtm)->Sizes.numSampTimes)
#endif

#ifndef rtmSetNumSampleTimes
#define rtmSetNumSampleTimes(rtm, val) ((rtm)->Sizes.numSampTimes = (val))
#endif

#ifndef rtmGetNumU
#define rtmGetNumU(rtm)                ((rtm)->Sizes.numU)
#endif

#ifndef rtmSetNumU
#define rtmSetNumU(rtm, val)           ((rtm)->Sizes.numU = (val))
#endif

#ifndef rtmGetNumY
#define rtmGetNumY(rtm)                ((rtm)->Sizes.numY)
#endif

#ifndef rtmSetNumY
#define rtmSetNumY(rtm, val)           ((rtm)->Sizes.numY = (val))
#endif

#ifndef rtmGetOdeF
#define rtmGetOdeF(rtm)                ()
#endif

#ifndef rtmSetOdeF
#define rtmSetOdeF(rtm, val)           ()
#endif

#ifndef rtmGetOdeY
#define rtmGetOdeY(rtm)                ()
#endif

#ifndef rtmSetOdeY
#define rtmSetOdeY(rtm, val)           ()
#endif

#ifndef rtmGetOffsetTimeArray
#define rtmGetOffsetTimeArray(rtm)     ((rtm)->Timing.offsetTimesArray)
#endif

#ifndef rtmSetOffsetTimeArray
#define rtmSetOffsetTimeArray(rtm, val) ((rtm)->Timing.offsetTimesArray = (val))
#endif

#ifndef rtmGetOffsetTimePtr
#define rtmGetOffsetTimePtr(rtm)       ((rtm)->Timing.offsetTimes)
#endif

#ifndef rtmSetOffsetTimePtr
#define rtmSetOffsetTimePtr(rtm, val)  ((rtm)->Timing.offsetTimes = (val))
#endif

#ifndef rtmGetOptions
#define rtmGetOptions(rtm)             ((rtm)->Sizes.options)
#endif

#ifndef rtmSetOptions
#define rtmSetOptions(rtm, val)        ((rtm)->Sizes.options = (val))
#endif

#ifndef rtmGetParamIsMalloced
#define rtmGetParamIsMalloced(rtm)     ()
#endif

#ifndef rtmSetParamIsMalloced
#define rtmSetParamIsMalloced(rtm, val) ()
#endif

#ifndef rtmGetPath
#define rtmGetPath(rtm)                ((rtm)->path)
#endif

#ifndef rtmSetPath
#define rtmSetPath(rtm, val)           ((rtm)->path = (val))
#endif

#ifndef rtmGetPerTaskSampleHits
#define rtmGetPerTaskSampleHits(rtm)   ()
#endif

#ifndef rtmSetPerTaskSampleHits
#define rtmSetPerTaskSampleHits(rtm, val) ()
#endif

#ifndef rtmGetPerTaskSampleHitsArray
#define rtmGetPerTaskSampleHitsArray(rtm) ((rtm)->Timing.perTaskSampleHitsArray)
#endif

#ifndef rtmSetPerTaskSampleHitsArray
#define rtmSetPerTaskSampleHitsArray(rtm, val) ((rtm)->Timing.perTaskSampleHitsArray = (val))
#endif

#ifndef rtmGetPerTaskSampleHitsPtr
#define rtmGetPerTaskSampleHitsPtr(rtm) ((rtm)->Timing.perTaskSampleHits)
#endif

#ifndef rtmSetPerTaskSampleHitsPtr
#define rtmSetPerTaskSampleHitsPtr(rtm, val) ((rtm)->Timing.perTaskSampleHits = (val))
#endif

#ifndef rtmGetPeriodicContStateIndices
#define rtmGetPeriodicContStateIndices(rtm) ((rtm)->ModelData.periodicContStateIndices)
#endif

#ifndef rtmSetPeriodicContStateIndices
#define rtmSetPeriodicContStateIndices(rtm, val) ((rtm)->ModelData.periodicContStateIndices = (val))
#endif

#ifndef rtmGetPeriodicContStateRanges
#define rtmGetPeriodicContStateRanges(rtm) ((rtm)->ModelData.periodicContStateRanges)
#endif

#ifndef rtmSetPeriodicContStateRanges
#define rtmSetPeriodicContStateRanges(rtm, val) ((rtm)->ModelData.periodicContStateRanges = (val))
#endif

#ifndef rtmGetPrevZCSigState
#define rtmGetPrevZCSigState(rtm)      ((rtm)->ModelData.prevZCSigState)
#endif

#ifndef rtmSetPrevZCSigState
#define rtmSetPrevZCSigState(rtm, val) ((rtm)->ModelData.prevZCSigState = (val))
#endif

#ifndef rtmGetRTWExtModeInfo
#define rtmGetRTWExtModeInfo(rtm)      ((rtm)->extModeInfo)
#endif

#ifndef rtmSetRTWExtModeInfo
#define rtmSetRTWExtModeInfo(rtm, val) ((rtm)->extModeInfo = (val))
#endif

#ifndef rtmGetRTWGeneratedSFcn
#define rtmGetRTWGeneratedSFcn(rtm)    ((rtm)->Sizes.rtwGenSfcn)
#endif

#ifndef rtmSetRTWGeneratedSFcn
#define rtmSetRTWGeneratedSFcn(rtm, val) ((rtm)->Sizes.rtwGenSfcn = (val))
#endif

#ifndef rtmGetRTWLogInfo
#define rtmGetRTWLogInfo(rtm)          ((rtm)->rtwLogInfo)
#endif

#ifndef rtmSetRTWLogInfo
#define rtmSetRTWLogInfo(rtm, val)     ((rtm)->rtwLogInfo = (val))
#endif

#ifndef rtmGetRTWRTModelMethodsInfo
#define rtmGetRTWRTModelMethodsInfo(rtm) ()
#endif

#ifndef rtmSetRTWRTModelMethodsInfo
#define rtmSetRTWRTModelMethodsInfo(rtm, val) ()
#endif

#ifndef rtmGetRTWSfcnInfo
#define rtmGetRTWSfcnInfo(rtm)         ((rtm)->sfcnInfo)
#endif

#ifndef rtmSetRTWSfcnInfo
#define rtmSetRTWSfcnInfo(rtm, val)    ((rtm)->sfcnInfo = (val))
#endif

#ifndef rtmGetRTWSolverInfo
#define rtmGetRTWSolverInfo(rtm)       ((rtm)->solverInfo)
#endif

#ifndef rtmSetRTWSolverInfo
#define rtmSetRTWSolverInfo(rtm, val)  ((rtm)->solverInfo = (val))
#endif

#ifndef rtmGetRTWSolverInfoPtr
#define rtmGetRTWSolverInfoPtr(rtm)    ((rtm)->solverInfoPtr)
#endif

#ifndef rtmSetRTWSolverInfoPtr
#define rtmSetRTWSolverInfoPtr(rtm, val) ((rtm)->solverInfoPtr = (val))
#endif

#ifndef rtmGetReservedForXPC
#define rtmGetReservedForXPC(rtm)      ((rtm)->SpecialInfo.xpcData)
#endif

#ifndef rtmSetReservedForXPC
#define rtmSetReservedForXPC(rtm, val) ((rtm)->SpecialInfo.xpcData = (val))
#endif

#ifndef rtmGetRootDWork
#define rtmGetRootDWork(rtm)           ((rtm)->ModelData.dwork)
#endif

#ifndef rtmSetRootDWork
#define rtmSetRootDWork(rtm, val)      ((rtm)->ModelData.dwork = (val))
#endif

#ifndef rtmGetSFunctions
#define rtmGetSFunctions(rtm)          ((rtm)->childSfunctions)
#endif

#ifndef rtmSetSFunctions
#define rtmSetSFunctions(rtm, val)     ((rtm)->childSfunctions = (val))
#endif

#ifndef rtmGetSampleHitArray
#define rtmGetSampleHitArray(rtm)      ((rtm)->Timing.sampleHitArray)
#endif

#ifndef rtmSetSampleHitArray
#define rtmSetSampleHitArray(rtm, val) ((rtm)->Timing.sampleHitArray = (val))
#endif

#ifndef rtmGetSampleHitPtr
#define rtmGetSampleHitPtr(rtm)        ((rtm)->Timing.sampleHits)
#endif

#ifndef rtmSetSampleHitPtr
#define rtmSetSampleHitPtr(rtm, val)   ((rtm)->Timing.sampleHits = (val))
#endif

#ifndef rtmGetSampleTimeArray
#define rtmGetSampleTimeArray(rtm)     ((rtm)->Timing.sampleTimesArray)
#endif

#ifndef rtmSetSampleTimeArray
#define rtmSetSampleTimeArray(rtm, val) ((rtm)->Timing.sampleTimesArray = (val))
#endif

#ifndef rtmGetSampleTimePtr
#define rtmGetSampleTimePtr(rtm)       ((rtm)->Timing.sampleTimes)
#endif

#ifndef rtmSetSampleTimePtr
#define rtmSetSampleTimePtr(rtm, val)  ((rtm)->Timing.sampleTimes = (val))
#endif

#ifndef rtmGetSampleTimeTaskIDArray
#define rtmGetSampleTimeTaskIDArray(rtm) ((rtm)->Timing.sampleTimeTaskIDArray)
#endif

#ifndef rtmSetSampleTimeTaskIDArray
#define rtmSetSampleTimeTaskIDArray(rtm, val) ((rtm)->Timing.sampleTimeTaskIDArray = (val))
#endif

#ifndef rtmGetSampleTimeTaskIDPtr
#define rtmGetSampleTimeTaskIDPtr(rtm) ((rtm)->Timing.sampleTimeTaskIDPtr)
#endif

#ifndef rtmSetSampleTimeTaskIDPtr
#define rtmSetSampleTimeTaskIDPtr(rtm, val) ((rtm)->Timing.sampleTimeTaskIDPtr = (val))
#endif

#ifndef rtmGetSelf
#define rtmGetSelf(rtm)                ()
#endif

#ifndef rtmSetSelf
#define rtmSetSelf(rtm, val)           ()
#endif

#ifndef rtmGetSimMode
#define rtmGetSimMode(rtm)             ((rtm)->simMode)
#endif

#ifndef rtmSetSimMode
#define rtmSetSimMode(rtm, val)        ((rtm)->simMode = (val))
#endif

#ifndef rtmGetSimTimeStep
#define rtmGetSimTimeStep(rtm)         ((rtm)->Timing.simTimeStep)
#endif

#ifndef rtmSetSimTimeStep
#define rtmSetSimTimeStep(rtm, val)    ((rtm)->Timing.simTimeStep = (val))
#endif

#ifndef rtmGetStartTime
#define rtmGetStartTime(rtm)           ((rtm)->Timing.tStart)
#endif

#ifndef rtmSetStartTime
#define rtmSetStartTime(rtm, val)      ((rtm)->Timing.tStart = (val))
#endif

#ifndef rtmGetStepSize
#define rtmGetStepSize(rtm)            ((rtm)->Timing.stepSize)
#endif

#ifndef rtmSetStepSize
#define rtmSetStepSize(rtm, val)       ((rtm)->Timing.stepSize = (val))
#endif

#ifndef rtmGetStopRequestedFlag
#define rtmGetStopRequestedFlag(rtm)   ((rtm)->Timing.stopRequestedFlag)
#endif

#ifndef rtmSetStopRequestedFlag
#define rtmSetStopRequestedFlag(rtm, val) ((rtm)->Timing.stopRequestedFlag = (val))
#endif

#ifndef rtmGetTaskCounters
#define rtmGetTaskCounters(rtm)        ()
#endif

#ifndef rtmSetTaskCounters
#define rtmSetTaskCounters(rtm, val)   ()
#endif

#ifndef rtmGetTaskTimeArray
#define rtmGetTaskTimeArray(rtm)       ((rtm)->Timing.tArray)
#endif

#ifndef rtmSetTaskTimeArray
#define rtmSetTaskTimeArray(rtm, val)  ((rtm)->Timing.tArray = (val))
#endif

#ifndef rtmGetTimePtr
#define rtmGetTimePtr(rtm)             ((rtm)->Timing.t)
#endif

#ifndef rtmSetTimePtr
#define rtmSetTimePtr(rtm, val)        ((rtm)->Timing.t = (val))
#endif

#ifndef rtmGetTimingData
#define rtmGetTimingData(rtm)          ((rtm)->Timing.timingData)
#endif

#ifndef rtmSetTimingData
#define rtmSetTimingData(rtm, val)     ((rtm)->Timing.timingData = (val))
#endif

#ifndef rtmGetU
#define rtmGetU(rtm)                   ((rtm)->ModelData.inputs)
#endif

#ifndef rtmSetU
#define rtmSetU(rtm, val)              ((rtm)->ModelData.inputs = (val))
#endif

#ifndef rtmGetVarNextHitTimesListPtr
#define rtmGetVarNextHitTimesListPtr(rtm) ((rtm)->Timing.varNextHitTimesList)
#endif

#ifndef rtmSetVarNextHitTimesListPtr
#define rtmSetVarNextHitTimesListPtr(rtm, val) ((rtm)->Timing.varNextHitTimesList = (val))
#endif

#ifndef rtmGetY
#define rtmGetY(rtm)                   ((rtm)->ModelData.outputs)
#endif

#ifndef rtmSetY
#define rtmSetY(rtm, val)              ((rtm)->ModelData.outputs = (val))
#endif

#ifndef rtmGetZCCacheNeedsReset
#define rtmGetZCCacheNeedsReset(rtm)   ((rtm)->ModelData.zCCacheNeedsReset)
#endif

#ifndef rtmSetZCCacheNeedsReset
#define rtmSetZCCacheNeedsReset(rtm, val) ((rtm)->ModelData.zCCacheNeedsReset = (val))
#endif

#ifndef rtmGetZCSignalValues
#define rtmGetZCSignalValues(rtm)      ((rtm)->ModelData.zcSignalValues)
#endif

#ifndef rtmSetZCSignalValues
#define rtmSetZCSignalValues(rtm, val) ((rtm)->ModelData.zcSignalValues = (val))
#endif

#ifndef rtmGet_TimeOfLastOutput
#define rtmGet_TimeOfLastOutput(rtm)   ((rtm)->Timing.timeOfLastOutput)
#endif

#ifndef rtmSet_TimeOfLastOutput
#define rtmSet_TimeOfLastOutput(rtm, val) ((rtm)->Timing.timeOfLastOutput = (val))
#endif

#ifndef rtmGetdX
#define rtmGetdX(rtm)                  ((rtm)->ModelData.derivs)
#endif

#ifndef rtmSetdX
#define rtmSetdX(rtm, val)             ((rtm)->ModelData.derivs = (val))
#endif

#ifndef rtmGettimingBridge
#define rtmGettimingBridge(rtm)        ()
#endif

#ifndef rtmSettimingBridge
#define rtmSettimingBridge(rtm, val)   ()
#endif

#ifndef rtmGetChecksumVal
#define rtmGetChecksumVal(rtm, idx)    ((rtm)->Sizes.checksums[idx])
#endif

#ifndef rtmSetChecksumVal
#define rtmSetChecksumVal(rtm, idx, val) ((rtm)->Sizes.checksums[idx] = (val))
#endif

#ifndef rtmGetDWork
#define rtmGetDWork(rtm, idx)          ((rtm)->ModelData.dwork[idx])
#endif

#ifndef rtmSetDWork
#define rtmSetDWork(rtm, idx, val)     ((rtm)->ModelData.dwork[idx] = (val))
#endif

#ifndef rtmGetOffsetTime
#define rtmGetOffsetTime(rtm, idx)     ((rtm)->Timing.offsetTimes[idx])
#endif

#ifndef rtmSetOffsetTime
#define rtmSetOffsetTime(rtm, idx, val) ((rtm)->Timing.offsetTimes[idx] = (val))
#endif

#ifndef rtmGetSFunction
#define rtmGetSFunction(rtm, idx)      ((rtm)->childSfunctions[idx])
#endif

#ifndef rtmSetSFunction
#define rtmSetSFunction(rtm, idx, val) ((rtm)->childSfunctions[idx] = (val))
#endif

#ifndef rtmGetSampleTime
#define rtmGetSampleTime(rtm, idx)     ((rtm)->Timing.sampleTimes[idx])
#endif

#ifndef rtmSetSampleTime
#define rtmSetSampleTime(rtm, idx, val) ((rtm)->Timing.sampleTimes[idx] = (val))
#endif

#ifndef rtmGetSampleTimeTaskID
#define rtmGetSampleTimeTaskID(rtm, idx) ((rtm)->Timing.sampleTimeTaskIDPtr[idx])
#endif

#ifndef rtmSetSampleTimeTaskID
#define rtmSetSampleTimeTaskID(rtm, idx, val) ((rtm)->Timing.sampleTimeTaskIDPtr[idx] = (val))
#endif

#ifndef rtmGetVarNextHitTimeList
#define rtmGetVarNextHitTimeList(rtm, idx) ((rtm)->Timing.varNextHitTimesList[idx])
#endif

#ifndef rtmSetVarNextHitTimeList
#define rtmSetVarNextHitTimeList(rtm, idx, val) ((rtm)->Timing.varNextHitTimesList[idx] = (val))
#endif

#ifndef rtmIsContinuousTask
#define rtmIsContinuousTask(rtm, tid)  0
#endif

#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

#ifndef rtmIsSampleHit
#define rtmIsSampleHit(rtm, sti, tid)  ((rtm)->Timing.sampleHits[(rtm)->Timing.sampleTimeTaskIDPtr[sti]])
#endif

#ifndef rtmGetStopRequested
#define rtmGetStopRequested(rtm)       ((rtm)->Timing.stopRequestedFlag)
#endif

#ifndef rtmSetStopRequested
#define rtmSetStopRequested(rtm, val)  ((rtm)->Timing.stopRequestedFlag = (val))
#endif

#ifndef rtmGetStopRequestedPtr
#define rtmGetStopRequestedPtr(rtm)    (&((rtm)->Timing.stopRequestedFlag))
#endif

#ifndef rtmGetT
#define rtmGetT(rtm)                   (rtmGetTPtr((rtm))[0])
#endif

#ifndef rtmSetT
#define rtmSetT(rtm, val)                                        /* Do Nothing */
#endif

#ifndef rtmGetTFinal
#define rtmGetTFinal(rtm)              ((rtm)->Timing.tFinal)
#endif

#ifndef rtmSetTFinal
#define rtmSetTFinal(rtm, val)         ((rtm)->Timing.tFinal = (val))
#endif

#ifndef rtmGetTPtr
#define rtmGetTPtr(rtm)                ((rtm)->Timing.t)
#endif

#ifndef rtmSetTPtr
#define rtmSetTPtr(rtm, val)           ((rtm)->Timing.t = (val))
#endif

#ifndef rtmGetTStart
#define rtmGetTStart(rtm)              ((rtm)->Timing.tStart)
#endif

#ifndef rtmSetTStart
#define rtmSetTStart(rtm, val)         ((rtm)->Timing.tStart = (val))
#endif

#ifndef rtmGetTaskTime
#define rtmGetTaskTime(rtm, sti)       (rtmGetTPtr((rtm))[(rtm)->Timing.sampleTimeTaskIDPtr[sti]])
#endif

#ifndef rtmSetTaskTime
#define rtmSetTaskTime(rtm, sti, val)  (rtmGetTPtr((rtm))[sti] = (val))
#endif

#ifndef rtmGetTimeOfLastOutput
#define rtmGetTimeOfLastOutput(rtm)    ((rtm)->Timing.timeOfLastOutput)
#endif

#ifdef rtmGetRTWSolverInfo
#undef rtmGetRTWSolverInfo
#endif

#define rtmGetRTWSolverInfo(rtm)       &((rtm)->solverInfo)

/* Definition for use in the target main file */
#define boost_and_two_level__1_sm_controller_rtModel RT_MODEL_boost_and_two_level__1_sm_controller_T

/* user code (top of header file) */
/* System '<Root>' */
/* Opal-RT Technologies */
extern int opalSizeDwork;
extern unsigned int opalSizeBlockIO;
extern unsigned int opalSizeRTP;
extern void * pRtModel;                //pointer on the RTmodel struc
int_T Opal_rtmGetNumBlockParams(void *ptr);
int_T Opal_rtmGetNumBlockIO(void *ptr);

/* Block signals (default storage) */
typedef struct {
  real_T SFunction;                    /* '<S1>/S-Function' (Output 1)  */
  real_T Sum;                          /* '<S1>/Sum' (Output 1)  */
  real_T DataOutRecv_o2;               /* '<S33>/DataOut Recv' (Output 2)  */
  real_T ConvertSinglefloatingpointFPGAt;
      /* '<S37>/Convert  Single floating-point (FPGA)  to double' (Output 1)  */
  real_T ConvertSinglefloatingpointFPG_i;
      /* '<S38>/Convert  Single floating-point (FPGA)  to double' (Output 1)  */
  real_T ConvertSinglefloatingpointFPG_g;
      /* '<S39>/Convert  Single floating-point (FPGA)  to double' (Output 1)  */
  real_T ConvertSinglefloatingpointFP_ik;
      /* '<S40>/Convert  Single floating-point (FPGA)  to double' (Output 1)  */
  real_T ConvertSinglefloatingpointFP_ib;
      /* '<S41>/Convert  Single floating-point (FPGA)  to double' (Output 1)  */
  real_T ConvertSinglefloatingpointFPG_b;
      /* '<S42>/Convert  Single floating-point (FPGA)  to double' (Output 1)  */
  real_T ConvertSinglefloatingpointFP_i0;
      /* '<S43>/Convert  Single floating-point (FPGA)  to double' (Output 1)  */
  real_T ConvertSinglefloatingpointFPG_c;
      /* '<S44>/Convert  Single floating-point (FPGA)  to double' (Output 1)  */
  real_T ConvertSinglefloatingpointFPG_l;
      /* '<S45>/Convert  Single floating-point (FPGA)  to double' (Output 1)  */
  real_T FormatingGains[9];            /* '<S34>/FormatingGains' (Output 1)  */
  real_T Divide[8];                    /* '<S32>/Divide' (Output 1)  */
  real_T SFunction_g[9];               /* '<S13>/S-Function' (Output 1)  */
  real_T Saturation;                   /* '<S12>/Saturation' (Output 1)  */
  real_T Adder_Gain;                   /* '<S11>/Adder_Gain' (Output 1)  */
  real_T Memory;                       /* '<S11>/Memory' (Output 1)  */
  real_T Adder;                        /* '<S11>/Adder' (Output 1)  */
  real_T Adder_Pred;                   /* '<S11>/Adder_Pred' (Output 1)  */
  real_T Switch;                       /* '<S11>/Switch' (Output 1)  */
  real_T Sum_l;                        /* '<S5>/Sum' (Output 1)  */
  real_T ThreephaseSineWave[3];  /* '<S12>/Three-phase Sine Wave' (Output 1)  */
  real_T Product[3];                   /* '<S12>/Product' (Output 1)  */
  real_T Gain[3];                      /* '<S12>/Gain' (Output 1)  */
  real_T Sum_k[3];                     /* '<S12>/Sum' (Output 1)  */
  real_T DataTypeConversion[3];    /* '<S7>/Data Type Conversion' (Output 1)  */
  real_T Gain_l[3];                    /* '<S7>/Gain' (Output 1)  */
  real_T PWMOut;                       /* '<S7>/PWM Out' (Output 1)  */
  real_T ThreephaseSineWave_i[3]; /* '<S6>/Three-phase Sine Wave' (Output 1)  */
  real_T Amplitude_Gain[3];            /* '<S6>/Amplitude_Gain' (Output 1)  */
  real_T DataTypeConversion1;    /* '<S16>/Data Type Conversion1' (Output 1)  */
  real_T Memory_d;                     /* '<S16>/Memory' (Output 1)  */
  real_T UserParameterSetFilter;/* '<S16>/UserParameterSetFilter' (Output 1)  */
  real_T ParameterSetToIndexMap;/* '<S16>/ParameterSetToIndexMap' (Output 1)  */
  real_T TmpSignalConversionAtshiftInpor[8];
                                /* '<S49>/TmpSignal ConversionAtshiftInport1' */
  real_T datain;                       /* '<S49>/datain' (Output 1)  */
  real_T Constant2;                    /* '<S22>/Constant2' (Output 1)  */
  real_T LoadIn;                       /* '<S22>/LoadIn' (Output 1)  */
  real_T parameter_set_output_id;  /* '<S17>/IndexToParameterSet' (Output 1)  */
  real_T OpCtrl_o1;                    /* '<S2>/OpCtrl' (Output 1)  */
  real_T OpCtrl_o2[8];                 /* '<S2>/OpCtrl' (Output 2)  */
  real_T Constant;                     /* '<S4>/Constant' (Output 1)  */
  real_T Step;                         /* '<S4>/Step' (Output 1)  */
  real_T OpTrigger;                    /* '<S4>/OpTrigger' (Output 1)  */
  real_T DataTypeConversion_i;    /* '<S52>/Data Type Conversion' (Output 1)  */
  real_T LoadIn_g;                     /* '<S52>/LoadIn' (Output 1)  */
  real_T FormatingGains_h[4];          /* '<S25>/FormatingGains' (Output 1)  */
  real_T Saturation_n[4];              /* '<S25>/Saturation' (Output 1)  */
  real_T DataInSend;                   /* '<S26>/DataIn Send' (Output 1)  */
  real_T Selector;                     /* '<S25>/Selector' (Output 1)  */
  real_T DataTypeConversion_c;    /* '<S25>/Data Type Conversion' (Output 1)  */
  uint32_T DataOutRecv_o1[9];          /* '<S33>/DataOut Recv' (Output 1)  */
  uint32_T DataTypeConversion_j;  /* '<S34>/Data Type Conversion' (Output 1)  */
  uint32_T Saturation_m[9];            /* '<S34>/Saturation' (Output 1)  */
  uint32_T Saturation_a;               /* '<S35>/Saturation' (Output 1)  */
  uint32_T DataTypeConversion_m;  /* '<S16>/Data Type Conversion' (Output 1)  */
  uint32_T Constant_h[2];              /* '<S35>/Constant' (Output 1)  */
  uint32_T shift;                      /* '<S49>/shift' (Output 1)  */
  uint32_T Sum_i;                      /* '<S49>/Sum' (Output 1)  */
  uint32_T Constant5[10];              /* '<S22>/Constant5' (Output 1)  */
  uint32_T Cast;                       /* '<S51>/Cast' (Output 1)  */
  uint32_T shiftedScenarioIndex;      /* '<S51>/Shift Arithmetic' (Output 1)  */
  uint32_T status;                     /* '<S51>/Switch' (Output 1)  */
  uint32_T Uk1;                        /* '<S54>/Delay Input1' (Output 1)  */
  uint32_T forceResetSolverBit;    /* '<S51>/forceResetSolverBit' (Output 1)  */
  uint32_T ConvertdoubletoSinglefloatingpo;
       /* '<S28>/Convert double to  Single floating-point (FPGA)' (Output 1)  */
  uint32_T ConvertdoubletoSinglefloating_e;
       /* '<S29>/Convert double to  Single floating-point (FPGA)' (Output 1)  */
  uint32_T ConvertdoubletoSinglefloating_n;
       /* '<S30>/Convert double to  Single floating-point (FPGA)' (Output 1)  */
  uint32_T ConvertdoubletoSinglefloating_i;
       /* '<S31>/Convert double to  Single floating-point (FPGA)' (Output 1)  */
  uint32_T TmpSignalConversionAtDataInSend[4];
                          /* '<S26>/TmpSignal ConversionAtDataIn SendInport1' */
  uint8_T DataStoreRead;               /* '<S53>/Data Store Read' (Output 1)  */
  boolean_T Compare;                   /* '<S55>/Compare' (Output 1)  */
  boolean_T notReset;                  /* '<S53>/AND' (Output 1)  */
  boolean_T FixPtRelationalOperator;
                             /* '<S54>/FixPt Relational Operator' (Output 1)  */
  boolean_T LogicalOperator;          /* '<S52>/Logical Operator' (Output 1)  */
} B_boost_and_two_level__1_sm_controller_T;

/* Block states (default storage) for system '<Root>' */
typedef struct {
  real_T SFunction_PreviousInput;      /* '<S1>/S-Function' (DWork 1)  */
  real_T Memory_PreviousInput;         /* '<S11>/Memory' (DWork 1)  */
  real_T Memory_PreviousInput_n;       /* '<S16>/Memory' (DWork 1)  */
  void *DataOutRecv_PWORK;             /* '<S33>/DataOut Recv' (DWork 1)  */
  void *PWMOut_PWORK;                  /* '<S7>/PWM Out' (DWork 1)  */
  void *datain_PWORK;                  /* '<S49>/datain' (DWork 1)  */
  void *LoadIn_PWORK[2];               /* '<S22>/LoadIn' (DWork 1)  */
  void *OpCtrl_PWORK;                  /* '<S2>/OpCtrl' (DWork 2)  */
  void *LoadIn_PWORK_n;                /* '<S52>/LoadIn' (DWork 1)  */
  void *DataInSend_PWORK;              /* '<S26>/DataIn Send' (DWork 1)  */
  uint32_T DelayInput1_DSTATE;         /* '<S54>/Delay Input1' (DWork 1)  */
  int_T SFunction_IWORK[5];            /* '<S57>/S-Function' (DWork 1)  */
  int_T OpCtrl_IWORK;                  /* '<S2>/OpCtrl' (DWork 1)  */
  int_T OpTrigger_IWORK[5];            /* '<S4>/OpTrigger' (DWork 1)  */
  uint8_T isInitialResetDone;         /* '<S23>/Data Store Memory' (DWork 1)  */
} DW_boost_and_two_level__1_sm_controller_T;

/* Backward compatible GRT Identifiers */
#define rtB                            boost_and_two_level__1_sm_controller_B
#define BlockIO                        B_boost_and_two_level__1_sm_controller_T
#define rtP                            boost_and_two_level__1_sm_controller_P
#define Parameters                     P_boost_and_two_level__1_sm_controller_T
#define rtDWork                        boost_and_two_level__1_sm_controller_DW
#define D_Work                         DW_boost_and_two_level__1_sm_controller_T

/* Parameters (default storage) */
struct P_boost_and_two_level__1_sm_controller_T_ {
  real_T Inv_PWM_Phases[3];            /* Variable: Inv_PWM_Phases
                                        * Referenced by:
                                        *   '<S6>/Three-phase Sine Wave' (Parameter: Phase)
                                        *   '<S12>/Three-phase Sine Wave' (Parameter: Phase)
                                        */
  real_T Ts;                           /* Variable: Ts
                                        * Referenced by: '<S11>/Adder_Gain' (Parameter: Gain)
                                        */
  real_T CompareToConstant_const;     /* Mask Parameter: CompareToConstant_const
                                       * Referenced by: '<S55>/Constant' (Parameter: Value)
                                       */
  real_T DataInDriver_isConfigured; /* Mask Parameter: DataInDriver_isConfigured
                                     * Referenced by: '<S19>/enable dataIn' (Parameter: Value)
                                     */
  uint32_T forceResetSolverBit_BitMask;
                                  /* Mask Parameter: forceResetSolverBit_BitMask
                                   * Referenced by: '<S51>/forceResetSolverBit' (Parameter: BitMask)
                                   */
  uint32_T DetectChange_vinit;         /* Mask Parameter: DetectChange_vinit
                                        * Referenced by: '<S54>/Delay Input1' (Parameter: InitialCondition)
                                        */
  real_T FormatingGains_Gain[4];       /* Expression: [1 1 1 1]
                                        * Referenced by: '<S25>/FormatingGains' (Parameter: Gain)
                                        */
  real_T Saturation_UpperSat[4];
  /* Expression: [1.79769313486232e+308 1.79769313486232e+308 1.79769313486232e+308 1.79769313486232e+308]
   * Referenced by: '<S25>/Saturation' (Parameter: UpperLimit)
   */
  real_T Saturation_LowerSat[4];
  /* Expression: [-1.79769313486232e+308 -1.79769313486232e+308 -1.79769313486232e+308 -1.79769313486232e+308]
   * Referenced by: '<S25>/Saturation' (Parameter: LowerLimit)
   */
  real_T DataInSend_P1_Size[2];        /* Computed Parameter: DataInSend_P1_Size
                                        * Referenced by: '<S26>/DataIn Send' (Parameter: P1Size)
                                        */
  real_T DataInSend_P1[6];             /* Computed Parameter: DataInSend_P1
                                        * Referenced by: '<S26>/DataIn Send' (Parameter: P1)
                                        */
  real_T DataInSend_P2_Size[2];        /* Computed Parameter: DataInSend_P2_Size
                                        * Referenced by: '<S26>/DataIn Send' (Parameter: P2Size)
                                        */
  real_T DataInSend_P2;                /* Expression: FcnNos
                                        * Referenced by: '<S26>/DataIn Send' (Parameter: P2)
                                        */
  real_T DataInSend_P3_Size[2];        /* Computed Parameter: DataInSend_P3_Size
                                        * Referenced by: '<S26>/DataIn Send' (Parameter: P3Size)
                                        */
  real_T DataInSend_P3;                /* Expression: width
                                        * Referenced by: '<S26>/DataIn Send' (Parameter: P3)
                                        */
  real_T DataInSend_P4_Size[2];        /* Computed Parameter: DataInSend_P4_Size
                                        * Referenced by: '<S26>/DataIn Send' (Parameter: P4Size)
                                        */
  real_T DataInSend_P4;                /* Expression: portType
                                        * Referenced by: '<S26>/DataIn Send' (Parameter: P4)
                                        */
  real_T DataInSend_P5_Size[2];        /* Computed Parameter: DataInSend_P5_Size
                                        * Referenced by: '<S26>/DataIn Send' (Parameter: P5Size)
                                        */
  real_T DataInSend_P5;                /* Expression: checkVersion
                                        * Referenced by: '<S26>/DataIn Send' (Parameter: P5)
                                        */
  real_T DataInSend_P6_Size[2];        /* Computed Parameter: DataInSend_P6_Size
                                        * Referenced by: '<S26>/DataIn Send' (Parameter: P6Size)
                                        */
  real_T DataInSend_P6;                /* Expression: expectedId
                                        * Referenced by: '<S26>/DataIn Send' (Parameter: P6)
                                        */
  real_T DataInSend_P7_Size[2];        /* Computed Parameter: DataInSend_P7_Size
                                        * Referenced by: '<S26>/DataIn Send' (Parameter: P7Size)
                                        */
  real_T DataInSend_P7;                /* Expression: expectedVersion
                                        * Referenced by: '<S26>/DataIn Send' (Parameter: P7)
                                        */
  real_T DataInSend_P8_Size[2];        /* Computed Parameter: DataInSend_P8_Size
                                        * Referenced by: '<S26>/DataIn Send' (Parameter: P8Size)
                                        */
  real_T DataInSend_P8;                /* Expression: opComp
                                        * Referenced by: '<S26>/DataIn Send' (Parameter: P8)
                                        */
  real_T Constant_Value;               /* Expression: 0
                                        * Referenced by: '<S25>/Constant' (Parameter: Value)
                                        */
  real_T LoadIn_P1_Size[2];            /* Computed Parameter: LoadIn_P1_Size
                                        * Referenced by: '<S52>/LoadIn' (Parameter: P1Size)
                                        */
  real_T LoadIn_P1[6];                 /* Computed Parameter: LoadIn_P1
                                        * Referenced by: '<S52>/LoadIn' (Parameter: P1)
                                        */
  real_T LoadIn_P2_Size[2];            /* Computed Parameter: LoadIn_P2_Size
                                        * Referenced by: '<S52>/LoadIn' (Parameter: P2Size)
                                        */
  real_T LoadIn_P2;                    /* Expression: FcnNos
                                        * Referenced by: '<S52>/LoadIn' (Parameter: P2)
                                        */
  real_T LoadIn_P3_Size[2];            /* Computed Parameter: LoadIn_P3_Size
                                        * Referenced by: '<S52>/LoadIn' (Parameter: P3Size)
                                        */
  real_T LoadIn_P3;                    /* Expression: width
                                        * Referenced by: '<S52>/LoadIn' (Parameter: P3)
                                        */
  real_T LoadIn_P4_Size[2];            /* Computed Parameter: LoadIn_P4_Size
                                        * Referenced by: '<S52>/LoadIn' (Parameter: P4Size)
                                        */
  real_T LoadIn_P4;                    /* Expression: portType
                                        * Referenced by: '<S52>/LoadIn' (Parameter: P4)
                                        */
  real_T SFunction1_Value;             /* Expression: 0
                                        * Referenced by: '<S1>/S-Function1' (Parameter: Value)
                                        */
  real_T SFunction_InitialCondition;   /* Expression: 0
                                        * Referenced by: '<S1>/S-Function' (Parameter: InitialCondition)
                                        */
  real_T DataOutRecv_P1_Size[2];      /* Computed Parameter: DataOutRecv_P1_Size
                                       * Referenced by: '<S33>/DataOut Recv' (Parameter: P1Size)
                                       */
  real_T DataOutRecv_P1[6];            /* Computed Parameter: DataOutRecv_P1
                                        * Referenced by: '<S33>/DataOut Recv' (Parameter: P1)
                                        */
  real_T DataOutRecv_P2_Size[2];      /* Computed Parameter: DataOutRecv_P2_Size
                                       * Referenced by: '<S33>/DataOut Recv' (Parameter: P2Size)
                                       */
  real_T DataOutRecv_P2;               /* Expression: FcnNos
                                        * Referenced by: '<S33>/DataOut Recv' (Parameter: P2)
                                        */
  real_T DataOutRecv_P3_Size[2];      /* Computed Parameter: DataOutRecv_P3_Size
                                       * Referenced by: '<S33>/DataOut Recv' (Parameter: P3Size)
                                       */
  real_T DataOutRecv_P3;               /* Expression: width
                                        * Referenced by: '<S33>/DataOut Recv' (Parameter: P3)
                                        */
  real_T DataOutRecv_P4_Size[2];      /* Computed Parameter: DataOutRecv_P4_Size
                                       * Referenced by: '<S33>/DataOut Recv' (Parameter: P4Size)
                                       */
  real_T DataOutRecv_P4;               /* Expression: portType
                                        * Referenced by: '<S33>/DataOut Recv' (Parameter: P4)
                                        */
  real_T DataOutRecv_P5_Size[2];      /* Computed Parameter: DataOutRecv_P5_Size
                                       * Referenced by: '<S33>/DataOut Recv' (Parameter: P5Size)
                                       */
  real_T DataOutRecv_P5;               /* Expression: sampleTime
                                        * Referenced by: '<S33>/DataOut Recv' (Parameter: P5)
                                        */
  real_T DataOutRecv_P6_Size[2];      /* Computed Parameter: DataOutRecv_P6_Size
                                       * Referenced by: '<S33>/DataOut Recv' (Parameter: P6Size)
                                       */
  real_T DataOutRecv_P6;               /* Expression: checkVersion
                                        * Referenced by: '<S33>/DataOut Recv' (Parameter: P6)
                                        */
  real_T DataOutRecv_P7_Size[2];      /* Computed Parameter: DataOutRecv_P7_Size
                                       * Referenced by: '<S33>/DataOut Recv' (Parameter: P7Size)
                                       */
  real_T DataOutRecv_P7;               /* Expression: expectedId
                                        * Referenced by: '<S33>/DataOut Recv' (Parameter: P7)
                                        */
  real_T DataOutRecv_P8_Size[2];      /* Computed Parameter: DataOutRecv_P8_Size
                                       * Referenced by: '<S33>/DataOut Recv' (Parameter: P8Size)
                                       */
  real_T DataOutRecv_P8;               /* Expression: expectedVersion
                                        * Referenced by: '<S33>/DataOut Recv' (Parameter: P8)
                                        */
  real_T DataOutRecv_P9_Size[2];      /* Computed Parameter: DataOutRecv_P9_Size
                                       * Referenced by: '<S33>/DataOut Recv' (Parameter: P9Size)
                                       */
  real_T DataOutRecv_P9;               /* Expression: opComp
                                        * Referenced by: '<S33>/DataOut Recv' (Parameter: P9)
                                        */
  real_T Constant_Value_l;             /* Expression: 0
                                        * Referenced by: '<S34>/Constant' (Parameter: Value)
                                        */
  real_T FormatingGains_Gain_m[9];     /* Expression: [1 1 1 1 1 1 1 1 1]
                                        * Referenced by: '<S34>/FormatingGains' (Parameter: Gain)
                                        */
  real_T SFunction_P1_Size[2];         /* Computed Parameter: SFunction_P1_Size
                                        * Referenced by: '<S57>/S-Function' (Parameter: P1Size)
                                        */
  real_T SFunction_P1;                 /* Expression: Acqu_group
                                        * Referenced by: '<S57>/S-Function' (Parameter: P1)
                                        */
  real_T SFunction_P1_Size_b[2];      /* Computed Parameter: SFunction_P1_Size_b
                                       * Referenced by: '<S13>/S-Function' (Parameter: P1Size)
                                       */
  real_T SFunction_P1_p;               /* Expression: Data_width
                                        * Referenced by: '<S13>/S-Function' (Parameter: P1)
                                        */
  real_T SFunction_P2_Size[2];         /* Computed Parameter: SFunction_P2_Size
                                        * Referenced by: '<S13>/S-Function' (Parameter: P2Size)
                                        */
  real_T SFunction_P2[9];              /* Expression: InitialConditions
                                        * Referenced by: '<S13>/S-Function' (Parameter: P2)
                                        */
  real_T Saturation_UpperSat_c;        /* Expression: 0.95
                                        * Referenced by: '<S12>/Saturation' (Parameter: UpperLimit)
                                        */
  real_T Saturation_LowerSat_m;        /* Expression: 0.05
                                        * Referenced by: '<S12>/Saturation' (Parameter: LowerLimit)
                                        */
  real_T Constant3_Value;              /* Expression: 2*pi
                                        * Referenced by: '<S11>/Constant3' (Parameter: Value)
                                        */
  real_T Memory_InitialCondition;      /* Expression: 0
                                        * Referenced by: '<S11>/Memory' (Parameter: InitialCondition)
                                        */
  real_T Switch_Threshold;             /* Expression: 0
                                        * Referenced by: '<S11>/Switch' (Parameter: Threshold)
                                        */
  real_T ThreephaseSineWave_Amp;       /* Expression: 1
                                        * Referenced by: '<S12>/Three-phase Sine Wave' (Parameter: Amplitude)
                                        */
  real_T ThreephaseSineWave_Bias;      /* Expression: 0
                                        * Referenced by: '<S12>/Three-phase Sine Wave' (Parameter: Bias)
                                        */
  real_T ThreephaseSineWave_Freq;      /* Expression: 1
                                        * Referenced by: '<S12>/Three-phase Sine Wave' (Parameter: Frequency)
                                        */
  real_T Gain_Gain;                    /* Expression: 0.5
                                        * Referenced by: '<S12>/Gain' (Parameter: Gain)
                                        */
  real_T Constant_Value_c;             /* Expression: 0.5
                                        * Referenced by: '<S12>/Constant' (Parameter: Value)
                                        */
  real_T Gain_Gain_c[3];               /* Expression: ones(1,3)
                                        * Referenced by: '<S7>/Gain' (Parameter: Gain)
                                        */
  real_T PWMOut_P1_Size[2];            /* Computed Parameter: PWMOut_P1_Size
                                        * Referenced by: '<S7>/PWM Out' (Parameter: P1Size)
                                        */
  real_T PWMOut_P1[6];                 /* Computed Parameter: PWMOut_P1
                                        * Referenced by: '<S7>/PWM Out' (Parameter: P1)
                                        */
  real_T PWMOut_P2_Size[2];            /* Computed Parameter: PWMOut_P2_Size
                                        * Referenced by: '<S7>/PWM Out' (Parameter: P2Size)
                                        */
  real_T PWMOut_P3_Size[2];            /* Computed Parameter: PWMOut_P3_Size
                                        * Referenced by: '<S7>/PWM Out' (Parameter: P3Size)
                                        */
  real_T PWMOut_P3;                    /* Expression: portNb
                                        * Referenced by: '<S7>/PWM Out' (Parameter: P3)
                                        */
  real_T PWMOut_P4_Size[2];            /* Computed Parameter: PWMOut_P4_Size
                                        * Referenced by: '<S7>/PWM Out' (Parameter: P4Size)
                                        */
  real_T PWMOut_P4;                    /* Expression: size
                                        * Referenced by: '<S7>/PWM Out' (Parameter: P4)
                                        */
  real_T PWMOut_P5_Size[2];            /* Computed Parameter: PWMOut_P5_Size
                                        * Referenced by: '<S7>/PWM Out' (Parameter: P5Size)
                                        */
  real_T PWMOut_P5;                    /* Expression: numchan
                                        * Referenced by: '<S7>/PWM Out' (Parameter: P5)
                                        */
  real_T PWMOut_P6_Size[2];            /* Computed Parameter: PWMOut_P6_Size
                                        * Referenced by: '<S7>/PWM Out' (Parameter: P6Size)
                                        */
  real_T PWMOut_P6;                    /* Expression: polarity
                                        * Referenced by: '<S7>/PWM Out' (Parameter: P6)
                                        */
  real_T PWMOut_P7_Size[2];            /* Computed Parameter: PWMOut_P7_Size
                                        * Referenced by: '<S7>/PWM Out' (Parameter: P7Size)
                                        */
  real_T PWMOut_P7;                    /* Expression: symMode
                                        * Referenced by: '<S7>/PWM Out' (Parameter: P7)
                                        */
  real_T PWMOut_P8_Size[2];            /* Computed Parameter: PWMOut_P8_Size
                                        * Referenced by: '<S7>/PWM Out' (Parameter: P8Size)
                                        */
  real_T PWMOut_P8;                    /* Expression: complementary
                                        * Referenced by: '<S7>/PWM Out' (Parameter: P8)
                                        */
  real_T PWMOut_P9_Size[2];            /* Computed Parameter: PWMOut_P9_Size
                                        * Referenced by: '<S7>/PWM Out' (Parameter: P9Size)
                                        */
  real_T PWMOut_P9[4];                 /* Expression: deadTime
                                        * Referenced by: '<S7>/PWM Out' (Parameter: P9)
                                        */
  real_T PWMOut_P10_Size[2];           /* Computed Parameter: PWMOut_P10_Size
                                        * Referenced by: '<S7>/PWM Out' (Parameter: P10Size)
                                        */
  real_T PWMOut_P10;                   /* Expression: loadnb
                                        * Referenced by: '<S7>/PWM Out' (Parameter: P10)
                                        */
  real_T PWMOut_P11_Size[2];           /* Computed Parameter: PWMOut_P11_Size
                                        * Referenced by: '<S7>/PWM Out' (Parameter: P11Size)
                                        */
  real_T PWMOut_P11;                   /* Expression: rtPhaseShiftEnabled
                                        * Referenced by: '<S7>/PWM Out' (Parameter: P11)
                                        */
  real_T PWMOut_P12_Size[2];           /* Computed Parameter: PWMOut_P12_Size
                                        * Referenced by: '<S7>/PWM Out' (Parameter: P12Size)
                                        */
  real_T PWMOut_P12;                   /* Expression: rtDeadTimeEnabled
                                        * Referenced by: '<S7>/PWM Out' (Parameter: P12)
                                        */
  real_T PWMOut_P13_Size[2];           /* Computed Parameter: PWMOut_P13_Size
                                        * Referenced by: '<S7>/PWM Out' (Parameter: P13Size)
                                        */
  real_T PWMOut_P13[4];                /* Expression: initphase
                                        * Referenced by: '<S7>/PWM Out' (Parameter: P13)
                                        */
  real_T PWMOut_P14_Size[2];           /* Computed Parameter: PWMOut_P14_Size
                                        * Referenced by: '<S7>/PWM Out' (Parameter: P14Size)
                                        */
  real_T PWMOut_P14;                   /* Expression: maxcount
                                        * Referenced by: '<S7>/PWM Out' (Parameter: P14)
                                        */
  real_T PWMOut_P15_Size[2];           /* Computed Parameter: PWMOut_P15_Size
                                        * Referenced by: '<S7>/PWM Out' (Parameter: P15Size)
                                        */
  real_T PWMOut_P15;                   /* Expression: allowDisablingChannel
                                        * Referenced by: '<S7>/PWM Out' (Parameter: P15)
                                        */
  real_T ThreephaseSineWave_Amp_c;     /* Expression: 1
                                        * Referenced by: '<S6>/Three-phase Sine Wave' (Parameter: Amplitude)
                                        */
  real_T ThreephaseSineWave_Bias_n;    /* Expression: 0
                                        * Referenced by: '<S6>/Three-phase Sine Wave' (Parameter: Bias)
                                        */
  real_T ThreephaseSineWave_Freq_e;    /* Expression: 1
                                        * Referenced by: '<S6>/Three-phase Sine Wave' (Parameter: Frequency)
                                        */
  real_T Memory_InitialCondition_j;    /* Expression: 0
                                        * Referenced by: '<S16>/Memory' (Parameter: InitialCondition)
                                        */
  real_T ParameterSetToIndexMap_tableDat[2];/* Expression: OrderedIndices
                                             * Referenced by: '<S16>/ParameterSetToIndexMap' (Parameter: Table)
                                             */
  real_T ParameterSetToIndexMap_bp01Data[2];/* Expression: OrderedList
                                             * Referenced by: '<S16>/ParameterSetToIndexMap' (Parameter: BreakpointsForDimension1)
                                             */
  real_T g1_Value;                     /* Expression: 0
                                        * Referenced by: '<S2>/g1' (Parameter: Value)
                                        */
  real_T shift_Gain[8];                /* Expression: 2.^[0:1:7]
                                        * Referenced by: '<S49>/shift' (Parameter: Gain)
                                        */
  real_T datain_P1_Size[2];            /* Computed Parameter: datain_P1_Size
                                        * Referenced by: '<S49>/datain' (Parameter: P1Size)
                                        */
  real_T datain_P1[6];                 /* Computed Parameter: datain_P1
                                        * Referenced by: '<S49>/datain' (Parameter: P1)
                                        */
  real_T datain_P2_Size[2];            /* Computed Parameter: datain_P2_Size
                                        * Referenced by: '<S49>/datain' (Parameter: P2Size)
                                        */
  real_T datain_P2;                    /* Expression: FcnNos
                                        * Referenced by: '<S49>/datain' (Parameter: P2)
                                        */
  real_T datain_P3_Size[2];            /* Computed Parameter: datain_P3_Size
                                        * Referenced by: '<S49>/datain' (Parameter: P3Size)
                                        */
  real_T datain_P3;                    /* Expression: width
                                        * Referenced by: '<S49>/datain' (Parameter: P3)
                                        */
  real_T datain_P4_Size[2];            /* Computed Parameter: datain_P4_Size
                                        * Referenced by: '<S49>/datain' (Parameter: P4Size)
                                        */
  real_T datain_P4;                    /* Expression: portType
                                        * Referenced by: '<S49>/datain' (Parameter: P4)
                                        */
  real_T datain_P5_Size[2];            /* Computed Parameter: datain_P5_Size
                                        * Referenced by: '<S49>/datain' (Parameter: P5Size)
                                        */
  real_T datain_P5;                    /* Expression: checkVersion
                                        * Referenced by: '<S49>/datain' (Parameter: P5)
                                        */
  real_T datain_P6_Size[2];            /* Computed Parameter: datain_P6_Size
                                        * Referenced by: '<S49>/datain' (Parameter: P6Size)
                                        */
  real_T datain_P6;                    /* Expression: expectedId
                                        * Referenced by: '<S49>/datain' (Parameter: P6)
                                        */
  real_T datain_P7_Size[2];            /* Computed Parameter: datain_P7_Size
                                        * Referenced by: '<S49>/datain' (Parameter: P7Size)
                                        */
  real_T datain_P7;                    /* Expression: expectedVersion
                                        * Referenced by: '<S49>/datain' (Parameter: P7)
                                        */
  real_T datain_P8_Size[2];            /* Computed Parameter: datain_P8_Size
                                        * Referenced by: '<S49>/datain' (Parameter: P8Size)
                                        */
  real_T datain_P8;                    /* Expression: opComp
                                        * Referenced by: '<S49>/datain' (Parameter: P8)
                                        */
  real_T Constant2_Value;              /* Expression: 0
                                        * Referenced by: '<S22>/Constant2' (Parameter: Value)
                                        */
  real_T LoadIn_P1_Size_a[2];          /* Computed Parameter: LoadIn_P1_Size_a
                                        * Referenced by: '<S22>/LoadIn' (Parameter: P1Size)
                                        */
  real_T LoadIn_P1_n[6];               /* Computed Parameter: LoadIn_P1_n
                                        * Referenced by: '<S22>/LoadIn' (Parameter: P1)
                                        */
  real_T LoadIn_P2_Size_j[2];          /* Computed Parameter: LoadIn_P2_Size_j
                                        * Referenced by: '<S22>/LoadIn' (Parameter: P2Size)
                                        */
  real_T LoadIn_P2_g;                  /* Expression: fpga_port_in
                                        * Referenced by: '<S22>/LoadIn' (Parameter: P2)
                                        */
  real_T LoadIn_P3_Size_f[2];          /* Computed Parameter: LoadIn_P3_Size_f
                                        * Referenced by: '<S22>/LoadIn' (Parameter: P3Size)
                                        */
  real_T LoadIn_P3_d[23];              /* Computed Parameter: LoadIn_P3_d
                                        * Referenced by: '<S22>/LoadIn' (Parameter: P3)
                                        */
  real_T IndexToParameterSet_table;    /* Expression: 0
                                        * Referenced by: '<S17>/IndexToParameterSet' (Parameter: Table)
                                        */
  real_T OpCtrl_P1_Size[2];            /* Computed Parameter: OpCtrl_P1_Size
                                        * Referenced by: '<S2>/OpCtrl' (Parameter: P1Size)
                                        */
  real_T OpCtrl_P1[6];                 /* Computed Parameter: OpCtrl_P1
                                        * Referenced by: '<S2>/OpCtrl' (Parameter: P1)
                                        */
  real_T OpCtrl_P2_Size[2];            /* Computed Parameter: OpCtrl_P2_Size
                                        * Referenced by: '<S2>/OpCtrl' (Parameter: P2Size)
                                        */
  real_T OpCtrl_P2;                    /* Expression: boardid
                                        * Referenced by: '<S2>/OpCtrl' (Parameter: P2)
                                        */
  real_T OpCtrl_P3_Size[2];            /* Computed Parameter: OpCtrl_P3_Size
                                        * Referenced by: '<S2>/OpCtrl' (Parameter: P3Size)
                                        */
  real_T OpCtrl_P3;                    /* Expression: mode
                                        * Referenced by: '<S2>/OpCtrl' (Parameter: P3)
                                        */
  real_T OpCtrl_P4_Size[2];            /* Computed Parameter: OpCtrl_P4_Size
                                        * Referenced by: '<S2>/OpCtrl' (Parameter: P4Size)
                                        */
  real_T OpCtrl_P4;                    /* Expression: externalClock
                                        * Referenced by: '<S2>/OpCtrl' (Parameter: P4)
                                        */
  real_T OpCtrl_P5_Size[2];            /* Computed Parameter: OpCtrl_P5_Size
                                        * Referenced by: '<S2>/OpCtrl' (Parameter: P5Size)
                                        */
  real_T OpCtrl_P5;                    /* Expression: decimRtsi
                                        * Referenced by: '<S2>/OpCtrl' (Parameter: P5)
                                        */
  real_T OpCtrl_P6_Size[2];            /* Computed Parameter: OpCtrl_P6_Size
                                        * Referenced by: '<S2>/OpCtrl' (Parameter: P6Size)
                                        */
  real_T OpCtrl_P6;                    /* Expression: 1
                                        * Referenced by: '<S2>/OpCtrl' (Parameter: P6)
                                        */
  real_T OpCtrl_P7_Size[2];            /* Computed Parameter: OpCtrl_P7_Size
                                        * Referenced by: '<S2>/OpCtrl' (Parameter: P7Size)
                                        */
  real_T OpCtrl_P7;                    /* Expression: SampleTime
                                        * Referenced by: '<S2>/OpCtrl' (Parameter: P7)
                                        */
  real_T OpCtrl_P8_Size[2];            /* Computed Parameter: OpCtrl_P8_Size
                                        * Referenced by: '<S2>/OpCtrl' (Parameter: P8Size)
                                        */
  real_T OpCtrl_P8;                    /* Expression: calibIO
                                        * Referenced by: '<S2>/OpCtrl' (Parameter: P8)
                                        */
  real_T OpCtrl_P9_Size[2];            /* Computed Parameter: OpCtrl_P9_Size
                                        * Referenced by: '<S2>/OpCtrl' (Parameter: P9Size)
                                        */
  real_T OpCtrl_P9;                    /* Expression: numconfig
                                        * Referenced by: '<S2>/OpCtrl' (Parameter: P9)
                                        */
  real_T OpCtrl_P10_Size[2];           /* Computed Parameter: OpCtrl_P10_Size
                                        * Referenced by: '<S2>/OpCtrl' (Parameter: P10Size)
                                        */
  real_T OpCtrl_P10;                   /* Expression: loadinport
                                        * Referenced by: '<S2>/OpCtrl' (Parameter: P10)
                                        */
  real_T OpCtrl_P11_Size[2];           /* Computed Parameter: OpCtrl_P11_Size
                                        * Referenced by: '<S2>/OpCtrl' (Parameter: P11Size)
                                        */
  real_T OpCtrl_P11;                   /* Expression: BoardType
                                        * Referenced by: '<S2>/OpCtrl' (Parameter: P11)
                                        */
  real_T OpCtrl_P12_Size[2];           /* Computed Parameter: OpCtrl_P12_Size
                                        * Referenced by: '<S2>/OpCtrl' (Parameter: P12Size)
                                        */
  real_T OpCtrl_P12;                   /* Expression: sync_type
                                        * Referenced by: '<S2>/OpCtrl' (Parameter: P12)
                                        */
  real_T OpCtrl_P13_Size[2];           /* Computed Parameter: OpCtrl_P13_Size
                                        * Referenced by: '<S2>/OpCtrl' (Parameter: P13Size)
                                        */
  real_T OpCtrl_P13;                   /* Expression: scope_enable
                                        * Referenced by: '<S2>/OpCtrl' (Parameter: P13)
                                        */
  real_T OpCtrl_P14_Size[2];           /* Computed Parameter: OpCtrl_P14_Size
                                        * Referenced by: '<S2>/OpCtrl' (Parameter: P14Size)
                                        */
  real_T OpCtrl_P14[67];               /* Computed Parameter: OpCtrl_P14
                                        * Referenced by: '<S2>/OpCtrl' (Parameter: P14)
                                        */
  real_T OpCtrl_P15_Size[2];           /* Computed Parameter: OpCtrl_P15_Size
                                        * Referenced by: '<S2>/OpCtrl' (Parameter: P15Size)
                                        */
  real_T OpCtrl_P15;                   /* Expression: mismatch_disable
                                        * Referenced by: '<S2>/OpCtrl' (Parameter: P15)
                                        */
  real_T Constant_Value_g;             /* Expression: .5
                                        * Referenced by: '<S4>/Constant' (Parameter: Value)
                                        */
  real_T Step_Time;                    /* Expression: 0.5
                                        * Referenced by: '<S4>/Step' (Parameter: Time)
                                        */
  real_T Step_Y0;                      /* Expression: 0
                                        * Referenced by: '<S4>/Step' (Parameter: Before)
                                        */
  real_T Step_YFinal;                  /* Expression: 1
                                        * Referenced by: '<S4>/Step' (Parameter: After)
                                        */
  real_T OpTrigger_P1_Size[2];         /* Computed Parameter: OpTrigger_P1_Size
                                        * Referenced by: '<S4>/OpTrigger' (Parameter: P1Size)
                                        */
  real_T OpTrigger_P1;                 /* Expression: Acq_Group
                                        * Referenced by: '<S4>/OpTrigger' (Parameter: P1)
                                        */
  real_T OpTrigger_P2_Size[2];         /* Computed Parameter: OpTrigger_P2_Size
                                        * Referenced by: '<S4>/OpTrigger' (Parameter: P2Size)
                                        */
  real_T OpTrigger_P2;                 /* Expression: Trig_Type
                                        * Referenced by: '<S4>/OpTrigger' (Parameter: P2)
                                        */
  real_T OpTrigger_P3_Size[2];         /* Computed Parameter: OpTrigger_P3_Size
                                        * Referenced by: '<S4>/OpTrigger' (Parameter: P3Size)
                                        */
  real_T OpTrigger_P3;                 /* Expression: Trig_Offset
                                        * Referenced by: '<S4>/OpTrigger' (Parameter: P3)
                                        */
  uint32_T Saturation_UpperSat_n[9];/* Computed Parameter: Saturation_UpperSat_n
                                     * Referenced by: '<S34>/Saturation' (Parameter: UpperLimit)
                                     */
  uint32_T Saturation_LowerSat_k[9];/* Computed Parameter: Saturation_LowerSat_k
                                     * Referenced by: '<S34>/Saturation' (Parameter: LowerLimit)
                                     */
  uint32_T Saturation_UpperSat_i;   /* Computed Parameter: Saturation_UpperSat_i
                                     * Referenced by: '<S35>/Saturation' (Parameter: UpperLimit)
                                     */
  uint32_T Saturation_LowerSat_c;   /* Computed Parameter: Saturation_LowerSat_c
                                     * Referenced by: '<S35>/Saturation' (Parameter: LowerLimit)
                                     */
  uint32_T Constant_Value_k[2];        /* Computed Parameter: Constant_Value_k
                                        * Referenced by: '<S35>/Constant' (Parameter: Value)
                                        */
  uint32_T toogleload_Value;           /* Computed Parameter: toogleload_Value
                                        * Referenced by: '<S49>/toogleload' (Parameter: Value)
                                        */
  uint32_T lastdata_Value;             /* Computed Parameter: lastdata_Value
                                        * Referenced by: '<S49>/lastdata' (Parameter: Value)
                                        */
  uint32_T Constant5_Value[10];        /* Computed Parameter: Constant5_Value
                                        * Referenced by: '<S22>/Constant5' (Parameter: Value)
                                        */
  uint8_T Constant_Value_ck;           /* Computed Parameter: Constant_Value_ck
                                        * Referenced by: '<S50>/Constant' (Parameter: Value)
                                        */
  uint8_T DataStoreMemory_InitialValue;
                             /* Computed Parameter: DataStoreMemory_InitialValue
                              * Referenced by: '<S23>/Data Store Memory' (Parameter: InitialValue)
                              */
};

/* Real-time Model Data Structure */
struct tag_RTM_boost_and_two_level__1_sm_controller_T {
  const char_T *path;
  const char_T *modelName;
  struct SimStruct_tag * *childSfunctions;
  const char_T *errorStatus;
  SS_SimMode simMode;
  RTWLogInfo *rtwLogInfo;
  RTWExtModeInfo *extModeInfo;
  RTWSolverInfo solverInfo;
  RTWSolverInfo *solverInfoPtr;
  void *sfcnInfo;

  /*
   * NonInlinedSFcns:
   * The following substructure contains information regarding
   * non-inlined s-functions used in the model.
   */
  struct {
    RTWSfcnInfo sfcnInfo;
    time_T *taskTimePtrs[1];
    SimStruct childSFunctions[23];
    SimStruct *childSFunctionPtrs[23];
    struct _ssBlkInfo2 blkInfo2[23];
    struct _ssSFcnModelMethods2 methods2[23];
    struct _ssSFcnModelMethods3 methods3[23];
    struct _ssSFcnModelMethods4 methods4[23];
    struct _ssStatesInfo2 statesInfo2[23];
    ssPeriodicStatesInfo periodicStatesInfo[23];
    struct _ssPortInfo2 inputOutputPortInfo2[23];
    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      struct _ssInPortUnit inputPortUnits[1];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[1];
      real_T const *UPtrs0[1];
      struct _ssPortOutputs outputPortInfo[1];
      struct _ssOutPortUnit outputPortUnits[1];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[1];
    } Sfcn0;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      struct _ssInPortUnit inputPortUnits[1];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[1];
      real_T const *UPtrs0[1];
      struct _ssPortOutputs outputPortInfo[1];
      struct _ssOutPortUnit outputPortUnits[1];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[1];
    } Sfcn1;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      struct _ssInPortUnit inputPortUnits[1];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[1];
      real_T const *UPtrs0[1];
      struct _ssPortOutputs outputPortInfo[1];
      struct _ssOutPortUnit outputPortUnits[1];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[1];
    } Sfcn2;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      struct _ssInPortUnit inputPortUnits[1];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[1];
      real_T const *UPtrs0[1];
      struct _ssPortOutputs outputPortInfo[1];
      struct _ssOutPortUnit outputPortUnits[1];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[1];
    } Sfcn3;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      struct _ssInPortUnit inputPortUnits[1];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[1];
      struct _ssPortOutputs outputPortInfo[1];
      struct _ssOutPortUnit outputPortUnits[1];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[1];
      uint_T attribs[8];
      mxArray *params[8];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn4;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[2];
      struct _ssInPortUnit inputPortUnits[2];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[2];
      struct _ssPortOutputs outputPortInfo[1];
      struct _ssOutPortUnit outputPortUnits[1];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[1];
      uint_T attribs[4];
      mxArray *params[4];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn5;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortOutputs outputPortInfo[2];
      struct _ssOutPortUnit outputPortUnits[2];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[2];
      uint_T attribs[9];
      mxArray *params[9];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn6;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      struct _ssInPortUnit inputPortUnits[1];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[1];
      real_T const *UPtrs0[1];
      struct _ssPortOutputs outputPortInfo[1];
      struct _ssOutPortUnit outputPortUnits[1];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[1];
    } Sfcn7;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      struct _ssInPortUnit inputPortUnits[1];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[1];
      real_T const *UPtrs0[1];
      struct _ssPortOutputs outputPortInfo[1];
      struct _ssOutPortUnit outputPortUnits[1];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[1];
    } Sfcn8;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      struct _ssInPortUnit inputPortUnits[1];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[1];
      real_T const *UPtrs0[1];
      struct _ssPortOutputs outputPortInfo[1];
      struct _ssOutPortUnit outputPortUnits[1];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[1];
    } Sfcn9;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      struct _ssInPortUnit inputPortUnits[1];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[1];
      real_T const *UPtrs0[1];
      struct _ssPortOutputs outputPortInfo[1];
      struct _ssOutPortUnit outputPortUnits[1];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[1];
    } Sfcn10;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      struct _ssInPortUnit inputPortUnits[1];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[1];
      real_T const *UPtrs0[1];
      struct _ssPortOutputs outputPortInfo[1];
      struct _ssOutPortUnit outputPortUnits[1];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[1];
    } Sfcn11;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      struct _ssInPortUnit inputPortUnits[1];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[1];
      real_T const *UPtrs0[1];
      struct _ssPortOutputs outputPortInfo[1];
      struct _ssOutPortUnit outputPortUnits[1];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[1];
    } Sfcn12;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      struct _ssInPortUnit inputPortUnits[1];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[1];
      real_T const *UPtrs0[1];
      struct _ssPortOutputs outputPortInfo[1];
      struct _ssOutPortUnit outputPortUnits[1];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[1];
    } Sfcn13;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      struct _ssInPortUnit inputPortUnits[1];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[1];
      real_T const *UPtrs0[1];
      struct _ssPortOutputs outputPortInfo[1];
      struct _ssOutPortUnit outputPortUnits[1];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[1];
    } Sfcn14;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      struct _ssInPortUnit inputPortUnits[1];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[1];
      real_T const *UPtrs0[1];
      struct _ssPortOutputs outputPortInfo[1];
      struct _ssOutPortUnit outputPortUnits[1];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[1];
    } Sfcn15;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      struct _ssInPortUnit inputPortUnits[1];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[1];
      real_T const *UPtrs0[8];
      uint_T attribs[1];
      mxArray *params[1];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn16;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortOutputs outputPortInfo[1];
      struct _ssOutPortUnit outputPortUnits[1];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[1];
      uint_T attribs[2];
      mxArray *params[2];
    } Sfcn17;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[2];
      struct _ssInPortUnit inputPortUnits[2];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[2];
      real_T const *UPtrs0[4];
      real_T const *UPtrs1[4];
      struct _ssPortOutputs outputPortInfo[1];
      struct _ssOutPortUnit outputPortUnits[1];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[1];
      uint_T attribs[15];
      mxArray *params[15];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn18;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      struct _ssInPortUnit inputPortUnits[1];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[1];
      struct _ssPortOutputs outputPortInfo[1];
      struct _ssOutPortUnit outputPortUnits[1];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[1];
      uint_T attribs[8];
      mxArray *params[8];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn19;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[2];
      struct _ssInPortUnit inputPortUnits[2];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[2];
      real_T const *UPtrs0[1];
      real_T const *UPtrs1[10];
      struct _ssPortOutputs outputPortInfo[1];
      struct _ssOutPortUnit outputPortUnits[1];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[1];
      uint_T attribs[3];
      mxArray *params[3];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn20;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortOutputs outputPortInfo[2];
      struct _ssOutPortUnit outputPortUnits[2];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[2];
      uint_T attribs[15];
      mxArray *params[15];
      struct _ssDWorkRecord dWork[2];
      struct _ssDWorkAuxRecord dWorkAux[2];
    } Sfcn21;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[2];
      struct _ssInPortUnit inputPortUnits[2];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[2];
      real_T const *UPtrs0[1];
      real_T const *UPtrs1[1];
      struct _ssPortOutputs outputPortInfo[1];
      struct _ssOutPortUnit outputPortUnits[1];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[1];
      uint_T attribs[3];
      mxArray *params[3];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn22;
  } NonInlinedSFcns;

  /*
   * ModelData:
   * The following substructure contains information regarding
   * the data used in the model.
   */
  struct {
    void *blockIO;
    const void *constBlockIO;
    void *defaultParam;
    ZCSigState *prevZCSigState;
    real_T *contStates;
    int_T *periodicContStateIndices;
    real_T *periodicContStateRanges;
    real_T *derivs;
    void *zcSignalValues;
    void *inputs;
    void *outputs;
    boolean_T *contStateDisabled;
    boolean_T zCCacheNeedsReset;
    boolean_T derivCacheNeedsReset;
    boolean_T CTOutputIncnstWithState;
    void *dwork;
  } ModelData;

  /*
   * Sizes:
   * The following substructure contains sizes information
   * for many of the model attributes such as inputs, outputs,
   * dwork, sample times, etc.
   */
  struct {
    uint32_T checksums[4];
    uint32_T options;
    int_T numContStates;
    int_T numPeriodicContStates;
    int_T numU;
    int_T numY;
    int_T numSampTimes;
    int_T numBlocks;
    int_T numBlockIO;
    int_T numBlockPrms;
    int_T numDwork;
    int_T numSFcnPrms;
    int_T numSFcns;
    int_T numIports;
    int_T numOports;
    int_T numNonSampZCs;
    int_T sysDirFeedThru;
    int_T rtwGenSfcn;
  } Sizes;

  /*
   * SpecialInfo:
   * The following substructure contains special information
   * related to other components that are dependent on RTW.
   */
  struct {
    const void *mappingInfo;
    void *xpcData;
  } SpecialInfo;

  /*
   * Timing:
   * The following substructure contains information regarding
   * the timing information for the model.
   */
  struct {
    time_T stepSize;
    uint32_T clockTick0;
    uint32_T clockTickH0;
    time_T stepSize0;
    time_T tStart;
    time_T tFinal;
    time_T timeOfLastOutput;
    void *timingData;
    real_T *varNextHitTimesList;
    SimTimeStep simTimeStep;
    boolean_T stopRequestedFlag;
    time_T *sampleTimes;
    time_T *offsetTimes;
    int_T *sampleTimeTaskIDPtr;
    int_T *sampleHits;
    int_T *perTaskSampleHits;
    time_T *t;
    time_T sampleTimesArray[1];
    time_T offsetTimesArray[1];
    int_T sampleTimeTaskIDArray[1];
    int_T sampleHitArray[1];
    int_T perTaskSampleHitsArray[1];
    time_T tArray[1];
  } Timing;
};

/* Block parameters (default storage) */
extern P_boost_and_two_level__1_sm_controller_T
  boost_and_two_level__1_sm_controller_P;

/* Block signals (default storage) */
extern B_boost_and_two_level__1_sm_controller_T
  boost_and_two_level__1_sm_controller_B;

/* Block states (default storage) */
extern DW_boost_and_two_level__1_sm_controller_T
  boost_and_two_level__1_sm_controller_DW;

/*====================*
 * External functions *
 *====================*/
extern boost_and_two_level__1_sm_controller_rtModel
  *boost_and_two_level__1_sm_controller(void);
extern void MdlInitializeSizes(void);
extern void MdlInitializeSampleTimes(void);
extern void MdlInitialize(void);
extern void MdlStart(void);
extern void MdlOutputs(int_T tid);
extern void MdlUpdate(int_T tid);
extern void MdlTerminate(void);

/* Real-time Model object */
extern RT_MODEL_boost_and_two_level__1_sm_controller_T *const
  boost_and_two_level__1_sm_controller_M;

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'boost_and_two_level__1_sm_controller'
 * '<S1>'   : 'boost_and_two_level__1_sm_controller/OpCCode_do_not_touch'
 * '<S2>'   : 'boost_and_two_level__1_sm_controller/SM_Controller'
 * '<S3>'   : 'boost_and_two_level__1_sm_controller/SM_Controller/3ph_Sinewave_Angle_Generator'
 * '<S4>'   : 'boost_and_two_level__1_sm_controller/SM_Controller/Acquisition Trigger'
 * '<S5>'   : 'boost_and_two_level__1_sm_controller/SM_Controller/Circuit_Control'
 * '<S6>'   : 'boost_and_two_level__1_sm_controller/SM_Controller/Circuit_Input'
 * '<S7>'   : 'boost_and_two_level__1_sm_controller/SM_Controller/Digital_Out'
 * '<S8>'   : 'boost_and_two_level__1_sm_controller/SM_Controller/OpComm'
 * '<S9>'   : 'boost_and_two_level__1_sm_controller/SM_Controller/eHS1'
 * '<S10>'  : 'boost_and_two_level__1_sm_controller/SM_Controller/rtlab_send_subsystem'
 * '<S11>'  : 'boost_and_two_level__1_sm_controller/SM_Controller/3ph_Sinewave_Angle_Generator/3ph Angle Generator'
 * '<S12>'  : 'boost_and_two_level__1_sm_controller/SM_Controller/Circuit_Control/Control'
 * '<S13>'  : 'boost_and_two_level__1_sm_controller/SM_Controller/OpComm/Receive'
 * '<S14>'  : 'boost_and_two_level__1_sm_controller/SM_Controller/OpComm/busStruct'
 * '<S15>'  : 'boost_and_two_level__1_sm_controller/SM_Controller/OpComm/busStruct/Sub1'
 * '<S16>'  : 'boost_and_two_level__1_sm_controller/SM_Controller/eHS1/ParameterSetToIndex'
 * '<S17>'  : 'boost_and_two_level__1_sm_controller/SM_Controller/eHS1/eHSDrivers'
 * '<S18>'  : 'boost_and_two_level__1_sm_controller/SM_Controller/eHS1/eHSDrivers/addon_drivers_1'
 * '<S19>'  : 'boost_and_two_level__1_sm_controller/SM_Controller/eHS1/eHSDrivers/addon_drivers_1/DataIn Driver'
 * '<S20>'  : 'boost_and_two_level__1_sm_controller/SM_Controller/eHS1/eHSDrivers/addon_drivers_1/DataOut Driver'
 * '<S21>'  : 'boost_and_two_level__1_sm_controller/SM_Controller/eHS1/eHSDrivers/addon_drivers_1/Gate Driver'
 * '<S22>'  : 'boost_and_two_level__1_sm_controller/SM_Controller/eHS1/eHSDrivers/addon_drivers_1/LoadIn Driver'
 * '<S23>'  : 'boost_and_two_level__1_sm_controller/SM_Controller/eHS1/eHSDrivers/addon_drivers_1/LoadIn eHS Status'
 * '<S24>'  : 'boost_and_two_level__1_sm_controller/SM_Controller/eHS1/eHSDrivers/addon_drivers_1/DataIn Driver/driver'
 * '<S25>'  : 'boost_and_two_level__1_sm_controller/SM_Controller/eHS1/eHSDrivers/addon_drivers_1/DataIn Driver/driver/DataIn Format'
 * '<S26>'  : 'boost_and_two_level__1_sm_controller/SM_Controller/eHS1/eHSDrivers/addon_drivers_1/DataIn Driver/driver/DataIn Send'
 * '<S27>'  : 'boost_and_two_level__1_sm_controller/SM_Controller/eHS1/eHSDrivers/addon_drivers_1/DataIn Driver/driver/DataIn Format/Reinterpreters'
 * '<S28>'  : 'boost_and_two_level__1_sm_controller/SM_Controller/eHS1/eHSDrivers/addon_drivers_1/DataIn Driver/driver/DataIn Format/Reinterpreters/reinterpreter_1'
 * '<S29>'  : 'boost_and_two_level__1_sm_controller/SM_Controller/eHS1/eHSDrivers/addon_drivers_1/DataIn Driver/driver/DataIn Format/Reinterpreters/reinterpreter_2'
 * '<S30>'  : 'boost_and_two_level__1_sm_controller/SM_Controller/eHS1/eHSDrivers/addon_drivers_1/DataIn Driver/driver/DataIn Format/Reinterpreters/reinterpreter_3'
 * '<S31>'  : 'boost_and_two_level__1_sm_controller/SM_Controller/eHS1/eHSDrivers/addon_drivers_1/DataIn Driver/driver/DataIn Format/Reinterpreters/reinterpreter_4'
 * '<S32>'  : 'boost_and_two_level__1_sm_controller/SM_Controller/eHS1/eHSDrivers/addon_drivers_1/DataOut Driver/DataOut Format'
 * '<S33>'  : 'boost_and_two_level__1_sm_controller/SM_Controller/eHS1/eHSDrivers/addon_drivers_1/DataOut Driver/Receive DataOut'
 * '<S34>'  : 'boost_and_two_level__1_sm_controller/SM_Controller/eHS1/eHSDrivers/addon_drivers_1/DataOut Driver/DataOut Format/DataOut Formatter'
 * '<S35>'  : 'boost_and_two_level__1_sm_controller/SM_Controller/eHS1/eHSDrivers/addon_drivers_1/DataOut Driver/DataOut Format/averagingDemux'
 * '<S36>'  : 'boost_and_two_level__1_sm_controller/SM_Controller/eHS1/eHSDrivers/addon_drivers_1/DataOut Driver/DataOut Format/DataOut Formatter/Reinterpreters'
 * '<S37>'  : 'boost_and_two_level__1_sm_controller/SM_Controller/eHS1/eHSDrivers/addon_drivers_1/DataOut Driver/DataOut Format/DataOut Formatter/Reinterpreters/reinterpreter_1'
 * '<S38>'  : 'boost_and_two_level__1_sm_controller/SM_Controller/eHS1/eHSDrivers/addon_drivers_1/DataOut Driver/DataOut Format/DataOut Formatter/Reinterpreters/reinterpreter_2'
 * '<S39>'  : 'boost_and_two_level__1_sm_controller/SM_Controller/eHS1/eHSDrivers/addon_drivers_1/DataOut Driver/DataOut Format/DataOut Formatter/Reinterpreters/reinterpreter_3'
 * '<S40>'  : 'boost_and_two_level__1_sm_controller/SM_Controller/eHS1/eHSDrivers/addon_drivers_1/DataOut Driver/DataOut Format/DataOut Formatter/Reinterpreters/reinterpreter_4'
 * '<S41>'  : 'boost_and_two_level__1_sm_controller/SM_Controller/eHS1/eHSDrivers/addon_drivers_1/DataOut Driver/DataOut Format/DataOut Formatter/Reinterpreters/reinterpreter_5'
 * '<S42>'  : 'boost_and_two_level__1_sm_controller/SM_Controller/eHS1/eHSDrivers/addon_drivers_1/DataOut Driver/DataOut Format/DataOut Formatter/Reinterpreters/reinterpreter_6'
 * '<S43>'  : 'boost_and_two_level__1_sm_controller/SM_Controller/eHS1/eHSDrivers/addon_drivers_1/DataOut Driver/DataOut Format/DataOut Formatter/Reinterpreters/reinterpreter_7'
 * '<S44>'  : 'boost_and_two_level__1_sm_controller/SM_Controller/eHS1/eHSDrivers/addon_drivers_1/DataOut Driver/DataOut Format/DataOut Formatter/Reinterpreters/reinterpreter_8'
 * '<S45>'  : 'boost_and_two_level__1_sm_controller/SM_Controller/eHS1/eHSDrivers/addon_drivers_1/DataOut Driver/DataOut Format/DataOut Formatter/Reinterpreters/reinterpreter_9'
 * '<S46>'  : 'boost_and_two_level__1_sm_controller/SM_Controller/eHS1/eHSDrivers/addon_drivers_1/Gate Driver/ehsCpuGates'
 * '<S47>'  : 'boost_and_two_level__1_sm_controller/SM_Controller/eHS1/eHSDrivers/addon_drivers_1/Gate Driver/ehsCpuGates/gateSpec'
 * '<S48>'  : 'boost_and_two_level__1_sm_controller/SM_Controller/eHS1/eHSDrivers/addon_drivers_1/Gate Driver/ehsCpuGates/gates'
 * '<S49>'  : 'boost_and_two_level__1_sm_controller/SM_Controller/eHS1/eHSDrivers/addon_drivers_1/Gate Driver/ehsCpuGates/gates/send8Gates_00'
 * '<S50>'  : 'boost_and_two_level__1_sm_controller/SM_Controller/eHS1/eHSDrivers/addon_drivers_1/LoadIn eHS Status/setInitialResetDone'
 * '<S51>'  : 'boost_and_two_level__1_sm_controller/SM_Controller/eHS1/eHSDrivers/addon_drivers_1/LoadIn eHS Status/writeStatus'
 * '<S52>'  : 'boost_and_two_level__1_sm_controller/SM_Controller/eHS1/eHSDrivers/addon_drivers_1/LoadIn eHS Status/writeStatus/LoadIn Send'
 * '<S53>'  : 'boost_and_two_level__1_sm_controller/SM_Controller/eHS1/eHSDrivers/addon_drivers_1/LoadIn eHS Status/writeStatus/isResetNeeded'
 * '<S54>'  : 'boost_and_two_level__1_sm_controller/SM_Controller/eHS1/eHSDrivers/addon_drivers_1/LoadIn eHS Status/writeStatus/LoadIn Send/Detect Change'
 * '<S55>'  : 'boost_and_two_level__1_sm_controller/SM_Controller/eHS1/eHSDrivers/addon_drivers_1/LoadIn eHS Status/writeStatus/isResetNeeded/Compare To Constant'
 * '<S56>'  : 'boost_and_two_level__1_sm_controller/SM_Controller/rtlab_send_subsystem/Subsystem1'
 * '<S57>'  : 'boost_and_two_level__1_sm_controller/SM_Controller/rtlab_send_subsystem/Subsystem1/Send1'
 */
#endif                  /* RTW_HEADER_boost_and_two_level__1_sm_controller_h_ */
