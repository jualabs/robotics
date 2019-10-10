/* --- Generated the 27/9/2019 at 14:38 --- */
/* --- heptagon compiler, version 1.03.00 (compiled thu. may. 3 2:35:29 CET 2018) --- */
/* --- Command line: /usr/local/bin/heptc -target c -target z3z -s controller robot.ept --- */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "robot_types.h"

Robot__st_8 Robot__st_8_of_string(char* s) {
  if ((strcmp(s, "St_8_OBSTACLE")==0)) {
    return Robot__St_8_OBSTACLE;
  };
  if ((strcmp(s, "St_8_NO_OBSTACLE")==0)) {
    return Robot__St_8_NO_OBSTACLE;
  };
}

char* string_of_Robot__st_8(Robot__st_8 x, char* buf) {
  switch (x) {
    case Robot__St_8_OBSTACLE:
      strcpy(buf, "St_8_OBSTACLE");
      break;
    case Robot__St_8_NO_OBSTACLE:
      strcpy(buf, "St_8_NO_OBSTACLE");
      break;
    default:
      break;
  };
  return buf;
}

Robot__st_7 Robot__st_7_of_string(char* s) {
  if ((strcmp(s, "St_7_TURNING_STATE")==0)) {
    return Robot__St_7_TURNING_STATE;
  };
  if ((strcmp(s, "St_7_STURNING_STATE")==0)) {
    return Robot__St_7_STURNING_STATE;
  };
  if ((strcmp(s, "St_7_MOVING_STATE")==0)) {
    return Robot__St_7_MOVING_STATE;
  };
}

char* string_of_Robot__st_7(Robot__st_7 x, char* buf) {
  switch (x) {
    case Robot__St_7_TURNING_STATE:
      strcpy(buf, "St_7_TURNING_STATE");
      break;
    case Robot__St_7_STURNING_STATE:
      strcpy(buf, "St_7_STURNING_STATE");
      break;
    case Robot__St_7_MOVING_STATE:
      strcpy(buf, "St_7_MOVING_STATE");
      break;
    default:
      break;
  };
  return buf;
}

Robot__st_6 Robot__st_6_of_string(char* s) {
  if ((strcmp(s, "St_6_FORWARD_STATE")==0)) {
    return Robot__St_6_FORWARD_STATE;
  };
  if ((strcmp(s, "St_6_BACKWARD_STATE")==0)) {
    return Robot__St_6_BACKWARD_STATE;
  };
}

char* string_of_Robot__st_6(Robot__st_6 x, char* buf) {
  switch (x) {
    case Robot__St_6_FORWARD_STATE:
      strcpy(buf, "St_6_FORWARD_STATE");
      break;
    case Robot__St_6_BACKWARD_STATE:
      strcpy(buf, "St_6_BACKWARD_STATE");
      break;
    default:
      break;
  };
  return buf;
}

Robot__st_5 Robot__st_5_of_string(char* s) {
  if ((strcmp(s, "St_5_FORWARD_STATE")==0)) {
    return Robot__St_5_FORWARD_STATE;
  };
  if ((strcmp(s, "St_5_BACKWARD_STATE")==0)) {
    return Robot__St_5_BACKWARD_STATE;
  };
}

char* string_of_Robot__st_5(Robot__st_5 x, char* buf) {
  switch (x) {
    case Robot__St_5_FORWARD_STATE:
      strcpy(buf, "St_5_FORWARD_STATE");
      break;
    case Robot__St_5_BACKWARD_STATE:
      strcpy(buf, "St_5_BACKWARD_STATE");
      break;
    default:
      break;
  };
  return buf;
}

Robot__st_4 Robot__st_4_of_string(char* s) {
  if ((strcmp(s, "St_4_FORWARD_STATE")==0)) {
    return Robot__St_4_FORWARD_STATE;
  };
  if ((strcmp(s, "St_4_BACKWARD_STATE")==0)) {
    return Robot__St_4_BACKWARD_STATE;
  };
}

char* string_of_Robot__st_4(Robot__st_4 x, char* buf) {
  switch (x) {
    case Robot__St_4_FORWARD_STATE:
      strcpy(buf, "St_4_FORWARD_STATE");
      break;
    case Robot__St_4_BACKWARD_STATE:
      strcpy(buf, "St_4_BACKWARD_STATE");
      break;
    default:
      break;
  };
  return buf;
}

Robot__st_3 Robot__st_3_of_string(char* s) {
  if ((strcmp(s, "St_3_FORWARD_STATE")==0)) {
    return Robot__St_3_FORWARD_STATE;
  };
  if ((strcmp(s, "St_3_BACKWARD_STATE")==0)) {
    return Robot__St_3_BACKWARD_STATE;
  };
}

char* string_of_Robot__st_3(Robot__st_3 x, char* buf) {
  switch (x) {
    case Robot__St_3_FORWARD_STATE:
      strcpy(buf, "St_3_FORWARD_STATE");
      break;
    case Robot__St_3_BACKWARD_STATE:
      strcpy(buf, "St_3_BACKWARD_STATE");
      break;
    default:
      break;
  };
  return buf;
}

Robot__st_2 Robot__st_2_of_string(char* s) {
  if ((strcmp(s, "St_2_TURNING_STATE")==0)) {
    return Robot__St_2_TURNING_STATE;
  };
  if ((strcmp(s, "St_2_STURNING_STATE")==0)) {
    return Robot__St_2_STURNING_STATE;
  };
  if ((strcmp(s, "St_2_MOVING_STATE")==0)) {
    return Robot__St_2_MOVING_STATE;
  };
}

char* string_of_Robot__st_2(Robot__st_2 x, char* buf) {
  switch (x) {
    case Robot__St_2_TURNING_STATE:
      strcpy(buf, "St_2_TURNING_STATE");
      break;
    case Robot__St_2_STURNING_STATE:
      strcpy(buf, "St_2_STURNING_STATE");
      break;
    case Robot__St_2_MOVING_STATE:
      strcpy(buf, "St_2_MOVING_STATE");
      break;
    default:
      break;
  };
  return buf;
}

Robot__st_1 Robot__st_1_of_string(char* s) {
  if ((strcmp(s, "St_1_FORWARD_STATE")==0)) {
    return Robot__St_1_FORWARD_STATE;
  };
  if ((strcmp(s, "St_1_BACKWARD_STATE")==0)) {
    return Robot__St_1_BACKWARD_STATE;
  };
}

char* string_of_Robot__st_1(Robot__st_1 x, char* buf) {
  switch (x) {
    case Robot__St_1_FORWARD_STATE:
      strcpy(buf, "St_1_FORWARD_STATE");
      break;
    case Robot__St_1_BACKWARD_STATE:
      strcpy(buf, "St_1_BACKWARD_STATE");
      break;
    default:
      break;
  };
  return buf;
}

Robot__st Robot__st_of_string(char* s) {
  if ((strcmp(s, "St_OBSTACLE")==0)) {
    return Robot__St_OBSTACLE;
  };
  if ((strcmp(s, "St_NO_OBSTACLE")==0)) {
    return Robot__St_NO_OBSTACLE;
  };
}

char* string_of_Robot__st(Robot__st x, char* buf) {
  switch (x) {
    case Robot__St_OBSTACLE:
      strcpy(buf, "St_OBSTACLE");
      break;
    case Robot__St_NO_OBSTACLE:
      strcpy(buf, "St_NO_OBSTACLE");
      break;
    default:
      break;
  };
  return buf;
}

