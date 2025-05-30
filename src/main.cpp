/*
#include <avr/io.h>

void config_timer(void){

    TCCR0A|=(1<<WGM01);
    TCCR0B|=(1<<CS01)|(1<<CS00);
    OCR0A=250;
}

void pausa_ms(void){

    TCNT0=0;
    while(!(TIFR0&(1<<OCF0A)));
    TIFR0|=(1<<OCF0A);

}

int main(void){
    config_timer();
    DDRB|=(1<<PB0);
    PORTB&=~(1<<PB0);

    while(1){

      PORTB^=0x01;
      pausa_ms();

    }

  return 0;
}//261.63 - 330 -392 Hz
*/
#define F_CPU 16000000UL
#include <avr/io.h>
#include <util/delay.h>
void config_timer(void){

    TCCR0A|=(1<<WGM01);
    TCCR0B|=(1<<CS02);
   // OCR0A=250;
}

void pausa_doms(void){
    OCR0A=118;
    TCNT0=0;
    while(!(TIFR0&(1<<OCF0A)));
    TIFR0|=(1<<OCF0A);

}

void pausa_mims(void){
    OCR0A=94;
    TCNT0=0;
    while(!(TIFR0&(1<<OCF0A)));
    TIFR0|=(1<<OCF0A);

}
void pausa_solms(void){
    OCR0A=40;
    TCNT0=0;
    while(!(TIFR0&(1<<OCF0A)));
    TIFR0|=(1<<OCF0A);

}
void pausa_solams(void){
    OCR0A=79;
    TCNT0=0;
    while(!(TIFR0&(1<<OCF0A)));
    TIFR0|=(1<<OCF0A);

}

int main(void){
    config_timer();
    DDRB|=(1<<PB0);
    PORTB&=~(1<<PB0);

    while(1){

     for (int i =0;i<83;i++){
      PORTB^=0x01;
      pausa_mims();
     }
     PORTB&=~(0x01);
     _delay_ms(1);

     for (int i =0;i<83;i++){
      PORTB^=0x01;
      pausa_mims();
     }
     PORTB&=~(0x01);
     _delay_ms(250);
     for (int i =0;i<83;i++){
      PORTB^=0x01;
      pausa_mims();
     }
     PORTB&=~(0x01);
     _delay_ms(250);

     for (int i =0;i<66;i++){
      PORTB^=0x01;
      pausa_doms();
     }
     PORTB&=~(0x01);
     _delay_ms(1);

     for (int i =0;i<83;i++){
      PORTB^=0x01;
      pausa_mims();
     }
     PORTB&=~(0x01);
     _delay_ms(1);

     for (int i =0;i<784;i++){
      PORTB^=0x01;
      pausa_solms();
     }
     PORTB&=~(0x01);

  for (int i =0;i<392;i++){
      PORTB^=0x01;
      pausa_solams();
     }
     PORTB&=~(0x01);

     
     _delay_ms(10000);
      
      
      
      
      
    }

  return 0;
}//d0 261.63 - mi 330 - sol 392 Hz
//118 - 94 - 79