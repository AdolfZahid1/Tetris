#ifndef PROGMEISTAR_SCREENSAVER_HPP
#define PROGMEISTAR_SCREENSAVER_HPP
#include "Figure.hpp"
#include "Constants.hpp"
#include <allegro5/allegro.h>
#include <allegro5/allegro_primitives.h>
#include "vector"
typedef Figure * PFigure;
class ScreenSaver
{
    public:
        //PFigure Figure();
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
       // PFigure figures[MAX];
       std::vector<PFigure> figures;
};
#endif //PROGMEISTAR_SCREENSAVER_HPP
