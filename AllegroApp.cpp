#include "AllegroApp.hpp"

AllegroApp::AllegroApp():
AllegroBase()
{
    ScreenSaver::Instance().Add(reinterpret_cast<PFigure>(new Mainborder()));
//    sleep( 5 );

}
void AllegroApp::Fps(){
    ScreenSaver::Instance().Next();
}
void AllegroApp::Draw()
{
    ScreenSaver::Instance().Draw();
}
