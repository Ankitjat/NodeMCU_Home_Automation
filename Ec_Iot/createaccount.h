String createAccountHtml(){
  String html="";
  html+="<!DOCTYPE html>\n";
  html+="<html>\n";
  html+="<head>\n";
  html+="  <script src=\"https://kit.fontawesome.com/28e0a3bde9.js\" crossorigin=\"anonymous\">\n";
  html+="  </script>\n";
  html+="  <meta name=\"viewport\" content=\"width=device-width, initial-scale=1.0\"/>\n";
  html+="  <title>Create Account</title>\n";
  html+="  <script>\n";
  html+="    var check = function() {\n";
  html+="      if (document.getElementById('password').value ==\n";
  html+="        document.getElementById('confirm_password').value) {\n";
  html+="        document.getElementById('confirm_password').style.borderColor ='green';\n";
  html+="      } else {\n";
  html+="        document.getElementById('confirm_password').style.borderColor ='red';\n";
  html+="      }\n";
  html+="    }\n";
  html+="    </script>\n";
  html+="  <style>\n";
  html+="    body{\n";
  html+="      margin:0px;\n";
  html+="      padding:0px;\n";
  html+="      font-family:monospace;\n";
  html+="    }\n";
  html+="    .wrapper{\n";
  html+="      text-align:center;\n";
  html+="      display:block;\n";
  html+="      margin:100px auto;\n";
  html+="      padding-bottom:50px;\n";
  html+="      max-width:550px;\n";
  html+="      width:70%;\n";
  html+="      border-radius:20px;\n";
  html+="      background-color:#e1e4e6;\n";
  html+="    }\n";
  html+="    .ca-heading{\n";
  html+="      font-size: 1.5em;\n";
  html+="      color:white;\n";
  html+="      text-align: center;\n";
  html+="      font-weight:bold;\n";
  html+="      background-color:#66a352;\n";
  html+="      padding: 10px;\n";
  html+="      margin-bottom:40px;\n";
  html+="    }\n";
  html+="    .inputbox{\n";
  html+="      background-color:white;\n";
  html+="      border:2px solid #95a7bf;\n";
  html+="      border-radius:10px;\n";
  html+="      margin:10px auto 10px 10px;\n";
  html+="      height: 20px;\n";
  html+="      width:70%;\n";
  html+="      max-width:200px;\n";
  html+="      padding-left:25px;\n";
  html+="    }\n";
  html+="    .confirm-button{\n";
  html+="      transition: 0.5s;\n";
  html+="      color:white;\n";
  html+="      font-family:monospace;\n";
  html+="      font-weight:800;\n";
  html+="      border-radius:10px;\n";
  html+="      padding:10px 20px;\n";
  html+="      background-color: orange;\n";
  html+="      margin:10px auto 10px 0px;\n";
  html+="      border:0px;\n";
  html+="    }\n";
  html+="    .confirm-button:hover{\n";
  html+="      transition: 0.5s;\n";
  html+="      font-size:1.6em;\n";
  html+="      background-color: #74bee8;\n";
  html+="      color:white;\n";
  html+="      font-weight:900;\n";
  html+="    }\n";
  html+="    .fas{\n";
  html+="      position: absolute;\n";
  html+="      padding:15px;\n";
  html+="    }\n";
  html+="    .hov{\n";
  html+="      transition:color 0.5s;\n";
  html+="      color:#cccac6;\n";
  html+="    }\n";
  html+="    .hov:hover{\n";
  html+="      transition:color 0.5s;\n";
  html+="      color:#84bcdb;\n";
  html+="    }\n";
  html+="    </style>\n";
  html+="    </head>\n";
  html+="    <body>\n";
  html+="      <div class=\"wrapper\">\n";
  html+="        <div class=\"ca-heading\">Create Account</div>\n";
  html+="        <form action=\"/action_page\" method=\"post\">\n";
  html+="          <div class=\"hov\">\n";
  html+="            <i class=\"fas fa-signature\"></i>\n";
  html+="            <input class=\"inputbox\" type=\"text\" name=\"name\" Placeholder=\"Name\" pattern=\"[0-9A-Za-z@%*-_+=]{4,14}\" required/>\n";
  html+="            </div>\n";
  html+="          <div class=\"hov\">\n";
  html+="            <i class=\"fas fa-user\"></i>\n";
  html+="            <input class=\"inputbox\" type=\"text\" name=\"username\" Placeholder=\"Username\" pattern=\"[0-9A-Za-z]{4,14}\" required/>\n";
  html+="            </div>\n";
  html+="          <div class=\"hov\">\n";
  html+="            <i class=\"fas fa-key\"></i>\n";
  html+="            <input class=\"inputbox\" type=\"password\" id=\"password\" name=\"password\" Placeholder=\"Password\" onkeyup=\"check()\" required pattern=\"[0-9A-Za-z@%*-_+=]{4,14}\" />\n";
  html+="            </div>\n";
  html+="          <div class=\"hov\">\n";
  html+="            <i class=\"fas fa-key\"></i>\n";
  html+="            <input class=\"inputbox\" type=\"password\" id=\"confirm_password\" Placeholder=\"Confirm Password\" onkeyup=\"check()\" required pattern=\"[0-9A-Za-z@%*-_+=]{4,14}\" />\n";
  html+="            </div>\n";
  html+="          <div class=\"hov\">\n";
  html+="            <i class=\"fas fa-wifi\"></i>\n";
  html+="            <input class=\"inputbox\" type=\"text\" name=\"ssid\" Placeholder=\"WiFi SSID\" required pattern=\"[0-9A-Za-z@%*-_+=]{4,14}\" />\n";
  html+="            </div>\n";
  html+="          <div class=\"hov\">\n";
  html+="            <i class=\"fas fa-lock\"></i>\n";
  html+="            <input class=\"inputbox\" type=\"text\" name=\"wifi_password\" Placeholder=\"WiFi Password\" required pattern=\"[0-9A-Za-z@%*-_+=]{4,14}\" />\n";
  html+="          </div>\n";
  html+="          <div>\n";
  html+="            <input class=\"confirm-button\" type=\"submit\" value=\"Confirm\"/>\n";
  html+="            </div>\n";
  html+="          </form>\n";
  html+="        </div>\n";
  html+="      </body>\n";
  html+="      </html>\n";
  return html;
}
String setupPageHtml(){
  String html="";
  html+="<!DOCTYPE html>";
  html+="<html>";
  html+="<head>";
  html+="  <script src=\"https://kit.fontawesome.com/28e0a3bde9.js\" crossorigin=\"anonymous\">";
  html+="  </script>";
  html+="  <meta name=\"viewport\" content=\"width=device-width, initial-scale=1.0\"/>";
  html+="  <title>Ec IoT</title>";
  html+="  <script>\n";
  html+="  var i=0;\n";
  html+="  var css=\"button:hover{background-color:#a5ad55;}\";\n";
  html+="  function addDevice(){\n";
  html+="    document.getElementById('confirm').style.background='#0eb30e';\n";
  html+="    document.getElementById('clear').style.background='#0eb30e';\n";
  html+="    var ch = document.getElementById(\"here\");\n";
  html+="    if(i<7) {\n";
  html+="      var div = document.createElement(\"div\");\n";
  html+="        var select = document.createElement(\"select\");\n";
  html+="        select.setAttribute('form', 'main_form');\n";
  html+="        select.setAttribute('name', 'device'+i);\n";
  html+="        select.setAttribute('class', 'devices');\n";
  html+="        var Fan = document.createElement(\"option\");\n";
  html+="        Fan.value=\"Fan\";\n";
  html+="        if(i==0){\n";
  html+="          Fan.setAttribute('selected', 'selected');\n";
  html+="        }\n";
  html+="        Fan.innerText=\"Fan\";\n";
  html+="        var Tv = document.createElement(\"option\");\n";
  html+="        Tv.value=\"Tv\";\n";
  html+="        if(i==1){\n";
  html+="          Tv.setAttribute('selected', 'selected');\n";
  html+="        }\n";
  html+="        Tv.innerText=\"Tv\";\n";
  html+="        var Light = document.createElement(\"option\");\n";
  html+="        Light.value=\"Light\";\n";
  html+="        if(i==2){\n";
  html+="          Light.setAttribute('selected', 'selected');\n";
  html+="        }\n";
  html+="        Light.innerText=\"Light\";\n";
  html+="        var Door = document.createElement(\"option\");\n";
  html+="        Door.value=\"Door\";\n";
  html+="        if(i==3){\n";
  html+="          Door.setAttribute('selected', 'selected');\n";
  html+="        }\n";
  html+="        Door.innerText=\"Door\";\n";
  html+="        var Shower = document.createElement(\"option\");\n";
  html+="        Shower.value=\"Shower\";\n";
  html+="        if(i==4){\n";
  html+="          Shower.setAttribute('selected', 'selected');\n";
  html+="        }\n";
  html+="        Shower.innerText=\"Shower\";\n";
  html+="        var Plug = document.createElement(\"option\");\n";
  html+="        Plug.value=\"Plug\";\n";
  html+="        if(i==5){\n";
  html+="          Plug.setAttribute('selected', 'selected');\n";
  html+="        }\n";
  html+="        Plug.innerText=\"Plug\";\n";
  html+="        select.appendChild(Fan);\n";
  html+="        select.appendChild(Tv);\n";
  html+="        select.appendChild(Light);\n";
  html+="        select.appendChild(Plug);\n";
  html+="        select.appendChild(Shower);\n";
  html+="        select.appendChild(Door);\n";
  html+="        div.appendChild(select);\n";
  html+="        var select = document.createElement(\"select\");\n";
  html+="        select.setAttribute('form', 'main_form');\n";
  html+="        select.setAttribute('name', 'pin'+i);\n";
  html+="        select.setAttribute('class', 'pins');\n";
  html+="        var D0 = document.createElement(\"option\");\n";
  html+="        D0.value=\"D0\";\n";
  html+="        if(i==0){\n";
  html+="          D0.setAttribute('selected', 'selected');\n";
  html+="        }\n";
  html+="        D0.innerText=\"D0\";\n";
  html+="        var D1 = document.createElement(\"option\");\n";
  html+="        D1.value=\"D1\";\n";
  html+="        if(i==1){\n";
  html+="          D1.setAttribute('selected', 'selected');\n";
  html+="        }\n";
  html+="        D1.innerText=\"D1\";\n";
  html+="        var D2 = document.createElement(\"option\");\n";
  html+="        D2.value=\"D2\";\n";
  html+="        if(i==2){\n";
  html+="          D2.setAttribute('selected', 'selected');\n";
  html+="        }\n";
  html+="        D2.innerText=\"D2\";\n";
  html+="        var D3 = document.createElement(\"option\");\n";
  html+="        D3.value=\"D3\";\n";
  html+="        if(i==3){\n";
  html+="          D3.setAttribute('selected', 'selected');\n";
  html+="        }\n";
  html+="        D3.innerText=\"D3\";\n";
  html+="        var D4 = document.createElement(\"option\");\n";
  html+="        D4.value=\"D4\";\n";
  html+="        if(i==4){\n";
  html+="          D4.setAttribute('selected', 'selected');\n";
  html+="        }\n";
  html+="        D4.innerText=\"D4\";\n";
  html+="        var D5 = document.createElement(\"option\");\n";
  html+="        D5.value=\"D5\";\n";
  html+="        if(i==5){\n";
  html+="          D5.setAttribute('selected', 'selected');\n";
  html+="        }\n";
  html+="        D5.innerText=\"D5\";\n";
  html+="        var D6 = document.createElement(\"option\");\n";
  html+="        D6.value=\"D6\";\n";
  html+="        if(i==6){\n";
  html+="          D6.setAttribute('selected', 'selected');\n";
  html+="        }\n";
  html+="        D6.innerText=\"D6\";\n";
  html+="        var D7 = document.createElement(\"option\");\n";
  html+="        D7.value=\"D7\";\n";
  html+="        D7.innerText=\"D7\";\n";
  html+="        select.appendChild(D0);\n";
  html+="        select.appendChild(D1);\n";
  html+="        select.appendChild(D2);\n";
  html+="        select.appendChild(D3);\n";
  html+="        select.appendChild(D4);\n";
  html+="        select.appendChild(D5);\n";
  html+="        select.appendChild(D6);\n";
  html+="        select.appendChild(D7);\n";
  html+="        div.appendChild(select)\n";
  html+="        ch.appendChild(div);\n";
  html+="        ++i;\n";
  html+="        document.getElementById(\"number\").value=i;";
  html+="    }\n";
  html+="    else{\n";
  html+="        document.getElementById(\"add\").style.background=\"red\";\n";
  html+="    }\n";
  html+="  }\n";
  html+="  function clearDevice(){\n";
  html+="    var ch = document.getElementById(\"here\");\n";
  html+="    while (ch.firstChild) {\n";
  html+="      ch.removeChild(ch.lastChild);\n";
  html+="    }\n";
  html+="    document.getElementById(\"add\").style.background=\"#0eb30e\";\n";
  html+="    document.getElementById('confirm').style.background='red';\n";
  html+="    document.getElementById('clear').style.background='red';\n";
  html+="    i=0;\n";
  html+="    document.getElementById(\"number\").value='0';";
  html+="  }\n";
  html+="  function confirm(){\n";
  html+="    if(i>0){\n";
  html+="      document.getElementById(\"main_form\").submit();\n";
  html+="    }\n";
  html+="  }\n";
  html+="\n  </script>";
  html+="  <style>";
  html+="    body{";
  html+="      font-family:Arial;";
  html+="      margin:0px;";
  html+="      padding:0px;";
  html+="    }";
  html+="    header{";
  html+="      color:white;";
  html+="      background-color:#4b7bdb;";
  html+="      padding:10px 20px;";
  html+="    }";
  html+="    button{";
  html+="      margin:50px 0px 20px 20px;";
  html+="      height:50px;";
  html+="      width:200px;";
  html+="      background-color:#0eb30e;";
  html+="      border:none;";
  html+="      border-radius:20px;";
  html+="      font-family:sans-serif;";
  html+="      font-weight:300;";
  html+="      color:white;";
  html+="      font-size:1.3em;";
  html+="    }";
  html+="    .devices{";
  html+="      width:200px;";
  html+="      float:left;";
  html+="      margin:10px 20px;";
  html+="      padding:10px;";
  html+="      border-radius:10px;";
  html+="      border:2px solid #6d7050;;";
  html+="    }";
  html+="    .pins{";
  html+="      width:80px;";
  html+="      margin:10px 20px;";
  html+="      padding:10px;";
  html+="      border-radius:10px;";
  html+="      border:2px solid #6d7050;;";
  html+="    }";
  html+="    #clear, #confirm{";
  html+="      background-color:red;";
  html+="    }";
  html+="    .fa-plus-circle, .fa-trash{";
  html+="      color:white;";
  html+="    }";
  html+="    @media only screen and (orientation:portrait){";
  html+="      .wrapper{";
  html+="        text-align:center;";
  html+="      }";
  html+="      #clear, #confirm, #add{";
  html+="        width:80%;";
  html+="      }";
  html+="      .devices{";
  html+="        width:60%;";
  html+="        margin:10px auto 10px 15px;";
  html+="      }";
  html+="      .pins{";
  html+="        width:30%;";
  html+="        margin:10px auto;";
  html+="      }";
  html+="      #here div{";
  html+="        text-align:center;";
  html+="        width:80%;";
  html+="        margin:10px auto;";
  html+="      }";
  html+="    }";
  html+="    </style>";
  html+="    </head>";
  html+="    <body>";
  html+="      <div class=\"wrapper\">";
  html+="        <header><h1>Setup</h1></header>";
  html+="        <form action=\"/action_page\" method=\"post\" id=\"main_form\"></form>";
  html+="          <input type=\"text\" id=\"number\" name=\"total\" value=\"0\"  form=\"main_form\" hidden/>\n";
  html+="          <button type=\"button\" id=\"add\" onclick=\"addDevice()\">Add Controls&nbsp;&nbsp;<i class=\"fas fa-plus-circle\"></i></button>";
  html+="          <button type=\"button\" id=\"clear\" onclick=\"clearDevice()\">Remove All&nbsp;&nbsp;<i class=\"fas fa-trash\"></i></button>";
  html+="          <button  id=\"confirm\" type=\"button\" onclick=\"confirm()\">Confirm&nbsp;&nbsp;<i class=\"fas fa-check\"></i></button>";
  html+="          <div id =\"here\">";
  html+="            </div>";
  html+="        </div>";
  html+="      </body>";
  html+="      </html>";
  return html;
}

