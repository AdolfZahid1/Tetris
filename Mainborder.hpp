#ifndef TETRIS_MAINBORDER_HPP
#define TETRIS_MAINBORDER_HPP
#include "Constants.hpp"
#include <allegro5/allegro.h>
#include <allegro5/allegro_primitives.h>
class Mainborder {
public:
    Mainborder();
    virtual ~Mainborder() = default;
    void Draw();
private:
    const int x1 = SCREEN_W-20;
    const int x2 = SCREEN_W+20;
    const int y1 = SCREEN_H-15;
    const int y2 = 15;
};


#endif //TETRIS_MAINBORDER_HPP
