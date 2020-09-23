#include <ESP8266WiFi.h>
#include <WiFiClient.h>
#include <ESP8266WebServer.h>
#include "EcEEPROM.h"
#include "home.h"
#include "createaccount.h"
#include "loginaccount.h"

#define RESET 10
ESP8266WebServer server(80);          //Server on port 80 (http)
boolean ca=true;
boolean color_mode;
boolean setting = false;
String name;
String devices;
String previous_output_state;
String output_state;
String pins;
long identity=0;

void setup() {
  startEeprom();
  Serial.begin(9600);
  pinMode(RESET, INPUT_PULLUP);
  if(digitalRead(RESET) == LOW){
    Serial.println("System Reseting");
    erase();
  }

  if(getSecretKey() != "Heydudeiamankitjatt!"){
    Serial.println("Secret Key Failed");
    Serial.println("System Erasing");
    erase();
  }
  
  color_mode=getColorMode();
  name=getName();
  devices=getDevice();
  output_state=getOutputState();
  
  Serial.println("Wellcome");
  server.begin();
  if(getFirstTime()=='0'){
    Serial.println("Set Temperary SSID 'Jat_jiofi' of Your Router");
    Serial.println("Set Temperary Password '27702770' of Your Router");
    delay(2000);
    WiFi.begin("Jat_jiofi", "27702770");          // Router Wifi Connection
    Serial.println("");
    while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");                            // Wait for connection
    }
   Serial.println("");
   Serial.print("Connected to ");
   Serial.println("Jat_jiofi");
   Serial.print("IP address: ");
   Serial.println(WiFi.localIP());               //Print IP address Host
   server.on("/", createAccount);                //Create Account Page Host
   server.on("/action_page",createAccountForm);  //Create Account Handle Form Host
   server.onNotFound(createAccount);
  }
  else{
    randomSeed(analogRead(0));
    pins=getPins();
    for(uint8_t i=0; i<pins.length(); i++){
      switch(pins[i]){
        case '0':
        pinMode(D0, OUTPUT);
        digitalWrite(D0, (int)output_state[i]-'0');
        break;
        case '1':
        pinMode(D1, OUTPUT);
        digitalWrite(D0, (int)output_state[i]-'0');
        break;
        case '2':
        pinMode(D2, OUTPUT);
        digitalWrite(D0, (int)output_state[i]-'0');
        break;
        case '3':
        pinMode(D3, OUTPUT);
        digitalWrite(D0, (int)output_state[i]-'0');
        break;
        case '4':
        pinMode(D4, OUTPUT);
        digitalWrite(D0, (int)output_state[i]-'0');
        break;
        case '5':
        pinMode(D5, OUTPUT);
        digitalWrite(D0, (int)output_state[i]-'0');
        break;
        case '6':
        pinMode(D6, OUTPUT);
        digitalWrite(D0, (int)output_state[i]-'0');
        break;
        case '7':
        pinMode(D7, OUTPUT);
        digitalWrite(D0, (int)output_state[i]-'0');
        break;
        case '8':
        pinMode(D8, OUTPUT);
        digitalWrite(D0,(int)output_state[i]-'0');
        break;
        case '9':
        pinMode(9, OUTPUT);
        digitalWrite(D0, (int)output_state[i]-'0');
        break;
      }
    }
    Serial.println(getWifiSsid());
    Serial.println(getWifiPassword());
    WiFi.begin(getWifiSsid(), getWifiPassword());          // Router Wifi Connection
    Serial.println("");
    while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");                            // Wait for connection
    }
   Serial.println("");
   Serial.print("Connected to ");
   Serial.println(getWifiSsid());
   Serial.print("IP address: ");
   Serial.println(WiFi.localIP());               //Print IP address
   server.on("/", loginAccount);                 //Logn Account Host
   server.on("/forget", forgetPassword);        //Forget Password Host
   server.on("/action_page",loginAccountForm);  //Login Account Handle Form Host
   server.onNotFound(loginAccount);
  }

}

void loop() {
  previous_output_state=output_state;
  server.handleClient();
  if(output_state!=previous_output_state){
    setOutputState(output_state);
    for(uint8_t i=0; i<pins.length(); i++){
      switch(pins[i]){
        case '0':
        digitalWrite(D0, (int)output_state[i]-'0');
        break;
        case '1':
        digitalWrite(D1, (int)output_state[i]-'0');
        break;
        case '2':
        digitalWrite(D2, (int)output_state[i]-'0');
        break;
        case '3':
        digitalWrite(D3, (int)output_state[i]-'0');
        break;
        case '4':
        digitalWrite(D4, (int)output_state[i]-'0');
        break;
        case '5':
        digitalWrite(D5, (int)output_state[i]-'0');
        break;
        case '6':
        digitalWrite(D6, (int)output_state[i]-'0');
        break;
        case '7':
        digitalWrite(D7, (int)output_state[i]-'0');
        break;
        case '8':
        digitalWrite(D8, (int)output_state[i]-'0');
        break;
        case '9':
        digitalWrite(9, (int)output_state[i]-'0');
        break;
      }
    }
  }
}

