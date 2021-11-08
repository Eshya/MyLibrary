/**
 * strings_en.h
 * engligh strings for
 * WiFiManager, a library for the ESP8266/Arduino platform
 * for configuration of WiFi credentials using a Captive Portal
 * 
 * @author Creator tzapu
 * @author tablatronix
 * @version 0.0.0
 * @license MIT
 */

#ifndef _WM_STRINGS_H_
#define _WM_STRINGS_H_

#ifndef WIFI_MANAGER_OVERRIDE_STRINGS
// !!! THIS DOES NOT WORK, you cannot define in a sketch, if anyone one knows how to order includes to be able to do this help!

const char HTTP_HEAD_START[]       PROGMEM = "<!DOCTYPE html><html lang='en'><head><meta name='format-detection' content='telephone=no'><meta charset='UTF-8'><meta  name='viewport' content='width=device-width,initial-scale=1,user-scalable=no'/><title>{v}</title>";
const char HTTP_SCRIPT[]           PROGMEM = "<script>function c(l){"
"document.getElementById('s').value=l.innerText||l.textContent;"
"p = l.nextElementSibling.classList.contains('l');"
"document.getElementById('p').disabled = !p;"
"if(p)document.getElementById('p').focus();}</script>";

const char HTTP_HEAD_END[]         PROGMEM = "</head><body class='{c}'><div class='wrap'>";
// example of embedded logo, base64 encoded inline, No styling here
// const char HTTP_ROOT_MAIN[]        PROGMEM = "<img title=' alt=' src='data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAADAAAAAwCAYAAABXAvmHAAADQElEQVRoQ+2YjW0VQQyE7Q6gAkgFkAogFUAqgFQAVACpAKiAUAFQAaECQgWECggVGH1PPrRvn3dv9/YkFOksoUhhfzwz9ngvKrc89JbnLxuA/63gpsCmwCADWwkNEji8fVNgotDM7osI/x777x5l9F6JyB8R4eeVql4P0y8yNsjM7KGIPBORp558T04A+CwiH1UVUItiUQmZ2XMReSEiAFgjAPBeVS96D+sCYGaUx4cFbLfmhSpnqnrZuqEJgJnd8cQplVLciAgX//Cf0ToIeOB9wpmloLQAwpnVmAXgdf6pwjpJIz+XNoeZQQZlODV9vhc1Tuf6owrAk/8qIhFbJH7eI3eEzsvydQEICqBEkZwiALfF70HyHPpqScPV5HFjeFu476SkRA0AzOfy4hYwstj2ZkDgaphE7m6XqnoS7Q0BOPs/sw0kDROzjdXcCMFCNwzIy0EcRcOvBACfh4k0wgOmBX4xjfmk4DKTS31hgNWIKBCI8gdzogTgjYjQWFMw+o9LzJoZ63GUmjWm2wGDc7EvDDOj/1IVMIyD9SUAL0WEhpriRlXv5je5S+U1i2N88zdPuoVkeB+ls4SyxCoP3kVm9jsjpEsBLoOBNC5U9SwpGdakFkviuFP1keblATkTENTYcxkzgxTKOI3jyDxqLkQT87pMA++H3XvJBYtsNbBN6vuXq5S737WqHkW1VgMQNXJ0RshMqbbT33sJ5kpHWymzcJjNTeJIymJZtSQd9NHQHS1vodoFoTMkfbJzpRnLzB2vi6BZAJxWaCr+62BC+jzAxVJb3dmmiLzLwZhZNPE5e880Suo2AZgB8e8idxherqUPnT3brBDTlPxO3Z66rVwIwySXugdNd+5ejhqp/+NmgIwGX3Py3QBmlEi54KlwmjkOytQ+iJrLJj23S4GkOeecg8G091no737qvRRdzE+HLALQoMTBbJgBsCj5RSWUlUVJiZ4SOljb05eLFWgoJ5oY6yTyJp62D39jDANoKKcSocPJD5dQYzlFAFZJflUArgTPZKZwLXAnHmerfJquUkKZEgyzqOb5TuDt1P3nwxobqwPocZA11m4A1mBx5IxNgRH21ti7KbAGiyNn3HoF/gJ0w05A8xclpwAAAABJRU5ErkJggg==' /><h1>{v}</h1><h3>WiFiManager</h3>";
const char HTTP_ROOT_MAIN[]        PROGMEM = "<h1>{v}</h1><img class=\"logoxuro\"  src=\"data:image/png;base64,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\"/><h3>WiFiManager</h3>";
const char * const HTTP_PORTAL_MENU[] PROGMEM = {
"<form action='/wifi'    method='get'><button>Configure WiFi</button></form><br/>\n", // MENU_WIFI
"<form action='/0wifi'   method='get'><button>Configure WiFi (No Scan)</button></form><br/>\n", // MENU_WIFINOSCAN
"<form action='/info'    method='get'><button>Info</button></form><br/>\n", // MENU_INFO
"<form action='/param'   method='get'><button>Setup</button></form><br/>\n",//MENU_PARAM
"<form action='/close'   method='get'><button>Close</button></form><br/>\n", // MENU_CLOSE
"<form action='/restart' method='get'><button>Restart</button></form><br/>\n",// MENU_RESTART
"<form action='/exit'    method='get'><button>Exit</button></form><br/>\n",  // MENU_EXIT
"<form action='/erase'   method='get'><button class='D'>Erase</button></form><br/>\n", // MENU_ERASE
"<hr><br/>" // MENU_SEP
};

