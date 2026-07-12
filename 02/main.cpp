#include <Windows.h>
#include <iostream>
#include "figures.h"

void print_info(const Figure* figure);

int main()
{
	SetConsoleCP(65001);
	SetConsoleOutputCP(65001);

	try {
		Triangle triangle(10, 20, 30, 50, 60, 70);
		triangle.print_info();
		std::cout << " создан" << std::endl;
	}
	catch (const FigureException& e) {
		std::cout << "Ошибка создания фигуры. Причина: " << e.what() << std::endl;
	}

	try {
		RightTriangle right_tri(10, 20, 30, 50, 60);
		right_tri.print_info();
		std::cout << " создан" << std::endl;
	}
	catch (const FigureException& e) {
		std::cout << "Ошибка создания фигуры. Причина: " << e.what() << std::endl;
	}

	try {
		IsoscelesTriangle isosceles_tri(10, 20, 50, 60);
		isosceles_tri.print_info();
		std::cout << " создан" << std::endl;
	}
	catch (const FigureException& e) {
		std::cout << "Ошибка создания фигуры. Причина: " << e.what() << std::endl;
	}

	try {
		EquilateralTriangle equilateral_tri(30);
		equilateral_tri.print_info();
		std::cout << " создан" << std::endl;
	}
	catch (const FigureException& e) {
		std::cout << "Ошибка создания фигуры. Причина: " << e.what() << std::endl;
	}

	try {
		Quadrangle quadrangle(10, 20, 30, 40, 50, 60, 70, 80);
		quadrangle.print_info();
		std::cout << " создан" << std::endl;
	}
	catch (const FigureException& e) {
		std::cout << "Ошибка создания фигуры. Причина: " << e.what() << std::endl;
	}

	try {
		Figures::Rectangle rectangle(10, 20);
		rectangle.print_info();
		std::cout << " создан" << std::endl;
	}
	catch (const FigureException& e) {
		std::cout << "Ошибка создания фигуры. Причина: " << e.what() << std::endl;
	}

	try {
		Square square(20);
		square.print_info();
		std::cout << " создан" << std::endl;
	}
	catch (const FigureException& e) {
		std::cout << "Ошибка создания фигуры. Причина: " << e.what() << std::endl;
	}

	try {
		Parallelogram parallelogram(20, 30, 30, 40);
		parallelogram.print_info();
		std::cout << " создан" << std::endl;
	}
	catch (const FigureException& e) {
		std::cout << "Ошибка создания фигуры. Причина: " << e.what() << std::endl;
	}

	try {
		Rhombus rhombus(30, 30, 40);
		rhombus.print_info();
		std::cout << " создан" << std::endl;
	}
	catch (const FigureException& e) {
		std::cout << "Ошибка создания фигуры. Причина: " << e.what() << std::endl;
	}

	std::cout << "\n--- Проверка некорректных данных ---\n";

	try {
		Triangle invalid_tri(3, 4, 5, 30, 60, 100);
		invalid_tri.print_info();
		std::cout << " создан" << std::endl;
	}
	catch (const FigureException& e) {
		std::cout << "Ошибка создания фигуры. Причина: " << e.what() << std::endl;
	}

	try {
		Quadrangle invalid_quad(1, 2, 3, 4, 90, 90, 90, 100);
		invalid_quad.print_info();
		std::cout << " создан" << std::endl;
	}
	catch (const FigureException& e) {
		std::cout << "Ошибка создания фигуры. Причина: " << e.what() << std::endl;
	}

	try {
		Triangle invalid_side(-1, 2, 3, 60, 60, 60);
		invalid_side.print_info();
		std::cout << " создан" << std::endl;
	}
	catch (const FigureException& e) {
		std::cout << "Ошибка создания фигуры. Причина: " << e.what() << std::endl;
	}

	try {
		Quadrangle invalid_angle(1, 2, 3, 4, -10, 90, 90, 190);
		invalid_angle.print_info();
		std::cout << " создан" << std::endl;
	}
	catch (const FigureException& e) {
		std::cout << "Ошибка создания фигуры. Причина: " << e.what() << std::endl;
	}

	return 0;
}

void print_info(const Figure* figure)
{
	figure->print_info();
}