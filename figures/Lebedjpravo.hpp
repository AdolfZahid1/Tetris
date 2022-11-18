#ifndef TETRIS_LEBEDJPRAVO_HPP
#define TETRIS_LEBEDJPRAVO_HPP

#include <allegro5/color.h>
#include "../Gameobject.hpp"

class Lebedjpravo: public GameObject {
public:
    Lebedjpravo();
    ~Lebedjpravo() = default;
    void Draw();
private:
    ALLEGRO_COLOR color_;
};


#endif //TETRIS_LEBEDJPRAVO_HPP
