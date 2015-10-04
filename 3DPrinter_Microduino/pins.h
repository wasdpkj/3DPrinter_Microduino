#ifndef PINS_H
#define PINS_H

#define X_MS1_PIN -1
#define X_MS2_PIN -1
#define Y_MS1_PIN -1
#define Y_MS2_PIN -1
#define Z_MS1_PIN -1
#define Z_MS2_PIN -1
#define E0_MS1_PIN -1
#define E0_MS2_PIN -1
#define E1_MS1_PIN -1
#define E1_MS2_PIN -1
#define DIGIPOTSS_PIN -1

#if MOTHERBOARD == 99
#define KNOWN_BOARD 1

#define X_STEP_PIN          2
#define X_DIR_PIN           3
#define X_ENABLE_PIN        -1
#define X_STOP_PIN          16

#define Y_STEP_PIN          5
#define Y_DIR_PIN           6
#define Y_ENABLE_PIN       -1
#define Y_STOP_PIN          67

#define Z_STEP_PIN          62
#define Z_DIR_PIN           63
#define Z_ENABLE_PIN       -1
#define Z_STOP_PIN          59

#define E0_STEP_PIN         65
#define E0_DIR_PIN          66
#define E0_ENABLE_PIN      -1

#define SDPOWER            -1
#define SDSS               53
#define LED_PIN            -1
#define FAN_PIN            -1
#define PS_ON_PIN           9
#define KILL_PIN           -1

#define HEATER_0_PIN        13
#define HEATER_1_PIN       -1
#define HEATER_2_PIN       -1
#define TEMP_0_PIN          6   // MUST USE ANALOG INPUT NUMBERING NOT DIGITAL OUTPUT NUMBERING!!!!!!!!!
#define TEMP_1_PIN         -1   // MUST USE ANALOG INPUT NUMBERING NOT DIGITAL OUTPUT NUMBERING!!!!!!!!!
#define TEMP_2_PIN         -1   // MUST USE ANALOG INPUT NUMBERING NOT DIGITAL OUTPUT NUMBERING!!!!!!!!!
#define HEATER_BED_PIN      4
#define TEMP_BED_PIN       10

#endif /* 99 */


/*******************************************************************************
*********
// Microduino Compatible
********************************************************************************
********/

  #if MOTHERBOARD == 29
#define KNOWN_BOARD

#if !defined(__AVR_ATmega644P__) && !defined(__AVR_ATmega644__) && !defined(__AVR_ATmega1284P__)
    #error Oops!  Make sure you have 'Microduino-Core+ (ATmega1284P@16M,5V)' selected from the 'Tools -> Boards' menu.

#endif

//x axis pins
    #define X_STEP_PIN      15
    #define X_DIR_PIN       14
    #define X_ENABLE_PIN    26  //26,A2
    #define X_STOP_PIN      4

    //y axis pins
    #define Y_STEP_PIN      17
    #define Y_DIR_PIN       16
    #define Y_ENABLE_PIN    26   //26,A2
    #define Y_STOP_PIN      5

    //z axis pins
    #define Z_STEP_PIN      19
    #define Z_DIR_PIN       18
    #define Z_ENABLE_PIN    27  //27,A3
    #define Z_STOP_PIN      6

    //extruder pins
    #define E0_STEP_PIN      23
    #define E0_DIR_PIN       22
    #define E0_ENABLE_PIN    26  //26,A2

    #define TEMP_0_PIN       0   //ADC0,A7,MUST USE ANALOG INPUT NUMBERING NOT DIGITAL OUTPUT NUMBERING!!!!!!!!! 
    #define TEMP_1_PIN      -1
    #define TEMP_2_PIN      -1
    #define TEMP_BED_PIN     1   //ADC1,A6,MUST USE ANALOG INPUT NUMBERING NOT DIGITAL OUTPUT NUMBERING!!!!!!!!! 

    #define HEATER_0_PIN    9
    #define HEATER_1_PIN    -1
    #define HEATER_2_PIN    -1
    #define HEATER_BED_PIN  8  // (bed)

    #define SDPOWER         -1
    #define SDSS            7                  // SCL pin of I2C header || CS Pin for SD Card support
    #define LED_PIN         25  //25,A1

    #define FAN_PIN         10
    #define PS_ON_PIN       -1
    //our pin for debugging.

    #define DEBUG_PIN        -1

    //our RS485 pins
    //#define TX_ENABLE_PIN       -1
    //#define RX_ENABLE_PIN       -1

    #define BEEPER       29  //29,A5
    #define SDCARDDETECT 24  //24,A0,must jump "R2" for Microduino SD module
    #define SUICIDE_PIN  -1  //has to be defined; otherwise Power_off doesn't work

    #define KILL_PIN -1

     //buttons are directly attached
    #define BTN_EN1 2
    #define BTN_EN2 3
    #define BTN_ENC 28  //28,A4,the click
