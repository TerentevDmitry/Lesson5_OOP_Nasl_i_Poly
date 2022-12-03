#include <iostream>
#include <string>


class Figure
{
protected:
	int numberOfSides_ = 0;
	std::string nameOfFigure_;

public:
    
	Figure(int numberOfSides, std::string nameOfFigure)
	{
		numberOfSides_ = numberOfSides;
		nameOfFigure_ = nameOfFigure;
	};

	int getNumberOfSides() const { return numberOfSides_; } //Метод геттер числа сторон

	std::string getNameOfFigure() const { return nameOfFigure_; } //Метод геттер названия фигуры
};

class Triangle : public Figure 
{ 
public:
		
	Triangle(int numberOfSides, std::string nameOfFigure) : Figure(numberOfSides, nameOfFigure) {};
	
};

class Quadrilateral : public Figure
{
public:

	Quadrilateral(int numberOfSides, std::string nameOfFigure) : Figure(numberOfSides, nameOfFigure) {};
};

void print(Figure &xFig) //Функция печати названия фигуры и числа сторон
{
	std::cout << xFig.getNameOfFigure() << ": " << xFig.getNumberOfSides() << std::endl;
}

int main()
{
	setlocale(LC_ALL, "Russian"); //Корректное отображение Кириллицы
	system("chcp 1251");

	std::cout << std::endl << "Количество сторон: " << std::endl;

	Figure Figure1(0, "Фигура");
    print(Figure1);

	Triangle Triangle1(3, "Треугольник");
	print(Triangle1);

	Quadrilateral Quadrilateral1(4, "Четырехугольник");
	print(Quadrilateral1);
};