/* --- Generated the 27/9/2019 at 14:38 --- */
/* --- heptagon compiler, version 1.03.00 (compiled thu. may. 3 2:35:29 CET 2018) --- */
/* --- Command line: /usr/local/bin/heptc -target c controller_controller.ept --- */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "controller_controller.h"

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
  Controller_controller__controller_controller_controller_c_motor4_out* _out) {
  
  int v_13;
  int v_12;
  int v_11;
  int v_10;
  int v_9;
  int v_8;
  int v_7;
  int v_6;
  int v_5;
  int v_4;
  int v_3;
  int v_2;
  int v_1;
  int v;
  int sub_0;
  int sub_1;
  int sub_2;
  int sub_3;
  int sub_4;
  int sub_5;
  int sub_6;
  int sub_7;
  int sub_8;
  int sub_9;
  int sub_10;
  int sub_11;
  int sub_12;
  int sub_13;
  int sub_14;
  int sub_15;
  int sub_16;
  int sub_17;
  int sub_18;
  int sub_19;
  int sub_20;
  int sub_21;
  int sub_22;
  int sub_23;
  int sub_24;
  int sub_25;
  int sub_26;
  int sub_27;
  sub_8 = false;
  sub_7 = sub_8;
  if (controller_v_58) {
    sub_6 = sub_7;
  } else {
    sub_6 = false;
  };
  if (controller_v_57) {
    v_5 = false;
  } else {
    v_5 = sub_6;
  };
  if (controller_c_move) {
    sub_5 = sub_6;
  } else {
    sub_5 = v_5;
  };
  if (controller_v_17) {
    v_6 = false;
  } else {
    v_6 = sub_5;
  };
  if (controller_v_18) {
    sub_4 = sub_5;
  } else {
    sub_4 = false;
  };
  sub_3 = sub_4;
  if (controller_ck_1) {
    sub_2 = v_6;
  } else {
    sub_2 = sub_3;
  };
  if (controller_c_motor1) {
    sub_13 = sub_8;
  } else {
    sub_13 = false;
  };
  if (controller_v_58) {
    sub_12 = sub_7;
  } else {
    sub_12 = sub_13;
  };
  if (controller_v_57) {
    v_4 = sub_13;
  } else {
    v_4 = sub_12;
  };
  if (controller_c_move) {
    sub_11 = sub_12;
  } else {
    sub_11 = v_4;
  };
  if (controller_v_58) {
    sub_15 = false;
  } else {
    sub_15 = sub_13;
  };
  if (controller_v_57) {
    v_3 = sub_13;
  } else {
    v_3 = sub_15;
  };
  if (controller_c_move) {
    sub_14 = sub_15;
  } else {
    sub_14 = v_3;
  };
  if (controller_v_18) {
    sub_10 = sub_11;
  } else {
    sub_10 = sub_14;
  };
  sub_9 = sub_10;
  sub_16 = sub_14;
  if (controller_v_17) {
    v_7 = sub_16;
  } else {
    v_7 = sub_11;
  };
  if (controller_ck_1) {
    v_8 = v_7;
  } else {
    v_8 = sub_9;
  };
  if (controller_c_motor2) {
    v_9 = sub_2;
  } else {
    v_9 = v_8;
  };
  if (controller_c_motor3) {
    sub_1 = v_9;
  } else {
    sub_1 = sub_2;
  };
  sub_23 = true;
  sub_22 = sub_23;
  if (controller_v_58) {
    sub_21 = sub_22;
  } else {
    sub_21 = false;
  };
  if (controller_v_57) {
    v_1 = false;
  } else {
    v_1 = sub_21;
  };
  if (controller_c_move) {
    sub_20 = sub_21;
  } else {
    sub_20 = v_1;
  };
  if (controller_v_17) {
    v_2 = false;
  } else {
    v_2 = sub_20;
  };
  if (controller_v_18) {
    sub_19 = sub_20;
  } else {
    sub_19 = false;
  };
  sub_18 = sub_19;
  if (controller_ck_1) {
    sub_17 = v_2;
  } else {
    sub_17 = sub_18;
  };
  if (controller_v_58) {
    sub_27 = sub_22;
  } else {
    sub_27 = sub_13;
  };
  if (controller_v_57) {
    v = sub_13;
  } else {
    v = sub_27;
  };
  if (controller_c_move) {
    sub_26 = sub_27;
  } else {
    sub_26 = v;
  };
  if (controller_v_17) {
    v_10 = sub_16;
  } else {
    v_10 = sub_26;
  };
  if (controller_v_18) {
    sub_25 = sub_26;
  } else {
    sub_25 = sub_14;
  };
  sub_24 = sub_25;
  if (controller_ck_1) {
    v_11 = v_10;
  } else {
    v_11 = sub_24;
  };
  if (controller_c_motor2) {
    v_12 = sub_17;
  } else {
    v_12 = v_11;
  };
  if (controller_c_motor3) {
    v_13 = v_12;
  } else {
    v_13 = sub_17;
  };
  if (p_controller_c_motor4) {
    sub_0 = v_13;
  } else {
    sub_0 = sub_1;
  };
  _out->controller_c_motor4 = sub_0;;
}

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
  Controller_controller__controller_controller_controller_c_motor3_out* _out) {
  
  int v_26;
  int v_25;
  int v_24;
  int v_23;
  int v_22;
  int v_21;
  int v_20;
  int v_19;
  int v_18;
  int v_17;
  int v_16;
  int v_15;
  int v_14;
  int v;
  int sub_0;
  int sub_1;
  int sub_2;
  int sub_3;
  int sub_4;
  int sub_5;
  int sub_6;
  int sub_7;
  int sub_8;
  int sub_9;
  int sub_10;
  int sub_11;
  int sub_12;
  int sub_13;
  int sub_14;
  int sub_15;
  int sub_16;
  int sub_17;
  int sub_18;
  int sub_19;
  int sub_20;
  int sub_21;
  int sub_22;
  int sub_23;
  int sub_24;
  int sub_25;
  sub_7 = false;
  sub_6 = sub_7;
  if (controller_v_58) {
    sub_5 = sub_6;
  } else {
    sub_5 = false;
  };
  if (controller_v_57) {
    v_17 = false;
  } else {
    v_17 = sub_5;
  };
  if (controller_c_move) {
    sub_4 = sub_5;
  } else {
    sub_4 = v_17;
  };
  if (controller_v_17) {
    v_18 = false;
  } else {
    v_18 = sub_4;
  };
  if (controller_v_18) {
    sub_3 = sub_4;
  } else {
    sub_3 = false;
  };
  sub_2 = sub_3;
  if (controller_ck_1) {
    v_19 = v_18;
  } else {
    v_19 = sub_2;
  };
  sub_13 = true;
  if (controller_c_motor1) {
    sub_12 = sub_13;
  } else {
    sub_12 = false;
  };
  if (controller_v_58) {
    sub_11 = sub_6;
  } else {
    sub_11 = sub_12;
  };
  if (controller_v_57) {
    v_16 = sub_12;
  } else {
    v_16 = sub_11;
  };
  if (controller_c_move) {
    sub_10 = sub_11;
  } else {
    sub_10 = v_16;
  };
  if (controller_v_58) {
    sub_15 = false;
  } else {
    sub_15 = sub_12;
  };
  if (controller_v_57) {
    v_15 = sub_12;
  } else {
    v_15 = sub_15;
  };
  if (controller_c_move) {
    sub_14 = sub_15;
  } else {
    sub_14 = v_15;
  };
  if (controller_v_18) {
    sub_9 = sub_10;
  } else {
    sub_9 = sub_14;
  };
  sub_8 = sub_9;
  sub_16 = sub_14;
  if (controller_v_17) {
    v_20 = sub_16;
  } else {
    v_20 = sub_10;
  };
  if (controller_ck_1) {
    v_21 = v_20;
  } else {
    v_21 = sub_8;
  };
  if (controller_c_motor2) {
    sub_1 = v_19;
  } else {
    sub_1 = v_21;
  };
  sub_21 = sub_13;
  if (controller_v_58) {
    sub_20 = sub_21;
  } else {
    sub_20 = false;
  };
  if (controller_v_57) {
    v_14 = false;
  } else {
    v_14 = sub_20;
  };
  if (controller_c_move) {
    sub_19 = sub_20;
  } else {
    sub_19 = v_14;
  };
  if (controller_v_17) {
    v_22 = false;
  } else {
    v_22 = sub_19;
  };
  if (controller_v_18) {
    sub_18 = sub_19;
  } else {
    sub_18 = false;
  };
  sub_17 = sub_18;
  if (controller_ck_1) {
    v_23 = v_22;
  } else {
    v_23 = sub_17;
  };
  if (controller_v_58) {
    sub_25 = sub_21;
  } else {
    sub_25 = sub_12;
  };
  if (controller_v_57) {
    v = sub_12;
  } else {
    v = sub_25;
  };
  if (controller_c_move) {
    sub_24 = sub_25;
  } else {
    sub_24 = v;
  };
  if (controller_v_17) {
    v_24 = sub_16;
  } else {
    v_24 = sub_24;
  };
  if (controller_v_18) {
    sub_23 = sub_24;
  } else {
    sub_23 = sub_14;
  };
  sub_22 = sub_23;
  if (controller_ck_1) {
    v_25 = v_24;
  } else {
    v_25 = sub_22;
  };
  if (controller_c_motor2) {
    v_26 = v_23;
  } else {
    v_26 = v_25;
  };
  if (p_controller_c_motor3) {
    sub_0 = v_26;
  } else {
    sub_0 = sub_1;
  };
  _out->controller_c_motor3 = sub_0;;
}