#endif

/****************************************************************************************
* Gen7 v1.1, v1.2, v1.3 pin assignment
*
****************************************************************************************/


#if MOTHERBOARD == 12
#define MOTHERBOARD 11
#define GEN7_VERSION 13 // v1.3
#endif

#if MOTHERBOARD == 11
#define KNOWN_BOARD

#if !defined(__AVR_ATmega644P__) && !defined(__AVR_ATmega644__) && !defined(__AVR_ATmega1284P__)
#error Oops! Make sure you have 'Gen7' selected from the 'Tools -> Boards' menu.

#endif

#ifndef GEN7_VERSION
#define GEN7_VERSION 12 // v1.x
#endif

//x axis pins
#define X_STEP_PIN 19
#define X_DIR_PIN 18
#define X_ENABLE_PIN 24
#define X_STOP_PIN 7

//y axis pins
#define Y_STEP_PIN 23
#define Y_DIR_PIN 22
#define Y_ENABLE_PIN 24
#define Y_STOP_PIN 5

//z axis pins
#define Z_STEP_PIN 26
#define Z_DIR_PIN 25
#define Z_ENABLE_PIN 24
#define Z_MIN_PIN 1
#define Z_MAX_PIN 0

//extruder pins
#define E0_STEP_PIN 28
#define E0_DIR_PIN 27
#define E0_ENABLE_PIN 24

#define TEMP_0_PIN 1
#define TEMP_1_PIN -1
#define TEMP_2_PIN -1
#define TEMP_BED_PIN 2

#define HEATER_0_PIN 4
#define HEATER_1_PIN -1
#define HEATER_2_PIN -1
#define HEATER_BED_PIN 3

#define KILL_PIN -1

#define SDPOWER -1
#define SDSS -1 // SCL pin of I2C header
#define LED_PIN -1

#if (GEN7_VERSION >= 13)
// Gen7 v1.3 removed the fan pin
#define FAN_PIN -1
#else
#define FAN_PIN 31
#endif
#define PS_ON_PIN 15

//All these generations of Gen7 supply thermistor power
//via PS_ON, so ignore bad thermistor readings
#define BOGUS_TEMPERATURE_FAILSAFE_OVERRIDE

//our pin for debugging.
#define DEBUG_PIN 0

//our RS485 pins
#define TX_ENABLE_PIN 12
#define RX_ENABLE_PIN 13

#endif

/****************************************************************************************
* Gen7 v1.4 pin assignment
*
****************************************************************************************/

#if MOTHERBOARD == 13
#define GEN7_VERSION 14 // v1.4
#endif

#if MOTHERBOARD == 13
#define KNOWN_BOARD

#if !defined(__AVR_ATmega644P__) && !defined(__AVR_ATmega644__) && !defined(__AVR_ATmega1284P__)
#error Oops! Make sure you have 'Gen7' selected from the 'Tools -> Boards' menu.

#endif

#ifndef GEN7_VERSION
#define GEN7_VERSION 14 // v1.x
#endif

//x axis pins
#define X_STEP_PIN 29
#define X_DIR_PIN 28
#define X_ENABLE_PIN 25
#define X_STOP_PIN 0

//y axis pins
#define Y_STEP_PIN 27
#define Y_DIR_PIN 26
#define Y_ENABLE_PIN 25
#define Y_STOP_PIN 1

//z axis pins
#define Z_STEP_PIN 23
#define Z_DIR_PIN 22
#define Z_ENABLE_PIN 25
#define Z_STOP_PIN 2

