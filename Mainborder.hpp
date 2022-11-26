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
    const int x1;
    const int x2;
    const int y1;
    const int y2;
};


#endif //TETRIS_MAINBORDER_HPP
