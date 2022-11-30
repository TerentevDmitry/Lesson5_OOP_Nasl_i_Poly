#include <iostream>

class Figure
{
private:
	int numberOfSides_ = 0;
	std::string nameOfFigure_ = "Фигура: ";

public:
	Figure() = default;

	int getNumberOfSides()
	{
		return numberOfSides_;
	}

	void setNumberOfSides(int numberOfSides)
	{
		numberOfSides_ = numberOfSides;
	}

	std::string getNameOfFigure()
	{
		return nameOfFigure_;
	}

	void setNameOfFigure(std::string nameOfFigure)
	{
		nameOfFigure_ = nameOfFigure;
	}
};

class Triangle : public Figure
{
private:
	int numberOfSides_ = 3;
	std::string nameOfFigure_ = "Треугольник: ";

public:
	void setNameOfFigure()
	{
		Figure::setNameOfFigure(Triangle::nameOfFigure_);
	}

	void setNumberOfSides()
	{
		Figure::setNumberOfSides(Triangle::numberOfSides_);
	}
};

class Quadrilateral : public Figure
{
private:
	std::string nameOfFigure_ = "Четырехугольник: ";
	int numberOfSides_ = 4;
	
public:
	void setNameOfFigure()
	{
		Figure::setNameOfFigure(Quadrilateral::nameOfFigure_);
	}

	void setNumberOfSides()
	{
		Figure::setNumberOfSides(Quadrilateral::numberOfSides_);
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

	std::cout << std::endl << "Количество сторон: " << std::endl;
	
	Figure Figure;
	print(Figure.getNameOfFigure(), Figure.getNumberOfSides());
		
	Triangle Triangle;
	Triangle.setNameOfFigure();
	Triangle.setNumberOfSides();
	print(Triangle.getNameOfFigure(), Triangle.getNumberOfSides());
	
	Quadrilateral Quadrilateral;
	Quadrilateral.setNameOfFigure();
	Quadrilateral.setNumberOfSides();
	print(Quadrilateral.getNameOfFigure(), Quadrilateral.getNumberOfSides());
}