void Controller_controller__controller_controller_controller_c_motor2_step(
  int controller_v_17, int controller_v_18, int controller_v_19,
  int controller_ck_1, int controller_pnr_5, int controller_v_58,
  int controller_v_57, int controller_pnr_4, int controller_ck_7_1,
  int controller_pnr_3, int controller_ck_9_1, int controller_pnr_2,
  int controller_ck_11_1, int controller_pnr_1, int controller_ck_13_1,
  int controller_pnr, int p_controller_c_motor4, int p_controller_c_motor3,
  int p_controller_c_motor2, int p_controller_c_motor1,
  int p_controller_c_move, int controller_c_motor1, int controller_c_move,
  Controller_controller__controller_controller_controller_c_motor2_out* _out) {
  
  int v_31;
  int v_30;
  int v_29;
  int v_28;
  int v_27;
  int v;
  int sub_0;
  int sub_1;
  int sub_2;
  int sub_3;
  int sub_4;
  int sub_5;
  int sub_6;
  int sub_7;
  int sub_8;
  int sub_9;
  int sub_10;
  int sub_11;
  int sub_12;
  int sub_13;
  int sub_14;
  int sub_15;
  sub_7 = false;
  if (controller_c_motor1) {
    sub_6 = sub_7;
  } else {
    sub_6 = false;
  };
  if (controller_v_58) {
    sub_5 = sub_7;
  } else {
    sub_5 = sub_6;
  };
  if (controller_v_57) {
    v_28 = sub_6;
  } else {
    v_28 = sub_5;
  };
  if (controller_c_move) {
    sub_4 = sub_5;
  } else {
    sub_4 = v_28;
  };
  if (controller_v_58) {
    sub_9 = false;
  } else {
    sub_9 = sub_6;
  };
  if (controller_v_57) {
    v_27 = sub_6;
  } else {
    v_27 = sub_9;
  };
  if (controller_c_move) {
    sub_8 = sub_9;
  } else {
    sub_8 = v_27;
  };
  if (controller_v_18) {
    sub_3 = sub_4;
  } else {
    sub_3 = sub_8;
  };
  sub_2 = sub_3;
  sub_10 = sub_8;
  if (controller_v_17) {
    v_29 = sub_10;
  } else {
    v_29 = sub_4;
  };
  if (controller_ck_1) {
    sub_1 = v_29;
  } else {
    sub_1 = sub_2;
  };
  sub_15 = true;
  if (controller_v_58) {
    sub_14 = sub_15;
  } else {
    sub_14 = sub_6;
  };
  if (controller_v_57) {
    v = sub_6;
  } else {
    v = sub_14;
  };
  if (controller_c_move) {
    sub_13 = sub_14;
  } else {
    sub_13 = v;
  };
  if (controller_v_17) {
    v_30 = sub_10;
  } else {
    v_30 = sub_13;
  };
  if (controller_v_18) {
    sub_12 = sub_13;
  } else {
    sub_12 = sub_8;
  };
  sub_11 = sub_12;
  if (controller_ck_1) {
    v_31 = v_30;
  } else {
    v_31 = sub_11;
  };
  if (p_controller_c_motor2) {
    sub_0 = v_31;
  } else {
    sub_0 = sub_1;
  };
  _out->controller_c_motor2 = sub_0;;
}

