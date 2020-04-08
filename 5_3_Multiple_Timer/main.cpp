#include "mbed.h"


Timer timer_fast, timer_slow;



DigitalOut blueLED(LED3);

//DigitalOut greenLED(LED2);


int main(){

    timer_fast.start();

    timer_slow.start();


    while(1){

        if(timer_fast.read() > 0.5){

            blueLED = !blueLED;

            timer_fast.reset();

        }

        //if(timer_slow.read() > 0.5){

        //    greenLED = !greenLED;

        //    timer_slow.reset();

        //}

    }

}