//extruder pins
#define E0_STEP_PIN 19
#define E0_DIR_PIN 18
#define E0_ENABLE_PIN 25

#define TEMP_0_PIN 1
#define TEMP_1_PIN -1
#define TEMP_2_PIN -1
#define TEMP_BED_PIN 0

#define HEATER_0_PIN 4
#define HEATER_1_PIN -1
#define HEATER_2_PIN -1
#define HEATER_BED_PIN 3

#define KILL_PIN -1

#define SDPOWER -1
#define SDSS -1 // SCL pin of I2C header
#define LED_PIN -1

#define FAN_PIN -1

#define PS_ON_PIN 15

//our pin for debugging.
#define DEBUG_PIN 0

//our RS485 pins
#define TX_ENABLE_PIN 12
#define RX_ENABLE_PIN 13

#endif

/****************************************************************************************
* Duemilanove w/ ATMega328P pin assignment
*
****************************************************************************************/
#if MOTHERBOARD == 4
#define KNOWN_BOARD 1

#ifndef __AVR_ATmega328P__
#error Oops!  Make sure you have 'Arduino Duemilanove w/ ATMega328' selected from the 'Tools -> Boards' menu.
#endif

#define X_STEP_PIN         19
#define X_DIR_PIN          18
#define X_ENABLE_PIN       -1
#define X_STOP_PIN         17

#define Y_STEP_PIN         10
#define Y_DIR_PIN           7
#define Y_ENABLE_PIN       -1
#define Y_STOP_PIN          8

#define Z_STEP_PIN         13
#define Z_DIR_PIN           3
#define Z_ENABLE_PIN        2
#define Z_STOP_PIN          4

#define E0_STEP_PIN         11
#define E0_DIR_PIN          12
#define E0_ENABLE_PIN       -1

#define SDPOWER          -1
#define SDSS          -1
#define LED_PIN            -1
#define FAN_PIN             5
#define PS_ON_PIN          -1
#define KILL_PIN           -1

#define HEATER_0_PIN        6
#define HEATER_1_PIN        -1
#define HEATER_2_PIN        -1
#define TEMP_0_PIN          0    // MUST USE ANALOG INPUT NUMBERING NOT DIGITAL OUTPUT NUMBERING!!!!!!!!!
#define TEMP_1_PIN          -1
#define TEMP_2_PIN          -1
#define HEATER_BED_PIN      -1
#define TEMP_BED_PIN        -1

#endif

/****************************************************************************************
* Gen6 pin assignment
*
****************************************************************************************/
#if MOTHERBOARD == 5 || MOTHERBOARD == 51
#define KNOWN_BOARD 1

#ifndef __AVR_ATmega644P__
#ifndef __AVR_ATmega1284P__
#error Oops!  Make sure you have 'Sanguino' selected from the 'Tools -> Boards' menu.
#endif
#endif

//x axis pins
    #define X_STEP_PIN      15
    #define X_DIR_PIN       18
    #define X_ENABLE_PIN    19
    #define X_STOP_PIN      20

    //y axis pins
    #define Y_STEP_PIN      23
    #define Y_DIR_PIN       22
    #define Y_ENABLE_PIN    24
    #define Y_STOP_PIN      25

    //z axis pins
    #define Z_STEP_PIN      27
    #define Z_DIR_PIN       28
    #define Z_ENABLE_PIN    29
    #define Z_STOP_PIN      30

    //extruder pins
    #define E0_STEP_PIN      4    //Edited @ EJE Electronics 20100715
    #define E0_DIR_PIN       2    //Edited @ EJE Electronics 20100715
    #define E0_ENABLE_PIN    3    //Added @ EJE Electronics 20100715
    #define TEMP_0_PIN      5     //changed @ rkoeppl 20110410
    #define TEMP_1_PIN      -1    //changed @ rkoeppl 20110410


    #define TEMP_2_PIN      -1    //changed @ rkoeppl 20110410
    #define HEATER_0_PIN    14    //changed @ rkoeppl 20110410
    #define HEATER_1_PIN    -1
    #define HEATER_2_PIN    -1
    #if MOTHERBOARD == 5
    #define HEATER_BED_PIN  -1    //changed @ rkoeppl 20110410
    #define TEMP_BED_PIN    -1    //changed @ rkoeppl 20110410
    #else
    #define HEATER_BED_PIN   1    //changed @ rkoeppl 20110410
    #define TEMP_BED_PIN     0    //changed @ rkoeppl 20110410
    #endif
    #define SDPOWER          -1
    #define SDSS          17
    #define LED_PIN         -1    //changed @ rkoeppl 20110410
    #define FAN_PIN         -1    //changed @ rkoeppl 20110410
    #define PS_ON_PIN       -1    //changed @ rkoeppl 20110410
    #define KILL_PIN        -1    //changed @ drakelive 20120830
    //our pin for debugging.

    #define DEBUG_PIN        0

    //our RS485 pins
    #define TX_ENABLE_PIN 12
    #define RX_ENABLE_PIN 13


