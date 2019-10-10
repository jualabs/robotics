/* --- Generated the 27/9/2019 at 14:38 --- */
/* --- heptagon compiler, version 1.03.00 (compiled thu. may. 3 2:35:29 CET 2018) --- */
/* --- Command line: /usr/local/bin/heptc -target c -target z3z -s controller robot.ept --- */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "robot.h"

void Robot__obstacle_reset(Robot__obstacle_mem* self) {
  self->pnr = false;
  self->ck_1_2 = false;
}

void Robot__obstacle_step(int sensor, Robot__obstacle_out* _out,
                          Robot__obstacle_mem* self) {
  
  int nr_St_NO_OBSTACLE;
  int ns_St_NO_OBSTACLE_1;
  int out_St_NO_OBSTACLE;
  int nr_St_OBSTACLE;
  int ns_St_OBSTACLE_1;
  int out_St_OBSTACLE;
  int ck_1_1;
  int v_1;
  int v;
  int r_St_NO_OBSTACLE;
  int s_St_NO_OBSTACLE_1;
  int r_St_OBSTACLE;
  int s_St_OBSTACLE_1;
  int s_1;
  int ns_1;
  int r;
  int nr;
  if (self->ck_1_2) {
    v = (sensor<=45);
    if (v) {
      r_St_NO_OBSTACLE = true;
    } else {
      r_St_NO_OBSTACLE = self->pnr;
    };
    r = r_St_NO_OBSTACLE;
    if (v) {
      s_St_NO_OBSTACLE_1 = false;
    } else {
      s_St_NO_OBSTACLE_1 = true;
    };
    s_1 = s_St_NO_OBSTACLE_1;
  } else {
    v_1 = (sensor>45);
    if (v_1) {
      r_St_OBSTACLE = true;
      s_St_OBSTACLE_1 = true;
    } else {
      r_St_OBSTACLE = self->pnr;
      s_St_OBSTACLE_1 = false;
    };
    r = r_St_OBSTACLE;
    s_1 = s_St_OBSTACLE_1;
  };
  ck_1_1 = s_1;
  if (ck_1_1) {
    out_St_NO_OBSTACLE = false;
    _out->out = out_St_NO_OBSTACLE;
    nr_St_NO_OBSTACLE = false;
    nr = nr_St_NO_OBSTACLE;
    ns_St_NO_OBSTACLE_1 = true;
    ns_1 = ns_St_NO_OBSTACLE_1;
  } else {
    out_St_OBSTACLE = true;
    nr_St_OBSTACLE = false;
    ns_St_OBSTACLE_1 = false;
    _out->out = out_St_OBSTACLE;
    nr = nr_St_OBSTACLE;
    ns_1 = ns_St_OBSTACLE_1;
  };
  self->pnr = nr;
  self->ck_1_2 = ns_1;;
}

void Robot__motor_reset(Robot__motor_mem* self) {
  self->pnr = false;
  self->ck_1 = false;
}

void Robot__motor_step(int c_motor, Robot__motor_out* _out,
                       Robot__motor_mem* self) {
  
  int nr_St_1_BACKWARD_STATE;
  int ns_St_1_BACKWARD_STATE_1;
  int velocity_St_1_BACKWARD_STATE;
  int mode_St_1_BACKWARD_STATE;
  int nr_St_1_FORWARD_STATE;
  int ns_St_1_FORWARD_STATE_1;
  int velocity_St_1_FORWARD_STATE;
  int mode_St_1_FORWARD_STATE;
  int ck_2_1;
  int v;
  int r_St_1_BACKWARD_STATE;
  int s_St_1_BACKWARD_STATE_1;
  int r_St_1_FORWARD_STATE;
  int s_St_1_FORWARD_STATE_1;
  int s_1;
  int ns_1;
  int r;
  int nr;
  if (self->ck_1) {
    if (c_motor) {
      r_St_1_BACKWARD_STATE = true;
    } else {
      r_St_1_BACKWARD_STATE = self->pnr;
    };
    r = r_St_1_BACKWARD_STATE;
    if (c_motor) {
      s_St_1_BACKWARD_STATE_1 = false;
    } else {
      s_St_1_BACKWARD_STATE_1 = true;
    };
    s_1 = s_St_1_BACKWARD_STATE_1;
  } else {
    v = !(c_motor);
    if (v) {
      r_St_1_FORWARD_STATE = true;
      s_St_1_FORWARD_STATE_1 = true;
    } else {
      r_St_1_FORWARD_STATE = self->pnr;
      s_St_1_FORWARD_STATE_1 = false;
    };
    r = r_St_1_FORWARD_STATE;
    s_1 = s_St_1_FORWARD_STATE_1;
  };
  ck_2_1 = s_1;
  if (ck_2_1) {
    mode_St_1_BACKWARD_STATE = false;
    _out->mode = mode_St_1_BACKWARD_STATE;
    velocity_St_1_BACKWARD_STATE = 100;
    _out->velocity = velocity_St_1_BACKWARD_STATE;
    nr_St_1_BACKWARD_STATE = false;
    nr = nr_St_1_BACKWARD_STATE;
    ns_St_1_BACKWARD_STATE_1 = true;
    ns_1 = ns_St_1_BACKWARD_STATE_1;
  } else {
    mode_St_1_FORWARD_STATE = true;
    velocity_St_1_FORWARD_STATE = 255;
    nr_St_1_FORWARD_STATE = false;
    ns_St_1_FORWARD_STATE_1 = false;
    _out->mode = mode_St_1_FORWARD_STATE;
    _out->velocity = velocity_St_1_FORWARD_STATE;
    nr = nr_St_1_FORWARD_STATE;
    ns_1 = ns_St_1_FORWARD_STATE_1;
  };
  self->pnr = nr;
  self->ck_1 = ns_1;;
}

