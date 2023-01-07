#include "Gameobject.hpp"

GameObject::GameObject(double x1_,double x2_,double y1_,double y2_):
x1(x1_),
x2(x2_),
y1(y1_),
y2(y2_)
{
}

void GameObject::Reset() {

}

void GameObject::Move(std::vector<GameObject> Object) {
    double speed_coef = 2 * 0.001;
    for (auto & i : Object) {
        i.y1 += SCREEN_H * speed_coef;
        i.y2 += SCREEN_H * speed_coef;
    }
}

void GameObject::Draw(const std::vector<GameObject>& Object, ALLEGRO_COLOR color) {
    for(auto & i : Object){
        int half = 4/2;
        al_draw_filled_rectangle(i.x1 - half, i.y1 - half,
                                  i.x2 + half, i.y2 + half, color);
        al_draw_rectangle(i.x1 - half, i.y1 - half,
                          i.x2 + half, i.y2 + half,
                          al_map_rgb( 0, 0, 0 ), 2.0);
    }
}


//void GameObject::Rotate(float x,float y) {
//    centerX =;
//    centerY =;
//    newX = (x-centerX)*cos(90) - (y-centerY)*sin(90) + centerX;
//    newY = (y-centerY)*cos(90) + (x-centerX)*sin(90) + centerY;
//}
