#pragma once

#include "vex.h"

using namespace vex;

enum lift_positions : int { IDLE = 229, LOADING = 206, SCORING = 99 };

enum AllianceColor {
    BLUE = 1,
    RED = 2
};
AllianceColor keepColor;
double hue;
int scoringTime;

class Assembly {
public:
    Assembly(
        mik::motor left_intake_top,
        mik::motor right_intake_bottom,
        mik::motor left_intake_bottom, 
        vex::optical color_encoder,
        mik::piston mid_hood_piston,
        mik::piston odom_lift,
        mik::piston hood_piston,
        mik::piston matchloader_piston,
        mik::piston wing_piston,
        mik::piston intake_lift
    );
    
    void init();
    void control();

    void intake_control();
    void mid_hood();
    void odom_lift_control();
    void matchloader();
    void wing();
 
    mik::motor left_intake_top;
    mik::motor right_intake_bottom;
    mik::motor left_intake_bottom;
    vex::optical color_encoder;
    mik::piston mid_hood_piston;
    mik::piston odom_lift;
    mik::piston hood_piston;
    mik::piston matchloader_piston;
    mik::piston wing_piston;
    mik::piston intake_lift;
};