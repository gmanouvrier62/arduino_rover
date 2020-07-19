#include "Arduino.h"
#include "Rover.h"

Rover::Rover(int pinV, int pinM1, int pinM2) {
	_pinV = pinV;
	_pinM1 = pinM1;
	_pinM2  = pinM2;


}

Rover::Accelerate(int facteur, int target) {
	
}

Rover::TurnLeft(int facteur) {
	
}

Rover::TurnRight(int facteur) {
	
}

Rover:Stop() {
	
}

Rover::GetDistance() {
	
	return 0;
}

Rover::GetDistanceLeft() {
	return 0;	
}

Rover::GetDistanceRight() {
	return 0;
}

Rover::Light(int state) {
	_light = state;
}

