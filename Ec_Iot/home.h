String getFirstHtml(long identity){       // Head Section
  String html="";
  html+="<!DOCTYPE html>\n";
  html+="<html>\n";
  html+="<head>\n";
  html+="  <meta name=\"viewport\" content=\"width=device-width, initial-scale=1.0\"/>\n";
  html+="  <script src=\"https://kit.fontawesome.com/28e0a3bde9.js\" crossorigin=\"anonymous\"></script>\n";
  html+="  <script>";
  html+="     setTimeout(function(){";
  html+="        window.location.href = \"http://\"+window.location.hostname+\"/";
  html+=identity;
  html+="\"";
  html+="     }, 5000);";
  html+="  </script>";
  html+="  <title>Home</title>\n";
  html+="  <style>\n";
  return html;
}
String getSecoundHtml(boolean mode){
  String html="";
  if(mode){
    html+="body{\n";
    html+="  padding:0px;\n";
    html+="  margin:0px;\n";
    html+="  font-family:monospace;\n";
    html+="  background-color:white;\n";
    html+="}\n";
  }
  else{
    html+="body{\n";
    html+="  padding:0px;\n";
    html+="  margin:0px;\n";
    html+="  font-family:monospace;\n";
    html+="  background-color:#1a1a2e;\n";
    html+="}\n";
  }
  html+="a{\n";
  html+="    text-decoration:none;\n";
  html+="    color:black;\n";
  html+="  }\n";
  html+=".header{\n";
  html+="    font-size:1.8em;\n";
  html+="    display:block;\n";
  html+="    padding:20px;\n";
  html+="    margin:0px;\n";
  html+="    background-color:green;\n";
  html+="    color:white;\n";
  html+="}\n";
  html+=".fa-cog{\n";
  html+="      float:right;\n";
  html+="      color:white;\n";
  html+="    }\n";
  html+="    .espid{\n";
  html+="      margin:10px;\n";
  html+="      padding:10px;\n";
  html+="      font-weight:bold;\n";
  html+="      font-size:1.8em;\n";
  if(mode){
    html+="   color:black;\n";
  }
  else{
    html+="   color:white;\n";
  }
  html+="    }\n";
  html+="    .sub{\n";
  html+="      text-align:right;\n";
  html+="      padding:10px;\n";
  html+="      background:#91acc4;\n";
  html+="      display:block;\n";
  html+="    }\n";
  html+=".controlls{\n";
  html+="      padding:30px;\n";
  html+="      margin:5px;\n";
  html+="      text-align:center;\n";
  if(mode){
    html+="   background-color:#d7e0da;\n";
    html+="   color:black;\n";
  }
  else{
    html+="   background-color:#0f3460;\n";
    html+="   color:white;\n";
  }
  html+="     float:left;\n";
  html+="    }\n";
  html+="    .controlls span{\n";
  html+="      font-size:1.5em;\n";
  html+="    }\n";
  return html;
}
String getFan(byte state, long identity, String switch_no){
  String html="";
  html+="<a href=\"/";
  html+=identity;
  html+="/";
  html+=switch_no;
  html+="\">\n";
  html+="<div class=\"controlls\">\n";
  if(state)
    html+="              <i class=\"fas fa-fan fa-4x fa-spin\" style=\"color:green\"></i>\n";
  else
    html+="              <i class=\"fas fa-fan fa-4x \" style=\"color:red\"></i>\n";
  html+="              <span>fan</span>\n";
  html+="            </div>\n";
  html+="            </a>\n";
  return html;
}
String getLight(boolean state, long identity, String switch_no){
  String html="";
  html+="            <a href=\"/";
  html+=             identity;
  html+="/";
  html+=switch_no;
  html+="\">\n";
  html+="            <div class=\"controlls\">\n";
  if(state){
    html+="              <i class=\"fas fa-lightbulb fa-4x\" style=\"color:green\"></i>\n";
  }
  else{
    html+="              <i class=\"fas fa-lightbulb fa-4x\" style=\"color:red\"></i>\n";
  }
  html+="              <span>Light</span>\n";
  html+="            </div>\n";
  html+="            </a>\n";
  return html;
}
String getTv(boolean state, long identity, String switch_no){
  String html="";
  html+="            <a href=\"/";
  html+=             identity;
  html+="/";
  html+=switch_no;
  html+="\">\n";
  html+="            <div class=\"controlls\">\n";
  if(state){
    html+="              <i class=\"fas fa-tv fa-4x\" style=\"color:green\"></i>\n";
  }
  else{
    html+="              <i class=\"fas fa-tv fa-4x\" style=\"color:red\"></i>\n";
  }
  html+="              <span>TV</span>\n";
  html+="            </div>\n";
  html+="            </a>\n";
  return html;
}
String getShower(boolean state, long identity, String switch_no){
  String html="";
  html+="            <a href=\"/";
  html+=             identity;
  html+="/";
  html+=switch_no;
  html+="\">\n";
  html+="            <div class=\"controlls\">\n";
  if(state){
    html+="              <i class=\"fas fa-bath fa-4x\" style=\"color:green\"></i>\n";
  }
  else{
    html+="              <i class=\"fas fa-bath fa-4x\" style=\"color:red\"></i>\n";
  }
  html+="              <span>Bath</span>\n";
  html+="            </div>\n";
  html+="            </a>\n";
  return html;
}
String getPlug(boolean state, long identity, String switch_no){
  String html="";
  html+="            <a href=\"/";
  html+=             identity;
  html+="/";
  html+=switch_no;
  html+="\">\n";
  html+="            <div class=\"controlls\">\n";
  if(state){
    html+="              <i class=\"fas fa-plug fa-4x\" style=\"color:green\"></i>\n";
  }
  else{
    html+="              <i class=\"fas fa-plug fa-4x\" style=\"color:red\"></i>\n";
  }
  html+="              <span>Plug</span>\n";
  html+="            </div>\n";
  html+="            </a>\n";
  return html;
}
String getDoor(boolean state, long identity, String switch_no){
  String html="";
  html+="            <a href=\"/";
  html+=             identity;
  html+="/";
  html+=switch_no;
  html+="\">\n";
  html+="            <div class=\"controlls\">\n";

  if(state)
    html+="              <i class=\"fas fa-door-closed fa-4x\" style=\"color:green\"></i>\n";
  else
    html+="              <i class=\"fas fa-door-open fa-4x\" style=\"color:red\"></i>\n";
  
  html+="              <span>Door</span>\n";
  html+="            </div>\n";
  html+="            </a>\n";
  return html;
}
String getThirdHtml(boolean mode, String name, long identity){
  String html="";
  html+="    .controlls:hover{\n";
  if(mode){
    html+="   background-color:#a2e0dd;\n";
    html+="   color:black;\n";
  }
  else{
    html+="   background-color:#a2e0dd;\n";
    html+="   color:black;\n";
  }
  html+="}\n";
  html+="    @media all and (orientation:portrait){\n";
  html+="      .controlls{\n";
  html+="        padding:20px 0px;\n";
  html+="        width:100%;\n";
  html+="        float:none;\n";
  html+="        font-size:1.5em;\n";
  html+="        margin:10px 0px;\n";
  html+="      }\n";
  html+="    }\n";
  html+="    </style>\n";
  html+="    </head>\n";
  html+="    <body>\n";
  html+="      <div class=\"wrapper\">\n";
  html+="        <h2 class=\"header\">Control Panel";
  html+="         <a href=\"/";
  html+=identity;
  html+="/setting\"><i class=\"fas fa-cog\"></i></a></h2>\n";
  html+="        <div class=\"espid\">Home Automation V1.0</div>\n";
  html+="        <dic class=\"sub\">";
  html+=name;
  html+="'s Room</div>\n";
  return html;
}
String homeCall(boolean color_mode, String name, String devices, String state, long identity){
  String html="";
  html+=getFirstHtml(identity);
  html+=getSecoundHtml(color_mode);
  html+=getThirdHtml(color_mode, name, identity);
  
  for(uint8_t i=0;i<devices.length();i++){
    switch(devices[i]){
      case '0':
      html+=getFan((int)state[i]-'0', identity, (String)i);
      break;
      case '1':
      html+=getTv((int)state[i]-'0', identity, (String)i);
      break;
      case '2':
      html+=getLight((int)state[i]-'0', identity, (String)i);
      break;
      case '3':
      html+=getPlug((int)state[i]-'0', identity, (String)i);
      break;
      case '4':
      html+=getShower((int)state[i]-'0', identity, (String)i);
      break;
      case '5':
      html+=getDoor((int)state[i]-'0', identity, (String)i);
      break;
    }
  }
  html+="        </div>\n";
  html+="        </body>\n";
  html+="        </html>\n";
  return html;
}