void Robot__moving_or_turning_reset(Robot__moving_or_turning_mem* self) {
  self->mbc_1 = 0;
  self->pnr = false;
  self->v_39 = true;
  self->v_40 = true;
}

void Robot__moving_or_turning_step(int c, Robot__moving_or_turning_out* _out,
                                   Robot__moving_or_turning_mem* self) {
  
  int v_5_2_0;
  int v_5_2_1;
  int v_6;
  int v_5_2;
  int v_5_1;
  int v_4;
  int v_38;
  int v_37;
  int v_36;
  int v_35;
  int v_34;
  int v_33;
  int v_32;
  int v_31;
  int v_30;
  int v_29;
  int ns_St_2_TURNING_STATE_2_0;
  int ns_St_2_TURNING_STATE_2_1;
  int ns_St_2_STURNING_STATE_2_0;
  int ns_St_2_STURNING_STATE_2_1;
  int ns_St_2_MOVING_STATE_2_0;
  int ns_St_2_MOVING_STATE_2_1;
  int ck_3_2_0;
  int ck_3_2_1;
  int nr_St_2_TURNING_STATE;
  int ns_St_2_TURNING_STATE_2;
  int ns_St_2_TURNING_STATE_1;
  int mbc_St_2_TURNING_STATE;
  int turning_St_2_TURNING_STATE;
  int nr_St_2_STURNING_STATE;
  int ns_St_2_STURNING_STATE_2;
  int ns_St_2_STURNING_STATE_1;
  int mbc_St_2_STURNING_STATE;
  int turning_St_2_STURNING_STATE;
  int nr_St_2_MOVING_STATE;
  int ns_St_2_MOVING_STATE_2;
  int ns_St_2_MOVING_STATE_1;
  int mbc_St_2_MOVING_STATE;
  int turning_St_2_MOVING_STATE;
  int ck_3_2;
  int ck_3_1;
  int v_3;
  int v_2;
  int v;
  int v_46;
  int v_45;
  int v_44;
  int v_43;
  int v_42;
  int v_41;
  int s_St_2_TURNING_STATE_2_0;
  int s_St_2_TURNING_STATE_2_1;
  int s_St_2_STURNING_STATE_2_0;
  int s_St_2_STURNING_STATE_2_1;
  int s_St_2_MOVING_STATE_2_0;
  int s_St_2_MOVING_STATE_2_1;
  int ck_2_0;
  int ck_2_1;
  int r_St_2_TURNING_STATE;
  int s_St_2_TURNING_STATE_2;
  int s_St_2_TURNING_STATE_1;
  int r_St_2_STURNING_STATE;
  int s_St_2_STURNING_STATE_2;
  int s_St_2_STURNING_STATE_1;
  int r_St_2_MOVING_STATE;
  int s_St_2_MOVING_STATE_2;
  int s_St_2_MOVING_STATE_1;
  int ck_2;
  int ck_1;
  int s_2_0;
  int s_2_1;
  int ns_2_0;
  int ns_2_1;
  int s_2;
  int s_1;
  int ns_2;
  int ns_1;
  int r;
  int nr;
  int mbc;
  ck_1 = self->v_39;
  ck_2 = self->v_40;
  if (ck_1) {
    ck_2_1 = ck_2;
    if (ck_2_1) {
      v_3 = !(c);
      if (v_3) {
        r_St_2_MOVING_STATE = true;
        s_St_2_MOVING_STATE_1 = true;
        s_St_2_MOVING_STATE_2 = false;
      } else {
        r_St_2_MOVING_STATE = self->pnr;
        s_St_2_MOVING_STATE_1 = true;
        s_St_2_MOVING_STATE_2 = true;
      };
      v_45 = r_St_2_MOVING_STATE;
      v_41 = s_St_2_MOVING_STATE_1;
      v_42 = s_St_2_MOVING_STATE_2;
      if (s_St_2_MOVING_STATE_1) {
        s_St_2_MOVING_STATE_2_1 = s_St_2_MOVING_STATE_2;
      } else {
        s_St_2_MOVING_STATE_2_0 = s_St_2_MOVING_STATE_2;
      };
    } else {
      r_St_2_STURNING_STATE = self->pnr;
      v_45 = r_St_2_STURNING_STATE;
      s_St_2_STURNING_STATE_1 = true;
      v_41 = s_St_2_STURNING_STATE_1;
      s_St_2_STURNING_STATE_2 = false;
      v_42 = s_St_2_STURNING_STATE_2;
      if (s_St_2_STURNING_STATE_1) {
        s_St_2_STURNING_STATE_2_1 = s_St_2_STURNING_STATE_2;
      } else {
        s_St_2_STURNING_STATE_2_0 = s_St_2_STURNING_STATE_2;
      };
    };
    s_1 = v_41;
    s_2 = v_42;
    r = v_45;
  } else {
    ck_2_0 = ck_2;
    if (ck_2_0) {
      v_46 = true;
      v_43 = true;
      v_44 = true;
    } else {
      v = (12==self->mbc_1);
      v_2 = (c&&v);
      if (v_2) {
        r_St_2_TURNING_STATE = true;
      } else {
        r_St_2_TURNING_STATE = self->pnr;
      };
      v_46 = r_St_2_TURNING_STATE;
      if (v_2) {
        s_St_2_TURNING_STATE_1 = true;
      } else {
        s_St_2_TURNING_STATE_1 = false;
      };
      v_43 = s_St_2_TURNING_STATE_1;
      if (v_2) {
        s_St_2_TURNING_STATE_2 = false;
      } else {
        s_St_2_TURNING_STATE_2 = false;
      };
      v_44 = s_St_2_TURNING_STATE_2;
    };
    s_1 = v_43;
    s_2 = v_44;
    r = v_46;
  };
  ck_3_1 = s_1;
  ck_3_2 = s_2;
  if (ck_3_1) {
    ck_3_2_1 = ck_3_2;
    if (ck_3_2_1) {
      mbc_St_2_MOVING_STATE = 0;
      turning_St_2_MOVING_STATE = false;
      nr_St_2_MOVING_STATE = false;
      ns_St_2_MOVING_STATE_1 = true;
      ns_St_2_MOVING_STATE_2 = true;
      v_31 = mbc_St_2_MOVING_STATE;
      v_29 = turning_St_2_MOVING_STATE;
      v_37 = nr_St_2_MOVING_STATE;
      v_33 = ns_St_2_MOVING_STATE_1;
      v_34 = ns_St_2_MOVING_STATE_2;
      if (ns_St_2_MOVING_STATE_1) {
        ns_St_2_MOVING_STATE_2_1 = ns_St_2_MOVING_STATE_2;
      } else {
        ns_St_2_MOVING_STATE_2_0 = ns_St_2_MOVING_STATE_2;
      };
    } else {
      mbc_St_2_STURNING_STATE = 0;
      v_31 = mbc_St_2_STURNING_STATE;
      turning_St_2_STURNING_STATE = true;
      v_29 = turning_St_2_STURNING_STATE;
      if (c) {
        v_6 = true;
        v_5_1 = true;
        v_5_2 = true;
      } else {
        v_6 = false;
        v_5_1 = true;
        v_5_2 = false;
      };
      v_4 = !(c);
      if (v_4) {
        nr_St_2_STURNING_STATE = true;
      } else {
        nr_St_2_STURNING_STATE = v_6;
      };
      v_37 = nr_St_2_STURNING_STATE;
      if (v_4) {
        ns_St_2_STURNING_STATE_1 = false;
      } else {
        ns_St_2_STURNING_STATE_1 = v_5_1;
      };
      v_33 = ns_St_2_STURNING_STATE_1;
      if (v_4) {
        ns_St_2_STURNING_STATE_2 = false;
      } else {
        ns_St_2_STURNING_STATE_2 = v_5_2;
      };
      v_34 = ns_St_2_STURNING_STATE_2;
      if (v_5_1) {
        v_5_2_1 = v_5_2;
      } else {
        v_5_2_0 = v_5_2;
      };
      if (ns_St_2_STURNING_STATE_1) {
        ns_St_2_STURNING_STATE_2_1 = ns_St_2_STURNING_STATE_2;
      } else {
        ns_St_2_STURNING_STATE_2_0 = ns_St_2_STURNING_STATE_2;
      };
    };
    _out->turning = v_29;
    mbc = v_31;
    ns_1 = v_33;
    ns_2 = v_34;
    nr = v_37;
  } else {
    ck_3_2_0 = ck_3_2;
    if (ck_3_2_0) {
      v_32 = 0;
      v_30 = true;
      v_38 = true;
      v_35 = true;
      v_36 = true;
    } else {
      mbc_St_2_TURNING_STATE = (self->mbc_1+1);
      v_32 = mbc_St_2_TURNING_STATE;
      turning_St_2_TURNING_STATE = true;
      v_30 = turning_St_2_TURNING_STATE;
      nr_St_2_TURNING_STATE = false;
      v_38 = nr_St_2_TURNING_STATE;
      ns_St_2_TURNING_STATE_1 = false;
      v_35 = ns_St_2_TURNING_STATE_1;
      ns_St_2_TURNING_STATE_2 = false;
      v_36 = ns_St_2_TURNING_STATE_2;
    };
    _out->turning = v_30;
    mbc = v_32;
    ns_1 = v_35;
    ns_2 = v_36;
    nr = v_38;
  };
  _out->ombc = mbc;
  if (ns_1) {
    ns_2_1 = ns_2;
  } else {
    ns_2_0 = ns_2;
  };
  if (!(ck_3_1)) {
    if (!(ck_3_2_0)) {
      if (ns_St_2_TURNING_STATE_1) {
        ns_St_2_TURNING_STATE_2_1 = ns_St_2_TURNING_STATE_2;
      } else {
        ns_St_2_TURNING_STATE_2_0 = ns_St_2_TURNING_STATE_2;
      };
    };
  };
  if (s_1) {
    s_2_1 = s_2;
  } else {
    s_2_0 = s_2;
  };
  if (!(ck_1)) {
    if (!(ck_2_0)) {
      if (s_St_2_TURNING_STATE_1) {
        s_St_2_TURNING_STATE_2_1 = s_St_2_TURNING_STATE_2;
      } else {
        s_St_2_TURNING_STATE_2_0 = s_St_2_TURNING_STATE_2;
      };
    };
  };
  self->mbc_1 = mbc;
  self->pnr = nr;
  self->v_39 = ns_1;
  self->v_40 = ns_2;;
}

