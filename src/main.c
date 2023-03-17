#include <eadk.h>
#include <stdio.h>

const char eadk_app_name[] __attribute__((section(".rodata.eadk_app_name"))) = "Dino";
const uint32_t eadk_api_level  __attribute__((section(".rodata.eadk_api_level"))) = 0;

void main(int argc, char * argv[]) {
    eadk_display_draw_string("Hehe !!!", (eadk_point_t){0, 0}, true, eadk_color_black, eadk_color_white);
    while(true){
      printf("hehe boi");
      eadk_timing_msleep(3000);
    }
}
