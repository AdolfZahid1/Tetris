#ifndef PROGMEISTAR_SCREENSAVER_HPP
#define PROGMEISTAR_SCREENSAVER_HPP
#include "Figure.hpp"
#include "Constants.hpp"
#include <allegro5/allegro.h>
#include <allegro5/allegro_primitives.h>
#include "Mainborder.hpp"
#include "Gameobject.hpp"
#include <iostream>
#include <cmath>
#include <random>
typedef GameObject * PObj;
class ScreenSaver
{
    public:
        Mainborder m1;
        static ScreenSaver &Instance()
        {
            static ScreenSaver instance;
            return instance;
        }
        void Draw();
        void Next();
        void Add( PObj f );
    private:
        ScreenSaver();
        int size_;
        virtual ~ScreenSaver();
        PObj predefined_figures[5][4];
        PObj predefined_figures_big[2][6][4];
        std::vector<PObj> figures;
        std::vector<double> figures_;
        std::random_device rd;

};
#endif //PROGMEISTAR_SCREENSAVER_HPP
