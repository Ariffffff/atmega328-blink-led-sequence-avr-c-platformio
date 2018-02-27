#include <Arduino.h>
#include <stdint.h>
#include <util/delay.h>

int main(void){
  // set output pins
  DDRC = 0b11111111;
  // set all low
  PORTC = 0x00;
  // set initial led pin
  uint8_t whichled = 0b00000001;

  while(1){
    // write led pins
    PORTC = whichled;

    // shit Bit
    whichled = whichled<<1;

    //if bit is max than reset
    if(whichled == 0b00100000){
      whichled = 0b00000001;
    }

    _delay_ms(50);

  }
}
