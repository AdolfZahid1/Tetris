#include "ScreenSaver.hpp"
#include "vector"
ScreenSaver::ScreenSaver() {
    std::vector<PFigure> figures ;
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