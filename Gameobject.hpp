#ifndef TETRIS_GAMEOBJECT_HPP
#define TETRIS_GAMEOBJECT_HPP
#include <cmath>
#include <vector>
class GameObject {
public:
    GameObject();
    ~GameObject() = default;
    void Reset();
    virtual void Rotate(float x,float y)=0;
    void Move(std::vector<GameObject>Object);
    void Draw(std::vector<GameObject>Object);
protected:
    double x_;
    double y_;
};


#endif //TETRIS_GAMEOBJECT_HPP
