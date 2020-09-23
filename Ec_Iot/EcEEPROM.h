#include <EEPROM.h>
String defined_secret_key="Heydudeiamankitjatt!";
void startEeprom(){
  EEPROM.begin(512);
}

String getSecretKey(){    // Read Secret Key
  String secret_key="";
  for(uint8_t i=0; i<20; i++){
    secret_key+=(char)EEPROM.read(i);
    delay(5);
  }
  return secret_key;
}

void setSecretKey(String func_secret_key){   // Update Secret Key
  String secret_key=getSecretKey();
  if(func_secret_key != secret_key){
    for(uint8_t i=0; i<20; i++){
      EEPROM.write(i, func_secret_key[i]);
      delay(10);
    }
    EEPROM.commit();
  }
}

char getFirstTime(){       // Read First Time
  return (char)EEPROM.read(20);
}

void setFirstTime(char func_first_time){    // Update First Time
  char first_time=getFirstTime();
  if(func_first_time != first_time){
     EEPROM.write(20, func_first_time);
     delay(5);
     EEPROM.commit();
  }
}

String getWifiSsid(){     // Get Wifi SSID
  String wifi_ssid="";
  char c;
  for(uint8_t i=21; i<=35; i++){
    c=(char)EEPROM.read(i);
    if(c!=';'){
      wifi_ssid+=c;
    }
    else{
      break;
    }
  }
  return wifi_ssid;
}

void setWifiSsid(String func_wifi_ssid){    // Update Wifi SSID
  String wifi_ssid=getWifiSsid();
  if(func_wifi_ssid != wifi_ssid){
    func_wifi_ssid+=";";
    for(uint8_t i=0; i<func_wifi_ssid.length(); i++){
      EEPROM.write(i+21, func_wifi_ssid[i]);
      delay(5);
    }
    EEPROM.commit();
  }
}

String getWifiPassword(){     // Get Wifi Password
  String wifi_password="";
  char c;
  for(uint8_t i=36; i<=50; i++){
    c=(char)EEPROM.read(i);
    if(c!=';'){
      wifi_password+=c;
    }
    else{
      break;
    }
  }
  return wifi_password;
}

void setWifiPassword(String func_wifi_password){    // Update WiFi Password
  String wifi_password=getWifiPassword();
  if(func_wifi_password != wifi_password){
    func_wifi_password+=";";
    for(uint8_t i=0; i<func_wifi_password.length(); i++){
      EEPROM.write(i+36, func_wifi_password[i]);
      delay(5);
    }
    EEPROM.commit();
  }
}

String getUserName(){     // Get Username
  String username="";
  char c;
  for(uint8_t i=51; i<=65; i++){
    c=(char)EEPROM.read(i);
    if(c!=';'){
      username+=c;
    }
    else{
      break;
    }
  }
  return username;
}

void setUserName(String func_username){    // Update Username
  String username=getUserName();
  if(func_username != username){
    func_username+=";";
    for(uint8_t i=0; i<func_username.length(); i++){
      EEPROM.write(i+51, func_username[i]);
      delay(5);
    }
    EEPROM.commit();
  }
}

String getPassword(){     // Get Password
  String password="";
  char c;
  for(uint8_t i=66; i<=80; i++){
    c=(char)EEPROM.read(i);
    if(c!=';'){
      password+=c;
    }
    else{
      break;
    }
  }
  return password;
}

void setPassword(String func_password){    // Update Password
  String password=getPassword();
  if(func_password != password){
    func_password+=";";
    for(uint8_t i=0; i<func_password.length(); i++){
      EEPROM.write(i+66, func_password[i]);
      delay(5);
    }
    EEPROM.commit();
  }
}

String getName(){     // Get Name
  String name="";
  char c;
  for(uint8_t i=81; i<=95; i++){
    c=(char)EEPROM.read(i);
    if(c!=';'){
      name+=c;
    }
    else{
      break;
    }
  }
  return name;
}

void setName(String func_name){    // Update Name
  String name=getName();
  if(func_name != name){
    func_name+=";";
    for(uint8_t i=0; i<func_name.length(); i++){
      EEPROM.write(i+81, func_name[i]);
      delay(5);
    }
    EEPROM.commit();
  }
}

uint8_t getColorMode(){       // Read Color Mode
  return (uint8_t)EEPROM.read(96);
}

void setColorMode(uint8_t func_color_mode){    // Update Color Mode
  uint8_t color_mode=getColorMode();
  if(func_color_mode != color_mode){
     EEPROM.write(96, func_color_mode);
     delay(5);
     EEPROM.commit();
  }
}

String getOutputState(){     // Get Output State
  String output_state="";
  char c;
  for(uint8_t i=97; i<110; i++){
    c=(char)EEPROM.read(i);
    if(c!=';'){
      output_state+=c;
    }
    else{
      break;
    }
  }
  return output_state;
}

void setOutputState(String func_output_state){    // Update Output State
  String output_state=getOutputState();
  if(func_output_state != output_state){
    func_output_state+=";";
    for(uint8_t i=0; i<func_output_state.length(); i++){
      EEPROM.write(i+97, func_output_state[i]);
      delay(5);
    }
    EEPROM.commit();
  }
}

String getDevice(){     // Get Device
  String device="";
  char c;
  for(uint8_t i=111; i<=120; i++){
    c=(char)EEPROM.read(i);
    if(c!=';'){
      device+=c;
    }
    else{
      break;
    }
  }
  return device;
}

void setDevice(String func_device){    // Update Device
  String device=getDevice();
  if(func_device != device){
    func_device+=";";
    for(uint8_t i=0; i<func_device.length(); i++){
      EEPROM.write(i+111, func_device[i]);
      delay(10);
    }
    EEPROM.commit();
  }
}

String getPins(){     // Get Pins
  String pins="";
  char c;
  for(uint8_t i=121; i<131; i++){
    c=(char)EEPROM.read(i);
    if(c!=';'){
      pins+=c;
    }
    else{
      break;
    }
  }
  return pins;
}

void setPins(String func_pins){    // Update Pins
  String pins=getPins();
  if(func_pins != pins){
    func_pins+=";";
    for(uint8_t i=0; i<func_pins.length(); i++){
      EEPROM.write(i+121, func_pins[i]);
      delay(10);
    }
    EEPROM.commit();
  }
}

void updateBasic(String func_username, String func_password, String func_wifi_ssid, String func_wifi_password, String func_name){   // Update Basic 
  setWifiSsid(func_wifi_ssid);
  setWifiPassword(func_wifi_password);
  setUserName(func_username);
  setPassword(func_password);
  setName(func_name);
}

void erase(){   // Erase EEPROM
  for(int i=0; i<512; i++){
    EEPROM.write(i,'0');
    delay(5);
  }
  EEPROM.commit();
  setSecretKey(defined_secret_key);
  ESP.restart();
}
