#pragma once
#include "Car.h" /*car class»ó¼Ó*/

class SportsCar : public Car
{
public:
	bool bTurbo;
	void seTurbo(bool bTur) {
		bTurbo = bTur;
	}
	void speedUp() {
		if (bTurbo)
			speed += 20;
		else
			Car::speedUp();
	}
};