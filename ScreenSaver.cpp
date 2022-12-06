#include "ScreenSaver.hpp"
#include "vector"
ScreenSaver::ScreenSaver():
predefined_figures{{
    gusj_pravo,
    square,
    gusj_levo
}},
gusj_pravo{{
    {303,306,39,43},
    {306,309,39,43},
    {306,309,43,46},
    {309,311,43,46}
}},
square{{
    {303,306,39,43},
    {303,306,39,43},
    {303,306,43,46},
    {303,306,43,46}
}},
gusj_levo{{
    {309,311,39,43},
    {306,309,39,43},
    {306,309,43,46},
    {303,306,43,46}
}},
row{{
    {},
    {},
    {},
    {}
}},
predefined_figures_big{{
{},
{}
}}
{
    std::vector<PFigure> figures;
}
ScreenSaver::~ScreenSaver(){
    for( int i = 0; i < size_; ++i )
    {
        delete figures.at(i);
        figures.at(i) = 0;
    }
};
void ScreenSaver::Draw() {

    al_clear_to_color( al_map_rgb( 255, 255, 255 ) );
    m1.Draw();
    for( int i = 0; i < size_; ++i )
    {
        figures.at(i)->Draw();
    }
}
void ScreenSaver::Next() {

    for( int i = 0; i < size_; ++i )
    {
        figures.at(i)->Move();
    }
}
void ScreenSaver::Add(Figure *f) {
    if ( size_ >= MAX )
    {
        return;
    }
    figures.push_back( f );
    ++size_;
}