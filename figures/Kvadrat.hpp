#ifndef TETRIS_KVADRAT_HPP
#define TETRIS_KVADRAT_HPP

#include <allegro5/color.h>
#include "../Gameobject.hpp"

class Kvadrat: public GameObject {
public:
    Kvadrat(double x1, double x2, double y1, double y2);
    ~Kvadrat() = default;
    void Draw();
private:
    ALLEGRO_COLOR color_;
};


#endif //TETRIS_KVADRAT_HPP