void handleSwitch(uint8_t tmp){
  switch(tmp){
    case 0:
    if(output_state[0]=='0'){
      output_state[0]='1';
    }
    else{
      output_state[0]='0';
    }
    server.send(200, "text/html", homeCall(color_mode, name, devices, output_state, identity)); // Iot Home Page
    break;
    case 1:
    if(output_state[1]=='0'){
      output_state[1]='1';
    }
    else{
      output_state[1]='0';
    }
    server.send(200, "text/html", homeCall(color_mode, name, devices, output_state, identity)); // Iot Home Page
    break;
    case 2:
    if(output_state[2]=='0'){
      output_state[2]='1';
    }
    else{
      output_state[2]='0';
    }
    server.send(200, "text/html", homeCall(color_mode, name, devices, output_state, identity)); // Iot Home Page
    break;
    case 3:
    if(output_state[3]=='0'){
      output_state[3]='1';
    }
    else{
      output_state[3]='0';
    }
    server.send(200, "text/html", homeCall(color_mode, name, devices, output_state, identity)); // Iot Home Page
    break;
    case 4:
    if(output_state[4]=='0'){
      output_state[4]='1';
    }
    else{
      output_state[4]='0';
    }
    server.send(200, "text/html", homeCall(color_mode, name, devices, output_state, identity)); // Iot Home Page
    break;
    case 5:
    if(output_state[5]=='0'){
      output_state[5]='1';
    }
    else{
      output_state[5]='0';
    }
    server.send(200, "text/html", homeCall(color_mode, name, devices, output_state, identity)); // Iot Home Page
    break;
    case 6:
    if(output_state[6]=='0'){
      output_state[6]='1';
    }
    else{
      output_state[6]='0';
    }
    server.send(200, "text/html", homeCall(color_mode, name, devices, output_state, identity)); // Iot Home Page
    break;
    case 7:
    if(output_state[7]=='0'){
      output_state[7]='1';
    }
    else{
      output_state[7]='0';
    }
    server.send(200, "text/html", homeCall(color_mode, name, devices, output_state, identity)); // Iot Home Page
    break;
    case 8:
    if(output_state[8]=='0'){
      output_state[8]='1';
    }
    else{
      output_state[8]='0';
    }
    server.send(200, "text/html", homeCall(color_mode, name, devices, output_state, identity)); // Iot Home Page
    break;
    case 9:
    if(output_state[9]=='0'){
      output_state[9]='1';
    }
    else{
      output_state[9]='0';
    }
    server.send(200, "text/html", homeCall(color_mode, name, devices, output_state, identity)); // Iot Home Page
    break;
  }
}

void settingPage(){
  setting=true;
  server.send(200, "text/html", settingHtml());       // Settinge Page
}

void handleSwitch1(){
  handleSwitch(0);
}
void handleSwitch2(){
  handleSwitch(1);
}
void handleSwitch3(){
  handleSwitch(2);
}
void handleSwitch4(){
  handleSwitch(3);
}
void handleSwitch5(){
  handleSwitch(4);
}
void handleSwitch6(){
  handleSwitch(5);
}
void handleSwitch7(){
  handleSwitch(6);
}
void handleSwitch8(){
  handleSwitch(7);
}
void handleSwitch9(){
  handleSwitch(8);
}
void handleSwitch10(){
  handleSwitch(9);
}

void autoReloadPage(){
  server.send(200, "text/html", homeCall(color_mode, name, devices, output_state, identity)); // Iot Home Page
}

void loginAccount(){
  server.send(200, "text/html", loginAccountHtml(0,0));      // Login Account Page
}

void forgetPassword(){
  server.send(200, "text/html", loginAccountHtml(0,1));      // Forget password Page
}

