//
// Created by Achraf El Khnissi on 08/09/2024.
//

#include "Shape.hpp"
#include "Circle.hpp"
#include "Rectangle.hpp"
#include "Triangle.hpp"
#include <iostream>

int main() {
	Shape *shape = new Circle(5);
	std::cout << shape->getArea() << std::endl;
	delete shape;

	shape = new Rectangle(5, 10);
	std::cout << shape->getArea() << std::endl;
	delete shape;

	shape = new Triangle(5, 10);
	std::cout << shape->getArea() << std::endl;
	delete shape;

	return 0;
}
