#ifndef TETRIS_SQUARE_H
#define TETRIS_SQUARE_H
#include "Figure.hpp"
#include <allegro5/allegro.h>
#include <allegro5/allegro_primitives.h>
class Square: public Figure {
public:
    Square(int size,double x1_,double x2_,double y1_,double y2_, ALLEGRO_COLOR color);
    virtual ~Square() {}
    void Draw() override;
protected:
    ALLEGRO_COLOR color_;
    const int size_;
    double x1;
    double y1;
    double x2;
    double y2;
};


#endif //TETRIS_SQUARE_H
