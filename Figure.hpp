#ifndef FIGURE_HPP_INCLUDED
#define FIGURE_HPP_INCLUDED
#include "Constants.hpp"
class Figure
{
    public:
        Figure();
        virtual ~Figure();
        void Reset();
        virtual void Draw() = 0;
        virtual void Move();

    protected:
        double x_;
        double y_;
        double dx_;
        double dy_;


};
#endif // FIGURE_HPP_INCLUDED
