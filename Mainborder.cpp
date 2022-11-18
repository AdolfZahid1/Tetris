#include "Mainborder.hpp"

Mainborder::Mainborder():
x1(),
x2(),
y1(),
y2()
{
}

void Mainborder::Draw() {
    al_draw_rectangle(x1, y1,x2,y2,
                      al_map_rgb( 0, 0, 0 ),  4.0);
}
