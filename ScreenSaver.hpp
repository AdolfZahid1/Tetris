#ifndef PROGMEISTAR_SCREENSAVER_HPP
#define PROGMEISTAR_SCREENSAVER_HPP
#include "Figure.hpp"
#include "Constants.hpp"
#include <allegro5/allegro.h>
#include <allegro5/allegro_primitives.h>
#include "vector"
#include "Mainborder.hpp"
#include <iostream>
typedef Figure * PFigure;
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
       std::vector<PFigure> figures;
};
#endif //PROGMEISTAR_SCREENSAVER_HPP
