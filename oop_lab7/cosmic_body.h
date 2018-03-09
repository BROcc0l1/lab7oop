#pragma once

#include "point.h"

namespace ooplab7 {

	class CosmicBody {

	protected:

		Point3D location;
		double weight;

	public:

		double speed;

		Point3D getLocation();
		double getSpeed();
		double getWeight();

	};

}