#include "AllegroApp.hpp"

AllegroApp::AllegroApp():
AllegroBase()
{
    for( int i = 0; i < MAX; ++i )
    {
    ScreenSaver::Instance().Add( new Square(20) );
//    sleep( 5 );
    }
}
void AllegroApp::Fps(){
    ScreenSaver::Instance().Next();
}
void AllegroApp::Draw()
{
    ScreenSaver::Instance().Draw();
}
