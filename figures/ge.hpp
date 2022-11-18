#ifndef TETRIS_GE_HPP
#define TETRIS_GE_HPP

#include <allegro5/color.h>
#include "../Gameobject.hpp"
#include "../square.hpp"
class Ge: public GameObject {
public:
    Ge();
    ~Ge() = default;
    void Draw();
private:
    ALLEGRO_COLOR color_;
};


#endif //TETRIS_GE_HPP
