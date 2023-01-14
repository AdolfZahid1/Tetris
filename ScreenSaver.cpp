#include "ScreenSaver.hpp"
#include "vector"
ScreenSaver::ScreenSaver():
predefined_figures{
        {// gusj_pravo
            PObj(303, 306, 39, 43),
            PObj(306, 309, 39, 43),
            PObj(306, 309, 43, 47),
            PObj(309, 311, 43, 47)
        },
        { // square
            {303, 306, 39, 43},
            {303, 306, 39, 43},
            {303, 306, 43, 47},
            {303, 306, 43, 47}
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
},
rd()
{
    std::vector<PObj> figures;
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
    std::mt19937 mt(rd());
    std::uniform_int_distribution<int> choice_rnd(0, 7);
    int choice = choice_rnd(mt);
    if (choice <= 5){
        for ( int i = 0; i < 4;i++) {
            for ( int j = 0; j < 4; j++) {
                switch ( choice ) {
                    case 1:
                        GameObject::Draw(static_cast<const std::vector <GameObject> &>(predefined_figures[choice][i][j]), (255,255,0));
                    case 2:
                        GameObject::Draw(predefined_figures[choice][i][j],(0,255,255));
                    case 3:
                        GameObject::Draw(predefined_figures[choice][i][j],(126,255,0));
                    case 4:
                        GameObject::Draw(predefined_figures[choice][i][j],(255,126,60));
                    case 5:
                        GameObject::Draw(predefined_figures[choice][i][j],(255,124,0));
                    default:
                        Add(predefined_figures[choice][i][j]);
                        break;
                }
            }
        }
    }else{
        for ( int i = 0; i < 6;i++) {
            for ( int j = 0; j < 4; j++) {
                if (choice == 6) {
                    GameObject::Draw(predefined_figures_big[choice][i][j], (255, 255, 0));
                }else{
                    GameObject::Draw(predefined_figures_big[choice][i][j], (255, 0, 255));
                }
                Add(predefined_figures[choice][i][j]);
            }
        }
    }
}
void ScreenSaver::Next() {

    for( int i = 0; i < size_; ++i )
    {
        figures.at(i)->GameObject::Move();
    }
}
void ScreenSaver::Add(Figure *f) {

    figures.push_back(f);
    ++size_;
}