//
// Created by Achraf El Khnissi on 08/09/2024.
//

#ifndef OOP_PISCINE_SHAPE_HPP
#define OOP_PISCINE_SHAPE_HPP


class Shape {
public:
	virtual ~Shape() {}
	virtual double getArea() const = 0;
};


#endif //OOP_PISCINE_SHAPE_HPP
