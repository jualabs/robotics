/* --- Generated the 27/9/2019 at 14:38 --- */
/* --- heptagon compiler, version 1.03.00 (compiled thu. may. 3 2:35:29 CET 2018) --- */
/* --- Command line: /usr/local/bin/heptc -target c -target z3z -s controller robot.ept --- */

#ifndef ROBOT_H
#define ROBOT_H

#include "robot_types.h"
#include "controller_controller.h"
typedef struct Robot__obstacle_mem {
  int ck_1_2;
  int pnr;
} Robot__obstacle_mem;

typedef struct Robot__obstacle_out {
  int out;
} Robot__obstacle_out;

void Robot__obstacle_reset(Robot__obstacle_mem* self);

void Robot__obstacle_step(int sensor, Robot__obstacle_out* _out,
                          Robot__obstacle_mem* self);

typedef struct Robot__motor_mem {
  int ck_1;
  int pnr;
} Robot__motor_mem;

typedef struct Robot__motor_out {
  int mode;
  int velocity;
} Robot__motor_out;

void Robot__motor_reset(Robot__motor_mem* self);

void Robot__motor_step(int c_motor, Robot__motor_out* _out,
                       Robot__motor_mem* self);

typedef struct Robot__moving_or_turning_mem {
  int v_40;
  int v_39;
  int pnr;
  int mbc_1;
} Robot__moving_or_turning_mem;

typedef struct Robot__moving_or_turning_out {
  int turning;
  int ombc;
} Robot__moving_or_turning_out;

void Robot__moving_or_turning_reset(Robot__moving_or_turning_mem* self);

void Robot__moving_or_turning_step(int c, Robot__moving_or_turning_out* _out,
                                   Robot__moving_or_turning_mem* self);

typedef struct Robot__controller_mem {
  int ck_13_1;
  int ck_11_1;
  int ck_9_1;
  int ck_7_1;
  int v_58;
  int v_57;
  int ck_1;
  int pnr_5;
  int pnr_4;
  int pnr_3;
  int pnr_2;
  int pnr_1;
  int pnr;
  int mbc_2;
} Robot__controller_mem;

typedef struct Robot__controller_out {
  int obs;
  int turning;
  int motor1;
  int motor2;
  int motor3;
  int motor4;
  int cont;
  int vel1;
  int vel2;
  int vel3;
  int vel4;
} Robot__controller_out;

void Robot__controller_reset(Robot__controller_mem* self);

void Robot__controller_step(int obs_sensor, Robot__controller_out* _out,
                            Robot__controller_mem* self);

#endif // ROBOT_H
