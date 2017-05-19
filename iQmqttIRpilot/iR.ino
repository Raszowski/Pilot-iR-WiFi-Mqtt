void messageReceived(String topic, String payload, char * bytes, unsigned int length) {
  // Serial.print("incoming: ");
  Serial.print(topic);
  Serial.print(" ");
  Serial.print(payload);
  Serial.println();
  if (topic.indexOf("/iQ/#") >= 0) {
    //switch control, parse out the channel and plug id

    int channel = getValue(topic, '/', 3).toInt();
    int plug = getValue(topic, '/', 4).toInt();

  }

  if (topic.indexOf("/iQ/PILOT/PWR") >= 0) {
    if (payload == "ON") {
      Serial.println("POWER");

      irsend.sendSAMSUNG(0xE0E040BF, 32);
    }
  }

  if (topic.indexOf("/iQ/PILOT/VUP") >= 0) {
    if (payload == "ON") {
      Serial.println("VUP");
      irsend.sendSAMSUNG(0xE0E0E01F, 32);
    }
  }

  if (topic.indexOf("/iQ/PILOT/VDOWN") >= 0) {
    if (payload == "ON") {
      Serial.println("VDOWN");
      irsend.sendSAMSUNG(0xE0E0D02F, 32);
    }
  }

  if (topic.indexOf("/iQ/PILOT/VOL") >= 0) {
    if (payload == "ON") {
      Serial.println("V+");
      irsend.sendSAMSUNG(0xE0E0E01F, 32);
    } else if (payload == "OFF")
      irsend.sendSAMSUNG(0xE0E0D02F, 32);
  }


  if (topic.indexOf("/iQ/PILOT/HDMI") >= 0) {
    if (payload == "ON") {
      Serial.println("HDMI");
      irsend.sendSAMSUNG(0xE0E0D12E, 32);
    }
  }

  if (topic.indexOf("/iQ/PILOT/SOURCE") >= 0) {
    if (payload == "ON") {
      Serial.println("SOURCE");
      irsend.sendSAMSUNG(0xE0E0807F, 32);
    }
  }

  if (topic.indexOf("/iQ/PILOT/MENU") >= 0) {
    if (payload == "ON") {
      Serial.println("MENU");
      irsend.sendSAMSUNG(0xE0E058A7, 32);
    }
  }

  if (topic.indexOf("/iQ/PILOT/SUP") >= 0) {
    if (payload == "ON") {
      Serial.println("UP");
      irsend.sendSAMSUNG(0xE0E006F9, 32);
    }
  }
  if (topic.indexOf("/iQ/PILOT/SDOWN") >= 0) {
    if (payload == "ON") {
      Serial.println("DOWN");
      irsend.sendSAMSUNG(0xE0E08679, 32);
    }
  }
  if (topic.indexOf("/iQ/PILOT/SLEFT") >= 0) {
    if (payload == "ON") {
      Serial.println("LEFT");
      irsend.sendSAMSUNG(0xE0E0A659, 32);
    }
  }
  if (topic.indexOf("/iQ/PILOT/SRIGHT") >= 0) {
    if (payload == "ON") {
      Serial.println("RIGHT");
      irsend.sendSAMSUNG(0xE0E046B9, 32);
    }
  }
  if (topic.indexOf("/iQ/PILOT/MUTE") >= 0) {
    if (payload == "ON") {
      Serial.println("MUTE");
      irsend.sendSAMSUNG(0xE0E0F00F, 32);
    }
  }
  if (topic.indexOf("/iQ/PILOT/EXIT") >= 0) {
    if (payload == "ON") {
      Serial.println("EXIT");
      irsend.sendSAMSUNG(0xE0E0B44B, 32);
    }
  }
  if (topic.indexOf("/iQ/PILOT/RETURN") >= 0) {
    if (payload == "ON") {
      Serial.println("RETURN");
      irsend.sendSAMSUNG(0xE0E01AE5, 32);
    }
  }
  if (topic.indexOf("/iQ/PILOT/OK") >= 0) {
    if (payload == "ON") {
      Serial.println("OK");
      irsend.sendSAMSUNG(0xE0E016E9, 32);
    }
  }
  if (topic.indexOf("/iQ/PILOT/SPANIE60") >= 0) {
    if (payload == "ON") {
      Serial.println("DO SPANIA");
      irsend.sendSAMSUNG(0xE0E058A7, 32);
      delay(400);
      irsend.sendSAMSUNG(0xE0E006F9, 32);
      delay(400);
      irsend.sendSAMSUNG(0xE0E046B9, 32);
      delay(400);
      irsend.sendSAMSUNG(0xE0E08679, 32);
      delay(400);
      irsend.sendSAMSUNG(0xE0E046B9, 32);
      delay(400);
      irsend.sendSAMSUNG(0xE0E08679, 32);
      delay(400);
      irsend.sendSAMSUNG(0xE0E046B9, 32);
      delay(400);
      irsend.sendSAMSUNG(0xE0E08679, 32);
      delay(400);
      irsend.sendSAMSUNG(0xE0E08679, 32);
      delay(400);
      irsend.sendSAMSUNG(0xE0E08679, 32);
      delay(400);
      irsend.sendSAMSUNG(0xE0E01AE5, 32);
      delay(400);
      irsend.sendSAMSUNG(0xE0E0B44B, 32);
    }
  }
  if (topic.indexOf("/iQ/PILOT/SPANIE90") >= 0) {
    if (payload == "ON") {
      Serial.println("DO SPANIA");
      irsend.sendSAMSUNG(0xE0E058A7, 32);
      delay(400);
      irsend.sendSAMSUNG(0xE0E006F9, 32);
      delay(400);
      irsend.sendSAMSUNG(0xE0E046B9, 32);
      delay(400);
      irsend.sendSAMSUNG(0xE0E08679, 32);
      delay(400);
      irsend.sendSAMSUNG(0xE0E046B9, 32);
      delay(400);
      irsend.sendSAMSUNG(0xE0E08679, 32);
      delay(400);
      irsend.sendSAMSUNG(0xE0E046B9, 32);
      delay(400);
      irsend.sendSAMSUNG(0xE0E08679, 32);
      delay(400);
      irsend.sendSAMSUNG(0xE0E08679, 32);
      delay(400);
      irsend.sendSAMSUNG(0xE0E08679, 32);
      delay(400);
      irsend.sendSAMSUNG(0xE0E01AE5, 32);
      delay(400);
      irsend.sendSAMSUNG(0xE0E0B44B, 32);
    }
  }

  // APPLE REMOTE

    if (topic.indexOf("/iQ/ATV/GORA") >= 0) {
    if (payload == "ON") {
      Serial.println("GORA");
      irsend.sendSAMSUNG(0xE0FAC0E5, 32);
    }
  }

    if (topic.indexOf("/iQ/ATV/DOL") >= 0) {
    if (payload == "ON") {
      Serial.println("DOL");
      irsend.sendSAMSUNG(0xE0FAC1E5, 32);
    }
  }

    if (topic.indexOf("/iQ/ATV/LEWO") >= 0) {
    if (payload == "ON") {
      Serial.println("LEWO");
      irsend.sendSAMSUNG(0xE0FAC2E5, 32);
    }
  }

    if (topic.indexOf("/iQ/ATV/PRAWO") >= 0) {
    if (payload == "ON") {
      Serial.println("PRAWO");
      irsend.sendSAMSUNG(0xE0FAC3E5, 32);
    }
  }

    if (topic.indexOf("/iQ/ATV/WYBIERZ") >= 0) {
    if (payload == "ON") {
      Serial.println("WYBIERZ");
      irsend.sendSAMSUNG(0xE0FAC4E5, 32);
    }
  }

      if (topic.indexOf("/iQ/ATV/ATVMENU") >= 0) {
    if (payload == "ON") {
      Serial.println("ATVMENU");
      irsend.sendSAMSUNG(0xE0FAC5E5, 32);
    }
  }

      if (topic.indexOf("/iQ/ATV/ATVPLAY") >= 0) {
    if (payload == "ON") {
      Serial.println("ATVPLAY");
      irsend.sendSAMSUNG(0xE0CAC8E5, 32);
    }
  }

        if (topic.indexOf("/iQ/ATV/ATVPAUSE") >= 0) {
    if (payload == "ON") {
      Serial.println("ATVPAUSE");
      irsend.sendSAMSUNG(0xE0CAC7E5, 32);
    }
  }

        if (topic.indexOf("/iQ/ATV/ATVSTOP") >= 0) {
    if (payload == "ON") {
      Serial.println("ATVSTOP");
      irsend.sendSAMSUNG(0xE0CAC9E5, 32);
    }
  }

        if (topic.indexOf("/iQ/ATV/ATVFWR") >= 0) {
    if (payload == "ON") {
      Serial.println("ATVFWR");
      irsend.sendSAMSUNG(0xE0CA11E5, 32);
    }
  }

        if (topic.indexOf("/iQ/ATV/ATVBWR") >= 0) {
    if (payload == "ON") {
      Serial.println("ATVBWR");
      irsend.sendSAMSUNG(0xE0CA10E5, 32);
    }
  }

        if (topic.indexOf("/iQ/ATV/ATVNEXT") >= 0) {
    if (payload == "ON") {
      Serial.println("ATVNEXT");
      irsend.sendSAMSUNG(0xE0CA12E5, 32);
    }
  }

        if (topic.indexOf("/iQ/ATV/ATVREV") >= 0) {
    if (payload == "ON") {
      Serial.println("ATVREV");
      irsend.sendSAMSUNG(0xE0CA13E5, 32);
    }
  }

        if (topic.indexOf("/iQ/ATV/ATVFF") >= 0) {
    if (payload == "ON") {
      Serial.println("ATVFF");
      irsend.sendSAMSUNG(0xE0CA14E5, 32);
    }
  }

        if (topic.indexOf("/iQ/ATV/ATVBB") >= 0) {
    if (payload == "ON") {
      Serial.println("ATVBB");
      irsend.sendSAMSUNG(0xE0CA15E5, 32);
    }
  }

  
}

/*
  0xE0E040BF - POWER ON/OFF
  0xE0E0E01F - volup
  0xE0E0D02F - voldown
  0xE0E0D12E - HDMI
  0xE0E0807F - source
  0xE0E058A7 - menu

  0xE0E006F9 - up
  0xE0E08679 - down
  0xE0E0A659 - left
  0xE0E046B9 - right

  0xE0E0F00F - mute

  0xE0E0B44B - exit
  0xE0E01AE5 - return
  0xE0E016E9 - OK

*/

