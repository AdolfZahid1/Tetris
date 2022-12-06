#ifndef PROGMEISTAR_SCREENSAVER_HPP
#define PROGMEISTAR_SCREENSAVER_HPP
#include "Figure.hpp"
#include "Constants.hpp"
#include <allegro5/allegro.h>
#include <allegro5/allegro_primitives.h>
#include "Mainborder.hpp"
#include "Gameobject.hpp"
#include <iostream>
typedef GameObject * PFigure;
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
        void Add( PFigure f );
    private:
        ScreenSaver();
        int size_;
        virtual ~ScreenSaver();
        double predefined_figures[20][4];
        double predefined_figures_big[2][6];
        double gusj_pravo[4][4];
        double square;
        double gusj_levo;
        double row;
        std::vector<PFigure> figures;
};
#endif //PROGMEISTAR_SCREENSAVER_HPP