// const char HTTP_PORTAL_OPTIONS[]   PROGMEM = strcat(HTTP_PORTAL_MENU[0] , HTTP_PORTAL_MENU[3] , HTTP_PORTAL_MENU[7]);
const char HTTP_PORTAL_OPTIONS[]   PROGMEM = "";
const char HTTP_ITEM_QI[]          PROGMEM = "<div role='img' aria-label='{r}%' title='{r}%' class='q q-{q} {i} {h}'></div>"; // rssi icons
const char HTTP_ITEM_QP[]          PROGMEM = "<div class='q {h}'>{r}%</div>"; // rssi percentage
const char HTTP_ITEM[]             PROGMEM = "<div><a href='#p' onclick='c(this)'>{v}</a>{qi}{qp}</div>"; // {q} = HTTP_ITEM_QI, {r} = HTTP_ITEM_QP
// const char HTTP_ITEM[]            PROGMEM = "<div><a href='#p' onclick='c(this)'>{v}</a> {R} {r}% {q} {e}</div>"; // test all tokens

const char HTTP_FORM_START[]       PROGMEM = "<form method='POST' action='{v}'>";
const char HTTP_FORM_WIFI[]        PROGMEM = "<label for='s'>SSID</label><input id='s' name='s' maxlength='32' autocorrect='off' autocapitalize='none' placeholder='{v}'><br/><label for='p'>Password</label><input id='p' name='p' maxlength='64' type='password' placeholder='{p}'>";
const char HTTP_FORM_WIFI_END[]    PROGMEM = "";
const char HTTP_FORM_STATIC_HEAD[] PROGMEM = "<hr><br/>";
const char HTTP_FORM_END[]         PROGMEM = "<br/><br/><button type='submit'>Save</button></form>";
const char HTTP_FORM_LABEL[]       PROGMEM = "<label for='{i}'>{t}</label>";
const char HTTP_FORM_PARAM_HEAD[]  PROGMEM = "<hr><br/>";
const char HTTP_FORM_PARAM[]       PROGMEM = "<br/><input id='{i}' name='{n}' maxlength='{l}' value='{v}' {c}>";
const char HTTP_FORM_PARAM2[]      PROGMEM = "<br/><input style='width:20%;' type='checkbox' id='{i}' name='{n}' maxlength={l}  value='{v}' {c}><label style='width:10%;' for='{fr}'>IP</label><span> : </span> <input style='width:50%;' id='{i2}' name='{n2}' length='{l2}'  value='{v2}' ></br>";

const char HTTP_SCAN_LINK[]        PROGMEM = "<br/><form action='/wifi?refresh=1' method='POST'><button name='refresh' value='1'>Refresh</button></form>";
const char HTTP_SAVED[]            PROGMEM = "<div class='msg'>Saving Credentials<br/>Trying to connect ESP to network.<br />If it fails reconnect to AP to try again</div>";
const char HTTP_PARAMSAVED[]       PROGMEM = "<div class='msg S'>Saved<br/></div>";
const char HTTP_END[]              PROGMEM = "</div></body></html>";
const char HTTP_ERASEBTN[]         PROGMEM = "<br/><form action='/erase' method='get'><button class='D'>Erase WiFi Config</button></form>";
const char HTTP_BACKBTN[]          PROGMEM = "<hr><br/><form action='/' method='get'><button>Back</button></form>";

