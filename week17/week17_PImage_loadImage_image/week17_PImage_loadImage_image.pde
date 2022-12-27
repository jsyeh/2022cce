//Ctrl-N 開新檔案, 圖檔
PImage img; // 宣告變數 global全域變數
void setup(){
  size(400,400);
  img = loadImage("map.png"); // 讀入圖片
}      //圖片要事先放到資料夾

void draw(){
  image(img, 0, 0);
}
