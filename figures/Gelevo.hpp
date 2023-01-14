#ifndef TETRIS_GELEVO_HPP
#define TETRIS_GELEVO_HPP

#include <allegro5/color.h>
#include "../Gameobject.hpp"

class Gelevo:public GameObject {
public:
    Gelevo();
    ~Gelevo() = default;
    void Draw();
private:
    ALLEGRO_COLOR color_;
};


#endif //TETRIS_GELEVO_HPP
