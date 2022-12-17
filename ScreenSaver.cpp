#include "ScreenSaver.hpp"
#include "vector"
ScreenSaver::ScreenSaver():
predefined_figures{
        {// gusj_pravo
            {303,306,39,43},
            {306,309,39,43},
            {306,309,43,47},
            {309,311,43,47}
        },
        { // square
            {303,306,39,43},
            {303,306,39,43},
            {303,306,43,47},
            {303,306,43,47}
        },
        { // gusj_levo
            {309,311,39,43},
            {306,309,39,43},
            {306,309,43,47},
            {303,306,43,47}
        },
        { // row
            {309,311,39,43},
            {306,309,39,43},
            {303,306,39,43},
            {300,303,39,43}
        },
        { // three down one up
            {309,311,39,43},
            {306,309,39,43},
            {303,306,39,43},
            {306,309,35,39}
        }
},
predefined_figures_big{
    { // L
        {309,311,39,43},
        {306,309,39,43},
        {306,309,35,39},
        {306,309,31,35},
        {306,309,27,31},
        {306,309,23,27}
        },
    { // J
        {303,306,39,43},
        {306,309,39,43},
        {306,309,35,39},
        {306,309,31,35},
        {306,309,27,31},
        {306,309,23,27}
    }
}
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
    int choice = rand() % 7 + 1;
    if (choice <=5){
        for ( int i = 0; i < 4;i++) {
            for ( int j = 0; j < 4; j++) {
                GameObject::Draw(predefined_figures[choice][i][j],(255,255,0));
            }
        }
    }else{
        for ( int i = 0; i < 6;i++) {
            for ( int j = 0; j < 4; j++) {
                GameObject::Draw(predefined_figures_big[choice][i][j]);
            }
        }
    }
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
    ( f );
    ++size_;
}