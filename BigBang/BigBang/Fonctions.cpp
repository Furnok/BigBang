#include "BigBang.h"

Planet Univer::getPlanets(int index)
{
	// Return the planet at a index
	return planets[index];
}

void Planet::setPlanet()
{
	// Random for the planet
	int randType = rand() % 100 + 1;

	// Planet Telluric
	if (randType <= 20)
	{
		this->type = Telluric;
		this->rayon = rand() % 5500 + 2500;
		this->constGravity = rand() % 7 + 3;
	}
	// Planet Gaseous
	else if (randType > 20 && randType <= 80)
	{
		this->type = Gaseous;
		this->rayon = rand() % 40000 + 50000;
		this->constGravity = rand() % 9 + 3;
	}
	// Planet Dead
	else if (randType > 80)
	{
		this->type = Dead;
		this->rayon = rand() % 3000 + 2000;
		this->constGravity = rand() % 15 + 9;
	}
}

void Planet::showPlanet(int index)
{
	// Variable for the type of the planet
	string typePlanet = "";

	// Solution to Convert enum TypePlanet to string
	switch (this->type)
	{
	case Telluric:
		typePlanet = "Telluric";
		break;

	case Gaseous:
		typePlanet = "Gaseous";
		break;

	case Dead:
		typePlanet = "Dead";
		break;

	default:
		break;
	}

	// Cout Planet
	cout << to_string(index + 1) + " - " + typePlanet + ", " + to_string(this->rayon) + "km, " + to_string(this->constGravity) + "m/s2" << endl;
}
