#include <stdio.h>
#include "pico/stdlib.h"
#define OFF 0 
#define ON 1
#define UNAVAIL 2
#define AVAIL 3
// TINYAIRBUS - A tiny AIRBUS A320 "Simulator" running on the RP2040
// Written by Tyler Brögger | APPR.AERO


// OVHD PANEL
// ADIRS
int adirs1 = OFF;
int adirs2 = OFF;
int adirs3 = OFF;


// FLT CTRL
int elac_one = ON;
int elac_two = ON;
int sec_one = ON;
int sec_two = ON;
int sec_three = ON;
int fac_one = ON;
int fac_two = ON;


// FIRE PANEL
int eng_one_fire = OFF;
int eng_two_fire = OFF;
int apu_fire = OFF;


// HYD PANEL
// L TK PUMPS
int ltk_one = OFF;
int ltk_two = OFF;
// CTR TK PUMPS
int ctrtk_one = OFF;
int ctrtk_two = OFF;
// R TK PUMPS
int rtk_one = OFF;
int rtk_two = OFF;
// X FEED
int x_feed = OFF;


// ELEC PANEL
int bat_one = OFF;
int bat_two = OFF;
int apu_gen = OFF;
int ext_pwr = OFF;


//AIR COND PANEL
int apu_bleed = OFF;


// EXT LT PANEL
int lt_strobe = OFF;
int lt_beacon = OFF;
int lt_nav = OFF;
int lt_rwy_tf = OFF;
int lt_ldg = OFF;
int lt_nose = OFF;

// APU
int apu_master = OFF;
int apu_start = OFF;
int apu_state = OFF;


int main(){
    stdio_init_all();

    while(true){
        sleep_ms(10000);
        printf("TINYAIRBUS DEV");
    }
}











