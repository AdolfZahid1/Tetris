#include <iostream>
#include "AllegroBase.hpp"
#include <windows.h>
#include <cstdlib>
#include <cstdio>
#include "AllegroApp.hpp"

using namespace std;

int main(int argc, char **argv)
{
    srand( time(0) );

    AllegroApp app;
    if ( !app.Init( SCREEN_W, SCREEN_H, FPS ) )
    {
        return 1;
    }
    app.Run();

    // cin.get();
    return 0;
}
