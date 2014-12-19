#ifndef CONFIGURATION_H
#define CONFIGURATION_H


/* This printer; MD3DDelta703015V3

 MD3DDELTA 7030V3 WITH 3DGAGETS ELECTRONICS
 HAL-O ENDSTOPS
 HEATBED
 AUTOLEVEL
Contact : md3ddelta@gmail.com
 
MD3DDElta manuel Calibration .
Not for Dummy's, You know what you do in the software .

You have setup the software for your printer like : motherboard and lcd screen .completely.

Also the hardware installed complete and checked.

Think logic , and make it so perfect as possible, the hardware. 
0.01 mm difference is most ok but more as 0.05 will not do .
delta IS delta, so make it perfect and you get best prints like me .
It can take some time , but this is most only one's time for the printer.

Read with atention in the software what you have to do .

 1.0 = This is mostly one's to do , till you change the delta frame !
 Calibration your printer hardware =,
 1.look that all legs and towers are equal,and use a big carpenter's square about 40cm.
 2.use a flat bed (mirror or glass) no heatbed only =not straight enough.
 3.set - #define MANUAL_Z_HOME_POS = In CONFIGURATION_H
 4.set the end stops right ,best is hal-o stops .at every corner ,make more measurements to be sure .
 5.set the center again 3. , and set 4. again .if it's equal all 4 pionts ,
   your printer is right to move on for the next calibraation.1.1.2
 6. if You see that there is difference every time you measurement ,
   one of the 4 points or more are not touching or digging in the surface ,
   your printer has a parabool or conclave,surface .
   go to ;define DELTA_SMOOTH_ROD_OFFSET in cofiguration.h and make it right. after that start 1.0.5. again.

 1.1
 Calibration : In CONFIGURATION_H
 by every change and repair hotend and heatbed / PRINTBED / Printsurface.
 Change only the settings what you changed, offcourse.
 1 :#define MANUAL_Z_HOME_POS 266.55 = set hight nozzle and printbed.
 2 :#define PIDTEMP choose your hotend and Pidtemp = sets the heater pid of nozzle.
 3 :#define PIDTEMPBED = sets the heatbed pid, this is normaly one's time nessesary.
   Till you change the thermistor or heatbed and the glass or mirror,find out.
 4 :#define DEFAULT_AXIS_STEPS_PER_UNIT   {100, 100, 100, 166} = set the extruder filament mm.
 5 :#define Z_PROBE_OFFSET {0, 15, -7.7, 0} = set hight difference between probe(down) and nozzle.
 6.  if after testing print (without autolevel,this is easy turned off in the gcode ,erase G29 in the beginning)
  one of the 4 points or more are not touching or digging in the surface ,
  your printer has a parabool or conclave,surface .
   go to ;define DELTA_SMOOTH_ROD_OFFSET in cofiguration.h and make it right. after that start 1.0.5. again.
 7 :Now you can print, make test-prints before you start with important prints , 
   to look if the settings are rigth,high enough and straight.10 mm must be 10mm .
 8 If NOT the prints are 10mmx10mm then goto : #define DELTA_DIAGONAL_ROD to make it rigth.
   
   TIP, Use more loops for looking the bed is level, And the filament is extruding right, use brim to prevent losing print in the corners,4mm 1 Layer 0.20mm will do.
   This is what i do at EVERY start of printing ,if it is not ok i can abort the print, and save a lot time and material.
   
!!!!!!!  when your printer was moved or you bumping against it , your printer will mostly not right any more!:).
   Make an separate surface for your printer.use shock absorbers ,(print them ).
   Keep the top light of your printer .less weight is less shaking/vribration.
   The tall and thin prints will be better then.
   learn to handle the slicer-software and GCODE, figgerout what your specs of the printer is .

 When you did it allright you do not need autolevel (G29) . believe me,
 I used in the beginning always autolevel till i wrote this manuell ( after 3 months );),
 and now i use it only when i'm playing with new idea's and models.
 to look if there are differince in the results , and i use it when i put another mirror on the heatbed ,
 ( there is always an mininum an difference in the mirrors .)about 0.01 to 0.10 mm
 this mostly when i produce in mass of prints with pla, but most times without autolevel is it the best result.

 One TIP ; PLA , I print on an mirror Ikea 20x20cm with on it  ,
 For the windows ,Static film for decoration and privacy,to get in every shop for a vew bugs .
 This works fine , get the one with rough structure not smooth or stripes,Think this, under the microscoop you see more surface like mini mountains ,
 that is why PLA sticks so well on the film ,mostly is it the thick one.The contact surface of the print gets the same sructure as the film!
 This looks nice and clean ,you can also use that side as an anti-slip connextion -side , Find out and you will see .
 Do not use the heatbed on .Offcource . 
 The prints are easy to remove by peeling off the film ,and quick start again printing .
 This is so easy in use and often re-use same piece ,and it is receycelable, cheap and not toxic.
 Try it and you will love it .

 For the dummy's and not thinkers,,when the film is on ,then is this the printsurface,for calibration 1.0.3.

 ABS : I print on an mirror Ikea 20x20 with capton-tape at the mirrorside.(Backside )
 This prevents to break the mirror .heat it not to fast, first 50degrees then up to 90-110.
 Works fine for me, try your own idea's and see what happen .
 The ikea mirror cost 1 Euro a piece and brakes ones in the 6 month , after 50 times use about.by ABS.
 this is for large prints ,offcourse when you handle it with care.
 
  Update---- ABS ... i print now on Robax-Glass ,this like borcilicumglass ,much cheaper and stronger.
 It has an good surface, abs and co sticks well when glass is warm , and pop off when cooldown about 32’celsius.
 this glass is used in the heaters and woodburners ,thats very strong and coolsdown rapide.
 look at Ebay.DE ..robax von Schott AG , they are the best and cheapest, al formats to get.
 For warming up i clean the glass with screan cleaning from Grundig,Normal used for lcd and plasma/tv screans.
*/
/*----------------------------------------------------------------------------------------------------------
 If you handle the manuel right it will be much easeyer to work with your machine .
 after a while you have to check ( Like every Machine ), ALL the screws and nuts .they will lose in time .
 use Locktide that helps ,don't forget the motors too.
 Then use this manuel again and on you go, printing.
*/
/*-----------------------------------------------------------------------------------------------------------
 EVERY PRINTER IS DIFFERENT , SAME BUILD SAME SOFTWARE,BUT NOT SAME SLICE.SPECS...ect.!
 Enjoy and be patient,3d printing is working on microns,not meters.
 You will learn your machine like driving a car ,mostly in the beginning bumping crashing, and after crying ..
 Enjoying.



 This printer;

 MD3DDELTA 10030V1 WITH 3DGAGETS ELECTRONICS
 HAL-O ENDSTOPS
 HEATBED
 Autolevel
 
*/
 
