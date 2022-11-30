#include <iostream>

class Figure
{
protected:
	int numberOfSides_ = 0;
	std::string nameOfFigure_ = "Фигура: ";

public:
	Figure(int numberOfSides, std::string nameOfFigure)
	{
		numberOfSides_ = numberOfSides;
		nameOfFigure_ = nameOfFigure;
	}

	Figure() = default;

	int getNumberOfSides()
	{
		return numberOfSides_;
	}

	std::string getNameOfFigure()
	{
		return nameOfFigure_;
	}
};

class Triangle : public Figure
{
private:
	int numberOfSides_ = 3;
	std::string nameOfFigure_ = "Треугольник: ";

public:
	int getNumberOfSides()
	{
		return numberOfSides_;
	}

	std::string getNameOfFigure()
	{
		return nameOfFigure_;
	}
};

class Quadrilateral : public Figure
{
private:
	int numberOfSides_ = 4;
	std::string nameOfFigure_ = "Четырехугольник: ";

public:
	int getNumberOfSides()
	{
		return numberOfSides_;
	}

	std::string getNameOfFigure()
	{
		return nameOfFigure_;
	}
};

void print(std::string nameOfFigure, int NumberOfSides)
{
	std::cout << nameOfFigure << NumberOfSides << std::endl;
}

int main()
{
	setlocale(LC_ALL, "Russian"); //Корректное отображение Кириллицы
	system("chcp 1251");

	std::cout << "Количество сторон: " << std::endl;
	
	Figure Figure;
	print(Figure.getNameOfFigure(), Figure.getNumberOfSides());
		
	Triangle Triangle;
	print(Triangle.getNameOfFigure(), Triangle.getNumberOfSides());
	
	Quadrilateral Quadrilateral;
	print(Quadrilateral.getNameOfFigure(), Quadrilateral.getNumberOfSides());
}