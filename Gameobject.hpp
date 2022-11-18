#ifndef TETRIS_GAMEOBJECT_HPP
#define TETRIS_GAMEOBJECT_HPP


class GameObject {
public:
    GameObject();
    ~GameObject() = default;
    void Reset();
    virtual void Rotate() = 0;
    virtual void Move();
};


#endif //TETRIS_GAMEOBJECT_HPP