void Robot__controller_reset(Robot__controller_mem* self) {
  self->mbc_2 = 0;
  self->pnr = false;
  self->ck_13_1 = false;
  self->pnr_1 = false;
  self->ck_11_1 = false;
  self->pnr_2 = false;
  self->ck_9_1 = false;
  self->pnr_3 = false;
  self->ck_7_1 = false;
  self->pnr_4 = false;
  self->v_57 = true;
  self->v_58 = true;
  self->pnr_5 = false;
  self->ck_1 = false;
}

void Robot__controller_step(int obs_sensor, Robot__controller_out* _out,
                            Robot__controller_mem* self) {
  Controller_controller__controller_controller_out Controller_controller__controller_controller_out_st;
  
  int nr_St_3_BACKWARD_STATE;
  int ns_St_3_BACKWARD_STATE_1;
  int velocity_3_St_3_BACKWARD_STATE;
  int mode_3_St_3_BACKWARD_STATE;
  int nr_St_3_FORWARD_STATE;
  int ns_St_3_FORWARD_STATE_1;
  int velocity_3_St_3_FORWARD_STATE;
  int mode_3_St_3_FORWARD_STATE;
  int ck_14_1;
  int v_28;
  int r_St_3_BACKWARD_STATE;
  int s_St_3_BACKWARD_STATE_1;
  int r_St_3_FORWARD_STATE;
  int s_St_3_FORWARD_STATE_1;
  int nr_1_St_4_BACKWARD_STATE;
  int ns_1_St_4_BACKWARD_STATE_1;
  int velocity_2_St_4_BACKWARD_STATE;
  int mode_2_St_4_BACKWARD_STATE;
  int nr_1_St_4_FORWARD_STATE;
  int ns_1_St_4_FORWARD_STATE_1;
  int velocity_2_St_4_FORWARD_STATE;
  int mode_2_St_4_FORWARD_STATE;
  int ck_12_1;
  int v_27;
  int r_1_St_4_BACKWARD_STATE;
  int s_1_St_4_BACKWARD_STATE_1;
  int r_1_St_4_FORWARD_STATE;
  int s_1_St_4_FORWARD_STATE_1;
  int nr_2_St_5_BACKWARD_STATE;
  int ns_2_St_5_BACKWARD_STATE_1;
  int velocity_1_St_5_BACKWARD_STATE;
  int mode_1_St_5_BACKWARD_STATE;
  int nr_2_St_5_FORWARD_STATE;
  int ns_2_St_5_FORWARD_STATE_1;
  int velocity_1_St_5_FORWARD_STATE;
  int mode_1_St_5_FORWARD_STATE;
  int ck_10_1;
  int v_26;
  int r_2_St_5_BACKWARD_STATE;
  int s_2_St_5_BACKWARD_STATE_1;
  int r_2_St_5_FORWARD_STATE;
  int s_2_St_5_FORWARD_STATE_1;
  int nr_3_St_6_BACKWARD_STATE;
  int ns_3_St_6_BACKWARD_STATE_1;
  int velocity_St_6_BACKWARD_STATE;
  int mode_St_6_BACKWARD_STATE;
  int nr_3_St_6_FORWARD_STATE;
  int ns_3_St_6_FORWARD_STATE_1;
  int velocity_St_6_FORWARD_STATE;
  int mode_St_6_FORWARD_STATE;
  int ck_8_1;
  int v_25;
  int r_3_St_6_BACKWARD_STATE;
  int s_3_St_6_BACKWARD_STATE_1;
  int r_3_St_6_FORWARD_STATE;
  int s_3_St_6_FORWARD_STATE_1;
  int v_23_2_0;
  int v_23_2_1;
  int v_24;
  int v_23_2;
  int v_23_1;
  int v_22;
  int v_56;
  int v_55;
  int v_54;
  int v_53;
  int v_52;
  int v_51;
  int v_50;
  int v_49;
  int v_48;
  int v_47;
  int ns_4_St_7_TURNING_STATE_2_0;
  int ns_4_St_7_TURNING_STATE_2_1;
  int ns_4_St_7_STURNING_STATE_2_0;
  int ns_4_St_7_STURNING_STATE_2_1;
  int ns_4_St_7_MOVING_STATE_2_0;
  int ns_4_St_7_MOVING_STATE_2_1;
  int ck_6_2_0;
  int ck_6_2_1;
  int nr_4_St_7_TURNING_STATE;
  int ns_4_St_7_TURNING_STATE_2;
  int ns_4_St_7_TURNING_STATE_1;
  int mbc_St_7_TURNING_STATE;
  int turning_1_St_7_TURNING_STATE;
  int nr_4_St_7_STURNING_STATE;
  int ns_4_St_7_STURNING_STATE_2;
  int ns_4_St_7_STURNING_STATE_1;
  int mbc_St_7_STURNING_STATE;
  int turning_1_St_7_STURNING_STATE;
  int nr_4_St_7_MOVING_STATE;
  int ns_4_St_7_MOVING_STATE_2;
  int ns_4_St_7_MOVING_STATE_1;
  int mbc_St_7_MOVING_STATE;
  int turning_1_St_7_MOVING_STATE;
  int ck_6_2;
  int ck_6_1;
  int v_21;
  int v_20;
  int v_19;
  int v_64;
  int v_63;
  int v_62;
  int v_61;
  int v_60;
  int v_59;
  int s_4_St_7_TURNING_STATE_2_0;
  int s_4_St_7_TURNING_STATE_2_1;
  int s_4_St_7_STURNING_STATE_2_0;
  int s_4_St_7_STURNING_STATE_2_1;
  int s_4_St_7_MOVING_STATE_2_0;
  int s_4_St_7_MOVING_STATE_2_1;
  int ck_5_2_0;
  int ck_5_2_1;
  int r_4_St_7_TURNING_STATE;
  int s_4_St_7_TURNING_STATE_2;
  int s_4_St_7_TURNING_STATE_1;
  int r_4_St_7_STURNING_STATE;
  int s_4_St_7_STURNING_STATE_2;
  int s_4_St_7_STURNING_STATE_1;
  int r_4_St_7_MOVING_STATE;
  int s_4_St_7_MOVING_STATE_2;
  int s_4_St_7_MOVING_STATE_1;
  int ck_5_2;
  int ck_5_1;
  int nr_5_St_8_NO_OBSTACLE;
  int ns_5_St_8_NO_OBSTACLE_1;
  int out_St_8_NO_OBSTACLE;
  int nr_5_St_8_OBSTACLE;
  int ns_5_St_8_OBSTACLE_1;
  int out_St_8_OBSTACLE;
  int ck_4_1;
  int v_18;
  int v_17;
  int r_5_St_8_NO_OBSTACLE;
  int s_5_St_8_NO_OBSTACLE_1;
  int r_5_St_8_OBSTACLE;
  int s_5_St_8_OBSTACLE_1;
  int s_4_2_0;
  int s_4_2_1;
  int ns_4_2_0;
  int ns_4_2_1;
  int s_5_1;
  int ns_5_1;
  int r_5;
  int nr_5;
  int s_4_2;
  int s_4_1;
  int ns_4_2;
  int ns_4_1;
  int r_4;
  int nr_4;
  int s_3_1;
  int ns_3_1;
  int r_3;
  int nr_3;
  int s_2_1;
  int ns_2_1;
  int r_2;
  int nr_2;
  int s_1_1;
  int ns_1_1;
  int r_1;
  int nr_1;
  int s_1_2;
  int ns_1_2;
  int r;
  int nr;
  int c_motor_3;
  int mode_3;
  int velocity_3;
  int c_motor_2;
  int mode_2;
  int velocity_2;
  int c_motor_1;
  int mode_1;
  int velocity_1;
  int c_motor;
  int mode;
  int velocity;
  int c;
  int mbc;
  int turning_1;
  int ombc;
  int sensor;
  int out;
  int rule;
  int v;
  int v_7;
  int v_8;
  int v_9;
  int v_10;
  int v_11;
  int v_12;
  int v_13;
  int v_14;
  int v_15;
  int v_16;
  int c_motor4;
  int c_motor3;
  int c_motor2;
  int c_motor1;
  int c_move;
  ck_5_1 = self->v_57;
  ck_5_2 = self->v_58;
  sensor = obs_sensor;
  if (ck_5_1) {
    ck_5_2_1 = ck_5_2;
    if (!(ck_5_2_1)) {
      r_4_St_7_STURNING_STATE = self->pnr_4;
      s_4_St_7_STURNING_STATE_1 = true;
      s_4_St_7_STURNING_STATE_2 = false;
      if (s_4_St_7_STURNING_STATE_1) {
        s_4_St_7_STURNING_STATE_2_1 = s_4_St_7_STURNING_STATE_2;
      } else {
        s_4_St_7_STURNING_STATE_2_0 = s_4_St_7_STURNING_STATE_2;
      };
    };
  } else {
    ck_5_2_0 = ck_5_2;
    if (!(ck_5_2_0)) {
      v_19 = (12==self->mbc_2);
    };
  };
  if (self->ck_1) {
    v_17 = (sensor<=45);
    if (v_17) {
      r_5_St_8_NO_OBSTACLE = true;
    } else {
      r_5_St_8_NO_OBSTACLE = self->pnr_5;
    };
    r_5 = r_5_St_8_NO_OBSTACLE;
    if (v_17) {
      s_5_St_8_NO_OBSTACLE_1 = false;
    } else {
      s_5_St_8_NO_OBSTACLE_1 = true;
    };
    s_5_1 = s_5_St_8_NO_OBSTACLE_1;
  } else {
    v_18 = (sensor>45);
    if (v_18) {
      r_5_St_8_OBSTACLE = true;
      s_5_St_8_OBSTACLE_1 = true;
    } else {
      r_5_St_8_OBSTACLE = self->pnr_5;
      s_5_St_8_OBSTACLE_1 = false;
    };
    r_5 = r_5_St_8_OBSTACLE;
    s_5_1 = s_5_St_8_OBSTACLE_1;
  };
  ck_4_1 = s_5_1;
  Controller_controller__controller_controller_step(v_17, v_18, v_19,
                                                    self->ck_1, self->pnr_5,
                                                    self->v_58, self->v_57,
                                                    self->pnr_4,
                                                    self->ck_7_1,
                                                    self->pnr_3,
                                                    self->ck_9_1,
                                                    self->pnr_2,
                                                    self->ck_11_1,
                                                    self->pnr_1,
                                                    self->ck_13_1, self->pnr,
                                                    true, true, true, true,
                                                    true,
                                                    &Controller_controller__controller_controller_out_st);
  c_motor4 = Controller_controller__controller_controller_out_st.controller_c_motor4;
  c_motor3 = Controller_controller__controller_controller_out_st.controller_c_motor3;
  c_motor2 = Controller_controller__controller_controller_out_st.controller_c_motor2;
  c_motor1 = Controller_controller__controller_controller_out_st.controller_c_motor1;
  c_move = Controller_controller__controller_controller_out_st.controller_c_move;
  c_motor_3 = c_motor4;
  c_motor_2 = c_motor3;
  c_motor_1 = c_motor2;
  c_motor = c_motor1;
  c = c_move;
  if (self->ck_13_1) {
    if (c_motor_3) {
      r_St_3_BACKWARD_STATE = true;
    } else {
      r_St_3_BACKWARD_STATE = self->pnr;
    };
    r = r_St_3_BACKWARD_STATE;
    if (c_motor_3) {
      s_St_3_BACKWARD_STATE_1 = false;
    } else {
      s_St_3_BACKWARD_STATE_1 = true;
    };
    s_1_2 = s_St_3_BACKWARD_STATE_1;
  } else {
    v_28 = !(c_motor_3);
    if (v_28) {
      r_St_3_FORWARD_STATE = true;
      s_St_3_FORWARD_STATE_1 = true;
    } else {
      r_St_3_FORWARD_STATE = self->pnr;
      s_St_3_FORWARD_STATE_1 = false;
    };
    r = r_St_3_FORWARD_STATE;
    s_1_2 = s_St_3_FORWARD_STATE_1;
  };
  ck_14_1 = s_1_2;
  if (ck_14_1) {
    mode_3_St_3_BACKWARD_STATE = false;
    mode_3 = mode_3_St_3_BACKWARD_STATE;
    velocity_3_St_3_BACKWARD_STATE = 100;
    velocity_3 = velocity_3_St_3_BACKWARD_STATE;
    nr_St_3_BACKWARD_STATE = false;
    nr = nr_St_3_BACKWARD_STATE;
    ns_St_3_BACKWARD_STATE_1 = true;
    ns_1_2 = ns_St_3_BACKWARD_STATE_1;
  } else {
    mode_3_St_3_FORWARD_STATE = true;
    velocity_3_St_3_FORWARD_STATE = 255;
    nr_St_3_FORWARD_STATE = false;
    ns_St_3_FORWARD_STATE_1 = false;
    mode_3 = mode_3_St_3_FORWARD_STATE;
    velocity_3 = velocity_3_St_3_FORWARD_STATE;
    nr = nr_St_3_FORWARD_STATE;
    ns_1_2 = ns_St_3_FORWARD_STATE_1;
  };
  _out->vel4 = velocity_3;
  _out->motor4 = mode_3;
  v_14 = (_out->motor4==false);
  if (self->ck_11_1) {
    if (c_motor_2) {
      r_1_St_4_BACKWARD_STATE = true;
    } else {
      r_1_St_4_BACKWARD_STATE = self->pnr_1;
    };
    r_1 = r_1_St_4_BACKWARD_STATE;
    if (c_motor_2) {
      s_1_St_4_BACKWARD_STATE_1 = false;
    } else {
      s_1_St_4_BACKWARD_STATE_1 = true;
    };
    s_1_1 = s_1_St_4_BACKWARD_STATE_1;
  } else {
    v_27 = !(c_motor_2);
    if (v_27) {
      r_1_St_4_FORWARD_STATE = true;
      s_1_St_4_FORWARD_STATE_1 = true;
    } else {
      r_1_St_4_FORWARD_STATE = self->pnr_1;
      s_1_St_4_FORWARD_STATE_1 = false;
    };
    r_1 = r_1_St_4_FORWARD_STATE;
    s_1_1 = s_1_St_4_FORWARD_STATE_1;
  };
  ck_12_1 = s_1_1;
  if (ck_12_1) {
    mode_2_St_4_BACKWARD_STATE = false;
    mode_2 = mode_2_St_4_BACKWARD_STATE;
    velocity_2_St_4_BACKWARD_STATE = 100;
    velocity_2 = velocity_2_St_4_BACKWARD_STATE;
    nr_1_St_4_BACKWARD_STATE = false;
    nr_1 = nr_1_St_4_BACKWARD_STATE;
    ns_1_St_4_BACKWARD_STATE_1 = true;
    ns_1_1 = ns_1_St_4_BACKWARD_STATE_1;
  } else {
    mode_2_St_4_FORWARD_STATE = true;
    velocity_2_St_4_FORWARD_STATE = 255;
    nr_1_St_4_FORWARD_STATE = false;
    ns_1_St_4_FORWARD_STATE_1 = false;
    mode_2 = mode_2_St_4_FORWARD_STATE;
    velocity_2 = velocity_2_St_4_FORWARD_STATE;
    nr_1 = nr_1_St_4_FORWARD_STATE;
    ns_1_1 = ns_1_St_4_FORWARD_STATE_1;
  };
  _out->vel3 = velocity_2;
  _out->motor3 = mode_2;
  v_12 = (_out->motor3==true);
  if (self->ck_9_1) {
    if (c_motor_1) {
      r_2_St_5_BACKWARD_STATE = true;
    } else {
      r_2_St_5_BACKWARD_STATE = self->pnr_2;
    };
    r_2 = r_2_St_5_BACKWARD_STATE;
    if (c_motor_1) {
      s_2_St_5_BACKWARD_STATE_1 = false;
    } else {
      s_2_St_5_BACKWARD_STATE_1 = true;
    };
    s_2_1 = s_2_St_5_BACKWARD_STATE_1;
  } else {
    v_26 = !(c_motor_1);
    if (v_26) {
      r_2_St_5_FORWARD_STATE = true;
      s_2_St_5_FORWARD_STATE_1 = true;
    } else {
      r_2_St_5_FORWARD_STATE = self->pnr_2;
      s_2_St_5_FORWARD_STATE_1 = false;
    };
    r_2 = r_2_St_5_FORWARD_STATE;
    s_2_1 = s_2_St_5_FORWARD_STATE_1;
  };
  ck_10_1 = s_2_1;
  if (ck_10_1) {
    mode_1_St_5_BACKWARD_STATE = false;
    mode_1 = mode_1_St_5_BACKWARD_STATE;
    velocity_1_St_5_BACKWARD_STATE = 100;
    velocity_1 = velocity_1_St_5_BACKWARD_STATE;
    nr_2_St_5_BACKWARD_STATE = false;
    nr_2 = nr_2_St_5_BACKWARD_STATE;
    ns_2_St_5_BACKWARD_STATE_1 = true;
    ns_2_1 = ns_2_St_5_BACKWARD_STATE_1;
  } else {
    mode_1_St_5_FORWARD_STATE = true;
    velocity_1_St_5_FORWARD_STATE = 255;
    nr_2_St_5_FORWARD_STATE = false;
    ns_2_St_5_FORWARD_STATE_1 = false;
    mode_1 = mode_1_St_5_FORWARD_STATE;
    velocity_1 = velocity_1_St_5_FORWARD_STATE;
    nr_2 = nr_2_St_5_FORWARD_STATE;
    ns_2_1 = ns_2_St_5_FORWARD_STATE_1;
  };
  _out->vel2 = velocity_1;
  _out->motor2 = mode_1;
  v_10 = (_out->motor2==false);
  if (self->ck_7_1) {
    if (c_motor) {
      r_3_St_6_BACKWARD_STATE = true;
    } else {
      r_3_St_6_BACKWARD_STATE = self->pnr_3;
    };
    r_3 = r_3_St_6_BACKWARD_STATE;
    if (c_motor) {
      s_3_St_6_BACKWARD_STATE_1 = false;
    } else {
      s_3_St_6_BACKWARD_STATE_1 = true;
    };
    s_3_1 = s_3_St_6_BACKWARD_STATE_1;
  } else {
    v_25 = !(c_motor);
    if (v_25) {
      r_3_St_6_FORWARD_STATE = true;
      s_3_St_6_FORWARD_STATE_1 = true;
    } else {
      r_3_St_6_FORWARD_STATE = self->pnr_3;
      s_3_St_6_FORWARD_STATE_1 = false;
    };
    r_3 = r_3_St_6_FORWARD_STATE;
    s_3_1 = s_3_St_6_FORWARD_STATE_1;
  };
  ck_8_1 = s_3_1;
  if (ck_8_1) {
    mode_St_6_BACKWARD_STATE = false;
    mode = mode_St_6_BACKWARD_STATE;
    velocity_St_6_BACKWARD_STATE = 100;
    velocity = velocity_St_6_BACKWARD_STATE;
    nr_3_St_6_BACKWARD_STATE = false;
    nr_3 = nr_3_St_6_BACKWARD_STATE;
    ns_3_St_6_BACKWARD_STATE_1 = true;
    ns_3_1 = ns_3_St_6_BACKWARD_STATE_1;
  } else {
    mode_St_6_FORWARD_STATE = true;
    velocity_St_6_FORWARD_STATE = 255;
    nr_3_St_6_FORWARD_STATE = false;
    ns_3_St_6_FORWARD_STATE_1 = false;
    mode = mode_St_6_FORWARD_STATE;
    velocity = velocity_St_6_FORWARD_STATE;
    nr_3 = nr_3_St_6_FORWARD_STATE;
    ns_3_1 = ns_3_St_6_FORWARD_STATE_1;
  };
  _out->vel1 = velocity;
  _out->motor1 = mode;
  v_9 = (_out->motor1==true);
  v_11 = (v_9&&v_10);
  v_13 = (v_11&&v_12);
  v_15 = (v_13&&v_14);
  if (ck_5_1) {
    if (ck_5_2_1) {
      v_21 = !(c);
      if (v_21) {
        r_4_St_7_MOVING_STATE = true;
      } else {
        r_4_St_7_MOVING_STATE = self->pnr_4;
      };
      v_63 = r_4_St_7_MOVING_STATE;
      if (v_21) {
        s_4_St_7_MOVING_STATE_1 = true;
      } else {
        s_4_St_7_MOVING_STATE_1 = true;
      };
      v_59 = s_4_St_7_MOVING_STATE_1;
      if (v_21) {
        s_4_St_7_MOVING_STATE_2 = false;
      } else {
        s_4_St_7_MOVING_STATE_2 = true;
      };
      v_60 = s_4_St_7_MOVING_STATE_2;
      if (s_4_St_7_MOVING_STATE_1) {
        s_4_St_7_MOVING_STATE_2_1 = s_4_St_7_MOVING_STATE_2;
      } else {
        s_4_St_7_MOVING_STATE_2_0 = s_4_St_7_MOVING_STATE_2;
      };
    } else {
      v_63 = r_4_St_7_STURNING_STATE;
      v_59 = s_4_St_7_STURNING_STATE_1;
      v_60 = s_4_St_7_STURNING_STATE_2;
    };
    s_4_1 = v_59;
    s_4_2 = v_60;
    r_4 = v_63;
  } else {
    if (ck_5_2_0) {
      v_64 = true;
      v_61 = true;
      v_62 = true;
    } else {
      v_20 = (c&&v_19);
      if (v_20) {
        r_4_St_7_TURNING_STATE = true;
      } else {
        r_4_St_7_TURNING_STATE = self->pnr_4;
      };
      v_64 = r_4_St_7_TURNING_STATE;
      if (v_20) {
        s_4_St_7_TURNING_STATE_1 = true;
      } else {
        s_4_St_7_TURNING_STATE_1 = false;
      };
      v_61 = s_4_St_7_TURNING_STATE_1;
      if (v_20) {
        s_4_St_7_TURNING_STATE_2 = false;
      } else {
        s_4_St_7_TURNING_STATE_2 = false;
      };
      v_62 = s_4_St_7_TURNING_STATE_2;
    };
    s_4_1 = v_61;
    s_4_2 = v_62;
    r_4 = v_64;
  };
  ck_6_1 = s_4_1;
  ck_6_2 = s_4_2;
  if (ck_6_1) {
    ck_6_2_1 = ck_6_2;
    if (ck_6_2_1) {
      mbc_St_7_MOVING_STATE = 0;
      turning_1_St_7_MOVING_STATE = false;
      nr_4_St_7_MOVING_STATE = false;
      ns_4_St_7_MOVING_STATE_1 = true;
      ns_4_St_7_MOVING_STATE_2 = true;
      v_49 = mbc_St_7_MOVING_STATE;
      v_47 = turning_1_St_7_MOVING_STATE;
      v_55 = nr_4_St_7_MOVING_STATE;
      v_51 = ns_4_St_7_MOVING_STATE_1;
      v_52 = ns_4_St_7_MOVING_STATE_2;
      if (ns_4_St_7_MOVING_STATE_1) {
        ns_4_St_7_MOVING_STATE_2_1 = ns_4_St_7_MOVING_STATE_2;
      } else {
        ns_4_St_7_MOVING_STATE_2_0 = ns_4_St_7_MOVING_STATE_2;
      };
    } else {
      mbc_St_7_STURNING_STATE = 0;
      v_49 = mbc_St_7_STURNING_STATE;
      turning_1_St_7_STURNING_STATE = true;
      v_47 = turning_1_St_7_STURNING_STATE;
      if (c) {
        v_24 = true;
        v_23_1 = true;
        v_23_2 = true;
      } else {
        v_24 = false;
        v_23_1 = true;
        v_23_2 = false;
      };
      v_22 = !(c);
      if (v_22) {
        nr_4_St_7_STURNING_STATE = true;
      } else {
        nr_4_St_7_STURNING_STATE = v_24;
      };
      v_55 = nr_4_St_7_STURNING_STATE;
      if (v_22) {
        ns_4_St_7_STURNING_STATE_1 = false;
      } else {
        ns_4_St_7_STURNING_STATE_1 = v_23_1;
      };
      v_51 = ns_4_St_7_STURNING_STATE_1;
      if (v_22) {
        ns_4_St_7_STURNING_STATE_2 = false;
      } else {
        ns_4_St_7_STURNING_STATE_2 = v_23_2;
      };
      v_52 = ns_4_St_7_STURNING_STATE_2;
      if (v_23_1) {
        v_23_2_1 = v_23_2;
      } else {
        v_23_2_0 = v_23_2;
      };
      if (ns_4_St_7_STURNING_STATE_1) {
        ns_4_St_7_STURNING_STATE_2_1 = ns_4_St_7_STURNING_STATE_2;
      } else {
        ns_4_St_7_STURNING_STATE_2_0 = ns_4_St_7_STURNING_STATE_2;
      };
    };
    turning_1 = v_47;
    mbc = v_49;
    ns_4_1 = v_51;
    ns_4_2 = v_52;
    nr_4 = v_55;
  } else {
    ck_6_2_0 = ck_6_2;
    if (ck_6_2_0) {
      v_50 = 0;
      v_48 = true;
      v_56 = true;
      v_53 = true;
      v_54 = true;
    } else {
      mbc_St_7_TURNING_STATE = (self->mbc_2+1);
      v_50 = mbc_St_7_TURNING_STATE;
      turning_1_St_7_TURNING_STATE = true;
      v_48 = turning_1_St_7_TURNING_STATE;
      nr_4_St_7_TURNING_STATE = false;
      v_56 = nr_4_St_7_TURNING_STATE;
      ns_4_St_7_TURNING_STATE_1 = false;
      v_53 = ns_4_St_7_TURNING_STATE_1;
      ns_4_St_7_TURNING_STATE_2 = false;
      v_54 = ns_4_St_7_TURNING_STATE_2;
    };
    turning_1 = v_48;
    mbc = v_50;
    ns_4_1 = v_53;
    ns_4_2 = v_54;
    nr_4 = v_56;
  };
  ombc = mbc;
  _out->cont = ombc;
  _out->turning = turning_1;
  v_7 = !(_out->turning);
  v_16 = (_out->turning&&v_15);
  if (ns_4_1) {
    ns_4_2_1 = ns_4_2;
  } else {
    ns_4_2_0 = ns_4_2;
  };
  if (!(ck_6_1)) {
    if (!(ck_6_2_0)) {
      if (ns_4_St_7_TURNING_STATE_1) {
        ns_4_St_7_TURNING_STATE_2_1 = ns_4_St_7_TURNING_STATE_2;
      } else {
        ns_4_St_7_TURNING_STATE_2_0 = ns_4_St_7_TURNING_STATE_2;
      };
    };
  };
  if (s_4_1) {
    s_4_2_1 = s_4_2;
  } else {
    s_4_2_0 = s_4_2;
  };
  if (!(ck_5_1)) {
    if (!(ck_5_2_0)) {
      if (s_4_St_7_TURNING_STATE_1) {
        s_4_St_7_TURNING_STATE_2_1 = s_4_St_7_TURNING_STATE_2;
      } else {
        s_4_St_7_TURNING_STATE_2_0 = s_4_St_7_TURNING_STATE_2;
      };
    };
  };
  if (ck_4_1) {
    out_St_8_NO_OBSTACLE = false;
    out = out_St_8_NO_OBSTACLE;
    nr_5_St_8_NO_OBSTACLE = false;
    nr_5 = nr_5_St_8_NO_OBSTACLE;
    ns_5_St_8_NO_OBSTACLE_1 = true;
    ns_5_1 = ns_5_St_8_NO_OBSTACLE_1;
  } else {
    out_St_8_OBSTACLE = true;
    nr_5_St_8_OBSTACLE = false;
    ns_5_St_8_OBSTACLE_1 = false;
    out = out_St_8_OBSTACLE;
    nr_5 = nr_5_St_8_OBSTACLE;
    ns_5_1 = ns_5_St_8_OBSTACLE_1;
  };
  _out->obs = out;
  v = !(_out->obs);
  v_8 = (v&&v_7);
  rule = (v_8||v_16);
  self->mbc_2 = mbc;
  self->pnr = nr;
  self->ck_13_1 = ns_1_2;
  self->pnr_1 = nr_1;
  self->ck_11_1 = ns_1_1;
  self->pnr_2 = nr_2;
  self->ck_9_1 = ns_2_1;
  self->pnr_3 = nr_3;
  self->ck_7_1 = ns_3_1;
  self->pnr_4 = nr_4;
  self->v_57 = ns_4_1;
  self->v_58 = ns_4_2;
  self->pnr_5 = nr_5;
  self->ck_1 = ns_5_1;;
}

