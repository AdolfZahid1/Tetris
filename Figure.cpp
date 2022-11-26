#include "Figure.hpp"
#include <allegro5/allegro.h>
#include <bits/stdc++.h>
#include <allegro5/allegro_primitives.h>
Figure::Figure():
    x_(),
    y_(),
    dx_(),
    dy_()
{
}
Figure::~Figure() {
    Reset();
}
void Figure::Reset()
{
    x_ = SCREEN_W/2;
    y_ = 1;
    dy_ = 10.0;
}

void Figure::Move()
{
    y_ -= dy_;
    if ( ( x_ < 1.0 ) ||
        ( x_ > SCREEN_W ) ||
        ( y_ < 1.0 ) ||
        ( y_ > SCREEN_H ) )
    {
        Reset();
    }
}
