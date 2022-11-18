#ifndef TETRIS_THREEDOWNONEUP_HPP
#define TETRIS_THREEDOWNONEUP_HPP

#include <allegro5/color.h>
#include "../Gameobject.hpp"

class Threedownoneup:public Gameobject {
public:
    Threedownoneup();
    ~Threedownoneup() = default;
    void Draw();
private:
    ALLEGRO_COLOR color_;
};


#endif //TETRIS_THREEDOWNONEUP_HPP