#endif

/****************************************************************************************
* Sanguinololu pin assignment
*
****************************************************************************************/
#if MOTHERBOARD == 63 || MOTHERBOARD == 66
#define MELZI
#endif
#if MOTHERBOARD == 62 || MOTHERBOARD == 63  || MOTHERBOARD == 66
#undef MOTHERBOARD
#define MOTHERBOARD 6
#define SANGUINOLOLU_V_1_2
#endif
#if MOTHERBOARD == 6
#define KNOWN_BOARD 1
#ifndef __AVR_ATmega644P__
#ifndef __AVR_ATmega1284P__
#error Oops!  Make sure you have 'Sanguino' selected from the 'Tools -> Boards' menu.
#endif
#endif

#define X_STEP_PIN         22
#define X_DIR_PIN          23
#define X_STOP_PIN         0

#define Y_STEP_PIN         20
#define Y_DIR_PIN          21
#define Y_STOP_PIN         1

#define Z_STEP_PIN         18
#define Z_DIR_PIN          19
#define Z_STOP_PIN         2

#define E0_STEP_PIN        15
#define E0_DIR_PIN         12

#define LED_PIN            25

#define FAN_PIN            4

#ifdef MELZI
#define LED_PIN            25 /* On some broken versions of the Sanguino libraries the pin definitions are wrong, which then needs LED_PIN as pin 28. But you better upgrade your Sanguino libraries! See #368. */
#define FAN_PIN            4
#endif

#define PS_ON_PIN          -1
#define KILL_PIN           -1

#define HEATER_0_PIN       13 // (extruder)
#define HEATER_1_PIN       -1
#define HEATER_2_PIN       -1

#ifdef SANGUINOLOLU_V_1_2

#define HEATER_BED_PIN     14 // (bed)
#define X_ENABLE_PIN       26
#define Y_ENABLE_PIN       26
#define Z_ENABLE_PIN       27
#define E0_ENABLE_PIN      26

#else

#define HEATER_BED_PIN       14  // (bed)
#define X_ENABLE_PIN       -1
#define Y_ENABLE_PIN       -1
#define Z_ENABLE_PIN       -1
#define E0_ENABLE_PIN       -1

#endif

#define TEMP_0_PIN          2   // MUST USE ANALOG INPUT NUMBERING NOT DIGITAL OUTPUT NUMBERING!!!!!!!!! (pin 33 extruder)
#define TEMP_1_PIN         -1
#define TEMP_2_PIN         -1
#define TEMP_BED_PIN        3   // MUST USE ANALOG INPUT NUMBERING NOT DIGITAL OUTPUT NUMBERING!!!!!!!!! (pin 34 bed)
#define SDPOWER            -1
#define SDSS               3

/* On some broken versions of the Sanguino libraries the pin definitions are wrong, which then needs SDSS as pin 24. But you better upgrade your Sanguino libraries! See #368. */
//#define SDSS               3

#endif

/****************************************************************************************
* Gen3+ pin assignment
*
****************************************************************************************/
#if MOTHERBOARD == 9
#define MOTHERBOARD 6   /*TODO: Figure out, Why is this done?*/
#define KNOWN_BOARD 1
#ifndef __AVR_ATmega644P__
#ifndef __AVR_ATmega1284P__
#error Oops!  Make sure you have 'Sanguino' selected from the 'Tools -> Boards' menu.
#endif
#endif

#define X_STEP_PIN         15
#define X_DIR_PIN          18
#define X_STOP_PIN         20

