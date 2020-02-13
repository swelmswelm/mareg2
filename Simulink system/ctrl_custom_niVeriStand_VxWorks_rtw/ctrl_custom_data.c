/*
 * ctrl_custom_data.c
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "ctrl_custom".
 *
 * Model version              : 1.66
 * Simulink Coder version : 8.11 (R2016b) 25-Aug-2016
 * C source code generated on : Fri Jan 18 13:09:08 2019
 *
 * Target selection: NIVeriStand_VxWorks.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: 32-bit Generic
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "ctrl_custom.h"
#include "ctrl_custom_private.h"

/* Block parameters (auto storage) */
P_ctrl_custom_T ctrl_custom_P = {
  -1.0,                                /* Expression: width
                                        * Referenced by: '<Root>/SIXAIS_INN'
                                        */
  1.0,                                 /* Expression: dtype
                                        * Referenced by: '<Root>/SIXAIS_INN'
                                        */
  1.0,                                 /* Expression: portnum
                                        * Referenced by: '<Root>/SIXAIS_INN'
                                        */
  -1.0,                                /* Expression: stime
                                        * Referenced by: '<Root>/SIXAIS_INN'
                                        */
  1.0,                                 /* Expression: stype
                                        * Referenced by: '<Root>/SIXAIS_INN'
                                        */
  1.0,                                 /* Expression: btype
                                        * Referenced by: '<Root>/SIXAIS_INN'
                                        */
  -1.0,                                /* Expression: width
                                        * Referenced by: '<Root>/SIXAIS_OUT'
                                        */
  1.0,                                 /* Expression: dtype
                                        * Referenced by: '<Root>/SIXAIS_OUT'
                                        */
  4.0,                                 /* Expression: portnum
                                        * Referenced by: '<Root>/SIXAIS_OUT'
                                        */
  -1.0,                                /* Expression: stime
                                        * Referenced by: '<Root>/SIXAIS_OUT'
                                        */
  1.0,                                 /* Expression: stype
                                        * Referenced by: '<Root>/SIXAIS_OUT'
                                        */
  0.0,                                 /* Expression: btype
                                        * Referenced by: '<Root>/SIXAIS_OUT'
                                        */
  -1.0,                                /* Expression: width
                                        * Referenced by: '<S3>/x_m'
                                        */
  1.0,                                 /* Expression: dtype
                                        * Referenced by: '<S3>/x_m'
                                        */
  1.0,                                 /* Expression: portnum
                                        * Referenced by: '<S3>/x_m'
                                        */
  -1.0,                                /* Expression: stime
                                        * Referenced by: '<S3>/x_m'
                                        */
  1.0,                                 /* Expression: stype
                                        * Referenced by: '<S3>/x_m'
                                        */
  1.0,                                 /* Expression: btype
                                        * Referenced by: '<S3>/x_m'
                                        */
  -1.0,                                /* Expression: width
                                        * Referenced by: '<Root>/QTM_SCOPEX'
                                        */
  1.0,                                 /* Expression: dtype
                                        * Referenced by: '<Root>/QTM_SCOPEX'
                                        */
  8.0,                                 /* Expression: portnum
                                        * Referenced by: '<Root>/QTM_SCOPEX'
                                        */
  -1.0,                                /* Expression: stime
                                        * Referenced by: '<Root>/QTM_SCOPEX'
                                        */
  1.0,                                 /* Expression: stype
                                        * Referenced by: '<Root>/QTM_SCOPEX'
                                        */
  0.0,                                 /* Expression: btype
                                        * Referenced by: '<Root>/QTM_SCOPEX'
                                        */
  -1.0,                                /* Expression: width
                                        * Referenced by: '<S3>/y_m'
                                        */
  1.0,                                 /* Expression: dtype
                                        * Referenced by: '<S3>/y_m'
                                        */
  2.0,                                 /* Expression: portnum
                                        * Referenced by: '<S3>/y_m'
                                        */
  -1.0,                                /* Expression: stime
                                        * Referenced by: '<S3>/y_m'
                                        */
  1.0,                                 /* Expression: stype
                                        * Referenced by: '<S3>/y_m'
                                        */
  1.0,                                 /* Expression: btype
                                        * Referenced by: '<S3>/y_m'
                                        */
  -1.0,                                /* Expression: width
                                        * Referenced by: '<Root>/QTM_SCOPEY'
                                        */
  1.0,                                 /* Expression: dtype
                                        * Referenced by: '<Root>/QTM_SCOPEY'
                                        */
  9.0,                                 /* Expression: portnum
                                        * Referenced by: '<Root>/QTM_SCOPEY'
                                        */
  -1.0,                                /* Expression: stime
                                        * Referenced by: '<Root>/QTM_SCOPEY'
                                        */
  1.0,                                 /* Expression: stype
                                        * Referenced by: '<Root>/QTM_SCOPEY'
                                        */
  0.0,                                 /* Expression: btype
                                        * Referenced by: '<Root>/QTM_SCOPEY'
                                        */
  -1.0,                                /* Expression: width
                                        * Referenced by: '<S3>/psi_m'
                                        */
  1.0,                                 /* Expression: dtype
                                        * Referenced by: '<S3>/psi_m'
                                        */
  3.0,                                 /* Expression: portnum
                                        * Referenced by: '<S3>/psi_m'
                                        */
  -1.0,                                /* Expression: stime
                                        * Referenced by: '<S3>/psi_m'
                                        */
  1.0,                                 /* Expression: stype
                                        * Referenced by: '<S3>/psi_m'
                                        */
  1.0,                                 /* Expression: btype
                                        * Referenced by: '<S3>/psi_m'
                                        */
  -1.0,                                /* Expression: width
                                        * Referenced by: '<Root>/QTM_SCOPEPSI'
                                        */
  1.0,                                 /* Expression: dtype
                                        * Referenced by: '<Root>/QTM_SCOPEPSI'
                                        */
  10.0,                                /* Expression: portnum
                                        * Referenced by: '<Root>/QTM_SCOPEPSI'
                                        */
  -1.0,                                /* Expression: stime
                                        * Referenced by: '<Root>/QTM_SCOPEPSI'
                                        */
  1.0,                                 /* Expression: stype
                                        * Referenced by: '<Root>/QTM_SCOPEPSI'
                                        */
  0.0,                                 /* Expression: btype
                                        * Referenced by: '<Root>/QTM_SCOPEPSI'
                                        */
  -1.0,                                /* Expression: width
                                        * Referenced by: '<S1>/Acc_z'
                                        */
  1.0,                                 /* Expression: dtype
                                        * Referenced by: '<S1>/Acc_z'
                                        */
  3.0,                                 /* Expression: portnum
                                        * Referenced by: '<S1>/Acc_z'
                                        */
  -1.0,                                /* Expression: stime
                                        * Referenced by: '<S1>/Acc_z'
                                        */
  1.0,                                 /* Expression: stype
                                        * Referenced by: '<S1>/Acc_z'
                                        */
  1.0,                                 /* Expression: btype
                                        * Referenced by: '<S1>/Acc_z'
                                        */
  -1.0,                                /* Expression: width
                                        * Referenced by: '<S1>/IMU_SCOPEZ'
                                        */
  1.0,                                 /* Expression: dtype
                                        * Referenced by: '<S1>/IMU_SCOPEZ'
                                        */
  1.0,                                 /* Expression: portnum
                                        * Referenced by: '<S1>/IMU_SCOPEZ'
                                        */
  -1.0,                                /* Expression: stime
                                        * Referenced by: '<S1>/IMU_SCOPEZ'
                                        */
  1.0,                                 /* Expression: stype
                                        * Referenced by: '<S1>/IMU_SCOPEZ'
                                        */
  0.0,                                 /* Expression: btype
                                        * Referenced by: '<S1>/IMU_SCOPEZ'
                                        */
  -1.0,                                /* Expression: width
                                        * Referenced by: '<S1>/Acc_x'
                                        */
  1.0,                                 /* Expression: dtype
                                        * Referenced by: '<S1>/Acc_x'
                                        */
  1.0,                                 /* Expression: portnum
                                        * Referenced by: '<S1>/Acc_x'
                                        */
  -1.0,                                /* Expression: stime
                                        * Referenced by: '<S1>/Acc_x'
                                        */
  1.0,                                 /* Expression: stype
                                        * Referenced by: '<S1>/Acc_x'
                                        */
  1.0,                                 /* Expression: btype
                                        * Referenced by: '<S1>/Acc_x'
                                        */
  -1.0,                                /* Expression: width
                                        * Referenced by: '<S1>/Acc_y'
                                        */
  1.0,                                 /* Expression: dtype
                                        * Referenced by: '<S1>/Acc_y'
                                        */
  2.0,                                 /* Expression: portnum
                                        * Referenced by: '<S1>/Acc_y'
                                        */
  -1.0,                                /* Expression: stime
                                        * Referenced by: '<S1>/Acc_y'
                                        */
  1.0,                                 /* Expression: stype
                                        * Referenced by: '<S1>/Acc_y'
                                        */
  1.0,                                 /* Expression: btype
                                        * Referenced by: '<S1>/Acc_y'
                                        */
  -1.0,                                /* Expression: width
                                        * Referenced by: '<S1>/Gyro_x'
                                        */
  1.0,                                 /* Expression: dtype
                                        * Referenced by: '<S1>/Gyro_x'
                                        */
  4.0,                                 /* Expression: portnum
                                        * Referenced by: '<S1>/Gyro_x'
                                        */
  -1.0,                                /* Expression: stime
                                        * Referenced by: '<S1>/Gyro_x'
                                        */
  1.0,                                 /* Expression: stype
                                        * Referenced by: '<S1>/Gyro_x'
                                        */
  1.0,                                 /* Expression: btype
                                        * Referenced by: '<S1>/Gyro_x'
                                        */
  -1.0,                                /* Expression: width
                                        * Referenced by: '<S1>/Gyro_y'
                                        */
  1.0,                                 /* Expression: dtype
                                        * Referenced by: '<S1>/Gyro_y'
                                        */
  5.0,                                 /* Expression: portnum
                                        * Referenced by: '<S1>/Gyro_y'
                                        */
  -1.0,                                /* Expression: stime
                                        * Referenced by: '<S1>/Gyro_y'
                                        */
  1.0,                                 /* Expression: stype
                                        * Referenced by: '<S1>/Gyro_y'
                                        */
  1.0,                                 /* Expression: btype
                                        * Referenced by: '<S1>/Gyro_y'
                                        */
  -1.0,                                /* Expression: width
                                        * Referenced by: '<S1>/Gyro_z'
                                        */
  1.0,                                 /* Expression: dtype
                                        * Referenced by: '<S1>/Gyro_z'
                                        */
  6.0,                                 /* Expression: portnum
                                        * Referenced by: '<S1>/Gyro_z'
                                        */
  -1.0,                                /* Expression: stime
                                        * Referenced by: '<S1>/Gyro_z'
                                        */
  1.0,                                 /* Expression: stype
                                        * Referenced by: '<S1>/Gyro_z'
                                        */
  1.0,                                 /* Expression: btype
                                        * Referenced by: '<S1>/Gyro_z'
                                        */
  -1.0,                                /* Expression: width
                                        * Referenced by: '<S4>/alpha_VSP2'
                                        */
  1.0,                                 /* Expression: dtype
                                        * Referenced by: '<S4>/alpha_VSP2'
                                        */
  1.0,                                 /* Expression: portnum
                                        * Referenced by: '<S4>/alpha_VSP2'
                                        */
  -1.0,                                /* Expression: stime
                                        * Referenced by: '<S4>/alpha_VSP2'
                                        */
  1.0,                                 /* Expression: stype
                                        * Referenced by: '<S4>/alpha_VSP2'
                                        */
  0.0,                                 /* Expression: btype
                                        * Referenced by: '<S4>/alpha_VSP2'
                                        */
  -1.0,                                /* Expression: width
                                        * Referenced by: '<S4>/omega_VSP1'
                                        */
  1.0,                                 /* Expression: dtype
                                        * Referenced by: '<S4>/omega_VSP1'
                                        */
  2.0,                                 /* Expression: portnum
                                        * Referenced by: '<S4>/omega_VSP1'
                                        */
  -1.0,                                /* Expression: stime
                                        * Referenced by: '<S4>/omega_VSP1'
                                        */
  1.0,                                 /* Expression: stype
                                        * Referenced by: '<S4>/omega_VSP1'
                                        */
  0.0,                                 /* Expression: btype
                                        * Referenced by: '<S4>/omega_VSP1'
                                        */
  -1.0,                                /* Expression: width
                                        * Referenced by: '<S4>/omega_VSP2'
                                        */
  1.0,                                 /* Expression: dtype
                                        * Referenced by: '<S4>/omega_VSP2'
                                        */
  3.0,                                 /* Expression: portnum
                                        * Referenced by: '<S4>/omega_VSP2'
                                        */
  -1.0,                                /* Expression: stime
                                        * Referenced by: '<S4>/omega_VSP2'
                                        */
  1.0,                                 /* Expression: stype
                                        * Referenced by: '<S4>/omega_VSP2'
                                        */
  0.0,                                 /* Expression: btype
                                        * Referenced by: '<S4>/omega_VSP2'
                                        */
  -1.0,                                /* Expression: width
                                        * Referenced by: '<S4>/alpha_VSP1'
                                        */
  1.0,                                 /* Expression: dtype
                                        * Referenced by: '<S4>/alpha_VSP1'
                                        */
  4.0,                                 /* Expression: portnum
                                        * Referenced by: '<S4>/alpha_VSP1'
                                        */
  -1.0,                                /* Expression: stime
                                        * Referenced by: '<S4>/alpha_VSP1'
                                        */
  1.0,                                 /* Expression: stype
                                        * Referenced by: '<S4>/alpha_VSP1'
                                        */
  0.0,                                 /* Expression: btype
                                        * Referenced by: '<S4>/alpha_VSP1'
                                        */
  -1.0,                                /* Expression: width
                                        * Referenced by: '<S4>/u_BT'
                                        */
  1.0,                                 /* Expression: dtype
                                        * Referenced by: '<S4>/u_BT'
                                        */
  5.0,                                 /* Expression: portnum
                                        * Referenced by: '<S4>/u_BT'
                                        */
  -1.0,                                /* Expression: stime
                                        * Referenced by: '<S4>/u_BT'
                                        */
  1.0,                                 /* Expression: stype
                                        * Referenced by: '<S4>/u_BT'
                                        */
  0.0,                                 /* Expression: btype
                                        * Referenced by: '<S4>/u_BT'
                                        */
  -1.0,                                /* Expression: width
                                        * Referenced by: '<S4>/u_VSP1'
                                        */
  1.0,                                 /* Expression: dtype
                                        * Referenced by: '<S4>/u_VSP1'
                                        */
  6.0,                                 /* Expression: portnum
                                        * Referenced by: '<S4>/u_VSP1'
                                        */
  -1.0,                                /* Expression: stime
                                        * Referenced by: '<S4>/u_VSP1'
                                        */
  1.0,                                 /* Expression: stype
                                        * Referenced by: '<S4>/u_VSP1'
                                        */
  0.0,                                 /* Expression: btype
                                        * Referenced by: '<S4>/u_VSP1'
                                        */
  -1.0,                                /* Expression: width
                                        * Referenced by: '<S4>/u_VSP2'
                                        */
  1.0,                                 /* Expression: dtype
                                        * Referenced by: '<S4>/u_VSP2'
                                        */
  7.0,                                 /* Expression: portnum
                                        * Referenced by: '<S4>/u_VSP2'
                                        */
  -1.0,                                /* Expression: stime
                                        * Referenced by: '<S4>/u_VSP2'
                                        */
  1.0,                                 /* Expression: stype
                                        * Referenced by: '<S4>/u_VSP2'
                                        */
  0.0                                  /* Expression: btype
                                        * Referenced by: '<S4>/u_VSP2'
                                        */
};
