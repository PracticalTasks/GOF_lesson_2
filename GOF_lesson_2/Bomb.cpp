
#include <iostream>

#include "Bomb.h"
#include "MyTools.h"

using namespace std;
using namespace MyTools;

void Bomb::Draw() const
{
    MyTools::ScreenSingleton::getInstance().SetColor(CC_LightMagenta);
	ScreenSingleton::getInstance().GotoXY(x, y);
    cout << "*";
}


//Decorator
void BombDecorator::Move(uint16_t time)
{
	bomb.Move(time * 1.6);
}

void BombDecorator::Draw()const
{
	bomb.Draw();
	// Некоторое изменение внешнего вида бомбы
	ScreenSingleton::getInstance().GotoXY(bomb.GetX(), bomb.GetY() - 1);
	cout << "|";
}

void BombDecorator::SetDirection(double dx, double dy)
{
	bomb.SetDirection(dx, dy);
}

void BombDecorator::SetSpeed(double sp)
{
	bomb.SetSpeed(sp);
}

void BombDecorator::SetPos(double nx, double ny)
{
	bomb.SetPos(nx, ny);
}

void BombDecorator::SetWidth(uint16_t widthN)
{
	bomb.SetWidth(widthN);
}

