#ifndef PROGMEISTAR_ALLEGROAPP_HPP
#define PROGMEISTAR_ALLEGROAPP_HPP
#include "AllegroBase.hpp"
#include "ScreenSaver.hpp"
#include "Constants.hpp"
#include "Mainborder.hpp"
#include "Gameobject.hpp"
#include<unistd.h>
class AllegroApp : public AllegroBase
{
public:
    AllegroApp();
    virtual ~AllegroApp() {}
    virtual void Fps();
    virtual void Draw();

};

#endif //PROGMEISTAR_ALLEGROAPP_HPP
