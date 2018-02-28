
#include <Keyboard.h>
int KEYED = 4;
void setup() {
  //preset all used pins to use internal resistors
  pinMode(2, INPUT_PULLUP);
  pinMode(3, INPUT_PULLUP);
  pinMode(4, INPUT_PULLUP);
  pinMode(5, INPUT_PULLUP);
  pinMode(6, INPUT_PULLUP);
  pinMode(7, INPUT_PULLUP);
  pinMode(8, INPUT_PULLUP);
  
  Keyboard.begin();
  
}

void loop() {

 //preview 1
  if(digitalRead(2)==LOW){ 
     Keyboard.press(KEY_LEFT_GUI);
    Keyboard.print("1");
     KEYED = 1;
    delay (250);
  }
  
//preview 2  
  if(digitalRead(3)==LOW){ 
    Keyboard.press(KEY_LEFT_GUI);
    Keyboard.print("2");
    Keyboard.releaseAll();
    KEYED = 2;
    delay (250);
  }
  
//preview 3
  if(digitalRead(4)==LOW){ 
    Keyboard.press(KEY_LEFT_GUI);
    Keyboard.print("3");
    Keyboard.releaseAll();
    KEYED = 3;
    delay (250);
  }

//preview 4
  if(digitalRead(5)==LOW){ 
    Keyboard.press(KEY_LEFT_GUI);
    Keyboard.print("4");
    Keyboard.releaseAll();
    KEYED = 4;
    delay (250);
  }

//autotrans
    if(digitalRead(6)==LOW){ 
    Keyboard.press(KEY_LEFT_GUI);
    Keyboard.press(KEY_LEFT_SHIFT);
    Keyboard.print("t");
    Keyboard.releaseAll();
    delay (250);
  }

/*cut*/
if(digitalRead(7)==LOW){ 
    Keyboard.press(KEY_LEFT_GUI);
    Keyboard.press(KEY_LEFT_SHIFT);
    Keyboard.print("c");
    Keyboard.releaseAll();
    delay (250);
  }
  
/*keytoggle*/
if(digitalRead(8)==LOW){ 
    Keyboard.press(KEY_LEFT_CTRL);
    Keyboard.press(KEY_LEFT_ALT);
    if(KEYED==1){
      Keyboard.print("1");
      }
    if(KEYED==2){
      Keyboard.print("2");
    }
    if(KEYED==3){
      Keyboard.print("3");
    }
    else if(KEYED==4){
      Keyboard.print("4");
      }
    Keyboard.releaseAll();
    delay (250);
  }
  
 /* if(digitalRead(4)==LOW){
    Keyboard.press(KEY_LEFT_GUI);
    Keyboard.print("v");
    Keyboard.releaseAll();
    delay (500);
    Keyboard.press(KEY_RETURN);
    Keyboard.releaseAll();
    delay (500);
  }*/
}
