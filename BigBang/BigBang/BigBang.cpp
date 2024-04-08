#include "BigBang.h"

int main()
{
    // Initialise Universe
    Univer univers;

    // Initialise Random
    srand((unsigned)time(0));

    // Set & Show Planet
    for (int i = 0; i < 100; i++)
    {
        Planet planet = univers.getPlanets(i);
        planet.setPlanet();
        planet.showPlanet(i);
    }

    return 0;
}