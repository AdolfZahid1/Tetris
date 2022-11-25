#ifndef TETRIS_GAMEOBJECT_HPP
#define TETRIS_GAMEOBJECT_HPP
#include <cmath>
#include <vector>
#include "Constants.hpp"
#include <allegro5/allegro.h>
#include <allegro5/allegro_primitives.h>
class GameObject {
public:
    GameObject(double x1_,double x2_,double y1_,double y2);
    ~GameObject() = default;
    void Reset();
    virtual void Rotate(float x,float y)=0;
    static void Move(std::vector<GameObject>Object);
    static void Draw(const std::vector<GameObject>&Object, ALLEGRO_COLOR color);
protected:
    double x1;
    double x2;
    double y1;
    double y2;
};


#endif //TETRIS_GAMEOBJECT_HPP
