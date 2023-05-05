#include "mbed.h"

DigitalIn Left(p13);//Joystick Left
DigitalIn Right(p16);//Joystick Right

DigitalOut Red(p23);//RGB LED Red
DigitalOut Blue(p25);//RGB LED Blue


int main() {

  while(1) {
      if(Left == 1){
          Red = 0;
          Blue = 1;
      }
      else if(Right == 1){
          Red = 1;
          Blue = 0;
      }
      else if(Left == 0) + (Right == 0);{
          Red = 1;
          Blue = 1;
      }

}
}