String restartHtml(){
  String html="";
  html+="<!DOCTYPE html>\n";
  html+="<html>\n";
  html+="<head>\n";
  html+="  <script src=\"https://kit.fontawesome.com/28e0a3bde9.js\" crossorigin=\"anonymous\">\n";
  html+="  </script>\n";
  html+="  <meta name=\"viewport\" content=\"width=device-width, initial-scale=1.0\"/>\n";
  html+="  <title>Ec IoT</title>\n";
  html+="  <script>\n";
  html+="      setTimeout(function(){window.location.href = \"http://\"+window.location.hostname+\"/\"}, 30000);\n";
  html+="    </script>\n";
  html+="  <style>\n";
  html+="    body{\n";
  html+="      margin:0px;\n";
  html+="      padding:0px;\n";
  html+="      font-family:monospace;\n";
  html+="    }\n";
  html+="    .wrapper{\n";
  html+="      text-align:center;\n";
  html+="      display:block;\n";
  html+="      margin:100px auto;\n";
  html+="      padding:50px;\n";
  html+="      max-width:450px;\n";
  html+="      width:50%;\n";
  html+="      border-radius:20px;\n";
  html+="      background-color:#e1e4e6;\n";
  html+="    }\n";
  html+="    .fa-power-off{\n";
  html+="      color:red;\n";
  html+="    }\n";
  html+="    </style>\n";
  html+="    </head>\n";
  html+="    <body>\n";
  html+="      <div class=\"wrapper\">\n";
  html+="        <i class=\"fas fa-power-off fa-8x \"></i>\n";
  html+="        <h1>Device Restarting</h1>\n";
  html+="        <p>Change Your Router SSID or Password Page are automatically Redirected To home Page after 30 Secounds.\n";
  html+="          if It Show's Some Error So please manullay type your IP Address in\n";
  html+="          Broswer Address Bar</p>\n";
  html+="        </div>\n";
  html+="      </body>\n";
  html+="      </html>\n";

  return html;
}
