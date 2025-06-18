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

//--------------------------------------------------------------------------------------------------------------------
*/
/*
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
    OCR0A=159;
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
     _delay_ms(250);

     

  for (int i =0;i<392;i++){
      PORTB^=0x01;
      pausa_solams();
     }
     PORTB&=~(0x01);
     _delay_ms(1);
  for (int i =0;i<196;i++){
      PORTB^=0x01;
      pausa_solms();
     }
     PORTB&=~(0x01);

     _delay_ms(1000);

    }

  return 0;
}//d0 261.63 - mi 330 - sol 392 Hz
//118 - 94 - 79
*/
//TETRISSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSS
#define F_CPU 16000000UL
#include <avr/io.h>
#include <util/delay.h>

void config_timer(void){

    TCCR0A|=(1<<WGM01);
    TCCR0B|=(1<<CS02);
   // OCR0A=250;
}

void pausa_mims(void){
    OCR0A=94;
    TCNT0=0;
    while(!(TIFR0&(1<<OCF0A)));
    TIFR0|=(1<<OCF0A);

}

void pausa_sims(void){
    OCR0A=62;
    TCNT0=0;
    while(!(TIFR0&(1<<OCF0A)));
    TIFR0|=(1<<OCF0A);

}

void pausa_doms(void){
    OCR0A=58;
    TCNT0=0;
    while(!(TIFR0&(1<<OCF0A)));
    TIFR0|=(1<<OCF0A);

}


void pausa_rems(void){
    OCR0A=105;
    TCNT0=0;
    while(!(TIFR0&(1<<OCF0A)));
    TIFR0|=(1<<OCF0A);

}

void pausa_reims(void){
    OCR0A=52;
    TCNT0=0;
    while(!(TIFR0&(1<<OCF0A)));
    TIFR0|=(1<<OCF0A);

}

void pausa_lams(void){
    OCR0A=70;
    TCNT0=0;
    while(!(TIFR0&(1<<OCF0A)));
    TIFR0|=(1<<OCF0A);

}

void pausa_fams(void){
    OCR0A=88;
    TCNT0=0;
    while(!(TIFR0&(1<<OCF0A)));
    TIFR0|=(1<<OCF0A);

}

void pausa_solms(void){
    OCR0A=78;
    TCNT0=0;
    while(!(TIFR0&(1<<OCF0A)));
    TIFR0|=(1<<OCF0A);

}

