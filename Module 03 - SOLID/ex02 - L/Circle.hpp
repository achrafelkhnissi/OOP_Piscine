//
// Created by Achraf El Khnissi on 08/09/2024.
//

#ifndef OOP_PISCINE_CIRCLE_HPP
#define OOP_PISCINE_CIRCLE_HPP

#include "Shape.hpp"

class Circle : public Shape {
public:
	explicit Circle(double radius) {
		this->radius = radius;
	}
	double getArea() const {
		return 3.14 * radius * radius;
	}

private:
	double radius;
};


#endif //OOP_PISCINE_CIRCLE_HPP
