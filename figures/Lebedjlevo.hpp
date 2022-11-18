#ifndef TETRIS_LEBEDJLEVO_HPP
#define TETRIS_LEBEDJLEVO_HPP

#include <allegro5/color.h>
#include "../Gameobject.hpp"

class Lebedjlevo: public GameObject {
public:
    Lebedjlevo();
    ~Lebedjlevo() = default;
    void Draw();
private:
    ALLEGRO_COLOR color_;
};


#endif //TETRIS_LEBEDJLEVO_HPP