#define Y_STEP_PIN         23
#define Y_DIR_PIN          22
#define Y_STOP_PIN         25

#define Z_STEP_PIN         27
#define Z_DIR_PIN          28
#define Z_STOP_PIN         30

#define E_STEP_PIN         17
#define E_DIR_PIN          21

#define LED_PIN            -1

#define FAN_PIN            -1

#define PS_ON_PIN         14
#define KILL_PIN           -1

#define HEATER_0_PIN       12 // (extruder)

#define HEATER_1_PIN       16 // (bed)
#define X_ENABLE_PIN       19
#define Y_ENABLE_PIN       24
#define Z_ENABLE_PIN       29
#define E_ENABLE_PIN       13

#define TEMP_0_PIN          0   // MUST USE ANALOG INPUT NUMBERING NOT DIGITAL OUTPUT NUMBERING!!!!!!!!! (pin 33 extruder)
#define TEMP_1_PIN          5   // MUST USE ANALOG INPUT NUMBERING NOT DIGITAL OUTPUT NUMBERING!!!!!!!!! (pin 34 bed)
#define TEMP_2_PIN         -1
#define SDPOWER            -1
#define SDSS               4
#define HEATER_2_PIN       -1

#endif

#ifndef KNOWN_BOARD
#error Unknown MOTHERBOARD value in configuration.h
#endif

//List of pins which to ignore when asked to change by gcode, 0 and 1 are RX and TX, do not mess with those!
#define _E0_PINS E0_STEP_PIN, E0_DIR_PIN, E0_ENABLE_PIN, HEATER_0_PIN,
#if EXTRUDERS > 1
  #define _E1_PINS E1_STEP_PIN, E1_DIR_PIN, E1_ENABLE_PIN, HEATER_1_PIN,
#else
  #define _E1_PINS
#endif
#if EXTRUDERS > 2
  #define _E2_PINS E2_STEP_PIN, E2_DIR_PIN, E2_ENABLE_PIN, HEATER_2_PIN,
#else
  #define _E2_PINS
#endif

#ifdef X_STOP_PIN
  #if X_HOME_DIR < 0
    #define X_MIN_PIN X_STOP_PIN
    #define X_MAX_PIN -1
  #else
    #define X_MIN_PIN -1
    #define X_MAX_PIN X_STOP_PIN
  #endif
#endif

#ifdef Y_STOP_PIN
  #if Y_HOME_DIR < 0
    #define Y_MIN_PIN Y_STOP_PIN
    #define Y_MAX_PIN -1
  #else
    #define Y_MIN_PIN -1
    #define Y_MAX_PIN Y_STOP_PIN
  #endif
#endif

#ifdef Z_STOP_PIN
  #if Z_HOME_DIR < 0
    #define Z_MIN_PIN Z_STOP_PIN
    #define Z_MAX_PIN -1
  #else
    #define Z_MIN_PIN -1
    #define Z_MAX_PIN Z_STOP_PIN
  #endif
#endif

#ifdef DISABLE_MAX_ENDSTOPS
#define X_MAX_PIN          -1
#define Y_MAX_PIN          -1
#define Z_MAX_PIN          -1
#endif

#ifdef DISABLE_MIN_ENDSTOPS
#define X_MIN_PIN          -1
#define Y_MIN_PIN          -1
#define Z_MIN_PIN          -1
#endif

#define SENSITIVE_PINS {0, 1, X_STEP_PIN, X_DIR_PIN, X_ENABLE_PIN, X_MIN_PIN, X_MAX_PIN, Y_STEP_PIN, Y_DIR_PIN, Y_ENABLE_PIN, Y_MIN_PIN, Y_MAX_PIN, Z_STEP_PIN, Z_DIR_PIN, Z_ENABLE_PIN, Z_MIN_PIN, Z_MAX_PIN, PS_ON_PIN, \
                        HEATER_BED_PIN, FAN_PIN,                  \
                        _E0_PINS _E1_PINS _E2_PINS             \
                        analogInputToDigitalPin(TEMP_0_PIN), analogInputToDigitalPin(TEMP_1_PIN), analogInputToDigitalPin(TEMP_2_PIN), analogInputToDigitalPin(TEMP_BED_PIN) }
#endif

