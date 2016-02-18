#include <Servo.h>
// copied from 1.4 MeArm manual be Aaron Becker, FEb 17, 2016
//oops:  I bought a cheap arduino clone: https://www.youtube.com/watch?v=RTmjy3uDhPg
// https://codebender.cc/sketch:148456#MeArm_Calibration.ino


Servo middle, left, right, claw; //created 4 "servo objects"
// servo wires: orange is signal, red is (+), black/brown is (-)  (source: http://www.induino.com/2013_07_01_archive.html)

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  middle.attach(11);//attaches servo on pin 11 to the middle object
  left.attach(10);  //attaches servo on pin 10 to the left object
  right.attach(9);  //attaches servo on pin 9 to the right object
  claw.attach(6);   //attaches servo on pin 6 to the claw object
}

void loop() {
  // put your main code here, to run repeatedly:
  middle.write(90); //sets the servo position according to the value (degrees)
  left.write(90); //sets the servo position according to the value (degrees)
  right.write(90); //sets the servo position according to the value (degrees)
  claw.write(35); //sets the servo position according to the value (degrees)
  delay(300);  // doesn't constantly update the servos, because that can fry them.
}

//https://codebender.cc/user/MeArm


/* http://www.amazon.com/Arduino-Atmega2560-16au-Compatible-silicone-wristband/dp/B00GD423KC/ref=sr_1_9?s=pc&ie=UTF8&qid=1455723129&sr=1-9&keywords=arduino+mega
 *  This version is in the original version of optimization, both guarantee and the original same compatible, and convenient use. 

Please note: it is Not for Beginners,replace the 16u2 (Usb Chip),you Need to Download the USB Driver From Our Web Site) 

Method of use: 
1.arduino IDE: 
download link: http://arduino.cc/en/Main/Software 
2.USB Chip driver 
download link: http://www.wch-ic.com/download/list.asp?id=126 
Or 
They are available here: USB CH341/CH340 WINDOWS98/ME/2000/XP/Server 2003/VISTA/, Server 2008/Win7/Win8 32/64 --- http://www.5v.ru/zip/ch341ser.zip 
USB CH341/CH340 LINUX --- http://www.5v.ru/zip/ch341ser_linux.zip 
USB CH341/CH340 MAC OS32,MAC OS64 --- http://www.5v.ru/zip/ch341ser_mac.zip 
Or 
http://doityourselfchristmas.com/forums/showthread.php?14690-CH340-USB-RS232-Driver 
Or 
you can find ch340,ch341 USB Chip driver 
3.Plug in MEGA2560 development board, the driver is automatically installed 
4. Select the board MEGA2560 in die 
5. Select COM port, 
6. To choose the best, the arduino own routine procedures, burn in 

Package include: 
1x Donop® MEGA2560 board 
1xUSB Cable 
1x Donop® black silicone wristband 

Don't buy bad quality products from unauthorized sellers. Any order inquiry, please feel free to contact us first so that we can supply the best service for you. 

Donop is a registered trademark protected by the US Trademark Law. Donop products are sold by authorized sellers only.the copyright or unauthorized selling issue will be reported to Amazon.
*/
