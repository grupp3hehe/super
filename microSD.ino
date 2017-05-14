#include "SD.h"

#define SD_ChipSelectPin 53

#include "TMRpcm.h"

#include "SPI.h"

TMRpcm tmrpcm;

void setup(){
tmrpcm.speakerPin = 11;
Serial.begin(9600);
if (!SD.begin(SD_ChipSelectPin)) {
Serial.println("SD fail");
return; }
tmrpcm.setVolume(8);

tmrpcm.play("smb.wav");

}

void loop(){  
  if(Serial.available()){    
    if(Serial.read() == 'a'){ //send the letter p over the serial monitor to start playback
      tmrpcm.play("smb.wav");;
    }
    if(Serial.read() == 'b'){ //send the letter p over the serial monitor to start playback
      tmrpcm.play("skyrim.wav");
    }
    if(Serial.read() == 'p'){ //send the letter p over the serial monitor to start playback
      tmrpcm.play("skyrim.wav");
    }
  }
}
