#include "sattelite.h"
#include "ControlPanel.h"

using namespace ooplab7;

bool Sattelite::isOnAutoPilot() {
	return onAutoPilot;
}

void Sattelite::toggleAutoPilot() {
	onAutoPilot = !onAutoPilot;
	if (onAutoPilot) std::cout << "Autopilot enabled";
	else std::cout << "Autopilot disabled";
}

void Sattelite::accelerate(double speedGain) {
	speed += speedGain;
}

String^ Sattelite::moveMessage(Point3D* destination) {
	 //std::cout << "Moving to point (" << destination.x << "," << destination.y << "," << destination.z << ").";
	 String^ msg = gcnew String("Moving to point (" + System::Convert::ToString(destination->x) + "," + 
		System::Convert::ToString(destination->y) + "," + System::Convert::ToString(destination->z) + ").");
	 return msg;
}