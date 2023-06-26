# 1 "d:\\Product\\2023_Product\\Git\\DINO_PLC\\DINO_PLC\\examples\\tutor09_webmonitor\\tutor09_webmonitor.ino"
# 2 "d:\\Product\\2023_Product\\Git\\DINO_PLC\\DINO_PLC\\examples\\tutor09_webmonitor\\tutor09_webmonitor.ino" 2

extern bool USE_PLC_MODBUS;
extern bool USE_PLC_RTC;
extern int RTC_SYNC_DURATION;
extern bool USE_PLC_MODBUS_TCP;

void setup(){
  USE_PLC_MODBUS = true; //- Use PLC Modbus function
  USE_PLC_RTC = true; //- Use PLC RTC function
  RTC_SYNC_DURATION = 60; //- RTC Sync time (Min.)
  USE_PLC_MODBUS_TCP = true; //- Enable Modbus TCP Server
  initPLC(); //- Init FX1N PLC function

}

void loop(){
  PLC_Network_Function(); //- Very important must be in main loop and no Delay in main loop
}
