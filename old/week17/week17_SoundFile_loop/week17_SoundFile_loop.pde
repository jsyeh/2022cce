//Ctrl-N 開新程式,音樂
//Sketch-Libary-Manager Libraries
//找 sound 看到 Sound 可以 Install
//裝好後, 便可以有整套聲音的功能
//File-Examples 可看到 Libraries裡
//  Sound 裡 Soundfile-SimplePlayback
//  可以看它的範例
import processing.sound.*;
SoundFile file;
void setup(){
  size(400,400);     //要先把 beat.aiff拉進來
  file = new SoundFile(this, "beat.aiff");
  file.loop();  //無限播放
}
void draw(){
  
}
