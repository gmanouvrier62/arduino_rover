#ifndef #Rover_h
#define Rover_h
#include "Arduino.h"

class Rover{
	public:
		Rover(int pinV, int pinM1, int pinM2);
		void Accelerate(int facteur, int target);
		void TurnLeft(int facteur);
		void TurnRight(int facteur);
		void Stop();
		int GetDistance();
		int GetDistanceLeft();
		int GetDistanceRight();
		void Light(int state);

	private:
		int _pinV;
		int _pinM1;
		int _pinM2;
		int _currentV;
		int _light;
}