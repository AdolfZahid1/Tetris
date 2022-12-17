#ifndef PROGMEISTAR_SCREENSAVER_HPP
#define PROGMEISTAR_SCREENSAVER_HPP
#include "Figure.hpp"
#include "Constants.hpp"
#include <allegro5/allegro.h>
#include <allegro5/allegro_primitives.h>
#include "Mainborder.hpp"
#include "Gameobject.hpp"
#include <iostream>
#include <time.h>
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
        double predefined_figures[5][4][4];
        double predefined_figures_big[2][6][4];
        std::vector<PFigure> figures;
};
#endif //PROGMEISTAR_SCREENSAVER_HPP
