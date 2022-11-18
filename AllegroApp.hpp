#ifndef PROGMEISTAR_ALLEGROAPP_HPP
#define PROGMEISTAR_ALLEGROAPP_HPP
#include "AllegroBase.hpp"
#include "ScreenSaver.hpp"
#include "Constants.hpp"
#include "Square.hpp"
#include "figures/row.hpp"
#include "figures/ge.hpp"
#include "figures/Gelevo.hpp"
#include "figures/Kvadrat.hpp"
#include "figures/threedownoneup.hpp"
#include "figures/Lebedjlevo.hpp"
#include "figures/Lebedjpravo.hpp"
#include "Mainborder.hpp"
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