const char HTTP_STATUS_ON[]        PROGMEM = "<div class='msg S'><strong>Connected</strong> to {v}<br/><em><small>with IP {i}</small></em></div>";
const char HTTP_STATUS_OFF[]       PROGMEM = "<div class='msg {c}'><strong>Not Connected</strong> to {v}{r}</div>";
const char HTTP_STATUS_OFFPW[]     PROGMEM = "<br/>Authentication Failure"; // STATION_WRONG_PASSWORD,  no eps32
const char HTTP_STATUS_OFFNOAP[]   PROGMEM = "<br/>AP not found";   // WL_NO_SSID_AVAIL
const char HTTP_STATUS_OFFFAIL[]   PROGMEM = "<br/>Could not Connect"; // WL_CONNECT_FAILED
const char HTTP_STATUS_NONE[]      PROGMEM = "<div class='msg'>No AP set</div>";
const char HTTP_BR[]               PROGMEM = "<br/>";

const char HTTP_STYLE[]            PROGMEM = "<style>"
".c,body{text-align:center;font-family:verdana}div,input{padding:5px;font-size:1em;margin:5px 0;box-sizing:border-box;}"
"input,button,.msg{border-radius:.3rem;width: 100%}"
"button,input[type='button'],input[type='submit']{cursor:pointer;border:0;background-color:#1fa3ec;color:#fff;line-height:2.4rem;font-size:1.2rem;width:100%}"
"input[type='file']{border:1px solid #1fa3ec}"
".wrap {text-align:left;display:inline-block;min-width:260px;max-width:500px}"
// links
"a{color:#000;font-weight:700;text-decoration:none}a:hover{color:#1fa3ec;text-decoration:underline}"
// quality icons
".q{height:16px;margin:0;padding:0 5px;text-align:right;min-width:38px;float:right}.q.q-0:after{background-position-x:0}.q.q-1:after{background-position-x:-16px}.q.q-2:after{background-position-x:-32px}.q.q-3:after{background-position-x:-48px}.q.q-4:after{background-position-x:-64px}.q.l:before{background-position-x:-80px;padding-right:5px}.ql .q{float:left}.q:after,.q:before{content:'';width:16px;height:16px;display:inline-block;background-repeat:no-repeat;background-position: 16px 0;"
"background-image:url('data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAAGAAAAAQCAMAAADeZIrLAAAAJFBMVEX///8AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAADHJj5lAAAAC3RSTlMAIjN3iJmqu8zd7vF8pzcAAABsSURBVHja7Y1BCsAwCASNSVo3/v+/BUEiXnIoXkoX5jAQMxTHzK9cVSnvDxwD8bFx8PhZ9q8FmghXBhqA1faxk92PsxvRc2CCCFdhQCbRkLoAQ3q/wWUBqG35ZxtVzW4Ed6LngPyBU2CobdIDQ5oPWI5nCUwAAAAASUVORK5CYII=');}"
// icons @2x media query (32px rescaled)
"@media (-webkit-min-device-pixel-ratio: 2),(min-resolution: 192dpi){.q:before,.q:after {"
"background-image:url('data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAALwAAAAgCAMAAACfM+KhAAAALVBMVEX///8AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAADAOrOgAAAADnRSTlMAESIzRGZ3iJmqu8zd7gKjCLQAAACmSURBVHgB7dDBCoMwEEXRmKlVY3L//3NLhyzqIqSUggy8uxnhCR5Mo8xLt+14aZ7wwgsvvPA/ofv9+44334UXXngvb6XsFhO/VoC2RsSv9J7x8BnYLW+AjT56ud/uePMdb7IP8Bsc/e7h8Cfk912ghsNXWPpDC4hvN+D1560A1QPORyh84VKLjjdvfPFm++i9EWq0348XXnjhhT+4dIbCW+WjZim9AKk4UZMnnCEuAAAAAElFTkSuQmCC');"
"background-size: 95px 16px;}}"
// msg callouts
".msg{padding:20px;margin:20px 0;border:1px solid #eee;border-left-width:5px;border-left-color:#777}.msg h4{margin-top:0;margin-bottom:5px}.msg.P{border-left-color:#1fa3ec}.msg.P h4{color:#1fa3ec}.msg.D{border-left-color:#dc3630}.msg.D h4{color:#dc3630}.msg.S{border-left-color: #5cb85c}.msg.S h4{color: #5cb85c}"
// lists
"dt{font-weight:bold}dd{margin:0;padding:0 0 0.5em 0;min-height:12px}"
"td{vertical-align: top;}"
".h{display:none}"
"button.D{background-color:#dc3630}"
// invert
"body.invert,body.invert a,body.invert h1 {background-color:#060606;color:#fff;}"
"body.invert .msg{color:#fff;background-color:#282828;border-top:1px solid #555;border-right:1px solid #555;border-bottom:1px solid #555;}"
"body.invert .q[role=img]{-webkit-filter:invert(1);filter:invert(1);}"
"input:disabled {opacity: 0.5;}"
//logo
".logoxuro{display: block;margin-left: auto;margin-right: auto; width: 40%; }"
"</style>";

