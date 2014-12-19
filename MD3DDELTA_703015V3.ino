


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

/*
 This firmware is a mashup between Sprinter and grbl.
  (https://github.com/kliment/Sprinter)
  (https://github.com/simen/grbl/tree)
 
 It has preliminary support for Matthew Roberts advance algorithm 
    http://reprap.org/pipermail/reprap-dev/2011-May/003323.html
 */

/* All the implementation is done in *.cpp files to get better compatibility with avr-gcc without the Arduino IDE */
/* Use this file to help the Arduino IDE find which Arduino libraries are needed and to keep documentation on GCode */

#include "Configuration.h"
#include "pins.h"

#ifdef ULTRA_LCD
  #if defined(LCD_I2C_TYPE_PCF8575)
    #include <Wire.h>
    #include <LiquidCrystal_I2C.h>
  #elif defined(LCD_I2C_TYPE_MCP23017) || defined(LCD_I2C_TYPE_MCP23008)
    #include <Wire.h>
    #include <LiquidTWI2.h>
  #elif defined(DOGLCD)
    #include <U8glib.h> // library for graphics LCD by Oli Kraus (https://code.google.com/p/u8glib/)
  #else
    #include <LiquidCrystal.h> // library for character LCD
  #endif
#endif

#if defined(DIGIPOTSS_PIN) && DIGIPOTSS_PIN > -1
#include <SPI.h>
#endif
