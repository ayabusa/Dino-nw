#include <eadk.h>
#include <stdio.h>

const char eadk_app_name[] __attribute__((section(".rodata.eadk_app_name"))) = "Dino";
const uint32_t eadk_api_level  __attribute__((section(".rodata.eadk_api_level"))) = 0;

void main(int argc, char * argv[]) {
    
    eadk_rect_t myFrame = {
      50, // x
      50, // y
      50, // width
      50, // height
    };

    // clear the screen
    eadk_display_push_rect_uniform(eadk_screen_rect, eadk_color_black);
    // print my rectangle thingy
    eadk_display_push_rect_uniform(myFrame, eadk_color_blue);
    // print a string
    eadk_display_draw_string("Hehe", (eadk_point_t){55, 55}, true, eadk_color_white, eadk_color_blue);

    while(true){
      
    }



}