const char HTTP_HELP[]             PROGMEM =
 "<br/><h3>Available Pages</h3><hr>"
 "<table class='table'>"
 "<thead><tr><th>Page</th><th>Function</th></tr></thead><tbody>"
 "<tr><td><a href='/'>/</a></td>"
 "<td>Menu page.</td></tr>"
 "<tr><td><a href='/wifi'>/wifi</a></td>"
 "<td>Show WiFi scan results and enter WiFi configuration.(/0wifi noscan)</td></tr>"
 "<tr><td><a href='/wifisave'>/wifisave</a></td>"
 "<td>Save WiFi configuration information and configure device. Needs variables supplied.</td></tr>"
 "<tr><td><a href='/param'>/param</a></td>"
 "<td>Parameter page</td></tr>"
 "<tr><td><a href='/info'>/info</a></td>"
 "<td>Information page</td></tr>"
 "<tr><td><a href='/close'>/close</a></td>"
 "<td>Close the captiveportal popup,configportal will remain active</td></tr>"
 "<tr><td><a href='/exit'>/exit</a></td>"
 "<td>Exit Config Portal, configportal will close</td></tr>"
 "<tr><td><a href='/restart'>/restart</a></td>"
 "<td>Reboot the device</td></tr>"
 "<tr><td><a href='/erase'>/erase</a></td>"
 "<td>Erase WiFi configuration and reboot Device. Device will not reconnect to a network until new WiFi configuration data is entered.</td></tr>"
 "</table>"
 "<p/>More information about WiFiManager at <a href='https://github.com/tzapu/WiFiManager'>https://github.com/tzapu/WiFiManager</a>.";

#ifdef WM_JSTEST
const char HTTP_JS[] PROGMEM = 
"<script>function postAjax(url, data, success) {"
"    var params = typeof data == 'string' ? data : Object.keys(data).map("
"            function(k){ return encodeURIComponent(k) + '=' + encodeURIComponent(data[k]) }"
"        ).join('&');"
"    var xhr = window.XMLHttpRequest ? new XMLHttpRequest() : new ActiveXObject(\"Microsoft.XMLHTTP\");"
"    xhr.open('POST', url);"
"    xhr.onreadystatechange = function() {"
"        if (xhr.readyState>3 && xhr.status==200) { success(xhr.responseText); }"
"    };"
"    xhr.setRequestHeader('X-Requested-With', 'XMLHttpRequest');"
"    xhr.setRequestHeader('Content-Type', 'application/x-www-form-urlencoded');"
"    xhr.send(params);"
"    return xhr;}"
"postAjax('/status', 'p1=1&p2=Hello+World', function(data){ console.log(data); });"
"postAjax('/status', { p1: 1, p2: 'Hello World' }, function(data){ console.log(data); });"
"</script>";
#endif

// Info html
#ifdef ESP32
	const char HTTP_INFO_esphead[]    PROGMEM = "<h3>esp32</h3><hr><dl>";
	const char HTTP_INFO_chiprev[]    PROGMEM = "<dt>Chip Rev</dt><dd>{1}</dd>";
  const char HTTP_INFO_lastreset[]    PROGMEM = "<dt>Last reset reason</dt><dd>CPU0: {1}<br/>CPU1: {2}</dd>";
  const char HTTP_INFO_aphost[]       PROGMEM = "<dt>Acccess Point Hostname</dt><dd>{1}</dd>";  
