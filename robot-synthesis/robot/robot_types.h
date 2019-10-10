/* --- Generated the 27/9/2019 at 14:38 --- */
/* --- heptagon compiler, version 1.03.00 (compiled thu. may. 3 2:35:29 CET 2018) --- */
/* --- Command line: /usr/local/bin/heptc -target c -target z3z -s controller robot.ept --- */

#ifndef ROBOT_TYPES_H
#define ROBOT_TYPES_H

#include "stdbool.h"
#include "assert.h"
#include "pervasives.h"
#include "controller_controller.h"
typedef enum {
  Robot__St_8_OBSTACLE,
  Robot__St_8_NO_OBSTACLE
} Robot__st_8;

Robot__st_8 Robot__st_8_of_string(char* s);

char* string_of_Robot__st_8(Robot__st_8 x, char* buf);

typedef enum {
  Robot__St_7_TURNING_STATE,
  Robot__St_7_STURNING_STATE,
  Robot__St_7_MOVING_STATE
} Robot__st_7;

Robot__st_7 Robot__st_7_of_string(char* s);

char* string_of_Robot__st_7(Robot__st_7 x, char* buf);

typedef enum {
  Robot__St_6_FORWARD_STATE,
  Robot__St_6_BACKWARD_STATE
} Robot__st_6;

Robot__st_6 Robot__st_6_of_string(char* s);

char* string_of_Robot__st_6(Robot__st_6 x, char* buf);

typedef enum {
  Robot__St_5_FORWARD_STATE,
  Robot__St_5_BACKWARD_STATE
} Robot__st_5;

Robot__st_5 Robot__st_5_of_string(char* s);

char* string_of_Robot__st_5(Robot__st_5 x, char* buf);

typedef enum {
  Robot__St_4_FORWARD_STATE,
  Robot__St_4_BACKWARD_STATE
} Robot__st_4;

Robot__st_4 Robot__st_4_of_string(char* s);

char* string_of_Robot__st_4(Robot__st_4 x, char* buf);

typedef enum {
  Robot__St_3_FORWARD_STATE,
  Robot__St_3_BACKWARD_STATE
} Robot__st_3;

Robot__st_3 Robot__st_3_of_string(char* s);

char* string_of_Robot__st_3(Robot__st_3 x, char* buf);

typedef enum {
  Robot__St_2_TURNING_STATE,
  Robot__St_2_STURNING_STATE,
  Robot__St_2_MOVING_STATE
} Robot__st_2;

Robot__st_2 Robot__st_2_of_string(char* s);

char* string_of_Robot__st_2(Robot__st_2 x, char* buf);

typedef enum {
  Robot__St_1_FORWARD_STATE,
  Robot__St_1_BACKWARD_STATE
} Robot__st_1;

Robot__st_1 Robot__st_1_of_string(char* s);

char* string_of_Robot__st_1(Robot__st_1 x, char* buf);

typedef enum {
  Robot__St_OBSTACLE,
  Robot__St_NO_OBSTACLE
} Robot__st;

Robot__st Robot__st_of_string(char* s);

char* string_of_Robot__st(Robot__st x, char* buf);

#endif // ROBOT_TYPES_H
