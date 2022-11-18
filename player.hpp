#ifndef TETRIS_PLAYER_HPP
#define TETRIS_PLAYER_HPP


class Player {
public:
    Player();
    ~Player() = default;
    void Move();
    void Rotate();
};


#endif //TETRIS_PLAYER_HPP