#else 
	const char HTTP_INFO_esphead[]    PROGMEM = "<h3>esp8266</h3><hr><dl>";
	const char HTTP_INFO_flashsize[]  PROGMEM = "<dt>Real Flash Size</dt><dd>{1} bytes</dd>";
	const char HTTP_INFO_fchipid[]    PROGMEM = "<dt>Flash Chip ID</dt><dd>{1}</dd>";
	const char HTTP_INFO_corever[]    PROGMEM = "<dt>Core Version</dt><dd>{1}</dd>";
	const char HTTP_INFO_bootver[]    PROGMEM = "<dt>Boot Version</dt><dd>{1}</dd>";
	const char HTTP_INFO_memsketch[]  PROGMEM = "<dt>Memory - Sketch Size</dt><dd>Used / Total bytes<br/>{1} / {2}";
	const char HTTP_INFO_memsmeter[]  PROGMEM = "<br/><progress value='{1}' max='{2}'></progress></dd>";
	const char HTTP_INFO_lastreset[]  PROGMEM = "<dt>Last reset reason</dt><dd>{1}</dd>";
#endif

const char HTTP_INFO_freeheap[]   PROGMEM = "<dt>Memory - Free Heap</dt><dd>{1} bytes available</dd>"; 
const char HTTP_INFO_wifihead[]   PROGMEM = "<br/><h3>WiFi</h3><hr>";
const char HTTP_INFO_uptime[]     PROGMEM = "<dt>Uptime</dt><dd>{1} Mins {2} Secs</dd>";
const char HTTP_INFO_chipid[]     PROGMEM = "<dt>Chip ID</dt><dd>{1}</dd>";
const char HTTP_INFO_idesize[]    PROGMEM = "<dt>Flash Size</dt><dd>{1} bytes</dd>";
const char HTTP_INFO_sdkver[]     PROGMEM = "<dt>SDK Version</dt><dd>{1}</dd>";
const char HTTP_INFO_cpufreq[]    PROGMEM = "<dt>CPU Frequency</dt><dd>{1}MHz</dd>";
const char HTTP_INFO_apip[]       PROGMEM = "<dt>Access Point IP</dt><dd>{1}</dd>";
const char HTTP_INFO_apmac[]      PROGMEM = "<dt>Access Point MAC</dt><dd>{1}</dd>";
const char HTTP_INFO_apssid[]     PROGMEM = "<dt>SSID</dt><dd>{1}</dd>";
const char HTTP_INFO_apbssid[]    PROGMEM = "<dt>BSSID</dt><dd>{1}</dd>";
const char HTTP_INFO_staip[]      PROGMEM = "<dt>Station IP</dt><dd>{1}</dd>";
const char HTTP_INFO_stagw[]      PROGMEM = "<dt>Station Gateway</dt><dd>{1}</dd>";
const char HTTP_INFO_stasub[]     PROGMEM = "<dt>Station Subnet</dt><dd>{1}</dd>";
const char HTTP_INFO_dnss[]       PROGMEM = "<dt>DNS Server</dt><dd>{1}</dd>";
const char HTTP_INFO_host[]       PROGMEM = "<dt>Hostname</dt><dd>{1}</dd>";
const char HTTP_INFO_stamac[]     PROGMEM = "<dt>Station MAC</dt><dd>{1}</dd>";
const char HTTP_INFO_conx[]       PROGMEM = "<dt>Connected</dt><dd>{1}</dd>";
const char HTTP_INFO_autoconx[]   PROGMEM = "<dt>Autoconnect</dt><dd>{1}</dd>";
const char HTTP_INFO_temp[]       PROGMEM = "<dt>Temperature</dt><dd>{1} C&deg; / {2} F&deg;</dd>";

