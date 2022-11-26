#include "Mainborder.hpp"

Mainborder::Mainborder():
x1(SCREEN_W/5.1),
x2(SCREEN_W/1.4),
y1(SCREEN_H/15-10),
y2(SCREEN_H-30)
{
}

void Mainborder::Draw() {
    al_draw_rectangle(x1, y1,x2,y2,
                      al_map_rgb( 0, 0, 0 ),  4.0);
    al_draw_rectangle(SCREEN_W/20-20, SCREEN_H/15-10,SCREEN_W/5.5,SCREEN_H/15+20,
                      al_map_rgb( 0, 0, 0 ),  4.0);
    al_draw_rectangle(SCREEN_W/1.4+10, SCREEN_H/15-10,SCREEN_W/1.2,SCREEN_H/15+120,
                      al_map_rgb( 0, 0, 0 ),  4.0);
}
