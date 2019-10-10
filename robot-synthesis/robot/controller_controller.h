/* --- Generated the 27/9/2019 at 14:38 --- */
/* --- heptagon compiler, version 1.03.00 (compiled thu. may. 3 2:35:29 CET 2018) --- */
/* --- Command line: /usr/local/bin/heptc -target c controller_controller.ept --- */

#ifndef CONTROLLER_CONTROLLER_H
#define CONTROLLER_CONTROLLER_H

#include "controller_controller_types.h"
typedef struct Controller_controller__controller_controller_controller_c_motor4_out {
  int controller_c_motor4;
} Controller_controller__controller_controller_controller_c_motor4_out;

void Controller_controller__controller_controller_controller_c_motor4_step(
int controller_v_17, int controller_v_18, int controller_v_19,
int controller_ck_1, int controller_pnr_5, int controller_v_58,
int controller_v_57, int controller_pnr_4, int controller_ck_7_1,
int controller_pnr_3, int controller_ck_9_1, int controller_pnr_2,
int controller_ck_11_1, int controller_pnr_1, int controller_ck_13_1,
int controller_pnr, int p_controller_c_motor4, int p_controller_c_motor3,
int p_controller_c_motor2, int p_controller_c_motor1,
int p_controller_c_move, int controller_c_motor3, int controller_c_motor2,
int controller_c_motor1, int controller_c_move,
Controller_controller__controller_controller_controller_c_motor4_out* _out);

typedef struct Controller_controller__controller_controller_controller_c_motor3_out {
  int controller_c_motor3;
} Controller_controller__controller_controller_controller_c_motor3_out;

void Controller_controller__controller_controller_controller_c_motor3_step(
int controller_v_17, int controller_v_18, int controller_v_19,
int controller_ck_1, int controller_pnr_5, int controller_v_58,
int controller_v_57, int controller_pnr_4, int controller_ck_7_1,
int controller_pnr_3, int controller_ck_9_1, int controller_pnr_2,
int controller_ck_11_1, int controller_pnr_1, int controller_ck_13_1,
int controller_pnr, int p_controller_c_motor4, int p_controller_c_motor3,
int p_controller_c_motor2, int p_controller_c_motor1,
int p_controller_c_move, int controller_c_motor2, int controller_c_motor1,
int controller_c_move,
Controller_controller__controller_controller_controller_c_motor3_out* _out);

typedef struct Controller_controller__controller_controller_controller_c_motor2_out {
  int controller_c_motor2;
} Controller_controller__controller_controller_controller_c_motor2_out;

void Controller_controller__controller_controller_controller_c_motor2_step(
int controller_v_17, int controller_v_18, int controller_v_19,
int controller_ck_1, int controller_pnr_5, int controller_v_58,
int controller_v_57, int controller_pnr_4, int controller_ck_7_1,
int controller_pnr_3, int controller_ck_9_1, int controller_pnr_2,
int controller_ck_11_1, int controller_pnr_1, int controller_ck_13_1,
int controller_pnr, int p_controller_c_motor4, int p_controller_c_motor3,
int p_controller_c_motor2, int p_controller_c_motor1,
int p_controller_c_move, int controller_c_motor1, int controller_c_move,
Controller_controller__controller_controller_controller_c_motor2_out* _out);

typedef struct Controller_controller__controller_controller_controller_c_motor1_out {
  int controller_c_motor1;
} Controller_controller__controller_controller_controller_c_motor1_out;

void Controller_controller__controller_controller_controller_c_motor1_step(
int controller_v_17, int controller_v_18, int controller_v_19,
int controller_ck_1, int controller_pnr_5, int controller_v_58,
int controller_v_57, int controller_pnr_4, int controller_ck_7_1,
int controller_pnr_3, int controller_ck_9_1, int controller_pnr_2,
int controller_ck_11_1, int controller_pnr_1, int controller_ck_13_1,
int controller_pnr, int p_controller_c_motor4, int p_controller_c_motor3,
int p_controller_c_motor2, int p_controller_c_motor1,
int p_controller_c_move, int controller_c_move,
Controller_controller__controller_controller_controller_c_motor1_out* _out);

typedef struct Controller_controller__controller_controller_controller_c_move_out {
  int controller_c_move;
} Controller_controller__controller_controller_controller_c_move_out;

void Controller_controller__controller_controller_controller_c_move_step(
int controller_v_17, int controller_v_18, int controller_v_19,
int controller_ck_1, int controller_pnr_5, int controller_v_58,
int controller_v_57, int controller_pnr_4, int controller_ck_7_1,
int controller_pnr_3, int controller_ck_9_1, int controller_pnr_2,
int controller_ck_11_1, int controller_pnr_1, int controller_ck_13_1,
int controller_pnr, int p_controller_c_motor4, int p_controller_c_motor3,
int p_controller_c_motor2, int p_controller_c_motor1,
int p_controller_c_move,
Controller_controller__controller_controller_controller_c_move_out* _out);

typedef struct Controller_controller__controller_controller_out {
  int controller_c_motor4;
  int controller_c_motor3;
  int controller_c_motor2;
  int controller_c_motor1;
  int controller_c_move;
} Controller_controller__controller_controller_out;

void Controller_controller__controller_controller_step(int controller_v_17,
                                                       int controller_v_18,
                                                       int controller_v_19,
                                                       int controller_ck_1,
                                                       int controller_pnr_5,
                                                       int controller_v_58,
                                                       int controller_v_57,
                                                       int controller_pnr_4,
                                                       int controller_ck_7_1,
                                                       int controller_pnr_3,
                                                       int controller_ck_9_1,
                                                       int controller_pnr_2,
                                                       int controller_ck_11_1,
                                                       int controller_pnr_1,
                                                       int controller_ck_13_1,
                                                       int controller_pnr,
                                                       int p_controller_c_motor4,
                                                       int p_controller_c_motor3,
                                                       int p_controller_c_motor2,
                                                       int p_controller_c_motor1,
                                                       int p_controller_c_move,
                                                       Controller_controller__controller_controller_out* _out);

#endif // CONTROLLER_CONTROLLER_H