// Strings
const char S_y[]                  PROGMEM = "Yes";
const char S_n[]                  PROGMEM = "No";
const char S_enable[]             PROGMEM = "Enabled";
const char S_disable[]            PROGMEM = "Disabled";
const char S_GET[]                PROGMEM = "GET";
const char S_POST[]               PROGMEM = "POST";
const char S_NA[]                 PROGMEM = "Unknown";
const char S_passph[]             PROGMEM = "********";
const char S_titlewifisaved[]     PROGMEM = "Credentials Saved";
const char S_titlewifisettings[]  PROGMEM = "Settings Saved";
const char S_titlewifi[]          PROGMEM = "Config ESP";
const char S_titleinfo[]          PROGMEM = "Info";
const char S_titleparam[]         PROGMEM = "Setup";
const char S_titleparamsaved[]    PROGMEM = "Setup Saved";
const char S_titleexit[]          PROGMEM = "Exit";
const char S_titlereset[]         PROGMEM = "Reset";
const char S_titleerase[]         PROGMEM = "Erase";
const char S_titleclose[]         PROGMEM = "Close";
const char S_options[]            PROGMEM = "options";
const char S_nonetworks[]         PROGMEM = "No networks found. Refresh to scan again.";
const char S_staticip[]           PROGMEM = "Static IP";
const char S_staticgw[]           PROGMEM = "Static Gateway";
const char S_staticdns[]          PROGMEM = "Static DNS";
const char S_subnet[]             PROGMEM = "Subnet";
const char S_exiting[]            PROGMEM = "Exiting";
const char S_resetting[]          PROGMEM = "Module will reset in a few seconds.";
const char S_closing[]            PROGMEM = "You can close the page, portal will continue to run";
const char S_error[]              PROGMEM = "An Error Occured";
const char S_notfound[]           PROGMEM = "File Not Found\n\n";
const char S_uri[]                PROGMEM = "URI: ";
const char S_method[]             PROGMEM = "\nMethod: ";
const char S_args[]               PROGMEM = "\nArguments: ";
const char S_parampre[]           PROGMEM = "param_";

// debug strings
const char D_HR[]                 PROGMEM = "--------------------";

// END WIFI_MANAGER_OVERRIDE_STRINGS
#endif

// -----------------------------------------------------------------------------------------------
// DO NOT EDIT BELOW THIS LINE

const uint8_t _nummenutokens = 9;
const char * const _menutokens[9] PROGMEM = {
    "wifi",
    "wifinoscan",
    "info",
    "param",
    "close",
    "restart",
    "exit",
    "erase",
    "sep"
};

const char R_root[]               PROGMEM = "/";
const char R_wifi[]               PROGMEM = "/wifi";
const char R_wifinoscan[]         PROGMEM = "/0wifi";
const char R_wifisave[]           PROGMEM = "/wifisave";
const char R_info[]               PROGMEM = "/info";
const char R_param[]              PROGMEM = "/param";
const char R_paramsave[]          PROGMEM = "/paramsave";
const char R_restart[]            PROGMEM = "/restart";
const char R_exit[]               PROGMEM = "/exit";
const char R_close[]              PROGMEM = "/close";
const char R_erase[]              PROGMEM = "/erase"; 
const char R_status[]             PROGMEM = "/status";


//Strings
const char S_ip[]                 PROGMEM = "ip";
const char S_gw[]                 PROGMEM = "gw";
const char S_sn[]                 PROGMEM = "sn";
const char S_dns[]                PROGMEM = "dns";

// softap ssid default prefix
#ifdef ESP8266
	const char S_ssidpre[]        PROGMEM = "ESP";
#elif defined(ESP32)
	const char S_ssidpre[]        PROGMEM = "ESP32";
#else
	const char S_ssidpre[]        PROGMEM = "WM";
#endif

//Tokens
//@todo consolidate and reduce
const char T_ss[]                 PROGMEM = "{"; // token start sentinel
const char T_es[]                 PROGMEM = "}"; // token end sentinel
const char T_1[]                  PROGMEM = "{1}"; // @token 1
const char T_2[]                  PROGMEM = "{2}"; // @token 2
const char T_v[]                  PROGMEM = "{v}"; // @token v
const char T_v2[]                 PROGMEM = "{v2}"; // @token v
const char T_I[]                  PROGMEM = "{I}"; // @token I
const char T_i[]                  PROGMEM = "{i}"; // @token i
const char T_i2[]                 PROGMEM = "{i2}"; // @token i
const char T_n[]                  PROGMEM = "{n}"; // @token n
const char T_n2[]                 PROGMEM = "{n2}"; // @token n
const char T_p[]                  PROGMEM = "{p}"; // @token p
const char T_t[]                  PROGMEM = "{t}"; // @token t
const char T_t2[]                  PROGMEM = "{t2}"; // @token t
const char T_l[]                  PROGMEM = "{l}"; // @token l
const char T_l2[]                 PROGMEM = "{l2}"; // @token l
const char T_c[]                  PROGMEM = "{c}"; // @token c
const char T_e[]                  PROGMEM = "{e}"; // @token e
const char T_q[]                  PROGMEM = "{q}"; // @token q
const char T_r[]                  PROGMEM = "{r}"; // @token r
const char T_R[]                  PROGMEM = "{R}"; // @token R
const char T_h[]                  PROGMEM = "{h}"; // @token h

