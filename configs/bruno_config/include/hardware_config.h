#ifndef HARDWARE_CONFIG_H
#define HARDWARE_CONFIG_H

// #define USE_SIMULATION_ACTUATOR
// #define USE_DYNAMIXEL_ACTUATOR
#define USE_SERVO_ACTUATOR
// #define USE_BRUSHLESS_ACTUATOR

// #define USE_SIMULATION_IMU
#define USE_BNO0809DOF_IMU

#define USE_ROS
// #define USE_ROS_RF

#ifdef USE_ROS_RF
    #define ELE_PIN 16
    #define AIL_PIN 21
    #define RUD_PIN 17
    #define THR_PIN 20
    #define AUX1_PIN 22
    #define AUX2_PIN 23
    #define RF_INV_LX false
    #define RF_INV_LY false
    #define RF_INV_AZ false
    #define RF_INV_ROLL true
    #define RF_INV_PITCH false
    #define RF_INV_YAW false
#endif

#ifdef USE_SERVO_ACTUATOR
    #define LFH_PIN 8
    #define LFU_PIN 7
    #define LFL_PIN 6

    #define RFH_PIN 14
    #define RFU_PIN 16
    #define RFL_PIN 17

    #define LHH_PIN 4
    #define LHU_PIN 3
    #define LHL_PIN 2

    #define RHH_PIN 21
    #define RHU_PIN 22
    #define RHL_PIN 23


    // #define LFH_PIN 2
    // #define LFU_PIN 3
    // #define LFL_PIN 4

    // #define RFH_PIN 23
    // #define RFU_PIN 22
    // #define RFL_PIN 21

    // #define LHH_PIN 6
    // #define LHU_PIN 7
    // #define LHL_PIN 8

    // #define RHH_PIN 17
    // #define RHU_PIN 16
    // #define RHL_PIN 14

    #define LFH_INV false
    #define LFU_INV false
    #define LFL_INV false

    #define RFH_INV false
    #define RFU_INV true
    #define RFL_INV true

    #define LHH_INV true
    #define LHU_INV false
    #define LHL_INV false

    #define RHH_INV true
    #define RHU_INV true
    #define RHL_INV true
#endif

#endif