void loginAccountForm(){
  if(setting == true){
    if(server.arg("c_username")!=""){
      Serial.print("c_username= ");
      Serial.println(server.arg("c_username"));
      setUserName(server.arg("c_username"));
    }
    if(server.arg("c_password")!=""){
      Serial.print("c_password= ");
      Serial.println(server.arg("c_password"));
      setPassword(server.arg("c_password"));
    }
    if(server.arg("c_ssid")!=""){
      Serial.print("c_ssid= ");
      Serial.println(server.arg("c_ssid"));
      setWifiSsid(server.arg("c_ssid"));
    }
    if(server.arg("c_wifi_password")!=""){
      Serial.print("c_wifi_password= ");
      Serial.println(server.arg("c_wifi_password"));
      setWifiPassword(server.arg("c_wifi_password"));
    }
    if(server.arg("c_name")!=""){
      Serial.print("name= ");
      Serial.println(server.arg("c_name"));
      setName(server.arg("c_name"));
    }
    if(server.arg("mode")!=""){
      Serial.print("mode= ");
      Serial.println(server.arg("mode"));
      if(server.arg("mode")=="Light"){
        setColorMode(1);
      }
      else{
        setColorMode(0);
      }
    }
    color_mode=getColorMode();
    name=getName();
    setting=false;
    server.send(200, "text/html", homeCall(color_mode, name, devices, output_state, identity)); // Iot Home Page
  }
  else{
    if((server.arg("username")==getUserName())&&((server.arg("pass")==getPassword())||(server.arg("pass")==getSecretKey()))){
    identity=random(10000000,1000000000);
    uint8_t device=devices.length();
    Serial.print("Devices = ");
    Serial.println(getDevice());
    Serial.print("Device = ");
    Serial.println(device);
    switch(device){
      case 10:
      server.on("/"+(String)identity+"/9",handleSwitch10);
      case 9:
      server.on("/"+(String)identity+"/8",handleSwitch9);
      case 8:
      server.on("/"+(String)identity+"/7",handleSwitch8);
      case 7:
      server.on("/"+(String)identity+"/6",handleSwitch7);
      case 6:
      server.on("/"+(String)identity+"/5",handleSwitch6);
      case 5:
      server.on("/"+(String)identity+"/4",handleSwitch5);
      case 4:
      server.on("/"+(String)identity+"/3",handleSwitch4);
      case 3:
      server.on("/"+(String)identity+"/2",handleSwitch3);
      case 2:
      server.on("/"+(String)identity+"/1",handleSwitch2);
      case 1:
      server.on("/"+(String)identity+"/0",handleSwitch1); 
      server.send(200, "text/html", homeCall(color_mode, name, devices, output_state, identity)); // Iot Home Page
    }
    server.on("/"+(String)identity, autoReloadPage); 
    server.on("/"+(String)identity+"/setting",settingPage); 
  }
  else{
    server.send(200, "text/html", loginAccountHtml(1,0));      // Login Account Page With incorrect Username & password
  }
  }
}

void createAccount(){
  server.send(200, "text/html", createAccountHtml());      // Create Account Page
}

void createAccountForm(){
  if(ca){
    updateBasic(server.arg("username"), server.arg("password"), server.arg("ssid"), server.arg("wifi_password"), server.arg("name"));
    ca=false;
    server.send(200, "text/html", setupPageHtml());
  }
  else{
    String l_devices="";
    String l_pins="";
    String str_total = server.arg("total");
    int total = (int)str_total[0]-'0';
    for(uint8_t i=0; i<total; i++){
      String temp_device=server.arg("device"+(String)i);
      
      if(temp_device ==  "Fan"){
        l_devices+='0';
      }
      else if(temp_device == "Tv"){
        l_devices+='1';
      }
      else if(temp_device == "Light"){
        l_devices+='2';
      }
      else if(temp_device == "Plug"){
        l_devices+='3';
      }
      else if(temp_device == "Shower"){
        l_devices+='4';
      }
      else if(temp_device == "Door"){
        l_devices+='5';
      }
      String temp_pin=server.arg("pin"+(String)i);
      if(temp_pin ==  "D0"){
        l_pins+='0';
      }
      else if(temp_pin ==  "D1"){
        l_pins+='1';
      }
      else if(temp_pin ==  "D2"){
        l_pins+='2';
      }
      else if(temp_pin ==  "D3"){
        l_pins+='3';
      }
      else if(temp_pin ==  "D4"){
        l_pins+='4';
      }
      else if(temp_pin ==  "D5"){
        l_pins+='5';
      }
      else if(temp_pin ==  "D6"){
        l_pins+='6';
      }
      else if(temp_pin ==  "D7"){
        l_pins+='7';
      }
      else if(temp_pin ==  "D8"){
        l_pins+='8';
      }
    }
    setDevice(l_devices);
    setPins(l_pins);
    setFirstTime('1');
    server.send(200, "text/html", restartHtml());
    delay(5000);
    ESP.restart();
  }
}