// http
const char HTTP_HEAD_CL[]         PROGMEM = "Content-Length";
const char HTTP_HEAD_CT[]         PROGMEM = "text/html";
const char HTTP_HEAD_CT2[]        PROGMEM = "text/plain";
const char HTTP_HEAD_CORS[]       PROGMEM = "Access-Control-Allow-Origin";
const char HTTP_HEAD_CORS_ALLOW_ALL[]  PROGMEM = "*";

const char * const WIFI_STA_STATUS[] PROGMEM
{
  "WL_IDLE_STATUS",     // 0 STATION_IDLE
  "WL_NO_SSID_AVAIL",   // 1 STATION_NO_AP_FOUND
  "WL_SCAN_COMPLETED",  // 2
  "WL_CONNECTED",       // 3 STATION_GOT_IP
  "WL_CONNECT_FAILED",  // 4 STATION_CONNECT_FAIL, STATION_WRONG_PASSWORD(NI)
  "WL_CONNECTION_LOST", // 5
  "WL_DISCONNECTED",    // 6 
  "WL_STATION_WRONG_PASSWORD" // 7 KLUDGE 
};

#ifdef ESP32
const char * const AUTH_MODE_NAMES[] PROGMEM
{
    "OPEN",
    "WEP",             
    "WPA_PSK",         
    "WPA2_PSK",        
    "WPA_WPA2_PSK",    
    "WPA2_ENTERPRISE", 
    "MAX"
};
#elif defined(ESP8266)
const char * const AUTH_MODE_NAMES[] PROGMEM
{
    "",
    "",
    "WPA_PSK",      // 2 ENC_TYPE_TKIP
    "",
    "WPA2_PSK",     // 4 ENC_TYPE_CCMP
    "WEP",          // 5 ENC_TYPE_WEP
    "",
    "OPEN",         //7 ENC_TYPE_NONE
    "WPA_WPA2_PSK", // 8 ENC_TYPE_AUTO
};
#endif

const char* const WIFI_MODES[] PROGMEM = { "NULL", "STA", "AP", "STA+AP" };


#ifdef ESP32
// as 2.5.2
// typedef struct {
//     char                  cc[3];   /**< country code string */
//     uint8_t               schan;   /**< start channel */
//     uint8_t               nchan;   /**< total channel number */
//     int8_t                max_tx_power;   /**< This field is used for getting WiFi maximum transmitting power, call esp_wifi_set_max_tx_power to set the maximum transmitting power. */
//     wifi_country_policy_t policy;  /**< country policy */
// } wifi_country_t;
const wifi_country_t WM_COUNTRY_US{"US",1,11,CONFIG_ESP32_PHY_MAX_TX_POWER,WIFI_COUNTRY_POLICY_AUTO};
const wifi_country_t WM_COUNTRY_CN{"CN",1,13,CONFIG_ESP32_PHY_MAX_TX_POWER,WIFI_COUNTRY_POLICY_AUTO};
const wifi_country_t WM_COUNTRY_JP{"JP",1,14,CONFIG_ESP32_PHY_MAX_TX_POWER,WIFI_COUNTRY_POLICY_AUTO};
#elif defined(ESP8266)
// typedef struct {
//     char cc[3];               /**< country code string */
//     uint8_t schan;            /**< start channel */
//     uint8_t nchan;            /**< total channel number */
//     uint8_t policy;           /**< country policy */
// } wifi_country_t;
const wifi_country_t WM_COUNTRY_US{"US",1,11,WIFI_COUNTRY_POLICY_AUTO};
const wifi_country_t WM_COUNTRY_CN{"CN",1,13,WIFI_COUNTRY_POLICY_AUTO};
const wifi_country_t WM_COUNTRY_JP{"JP",1,14,WIFI_COUNTRY_POLICY_AUTO};
#endif

#endif