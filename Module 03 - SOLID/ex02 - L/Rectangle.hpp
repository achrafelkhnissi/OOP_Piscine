//
// Created by Achraf El Khnissi on 08/09/2024.
//

#ifndef OOP_PISCINE_RECTANGLE_HPP
#define OOP_PISCINE_RECTANGLE_HPP

#include "Shape.hpp"

class Rectangle : public Shape {
public:
	Rectangle(double width, double height) {
		this->width = width;
		this->height = height;
	}
	double getArea() const {
		return width * height;
	}

private:
	double width;
	double height;
};


#endif //OOP_PISCINE_RECTANGLE_HPP
