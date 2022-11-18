#include "square.hpp"
Square::Square(int size,double x1_,double x2_,double y1_, double y2_, ALLEGRO_COLOR color):
    Figure(),
    size_(size),
    color_(color),
    x1(x1_),
    x2(x2_),
    y1(y1_),
    y2(y2_)
{
}
void Square::Draw() {
    int half = size_/2;
    al_draw_filled_rectangle( x1 - half, y1 - half,
                              x2 + half, y2 + half, color_ );
    al_draw_rectangle(x1 - half, y1 - half, x2 + half, y2 + half,
                      al_map_rgb( 0, 0, 0 ),  2.0);
}
