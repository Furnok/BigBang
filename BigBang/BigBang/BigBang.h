#pragma once

#include <iostream>
#include <random>
#include <string>

using namespace std;

enum TypePlanet
{
	Telluric,
	Gaseous, 
	Dead
};

class Planet
{
private:
	TypePlanet type;
	int rayon;
	int constGravity;
public:
	void setPlanet();
	void showPlanet(int index);
};

class Univer
{
private:
	Planet planets[100];
public:
	Planet getPlanets(int index);
};