void Controller_controller__controller_controller_controller_c_motor1_step(
  int controller_v_17, int controller_v_18, int controller_v_19,
  int controller_ck_1, int controller_pnr_5, int controller_v_58,
  int controller_v_57, int controller_pnr_4, int controller_ck_7_1,
  int controller_pnr_3, int controller_ck_9_1, int controller_pnr_2,
  int controller_ck_11_1, int controller_pnr_1, int controller_ck_13_1,
  int controller_pnr, int p_controller_c_motor4, int p_controller_c_motor3,
  int p_controller_c_motor2, int p_controller_c_motor1,
  int p_controller_c_move, int controller_c_move,
  Controller_controller__controller_controller_controller_c_motor1_out* _out) {
  
  int v_33;
  int v_32;
  int v;
  int sub_0;
  int sub_1;
  int sub_2;
  int sub_3;
  int sub_4;
  int sub_5;
  int sub_6;
  int sub_7;
  int sub_8;
  sub_5 = true;
  sub_6 = p_controller_c_motor1;
  if (controller_v_58) {
    sub_4 = sub_6;
  } else {
    sub_4 = sub_5;
  };
  if (controller_v_57) {
    v_32 = sub_5;
  } else {
    v_32 = sub_4;
  };
  if (controller_c_move) {
    sub_3 = sub_4;
  } else {
    sub_3 = v_32;
  };
  if (controller_v_58) {
    sub_8 = false;
  } else {
    sub_8 = sub_5;
  };
  if (controller_v_57) {
    v = sub_5;
  } else {
    v = sub_8;
  };
  if (controller_c_move) {
    sub_7 = sub_8;
  } else {
    sub_7 = v;
  };
  if (controller_v_17) {
    v_33 = sub_7;
  } else {
    v_33 = sub_3;
  };
  if (controller_v_18) {
    sub_2 = sub_3;
  } else {
    sub_2 = sub_7;
  };
  sub_1 = sub_2;
  if (controller_ck_1) {
    sub_0 = v_33;
  } else {
    sub_0 = sub_1;
  };
  _out->controller_c_motor1 = sub_0;;
}

