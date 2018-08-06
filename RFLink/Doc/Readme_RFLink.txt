R29: 
- Fixed: AC/NewKaku high unit numbers were incorrect. 
         If you already have devices with high unit numbers in Domoticz, just throw them away and let them be recognized again
===
R28: 
- Fixed: FA20RF smoke detector transmit from Domoticz 
===
R27: 
- Added: OSV1 battery status 
- Fixed: OSV1 boundaries and removed some debug info 
- Fixed: Some plugins set an incorrect sampling rate divider value 
- Changed: AlectoV1 false positives filter was too agressive
===
R26:
- Added: QRFDEBUG command to do faster logging of undecoded data
- Added: VERSION command
- Added: Powerfix/Quigg switches
- Added: proper Lacrosse V3 WS7000 sensor support
- Changed: config file and plugin integration
- Changed: timeout and divider value
- Changed: Lacrosse V2 WS2300/WS3600 plugin number to get faster processing, changed various other parts as well
- Changed: Lacrosse V1 pulse duration checks
- Changed: various parts to improve speed
- Changed: Flamingo Smoke detector signal re-transmits from 8 to 10 times
- Added: Additional tests on Alecto V1 and Alecto V4 to filter out false positives
- Fixed: AC (NewKaku) protocol send for some device numbers
- Fixed: little bug in UPM code
- Fixed: Oregon wind speed reporting
- Fixed: Wind speed calculations
- Fixed: Wind direction reporting in all plugins
- Fixed: AlectoV3 humidity value displaying out of range values
- Fixed: OregonV1 decoding
===
R25:
- Fixed: Eurodomest address range check
- Fixed: Alecto V1 and V3 humidity handling
- Fixed: Lacrosse WS2300/WS3600 and labelled as LacrosseV2
===
R24: 
- Fixed: Flamingo Smoke Detector timings and device address usage
- Fixed: Timing for Nexa/Jula Anslut
===
R23: 
- Changed: Alecto V1 temperature data filtering
- Added: Alecto V1 battery status now shown for temperature sensors
===
R22: 
- Various additional tests and fixes after intensive tests
- Added: Home Confort send and recognition by Domoticz
===
R21: 
- Re-Activated PIR & Door/Window sensors (plugin 60/61) 
===
R20: 
- Switched to Arduino 1.6.5
===
R19: 
- Complete rewrite
- Added: Home Confort Smart Home - TEL-010
- Added: RGB LED Controller
- Added: RL-02 Digital Doorbell
- Added: Deltronic Doorbell
- Added: Sartano 2606 remote & switch
===
r18:
- Added Banggood SKU174397, Sako CH113, Homemart/Onemall FD030 and Blokker (Dake) 1730796 outdoor temperature sensor
- Tested Okay: Promax RSL366T, Profile PR-44N & PR-47N
- Fixed: LaCrosse humidity values are correctly displayed
- Fixed: Humidity values that originate from slave Nodos are correctly displayed
- Fixed: UPM/Esic insane temperature values are skipped
- Removed Xiron & Auriol debug data 
- Tightened pulse range on various protocols to prevent false positives
===
r17:
- Modified Oregon THGR228N code, 
- Modified Newkaku(AC) dim values, 
- Corrected support for KAKU door switches, 
- Fixed Nodo Slave sensors, 
- Improved speed and priorities so that group commands are properly transmitting
===
r16: 
- Fixed Aleco V1 temperature ID to match wind sensors
- Fixed HomeEasy transmit
- Added AC(NewKaku) dimmer support
===
r15:
- Improved large packet translation
===
r14: 
- Changed Motion sensors (60/61)
===
r13:
- Flamingo Smoke detector fix
- Added Xiron sensor support
===
r11/12:
- Mertik / Dru Send added
===
r10:
- Added Auriol Z32171A
===
r9:
- Fixed Kaku send with high device id's (P1 M1 etc)
===
r8:
- Improved descriptions
===
r7:
- Fixed Oregon RTGR328N ID and humidity format
- Fixed UPM/Esic humidity format
- Fixed Alecto humidity format
===
r6:
- Fixed Auriol V2 plugin
- Updated Auriol plugin
- Fixed Lacrosse Humidity
===
r1/2/3/4/5:
- Added X10 receive/transmit plugin
- Minor changes & improvements
===

Special thanks to:
Alex, Benoit, Bert, Christophe, Deennoo, Jelle, John, Jonas, Gerrit, Goran, Mark, Martinus, Maurice, Paul, Pim, Remco, Richard, Rob, Sebastien, Thibaut, William
and everyone who contributed with feedback, suggestions, debug data, tests etc.
