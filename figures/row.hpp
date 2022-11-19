#ifndef TETRIS_ROW_HPP
#define TETRIS_ROW_HPP

#include <allegro5/color.h>
#include "../Gameobject.hpp"
class Row:public GameObject {
public:
    Row();
    ~Row()=default;
    void Draw();
private:
    ALLEGRO_COLOR color_;
};


#endif //TETRIS_ROW_HPP