int main(void){
    config_timer();
    DDRB|=(1<<PB0);
    PORTB&=~(1<<PB0);

    while(1){

   for (int i =0;i<440/2;i++){
      PORTB^=0x01;
      pausa_lams();//LA
     }
     PORTB&=~(0x01);
     _delay_ms(1);  
     
          for (int i =0;i<329/2;i++){
      PORTB^=0x01;
      pausa_mims();// MI
     }
     PORTB&=~(0x01);
      _delay_ms(1);

    for (int i =0;i<350/2;i++){
      PORTB^=0x01;
      pausa_fams();//FA
     }
     PORTB&=~(0x01);
      _delay_ms(1);

          for (int i =0;i<392/2;i++){
      PORTB^=0x01;
      pausa_solms();//SOL
     }
     PORTB&=~(0x01);
      _delay_ms(1);

    for (int i =0;i<350/2;i++){
      PORTB^=0x01;
      pausa_fams();
     }
     PORTB&=~(0x01);
      _delay_ms(1);

          for (int i =0;i<329/2;i++){
      PORTB^=0x01;
      pausa_mims();
     }
     PORTB&=~(0x01);
      _delay_ms(1);

           for (int i =0;i<294/2;i++){
      PORTB^=0x01;
      pausa_rems();
     }
     PORTB&=~(0x01);
      _delay_ms(1); 
                 for (int i =0;i<294/2;i++){
      PORTB^=0x01;
      pausa_rems();
     }
     PORTB&=~(0x01);
      _delay_ms(1);     

          for (int i =0;i<350/2;i++){
      PORTB^=0x01;
      pausa_fams();
     }
     PORTB&=~(0x01);
      _delay_ms(1);


      
//

for (int i =0;i<440/2;i++){
      PORTB^=0x01;
      pausa_lams();
     }
     PORTB&=~(0x01);
     _delay_ms(1);  

          for (int i =0;i<392/2;i++){
      PORTB^=0x01;
      pausa_solms();//SOL
     }
     PORTB&=~(0x01);
      _delay_ms(1);

          for (int i =0;i<350/2;i++){
      PORTB^=0x01;
      pausa_fams();
     }
     PORTB&=~(0x01);
      _delay_ms(1);

          for (int i =0;i<329/2;i++){
      PORTB^=0x01;
      pausa_mims();// MI
     }
     PORTB&=~(0x01);
      _delay_ms(1);

                for (int i =0;i<329/2;i++){
      PORTB^=0x01;
      pausa_mims();// MI
     }
     PORTB&=~(0x01);
      _delay_ms(1);
 
                for (int i =0;i<350/2;i++){
      PORTB^=0x01;
      pausa_fams();
     }
     PORTB&=~(0x01);
      _delay_ms(1);

                for (int i =0;i<392/2;i++){
      PORTB^=0x01;
      pausa_solms();//SOL
     }
     PORTB&=~(0x01);
      _delay_ms(1);
      for (int i =0;i<440/2;i++){
      PORTB^=0x01;
      pausa_lams();
     }
     PORTB&=~(0x01);
     _delay_ms(1);  

     //
               for (int i =0;i<350/2;i++){
      PORTB^=0x01;
      pausa_fams();
     }
     PORTB&=~(0x01);
      _delay_ms(1);

    for (int i =0;i<294/2;i++){
      PORTB^=0x01;
      pausa_rems();
     }
     PORTB&=~(0x01);
      _delay_ms(1);  


        for (int i =0;i<294/2;i++){
      PORTB^=0x01;
      pausa_rems();
     }
     PORTB&=~(0x01);
      _delay_ms(250);  

//nue

    for (int i =0;i<392/2;i++){
      PORTB^=0x01;
      pausa_solms();//SOL
     }
     PORTB&=~(0x01);
      _delay_ms(1);

    for (int i =0;i<494/2;i++){
      PORTB^=0x01;
      pausa_sims();//Si
     }
     PORTB&=~(0x01);
      _delay_ms(1);

         for (int i =0;i<587/2;i++){
      PORTB^=0x01;
      pausa_reims();
     }
     PORTB&=~(0x01);
      _delay_ms(1);       
        for (int i =0;i<587/2;i++){
      PORTB^=0x01;
      pausa_reims();
     }
     PORTB&=~(0x01);
      _delay_ms(1);  
      
        for (int i =0;i<523/2;i++){
      PORTB^=0x01;
      pausa_doms();
     }
     PORTB&=~(0x01);
      _delay_ms(1);  

     for (int i =0;i<494/2;i++){
      PORTB^=0x01;
      pausa_sims();//SOL
     }
     PORTB&=~(0x01);
      _delay_ms(1);
        for (int i =0;i<440/2;i++){
      PORTB^=0x01;
      pausa_lams();//LA
     }
     PORTB&=~(0x01);
     _delay_ms(1);   
         for (int i =0;i<350/2;i++){
      PORTB^=0x01;
      pausa_fams();//FA
     }
     PORTB&=~(0x01);
      _delay_ms(1); 
//2
        for (int i =0;i<440/2;i++){
      PORTB^=0x01;
      pausa_lams();//LA
     }
     PORTB&=~(0x01);
     _delay_ms(1);   

             for (int i =0;i<440/2;i++){
      PORTB^=0x01;
      pausa_lams();//LA
     }
     PORTB&=~(0x01);
     _delay_ms(1);   

    for (int i =0;i<392/2;i++){
      PORTB^=0x01;
      pausa_solms();//SOL
     }
     PORTB&=~(0x01);
      _delay_ms(1);

    for (int i =0;i<350/2;i++){
      PORTB^=0x01;
      pausa_fams();//FA
     }
     PORTB&=~(0x01);
      _delay_ms(1); 

                  for (int i =0;i<329/2;i++){
      PORTB^=0x01;
      pausa_mims();// MI
     }
     PORTB&=~(0x01);
      _delay_ms(1);
                      for (int i =0;i<329/2;i++){
      PORTB^=0x01;
      pausa_mims();// MI
     }
     PORTB&=~(0x01);
      _delay_ms(1);

          for (int i =0;i<350/2;i++){
      PORTB^=0x01;
      pausa_fams();//FA
     }
     PORTB&=~(0x01);
      _delay_ms(1); 


          for (int i =0;i<392/2;i++){
      PORTB^=0x01;
      pausa_solms();//SOL
     }
     PORTB&=~(0x01);
      _delay_ms(1);

//3

             for (int i =0;i<440/2;i++){
      PORTB^=0x01;
      pausa_lams();//LA
     }
     PORTB&=~(0x01);
     _delay_ms(1);   

    for (int i =0;i<350/2;i++){
      PORTB^=0x01;
      pausa_fams();//FA
     }
     PORTB&=~(0x01);
      _delay_ms(1); 

           for (int i =0;i<294/2;i++){
      PORTB^=0x01;
      pausa_rems();
     }
     PORTB&=~(0x01);
      _delay_ms(1); 

                 for (int i =0;i<294/2;i++){
      PORTB^=0x01;
      pausa_rems();
     }
     PORTB&=~(0x01);
      _delay_ms(1); 
           _delay_ms(1000);

    }


  return 0;
}
