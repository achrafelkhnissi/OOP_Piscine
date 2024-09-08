//
// Created by Achraf El Khnissi on 08/09/2024.
//

#ifndef OOP_PISCINE_TRIANGLE_HPP
#define OOP_PISCINE_TRIANGLE_HPP

#include "Shape.hpp"

class Triangle : public Shape {
public:
	Triangle(double base, double height) {
		this->base = base;
		this->height = height;
	}
	double getArea() const {
		return (base * height) / 2;
	}

private:
	double base;
	double height;
};

#endif //OOP_PISCINE_TRIANGLE_HPP