/*
   Reprap firmware based on Sprinter and grbl.
 Copyright (C) 2011 Camiel Gubbels / Erik van der Zalm
 
 This program is free software: you can redistribute it and/or modify
 it under the terms of the GNU General Public License as published by
 the Free Software Foundation, either version 3 of the License, or
 (at your option) any later version.
 
 This program is distributed in the hope that it will be useful,
 but WITHOUT ANY WARRANTY; without even the implied warranty of
 MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 GNU General Public License for more details.
 
 You should have received a copy of the GNU General Public License
 along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

//Calibration - http://minow.blogspot.co.uk/ ==

//look to this also when you have qeustions ,put them in the forums and you get mostly help.
//
// This configuration file contains the basic settings.
// Advice for Calibration etc.
// http://forums.reprap.org/read.php?178,197277
// http://reprap.org/wiki/Rostock
// Calibration - http://minow.blogspot.co.uk/
// http://www.reprap.org/wiki/Kossel

// This configurtion file contains the basic settings.
// Advanced settings can be found in Configuration_adv.h
// BASIC SETTINGS: select your board type, temperature sensor type, axis scaling, and endstop configuration

// User-specified version info of this build to display in [Pronterface, etc] terminal window during
// startup. Implementation of an idea by Prof Braino to inform user that any changes made to this
// build by the user have been successfully uploaded into firmware.
#define STRING_VERSION_CONFIG_H __DATE__ " " __TIME__ // build date and time
#define STRING_CONFIG_H_AUTHOR "(MD3DDELTA 703015V3)" // Who made the changes.

// SERIAL_PORT selects which serial port should be used for communication with the host.
// This allows the connection of wireless adapters (for instance) to non-default port pins.
// Serial port 0 is still used by the Arduino bootloader regardless of this setting.
#define SERIAL_PORT 0

// This determines the communication speed of the printer
#define BAUDRATE 250000
//#define BAUDRATE 115200

//// The following define selects which electronics board you have. Please choose the one that matches your setup
// 10 = Gen7 custom (Alfons3 Version) "https://github.com/Alfons3/Generation_7_Electronics"
// 11 = Gen7 v1.1, v1.2 = 11
// 12 = Gen7 v1.3
// 13 = Gen7 v1.4
// 3  = MEGA/RAMPS up to 1.2 = 3
// 33 = RAMPS 1.3 / 1.4 (Power outputs: Extruder, Fan, Bed)
// 34 = RAMPS 1.3 / 1.4 (Power outputs: Extruder0, Extruder1, Bed)
// 35 = RAMPS 1.3 / 1.4 (Power outputs: Extruder, Fan, Fan)
// 4  = Duemilanove w/ ATMega328P pin assignment
// 5  = Gen6
// 51 = Gen6 deluxe
// 6  = Sanguinololu < 1.2
// 62 = Sanguinololu 1.2 and above
// 63 = Melzi
// 64 = STB V1.1
// 65 = Azteeg X1
// 66 = Melzi with ATmega1284 (MaKr3d version)
// 7  = Ultimaker
// 71 = Ultimaker (Older electronics. Pre 1.5.4. This is rare)
// 77 = 3Drag Controller
// 8  = Teensylu
// 80 = Rumba
// 81 = Printrboard (AT90USB1286)
// 82 = Brainwave (AT90USB646)
// 9  = Gen3+
// 70 = Megatronics
// 701= Megatronics v2.0
// 702= Minitronics v1.0
// 90 = Alpha OMCA board
// 91 = Final OMCA board
// 301 = Rambo
// 21 = Elefu Ra Board (v3)

#ifndef MOTHERBOARD
#define MOTHERBOARD 33
#endif

// Define this to set a custom name for your generic Mendel,
// #define CUSTOM_MENDEL_NAME "This Mendel"

// This defines the number of extruders
#define EXTRUDERS 1

//// The following define selects which power supply you have. Please choose the one that matches your setup
// 1 = ATX
// 2 = X-Box 360 203Watts (the blue wire connected to PS_ON and the red wire to VCC)

#define POWER_SUPPLY 1


//===========================================================================
//============================== Delta Settings =============================
//===========================================================================
// Enable DELTA kinematics
#define DELTA

// Make delta curves from many straight lines (linear interpolation).
// This is a trade-off between visible corners (not enough segments)
// and processor overload (too many expensive sqrt calls).
#define DELTA_SEGMENTS_PER_SECOND 200

// Center-to-center distance of the holes in the diagonal push rods.
#define DELTA_DIAGONAL_ROD 290.5 // mm was 214.0 can 0.5 more or less be .change this ,if the dimenses in mm are not right.
                                 // Example 294.0 length, brings in movement X 50mm-software, in hardware printsurface 48 mm.
                                 // LOWER this number brings MORE mm on printsurface,start with 0,5 and lower it ,print an cube 10x10x10mm .
                                 // or an small plate like 50x10x2mm to controll your maesurate.
                                 // Do this AFTER you calibrate the printer complete ! Or you wil never get the printer right.

// Horizontal offset from middle of printer to smooth rod center.
// If your print head is too high or low in the middle of the print surface, adjust DELTA_SMOOTH_ROD_OFFSET by half mm and try again.
#define DELTA_SMOOTH_ROD_OFFSET 185.64//187.72////187//187.65 //187.95//before hal-o was 186.5 // mm was 145.0 kan 0.5 meer zijn of minder .
                                      // mm maesurate, when made taller And the side's.
                                      // LOWERING this number makes the hot-end RAISE in the middle
                                      // use SAME piece off paper for maesurate the points.
                                      //
                                      // ALLWAYS** homing G28 before measure, THEN YOU WALK FROM CENTER TO X, Y, Z, 
                                      // you see ONLY THEN when's to high or to low (parabool or conclave).
                                      //
                                      // Center = G1 X0 Y0 Z2 F5000 
                                      // X =  G1 X-80 Y-45 Z2 F5000 , About 10cm from aluminium 15x15.
                                      // Y =  G1 X80 Y-45 Z2 F5000 ,
                                      // Z =  G1 X0 Y80 Z2 F5000 .
                                      // Next step:
                                      // 1.0.3.= set - #define MANUAL_Z_HOME_POS = In CONFIGURATION_H    ---Again--then it is perfect.


// Horizontal offset of the universal joints on the end effector.
#define DELTA_EFFECTOR_OFFSET 19.9 // mm Stays the same .just controll 

// Horizontal offset of the universal joints on the carriages.
#define DELTA_CARRIAGE_OFFSET 26.6 // mm was 19.5 werkelijke grote varieerd door krom plastic gemiddelde is 26.0 

// Effective horizontal distance bridged by diagonal push rods.
#define DELTA_RADIUS (DELTA_SMOOTH_ROD_OFFSET-DELTA_EFFECTOR_OFFSET-DELTA_CARRIAGE_OFFSET)

// Effective X/Y positions of the three vertical towers.
#define SIN_60 0.8660254037844386
#define COS_60 0.5
#define DELTA_TOWER1_X -SIN_60*DELTA_RADIUS // front left tower = X-Axis
#define DELTA_TOWER1_Y -COS_60*DELTA_RADIUS
#define DELTA_TOWER2_X SIN_60*DELTA_RADIUS // front right tower = Y-Axis
#define DELTA_TOWER2_Y -COS_60*DELTA_RADIUS
#define DELTA_TOWER3_X 0.0 // back middle tower= Z-Axis
#define DELTA_TOWER3_Y DELTA_RADIUS

// Diagonal rod squared
#define DELTA_DIAGONAL_ROD_2 pow(DELTA_DIAGONAL_ROD,2)

//===========================================================================
//=============================Thermal Settings  ============================
//===========================================================================
//
//--NORMAL IS 4.7kohm PULLUP!-- 1kohm pullup can be used on hotend sensor, using correct resistor and table
//
//// Temperature sensor settings:
// -2 is thermocouple with MAX6675 (only for sensor 0)
// -1 is thermocouple with AD595
// 0 is not used
// 1 is 100k thermistor - best choice for EPCOS 100k (4.7k pullup)
// 2 is 200k thermistor - ATC Semitec 204GT-2 (4.7k pullup)
// 3 is mendel-parts thermistor (4.7k pullup)
// 4 is 10k thermistor !! do not use it for a hotend. It gives bad resolution at high temp. !!
// 5 is 100K thermistor - ATC Semitec 104GT-2 (Used in ParCan) (4.7k pullup)
// 6 is 100k EPCOS - Not as accurate as table 1 (created using a fluke thermocouple) (4.7k pullup)
// 7 is 100k Honeywell thermistor 135-104LAG-J01 (4.7k pullup)
// 71 is 100k Honeywell thermistor 135-104LAF-J01 (4.7k pullup)
// 8 is 100k 0603 SMD Vishay NTCS0603E3104FXT (4.7k pullup)
// 9 is 100k GE Sensing AL03006-58.2K-97-G1 (4.7k pullup)
// 10 is 100k RS thermistor 198-961 (4.7k pullup)
// 60 is 100k Maker's Tool Works Kapton Bed Thermister
//
//    1k ohm pullup tables - This is not normal, you would have to have changed out your 4.7k for 1k
//                          (but gives greater accuracy and more stable PID)
// 51 is 100k thermistor - EPCOS (1k pullup)
// 52 is 200k thermistor - ATC Semitec 204GT-2 (1k pullup)
// 55 is 100k thermistor - ATC Semitec 104GT-2 (Used in ParCan) (1k pullup)

#define TEMP_SENSOR_0 1
#define TEMP_SENSOR_1 0
#define TEMP_SENSOR_2 0
#define TEMP_SENSOR_BED 1

// This makes temp sensor 1 a redundant sensor for sensor 0. If the temperatures difference between these sensors is to high the print will be aborted.
//#define TEMP_SENSOR_1_AS_REDUNDANT
#define MAX_REDUNDANT_TEMP_SENSOR_DIFF 5 // was 10

// Actual temperature must be close to target for this long before M109 returns success = EXTRUDER MOTOR ENABLE
#define TEMP_RESIDENCY_TIME 10  // (seconds)
#define TEMP_HYSTERESIS 3      // 3 default(degC) range of +/- temperatures considered "close" to the target one
#define TEMP_WINDOW     1       // (degC) Window around target to start the residency timer x degC early.

// The minimal temperature defines the temperature below which the heater will not be enabled It is used
// to check that the wiring to the thermistor is not broken.
// Otherwise this would lead to the heater being powered on all the time.
#define HEATER_0_MINTEMP 5
#define HEATER_1_MINTEMP 5
#define HEATER_2_MINTEMP 5
#define BED_MINTEMP 5

// When temperature exceeds max temp, your heater will be switched off.
// This feature exists to protect your hotend from overheating accidentally, but *NOT* from thermistor short/failure!
// You should use MINTEMP for thermistor short/failure protection.
#define HEATER_0_MAXTEMP 275 //  PTFE -tube toxided fumes at 300 degC.
#define HEATER_1_MAXTEMP 275
#define HEATER_2_MAXTEMP 275
#define BED_MAXTEMP 110

// If your bed has low resistance e.g. .6 ohm and throws the fuse you can duty cycle it to reduce the
// average current. The value should be an integer and the heat bed will be turned on for 1 interval of
// HEATER_BED_DUTY_CYCLE_DIVIDER intervals.
//#define HEATER_BED_DUTY_CYCLE_DIVIDER 4

// PID settings:
// Comment the following line to disable PID and enable bang-bang.
#define PIDTEMP
#define BANG_MAX 255 // limits current to nozzle while in bang-bang mode; 255=full current
#define PID_MAX 255 // limits current to nozzle while PID is active (see PID_FUNCTIONAL_RANGE below); 255=full current
#ifdef PIDTEMP
  //#define PID_DEBUG // Sends debug data to the serial port.
  //#define PID_OPENLOOP 1 // Puts PID in open loop. M104/M140 sets the output power from 0 to PID_MAX
  #define PID_FUNCTIONAL_RANGE 5//5 was 10 If the temperature difference between the target temperature and the actual temperature
                                  // is more then PID_FUNCTIONAL_RANGE then the PID will be shut off and the heater will be set to min/max.
  #define PID_INTEGRAL_DRIVE_MAX 255  //limit for the integral term
  #define K1 0.95 //smoothing factor within the PID
  #define PID_dT ((16.0 * 8.0)/(F_CPU / 64.0 / 256.0)) //sampling period of the temperature routine
  
//See how you do that on .: http://reprap.org/wiki/PID_Tuning .
// If you are using a preconfigured hotend then you can use one of the value sets by uncommenting it
//AUTOTUNE with : M303 S175 C8 = 8 and copy in here by your Hotend and then he's calibrated.use pronterface.
// to read what settings are in the printer ,on Lcd screen ;controll;temp;scroll down 8 lines.
// On computer ; disconnect from pronterface and reconnect,pid is at the ending list.

//Aluhotend V4-1.75mm 0,3mm 3Dindustries-au.Same as J-Haed, with Airstripper MK7 number 2
    #define  DEFAULT_Kp 14.93 //13.74 // test 210 ok put the degres you most use ..//16.69 // 190 test ok 
    #define  DEFAULT_Ki  0.77 //0.71 //0.78
    #define  DEFAULT_Kd 72.39 //66.42  //88.89
 //bias: 78 d: 78 min: 215.68 max: 223.66
 //Ku: 24.88 Tu: 38.80
 //Clasic PID
// Kp: 14.93
// Ki: 0.77
// Kd: 72.39
//PID Autotune finished! Put the Kp, Ki and Kd constants into Configuration.h

 
//Aluhotend V4-1.75mm 0,3mm 3Dindustries-au.Same as J-Haed, with Airstripper MK7 number 2
//    #define  DEFAULT_Kp 15.91 // 190 test do not, temp rases to high an burns the filament in the nozzle (pla)
//    #define  DEFAULT_Ki 0.65  // 190 test do if 175 is aborted,this is ramps fabric dependence.Like GADGETS3D does.
//    #define  DEFAULT_Kd 96.68 
    //bias: 80 d: 80 min: 186.41 max: 194.09 Ku: 26.51 Tu: 48.63 30-01-2014
    // Clasic PID
    //Kp: 15.91
    // Ki: 0.65
    // Kd: 96.68
    
// FIND YOUR OWN: M303 S175 C8 = 175 degrees test.in printerface and copy it here ,
// do it with every new calibration and HOTENDS changing.
// Ultimaker this was orginal active 
//    #define  DEFAULT_Kp 22.2
//    #define  DEFAULT_Ki 1.08
//    #define  DEFAULT_Kd 114

// Makergear
//    #define  DEFAULT_Kp 7.0
//    #define  DEFAULT_Ki 0.1
//    #define  DEFAULT_Kd 12

// Mendel Parts V9 on 12V
//    #define  DEFAULT_Kp 63.0
//    #define  DEFAULT_Ki 2.25
//    #define  DEFAULT_Kd 440
#endif // PIDTEMP

// Bed Temperature Control
// Select PID or bang-bang with PIDTEMPBED. If bang-bang, BED_LIMIT_SWITCHING will enable hysteresis
//
// Uncomment this to enable PID on the bed. It uses the same frequency PWM as the extruder.
// If your PID_dT above is the default, and correct for your hardware/configuration, that means 7.689Hz,
// which is fine for driving a square wave into a resistive load and does not significantly impact you FET heating.
// This also works fine on a Fotek SSR-10DA Solid State Relay into a 250W heater.
// If your configuration is significantly different than this and you don't understand the issues involved, you probably
// shouldn't use bed PID until someone else verifies your hardware works.
// If this is enabled, find your own PID constants below.
#define PIDTEMPBED
//
//#define BED_LIMIT_SWITCHING

// This sets the max power delivered to the bed, and replaces the HEATER_BED_DUTY_CYCLE_DIVIDER option.
// all forms of bed control obey this (PID, bang-bang, bang-bang with hysteresis)
// setting this to anything other than 255 enables a form of PWM to the bed just like HEATER_BED_DUTY_CYCLE_DIVIDER did,
// so you shouldn't use it unless you are OK with PWM on your bed.  (see the comment on enabling PIDTEMPBED)

// See how you do that on .: http://reprap.org/wiki/PID_Tuning .
// FIND YOUR OWN: " M303 E-1 C8 S90 " to run autotune on the bed at 90 degreesC for 8 cycles.put in by pronterface
// and save bed settings with: M304 Pxxxx.xx Ixxx.xx Dxxxx.xx
// to read what settings are in the printer send : M304

#define MAX_BED_POWER 255 // limits duty cycle to bed; 255=full current

#ifdef PIDTEMPBED
//120v 250W silicone heater into 4mm borosilicate (MendelMax 1.5+)
//from FOPDT model - kp=.39 Tp=405 Tdead=66, Tc set to 79.2, aggressive factor of .15 (vs .1, 1, 10)
//    #define  DEFAULT_bedKp 10.00
//    #define  DEFAULT_bedKi .023
//    #define  DEFAULT_bedKd 305.4

//120v 250W silicone heater into 4mm borosilicate (MendelMax 1.5+)
//from pidautotune
//    #define  DEFAULT_bedKp 97.1
//    #define  DEFAULT_bedKi 1.41
//    #define  DEFAULT_bedKd 1675.16

//12 volt red Heatbed with Blue leds into 4mm Robax glass.
   #define  DEFAULT_bedKp 351.16
   #define  DEFAULT_bedKi 29.60
   #define  DEFAULT_bedKd 1041.37
// FIND YOUR OWN: " M303 E-1 C8 S90 " to run autotune on the bed at 90 degreesC for 8 cycles.put in by pronterface
// and save bed settings with: M304 Pxxxx.xx Ixxx.xx Dxxxx.xx
// to read what settings are in the printer send : M304
#endif // PIDTEMPBED



//this prevents dangerous Extruder moves, i.e. if the temperature is under the limit
//can be software-disabled for whatever purposes by
#define PREVENT_DANGEROUS_EXTRUDE
//if PREVENT_DANGEROUS_EXTRUDE is on, you can still disable (uncomment) very long bits of extrusion separately.
#define PREVENT_LENGTHY_EXTRUDE

#define EXTRUDE_MINTEMP 160 // was 170. OFF = 0 (For  dry testing,Beware !! USE NO Filament or your PRINTER is death!!!) 
                            // 160 For high resolution and very very, slowly, extrucion.(pla)
                            
#define EXTRUDE_MAXLENGTH (X_MAX_LENGTH+Y_MAX_LENGTH) //prevent extrusion of very large distances.

//===========================================================================
//=============================Mechanical Settings===========================
//===========================================================================

// Uncomment the following line to enable CoreXY kinematics
// #define COREXY

// coarse Endstop Settings
#define ENDSTOPPULLUPS // Comment this out (using // at the start of the line) to disable the endstop pullup resistors
                       
#ifdef ENDSTOPPULLUPS
  // fine Endstop settings: Individual Pullups. will be ignored if ENDSTOPPULLUPS is defined
  #define ENDSTOPPULLUP_XMAX
  #define ENDSTOPPULLUP_YMAX
  #define ENDSTOPPULLUP_ZMAX
  #define ENDSTOPPULLUP_XMIN
  #define ENDSTOPPULLUP_YMIN
  #define ENDSTOPPULLUP_ZMIN
#endif

// The pullups are needed if you directly connect a mechanical endswitch between the signal and ground pins.(false)=mechanical endstop.
const bool X_MIN_ENDSTOP_INVERTING = true; //false; // set to true to invert the logic of the endstop.was false, hal-o endstops placed
const bool Y_MIN_ENDSTOP_INVERTING = true; //false; // set to true to invert the logic of the endstop.do this before power on and homing .
const bool Z_MIN_ENDSTOP_INVERTING = true; //false; // set to true to invert the logic of the endstop.Or you kill your printer!!!!
const bool X_MAX_ENDSTOP_INVERTING = true; //false; // set to true to invert the logic of the endstop.
const bool Y_MAX_ENDSTOP_INVERTING = true; //false; // set to true to invert the logic of the endstop.
const bool Z_MAX_ENDSTOP_INVERTING = true; //false; // set to true to invert the logic of the endstop.
//#define DISABLE_MAX_ENDSTOPS
//#define DISABLE_MIN_ENDSTOPS

// Disable max endstops for compatibility with endstop checking routine
#if defined(COREXY) && !defined(DISABLE_MAX_ENDSTOPS)
  #define DISABLE_MAX_ENDSTOPS
#endif

// For Inverting Stepper Enable Pins (Active Low) use 0, Non Inverting (Active High) use 1
#define X_ENABLE_ON 0
#define Y_ENABLE_ON 0
#define Z_ENABLE_ON 0
#define E_ENABLE_ON 0 // For all extruders

// Disables axis when it's not being used.
#define DISABLE_X false
#define DISABLE_Y false
#define DISABLE_Z false
#define DISABLE_E false // For all extruders

#define INVERT_X_DIR false    // for Mendel set to false, for Orca set to true
#define INVERT_Y_DIR false    // for Mendel set to true, for Orca set to false
#define INVERT_Z_DIR false    // for Mendel set to false, for Orca set to true
#define INVERT_E0_DIR false    // for direct drive extruder v9 set to true, for geared extruder set to false TO TURN LEFT OR RIGHT. 
#define INVERT_E1_DIR false   // for direct drive extruder v9 set to true, for geared extruder set to false
#define INVERT_E2_DIR false   // for direct drive extruder v9 set to true, for geared extruder set to false

// ENDSTOP SETTINGS:
// Sets direction of endstops when homing; 1=MAX, -1=MIN
#define X_HOME_DIR 1
#define Y_HOME_DIR 1
#define Z_HOME_DIR 1

#define min_software_endstops true // If true, axis won't move to coordinates less than the defined lengths below  *_min_pos.
#define max_software_endstops true  // If true, axis won't move to coordinates greater than the defined lengths below  *_max_pos.
// Travel limits after homing
#define X_MAX_POS 125 //100 // coordinates 90 to -90 = 180 mm printbed this default from kosselmini.
#define X_MIN_POS -125 //100
#define Y_MAX_POS 125 //100
#define Y_MIN_POS-125 //-100
#define Z_MAX_POS MANUAL_Z_HOME_POS
#define Z_MIN_POS 0

#define X_MAX_LENGTH (X_MAX_POS - X_MIN_POS)
#define Y_MAX_LENGTH (Y_MAX_POS - Y_MIN_POS)
#define Z_MAX_LENGTH (Z_MAX_POS - Z_MIN_POS)

// The position of the homing switches
#define MANUAL_HOME_POSITIONS  // If defined, MANUAL_*_HOME_POS below will be used
//#define BED_CENTER_AT_0_0  // If defined, the center of the bed is at (X=0, Y=0)

//Manual homing switch locations:
// For deltabots this means top and center of the cartesian print volume.
#define MANUAL_X_HOME_POS 0
#define MANUAL_Y_HOME_POS 0
#define MANUAL_Z_HOME_POS 267.55//268.60//267.50=robax hot=1.05 less than->mirror+film!!//268.60= mirror+film=3.18 thick// Film=0.15 thick//robax=4.28 thick
                           // WAS 260 .For delta: Distance between nozzle and print surface after homing.
                           // Mesurate when made taller and bigger ,the side's.
                           // Also when change or repair Hotend.And change the hight off the printbed .
                           // Use G1 X0 Y0 Z10 to start with, then down till Z1,then 0,10 everytime use also 0.05,till scratch the peace of paper,done.
                           // For be perfect use 0.01 also  up or down.
                           // best to controll also define Z_PROBE_OFFSET,if you changed the hotend or nozzle.
                           // TO CALIBRATE THE BED , level eagh corner x y z.with the SAME paper ,look for an perfect triangle on the bed .
                           // your bed have to be straight, perfect ,mostly an mirror is almost perfect, or the burliumglass,OR Robaxglass,the most heatbeds PCB'S, ARE NOT perfect straight.
                           // Use Clamps like bulldog paperclips to hold the bed together.
                           // use same distance on all three corners on the bed ,like these :
                                      // Center = G1 X0 Y0 Z2 F5000 
                                      // X =  G1 X-80 Y-45 Z2 F5000 , About 10cm from aluminium 15x15.
                                      // Y =  G1 X80 Y-45 Z2 F5000 ,
                                      // Z =  G1 X0 Y80 Z2 F5000 .
                           // move the end stops up or down to get the best result 1 or all ,figger out. bY HAL-O ENDSTOPS TURN THE POTENTIOMETER to the rigth = up ,left =down
                           // The way i do it ,1-Autohome G28,
                           //                  2-SET ,Center the Hight ,G1 X0 Y0 Z2 like above here.USE Z10 when you not now if it is safe!!!!!!
                           //                  3-G28,= Homing, Level all 3 corners to look witch one has too low or far too high,
                           //                  4- Start with the one with too low ,
                           //                  5-every time use G28 so maesure one then G28, then again measure one.
                           //                  6 When all done make one run center,X,Y,Z, to Controll ,
                           //                  7 If your print head is too high or low in the middle of the print surface,AFTER CALIBRATETION!(6), adjust DELTA_SMOOTH_ROD_OFFSET ( in Configuration.h )by half mm and try again.
                           //- take your time ,this is normal whance in your lifetime of the printer,till next change,or you get wrong prints not staight.at the bottom.
                           // CONTROLL ALWAYS THE.. RETRACT PROBE COORDINATES IN Z, BY MANUEL MOVING . OR YOUR PRINTER WILL KILL ITS SELF BY THE AUTOLEVELING .WHEN YOU CHANGED THE HOTEND !!!!!
                           //in Marlin_main.cpp
                           //#define HOMEAXIS(LETTER) homeaxis(LETTER##_AXIS)
                           //  When done go to 1.1.6 
#define AUTOLEVEL_GRID 24  // WAS 24 .Distance between autolevel Z probing points, should be less than print surface radius/3.
                           // change when use the hole printbed at once.
                           
//// MOVEMENT SETTINGS
#define NUM_AXIS 4 // The axis order in all axis related arrays is X, Y, Z, E
#define HOMING_FEEDRATE {100*60, 100*60, 100*60, 0}  // set the homing speeds (mm/min)UP TO 200 was 150

#define Z_PROBE_OFFSET {12, -7, -5.10, 0}  //-5.87//-6.06-5.70//H1-5.65   // 7.4 touching bed at 6.8 100% off switch,then raise till get on switch, in my case 7 ,put this in here.
                                          // Test with printing and raise 0.05 if its to LOW ( -6.95 ) And lower when its to high ( -7.05) till its ok .  
                                          // X, Y, Z, E (WAS 0, 16, -2.45, 0 )was -7.8 distance between hotend nozzle and deployed bed leveling probe.(probe is Down)
                                          // To do every time when change or repair Hotend and or nozzle ,always controll to secure.
                                          // ---!!! When probe IS down switch is active ,(pushed in by allen key),now lower down farter,till switch is inactive,you can hear or measuere it.
                                          // MAKE EXTRA CONTACTS ON TOP FROM THE PRINTER .EASYER WORKING WITH YOUR MEASUERE-METER.USE KROKO-CLAMPS.
                                          // Use G1 X0 Y0 Z10 to start with and then lower till probe is touching surface, read mm from lcd-screen.use paper to contoll.
                                          // ==This sets how far the tip of the probe is below the tip of the hotend when in it’s extended position.(probe is Down)
                                          // this is also the cordinates from the probe ,measuered from the NOZZLE tip.change this when you change the place of the probe !!!
                                          // Otherways the autolevel grid ,can go wrong and damage you prints or PRINTER!!
                                          // Next step:Goto Tab Marlin_main.cpp. about Line :824 #define HOMEAXIS(LETTER) homeaxis(LETTER##_AXIS).
                                          // To change the cordinates from the employing and retract the probe.
// default settings

#define DEFAULT_AXIS_STEPS_PER_UNIT   {100, 100, 100,714}     // 96 JH02 1,74mm PLA Silver.
                                                             // 96 JH02 1,74mm ABS Grey
                                                             // 700 PLA naturel 1,75mm best result is every spool calibrate and hotend first.
                                                             // 104.5 133.5 274 pla grey 1.75 aluhotend 1
                                                             // 206.5 pla grey 1.75 aluhotend 2
                                                              // to calibrate extruder x.y.z.(E)
                                                              // 100, 100, 100, 700 example...==BEST TO START WITH 700!!USE BY EVERY NEW SPOOL AND ! COLOUR!!
                                                              // 700 x 30 = 21000 (E motor steps for 30mm)Measurating between spool and extruder..stepper is set by 16 steps/sec.
                                                              // For example if you actually measured 32.6mm then  21000/32.6 = 644 (so you need to put 644 into your firmware replacing the 700 we had before,
                                                              // re-compile and download and you can re-check again and your filament should now move exactly 30mm as you have just calibrated it.
                                                              // If you measured 27.2mm then 21000/27.2 = 772 (put 772 into your firmware)
                                                              
                                                                  //Sets how many steps the stepper motor must make to move the platform 1 mm. On http://calculator.josefprusa.cz/ 
                                                                                                                                    
#define DEFAULT_MAX_FEEDRATE          {200, 200, 200, 80}    // (mm/sec)16 was slow, 19 was too fast for 1.2A NEMA17 28 was fine for 2.5A NEMA 17 // RichRap was set to 200, 200, 200, 12
#define DEFAULT_MAX_ACCELERATION      {9000,9000,9000,9000}    // X, Y, Z, E maximum start speed for accelerated moves. E default values are good for skeinforge 40+, for older versions raise them a lot.
                                                               //..RR.. X, Y, Z, E maximum start speed for accelerated moves. //200 was slow, 400 was too fast
#define DEFAULT_ACCELERATION          3000    // X, Y, Z and E max acceleration in mm/s^2 for printing moves
                                              //..RR.. V1 was 380 / using 380 - (300 was ok, originally 400 ) X, Y, Z and E max acceleration in mm/s^2 for printing moves
#define DEFAULT_RETRACT_ACCELERATION  3000   // X, Y, Z and E max acceleration in mm/s^2 for retracts
                                             //..RR.. V1 was 380 / using 380 - (300 was ok, originally 400 ) X, Y, Z and E max acceleration in mm/s^2 for r retracts
// Offset of the extruders (uncomment if using more than one and relying on firmware to position when changing).
// The offset has to be X=0, Y=0 for the extruder 0 hotend (default extruder).
// For the other hotends it is their distance from the extruder 0 hotend.
// #define EXTRUDER_OFFSET_X {0.0, 20.00} // (in mm) for each extruder, offset of the hotend on the X axis
// #define EXTRUDER_OFFSET_Y {0.0, 5.00}  // (in mm) for each extruder, offset of the hotend on the Y axis

// The speed change that does not require acceleration (i.e. the software might assume it can be done instantaneously)
#define DEFAULT_XYJERK                20.0    // (mm/sec)
#define DEFAULT_ZJERK                 20.0    // (mm/sec)
#define DEFAULT_EJERK                 20.0    // (mm/sec)

//===========================================================================
//=============================Additional Features===========================
//===========================================================================

// EEPROM
// the microcontroller can store settings in the EEPROM, e.g. max velocity...
// M500 - stores paramters in EEPROM
// M501 - reads parameters from EEPROM (if you need reset them after you changed them temporarily).
// M502 - reverts to the default "factory settings".  You still need to store them in EEPROM afterwards if you want to.
//define this to enable eeprom support
#define EEPROM_SETTINGS
//to disable EEPROM Serial responses and decrease program space by ~1700 byte: comment this out:
// please keep turned on if you can.
#define EEPROM_CHITCHAT

// Preheat Constants
#define PLA_PREHEAT_HOTEND_TEMP 210
#define PLA_PREHEAT_HPB_TEMP 0     // 60 TE WARM FOR PLA GREY 1.75 was 0 like richrep does
#define PLA_PREHEAT_FAN_SPEED 255   // was 0 aluhotend IS to hot..Insert Value between 0 and 255

#define ABS_PREHEAT_HOTEND_TEMP 220
#define ABS_PREHEAT_HPB_TEMP 0
#define ABS_PREHEAT_FAN_SPEED 255   // Insert Value between 0 and 255

//LCD and SD support
//#define ULTRA_LCD  //general lcd support, also 16x2
//#define DOGLCD  // Support for SPI LCD 128x64 (Controller ST7565R graphic Display Family)
#define SDSUPPORT // Enable SD Card Support in Hardware Console
//#define SDSLOW // Use slower SD transfer mode (not normally needed - uncomment if you're getting volume init error)

//#define ULTIMAKERCONTROLLER //as available from the ultimaker online store.
//#define ULTIPANEL  //the ultipanel as on thingiverse

// The MaKr3d Makr-Panel with graphic controller and SD support
// http://reprap.org/wiki/MaKr3d_MaKrPanel
//#define MAKRPANEL

// The RepRapDiscount Smart Controller (white PCB)
// http://reprap.org/wiki/RepRapDiscount_Smart_Controller
//#define REPRAP_DISCOUNT_SMART_CONTROLLER

// The GADGETS3D G3D LCD/SD Controller (blue PCB)
// http://reprap.org/wiki/RAMPS_1.3/1.4_GADGETS3D_Shield_with_Panel
#define G3D_PANEL

// The RepRapDiscount FULL GRAPHIC Smart Controller (quadratic white PCB)
// http://reprap.org/wiki/RepRapDiscount_Full_Graphic_Smart_Controller
//
// ==> REMEMBER TO INSTALL U8glib to your ARDUINO library folder: http://code.google.com/p/u8glib/wiki/u8glib
//#define REPRAP_DISCOUNT_FULL_GRAPHIC_SMART_CONTROLLER

// The RepRapWorld REPRAPWORLD_KEYPAD v1.1
// http://reprapworld.com/?products_details&products_id=202&cPath=1591_1626
//#define REPRAPWORLD_KEYPAD
//#define REPRAPWORLD_KEYPAD_MOVE_STEP 10.0 // how much should be moved when a key is pressed, eg 10.0 means 10mm per click

// The Elefu RA Board Control Panel
// http://www.elefu.com/index.php?route=product/product&product_id=53
// REMEMBER TO INSTALL LiquidCrystal_I2C.h in your ARUDINO library folder: https://github.com/kiyoshigawa/LiquidCrystal_I2C
//#define RA_CONTROL_PANEL

//automatic expansion
#if defined (MAKRPANEL)
 #define DOGLCD
 #define SDSUPPORT
 #define ULTIPANEL
 #define NEWPANEL
 #define DEFAULT_LCD_CONTRAST 17
#endif

#if defined (REPRAP_DISCOUNT_FULL_GRAPHIC_SMART_CONTROLLER)
 #define DOGLCD
 #define U8GLIB_ST7920
 #define REPRAP_DISCOUNT_SMART_CONTROLLER
#endif

#if defined(ULTIMAKERCONTROLLER) || defined(REPRAP_DISCOUNT_SMART_CONTROLLER) || defined(G3D_PANEL)
 #define ULTIPANEL
 #define NEWPANEL
#endif

#if defined(REPRAPWORLD_KEYPAD)
  #define NEWPANEL
  #define ULTIPANEL
#endif
#if defined(RA_CONTROL_PANEL)
 #define ULTIPANEL
 #define NEWPANEL
 #define LCD_I2C_TYPE_PCA8574
 #define LCD_I2C_ADDRESS 0x27   // I2C Address of the port expander
#endif

//I2C PANELS

//#define LCD_I2C_SAINSMART_YWROBOT
#ifdef LCD_I2C_SAINSMART_YWROBOT
  // This uses the LiquidCrystal_I2C library ( https://bitbucket.org/fmalpartida/new-liquidcrystal/wiki/Home )
  // Make sure it is placed in the Arduino libraries directory.
  #define LCD_I2C_TYPE_PCF8575
  #define LCD_I2C_ADDRESS 0x27   // I2C Address of the port expander
  #define NEWPANEL
  #define ULTIPANEL
#endif

// PANELOLU2 LCD with status LEDs, separate encoder and click inputs
//#define LCD_I2C_PANELOLU2
#ifdef LCD_I2C_PANELOLU2
  // This uses the LiquidTWI2 library v1.2.3 or later ( https://github.com/lincomatic/LiquidTWI2 )
  // Make sure the LiquidTWI2 directory is placed in the Arduino or Sketchbook libraries subdirectory.
  // (v1.2.3 no longer requires you to define PANELOLU in the LiquidTWI2.h library header file)
  // Note: The PANELOLU2 encoder click input can either be directly connected to a pin
  //       (if BTN_ENC defined to != -1) or read through I2C (when BTN_ENC == -1).
  #define LCD_I2C_TYPE_MCP23017
  #define LCD_I2C_ADDRESS 0x20 // I2C Address of the port expander
  #define LCD_USE_I2C_BUZZER //comment out to disable buzzer on LCD
  #define NEWPANEL
  #define ULTIPANEL
#endif

// Panucatt VIKI LCD with status LEDs, integrated click & L/R/U/P buttons, separate encoder inputs
//#define LCD_I2C_VIKI
#ifdef LCD_I2C_VIKI
  // This uses the LiquidTWI2 library v1.2.3 or later ( https://github.com/lincomatic/LiquidTWI2 )
  // Make sure the LiquidTWI2 directory is placed in the Arduino or Sketchbook libraries subdirectory.
  // Note: The pause/stop/resume LCD button pin should be connected to the Arduino
  //       BTN_ENC pin (or set BTN_ENC to -1 if not used)
  #define LCD_I2C_TYPE_MCP23017
  #define LCD_I2C_ADDRESS 0x20 // I2C Address of the port expander
  #define LCD_USE_I2C_BUZZER //comment out to disable buzzer on LCD (requires LiquidTWI2 v1.2.3 or later)
  #define NEWPANEL
  #define ULTIPANEL
#endif

#ifdef ULTIPANEL
//  #define NEWPANEL  //enable this if you have a click-encoder panel
  #define SDSUPPORT
  #define ULTRA_LCD
  #ifdef DOGLCD // Change number of lines to match the DOG graphic display
    #define LCD_WIDTH 20
    #define LCD_HEIGHT 5
  #else
    #define LCD_WIDTH 20
    #define LCD_HEIGHT 4
  #endif
#else //no panel but just lcd
  #ifdef ULTRA_LCD
  #ifdef DOGLCD // Change number of lines to match the 128x64 graphics display
    #define LCD_WIDTH 20
    #define LCD_HEIGHT 5
  #else
    #define LCD_WIDTH 16
    #define LCD_HEIGHT 2
  #endif
  #endif
#endif

// default LCD contrast for dogm-like LCD displays
#ifdef DOGLCD
# ifndef DEFAULT_LCD_CONTRAST
#  define DEFAULT_LCD_CONTRAST 50
# endif
#endif

// Increase the FAN pwm frequency. Removes the PWM noise but increases heating in the FET/Arduino
//#define FAST_PWM_FAN

// Use software PWM to drive the fan, as for the heaters. This uses a very low frequency
// which is not ass annoying as with the hardware PWM. On the other hand, if this frequency
// is too low, you should also increment SOFT_PWM_SCALE.
//#define FAN_SOFT_PWM

// Incrementing this by 1 will double the software PWM frequency,
// affecting heaters, and the fan if FAN_SOFT_PWM is enabled.
// However, control resolution will be halved for each increment;
// at zero value, there are 128 effective control positions.
#define SOFT_PWM_SCALE 0

// M240  Triggers a camera by emulating a Canon RC-1 Remote
// Data from: http://www.doc-diy.net/photo/rc-1_hacked/
// #define PHOTOGRAPH_PIN     23

// SF send wrong arc g-codes when using Arc Point as fillet procedure
//#define SF_ARC_FIX

// Support for the BariCUDA Paste Extruder.
//#define BARICUDA

/*********************************************************************\
* R/C SERVO support
* Sponsored by TrinityLabs, Reworked by codexmas
**********************************************************************/

// Number of servos
//
// If you select a configuration below, this will receive a default value and does not need to be set manually
// set it manually if you have more servos than extruders and wish to manually control some
// leaving it undefined or defining as 0 will disable the servo subsystem
// If unsure, leave commented / disabled
//
//#define NUM_SERVOS 3 // Servo index starts with 0 for M280 command

// Servo Endstops
//
// This allows for servo actuated endstops, primary usage is for the Z Axis to eliminate calibration or bed height changes.
// Use M206 command to correct for switch height offset to actual nozzle height. Store that setting with M500.
//
//#define SERVO_ENDSTOPS {-1, -1, 0} // Servo index for X, Y, Z. Disable with -1
//#define SERVO_ENDSTOP_ANGLES {0,0, 0,0, 70,0} // X,Y,Z Axis Extend and Retract angles

#include "Configuration_adv.h"
#include "thermistortables.h"

#endif //__CONFIGURATION_H
