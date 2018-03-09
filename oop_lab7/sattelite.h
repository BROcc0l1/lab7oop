#pragma once

#include "cosmic_body.h"
#include <iostream>

using namespace System;

namespace ooplab7 {

	class Sattelite : public CosmicBody {

	public:

		unsigned int crueMembersCount;

	private:
		bool onAutoPilot;


	public:

		Sattelite() {}
		Sattelite(bool onAutoPilot, Point3D location, double weight) {
			this->onAutoPilot = onAutoPilot;
			this->location = location;
			this->weight = weight;
		}
		Sattelite(bool onAutoPilot, Point3D location, double weight, double speed, unsigned int crueMembersCount) {
			this->onAutoPilot = onAutoPilot;
			this->location = location;
			this->weight = weight;
			this->speed = speed;
			this->crueMembersCount = crueMembersCount;
		}


		bool isOnAutoPilot();
		void toggleAutoPilot();
		void accelerate(double);
		String^ moveMessage(Point3D*);

	};

}