void Controller_controller__controller_controller_controller_c_move_step(
  int controller_v_17, int controller_v_18, int controller_v_19,
  int controller_ck_1, int controller_pnr_5, int controller_v_58,
  int controller_v_57, int controller_pnr_4, int controller_ck_7_1,
  int controller_pnr_3, int controller_ck_9_1, int controller_pnr_2,
  int controller_ck_11_1, int controller_pnr_1, int controller_ck_13_1,
  int controller_pnr, int p_controller_c_motor4, int p_controller_c_motor3,
  int p_controller_c_motor2, int p_controller_c_motor1,
  int p_controller_c_move,
  Controller_controller__controller_controller_controller_c_move_out* _out) {
  
  int v_34;
  int v;
  int sub_0;
  int sub_1;
  int sub_2;
  int sub_3;
  int sub_4;
  int sub_5;
  int sub_6;
  sub_4 = p_controller_c_move;
  sub_3 = sub_4;
  if (controller_v_58) {
    v = false;
    sub_6 = false;
  } else {
    v = sub_3;
    sub_6 = sub_3;
  };
  if (controller_v_57) {
    sub_5 = v;
  } else {
    sub_5 = sub_6;
  };
  if (controller_v_17) {
    v_34 = sub_5;
  } else {
    v_34 = sub_3;
  };
  if (controller_v_18) {
    sub_2 = sub_3;
  } else {
    sub_2 = sub_5;
  };
  sub_1 = sub_2;
  if (controller_ck_1) {
    sub_0 = v_34;
  } else {
    sub_0 = sub_1;
  };
  _out->controller_c_move = sub_0;;
}

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
                                                       Controller_controller__controller_controller_out* _out) {
  Controller_controller__controller_controller_controller_c_motor3_out Controller_controller__controller_controller_controller_c_motor3_out_st;
  Controller_controller__controller_controller_controller_c_motor4_out Controller_controller__controller_controller_controller_c_motor4_out_st;
  Controller_controller__controller_controller_controller_c_move_out Controller_controller__controller_controller_controller_c_move_out_st;
  Controller_controller__controller_controller_controller_c_motor1_out Controller_controller__controller_controller_controller_c_motor1_out_st;
  Controller_controller__controller_controller_controller_c_motor2_out Controller_controller__controller_controller_controller_c_motor2_out_st;
  Controller_controller__controller_controller_controller_c_move_step(
  controller_v_17, controller_v_18, controller_v_19, controller_ck_1,
  controller_pnr_5, controller_v_58, controller_v_57, controller_pnr_4,
  controller_ck_7_1, controller_pnr_3, controller_ck_9_1, controller_pnr_2,
  controller_ck_11_1, controller_pnr_1, controller_ck_13_1, controller_pnr,
  p_controller_c_motor4, p_controller_c_motor3, p_controller_c_motor2,
  p_controller_c_motor1, p_controller_c_move,
  &Controller_controller__controller_controller_controller_c_move_out_st);
  _out->controller_c_move = Controller_controller__controller_controller_controller_c_move_out_st.controller_c_move;
  Controller_controller__controller_controller_controller_c_motor1_step(
  controller_v_17, controller_v_18, controller_v_19, controller_ck_1,
  controller_pnr_5, controller_v_58, controller_v_57, controller_pnr_4,
  controller_ck_7_1, controller_pnr_3, controller_ck_9_1, controller_pnr_2,
  controller_ck_11_1, controller_pnr_1, controller_ck_13_1, controller_pnr,
  p_controller_c_motor4, p_controller_c_motor3, p_controller_c_motor2,
  p_controller_c_motor1, p_controller_c_move, _out->controller_c_move,
  &Controller_controller__controller_controller_controller_c_motor1_out_st);
  _out->controller_c_motor1 = Controller_controller__controller_controller_controller_c_motor1_out_st.controller_c_motor1;
  Controller_controller__controller_controller_controller_c_motor2_step(
  controller_v_17, controller_v_18, controller_v_19, controller_ck_1,
  controller_pnr_5, controller_v_58, controller_v_57, controller_pnr_4,
  controller_ck_7_1, controller_pnr_3, controller_ck_9_1, controller_pnr_2,
  controller_ck_11_1, controller_pnr_1, controller_ck_13_1, controller_pnr,
  p_controller_c_motor4, p_controller_c_motor3, p_controller_c_motor2,
  p_controller_c_motor1, p_controller_c_move, _out->controller_c_motor1,
  _out->controller_c_move,
  &Controller_controller__controller_controller_controller_c_motor2_out_st);
  _out->controller_c_motor2 = Controller_controller__controller_controller_controller_c_motor2_out_st.controller_c_motor2;
  Controller_controller__controller_controller_controller_c_motor3_step(
  controller_v_17, controller_v_18, controller_v_19, controller_ck_1,
  controller_pnr_5, controller_v_58, controller_v_57, controller_pnr_4,
  controller_ck_7_1, controller_pnr_3, controller_ck_9_1, controller_pnr_2,
  controller_ck_11_1, controller_pnr_1, controller_ck_13_1, controller_pnr,
  p_controller_c_motor4, p_controller_c_motor3, p_controller_c_motor2,
  p_controller_c_motor1, p_controller_c_move, _out->controller_c_motor2,
  _out->controller_c_motor1, _out->controller_c_move,
  &Controller_controller__controller_controller_controller_c_motor3_out_st);
  _out->controller_c_motor3 = Controller_controller__controller_controller_controller_c_motor3_out_st.controller_c_motor3;
  Controller_controller__controller_controller_controller_c_motor4_step(
  controller_v_17, controller_v_18, controller_v_19, controller_ck_1,
  controller_pnr_5, controller_v_58, controller_v_57, controller_pnr_4,
  controller_ck_7_1, controller_pnr_3, controller_ck_9_1, controller_pnr_2,
  controller_ck_11_1, controller_pnr_1, controller_ck_13_1, controller_pnr,
  p_controller_c_motor4, p_controller_c_motor3, p_controller_c_motor2,
  p_controller_c_motor1, p_controller_c_move, _out->controller_c_motor3,
  _out->controller_c_motor2, _out->controller_c_motor1,
  _out->controller_c_move,
  &Controller_controller__controller_controller_controller_c_motor4_out_st);
  _out->controller_c_motor4 = Controller_controller__controller_controller_controller_c_motor4_out_st.controller_c_motor4;
}

