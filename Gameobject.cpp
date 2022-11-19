#include "Gameobject.hpp"

GameObject::GameObject():
x_(),
y_()
{
}

void GameObject::Reset() {

}

void GameObject::Move(std::vector<GameObject> Object) {
    for (int i = 0 ;i < Object.size();i++) {
        Object.at(i).y_+=2;
    }
}


//void GameObject::Rotate(float x,float y) {
//    centerX =;
//    centerY =;
//    newX = (x-centerX)*cos(90) - (y-centerY)*sin(90) + centerX;
//    newY = (y-centerY)*cos(90) + (x-centerX)*sin(90) + centerY;
//}
