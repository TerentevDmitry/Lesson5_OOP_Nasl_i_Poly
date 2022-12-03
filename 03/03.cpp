#include <iostream>
#include <string>

class Figure
{
protected:
	std::string nameOfFigure_ = "Фигура";
	int quantityOfSides = 0;

public:

	void print_info()
	{
		std::cout	<< std::endl << nameOfFigure_ << ":" << std::endl
					<< "Правильная" << std::endl
					<< "Количество сторон: " << quantityOfSides << std::endl;
	}
};

class Triangle
{
protected:
	std::string nameOfFigure_;
	int sideLengthA_ = 0;
	int sideLengthB_ = 0;
	int sideLengthC_ = 0;
	int angleA_ = 0;
	int angleB_ = 0;
	int angleC_ = 0;
	const int quantityOfSides = 3;

public:
	Triangle(){};
	
	//Метод печати
	void print_info()
	{
		std::cout << std::endl << nameOfFigure_ << ":" << std::endl;
		if (check()) { std::cout << "Правильная" << std::endl; }
		else { std::cout << "Не правильная" << std::endl; };
		
		std::cout	<< "Количество сторон: " << quantityOfSides << std::endl;
		std::cout	<< "Стороны: ";
		std::cout	<< " a = " << sideLengthA_ << ", b = " << sideLengthB_ << ", с = " << sideLengthC_
					<< std::endl;
		
		std::cout	<< "Углы: ";
		std::cout	<< " А = " << angleA_ << ", В = " << angleB_ << ", С = " << angleC_
					<< std::endl;
	}
	
	//Конструктор для треугольника
	Triangle(int sideLengthA, int sideLengthB, int sideLengthC, int angleA, int angleB, int angleC)
	{
		nameOfFigure_ = "Треугольник";
		sideLengthA_ = sideLengthA;
		sideLengthB_ = sideLengthB;
		sideLengthC_ = sideLengthC;
		angleA_ = angleA;
		angleB_ = angleB;
		angleC_ = angleC;
	}

	bool check()
	{
		if (((angleA_ + angleB_ + angleC_) != 180) || sideLengthA_ == 0 || sideLengthB_ == 0 || sideLengthC_ == 0)
		{
			return false;
		}
		else
		{
			return true;
		}
	};
};

class rightTriangle : public Triangle
{
public:
	//Конструктор для Прямоугольного треугольника
	rightTriangle(int sideLengthA, int sideLengthB, int sideLengthC, int angleA, int angleB)
		: Triangle(sideLengthA, sideLengthB, sideLengthC, angleA, angleB, angleC_)
	{
		nameOfFigure_ = "Прямоугольный треугольник";
		sideLengthA_ = sideLengthA;
		sideLengthB_ = sideLengthB;
		sideLengthC_ = sideLengthC;
		angleA_ = angleA; 
		angleB_ = angleB;
		angleC_ = 90;
	}
};

class isoscelesTriangle : public Triangle
{
public:
	//Конструктор для Равнобедренного треугольника
	isoscelesTriangle(int sideLengthA, int sideLengthB, int angleA, int angleB)
	{
		nameOfFigure_ = "Равнобедренный треугольник";
		sideLengthA_ = sideLengthC_ = sideLengthA;
		sideLengthB_ = sideLengthB;
		angleA_ = angleC_ = angleA;
		angleB_ = angleB;
	}
};

class equilateralTriangle : public Triangle
{
public:
	//Конструктор для Равностороннего треугольника
	equilateralTriangle(int sideLengthA, int angleA)
	{
		nameOfFigure_ = "Равносторонний треугольник";
		sideLengthA_ = sideLengthB_ = sideLengthC_ = sideLengthA;
		angleA_ = angleB_ = angleC_ = angleA;
	}
};

class Quadrilateral
{
protected:
	std::string nameOfFigure_;
	int sideLengthA_ = 0;
	int sideLengthB_ = 0;
	int sideLengthC_ = 0;
	int sideLengthD_ = 0;
	int angleA_ = 0;
	int angleB_ = 0;
	int angleC_ = 0;
	int angleD_ = 0;
	const int quantityOfSides = 4;


public:
	Quadrilateral() = default;

	Quadrilateral(int sideLengthA, int sideLengthB, int sideLengthC, int sideLengthD, int angleA, int angleB, int angleC, int angleD)
	{
		nameOfFigure_ = "Четырехугольник";
		sideLengthA_ = sideLengthA;
		sideLengthB_ = sideLengthB;
		sideLengthC_ = sideLengthC;
		sideLengthD_ = sideLengthD;

		angleA_ = angleA;
		angleB_ = angleB;
		angleC_ = angleC;
		angleD_ = angleD;
	}

	bool check()
	{
		if (((angleA_ + angleB_ + angleC_) + angleD_ != 360) || sideLengthA_ == 0 || sideLengthB_ == 0 || sideLengthC_ == 0 || sideLengthD_ == 0)
		{
			return false;
		}
		else
		{
			return true;
		}
	};

	//Метод печати
	void print_info()
	{
		std::cout << std::endl << nameOfFigure_ << ":" << std::endl;
		if (check()) { std::cout << "Правильная" << std::endl; }
		else { std::cout << "Не правильная" << std::endl; };

		std::cout << "Количество сторон: " << quantityOfSides << std::endl;
		std::cout << "Стороны: ";
		std::cout << " a = " << sideLengthA_ << ", b = " << sideLengthB_ << ", с = " << sideLengthC_ << ", d = " << sideLengthD_
			<< std::endl;

		std::cout << "Углы: ";
		std::cout << " А = " << angleA_ << ", В = " << angleB_ << ", С = " << angleC_ << ", D = " << angleD_
			<< std::endl;
	}
};

class Rectangle : public Quadrilateral
{
public:
	Rectangle() = default;
	Rectangle(int sideLengthA, int sideLengthB)
	{
		nameOfFigure_ = "Прямоугольник";
		sideLengthA_ = sideLengthC_ = sideLengthA;
		sideLengthB_ = sideLengthD_ = sideLengthB;
		angleA_ = angleB_ = angleC_ = angleD_ = 90;
	}
};

class Square : public Rectangle
{
public:
	Square(int sideLengthA)
	{
		nameOfFigure_ = "Квадрат";
		sideLengthA_ = sideLengthB_ = sideLengthC_ = sideLengthD_ = sideLengthA;
		angleA_ = angleB_ = angleC_ = angleD_ = 90;
	}
};

class Parallelogram : public Rectangle
{
public:
	Parallelogram(int sideLengthA, int sideLengthB, int angleA, int angleB)
	{
		nameOfFigure_ = "Параллелограмм";
		sideLengthA_ = sideLengthC_ = sideLengthA;
		sideLengthB_ = sideLengthD_ = sideLengthB;

		angleA_ = angleC_ = angleA;
		angleB_ = angleD_ = angleB;
	}
};

class Rhomb : public Rectangle
{
public:
	Rhomb(int sideLengthA, int angleA, int angleB)
	{
		nameOfFigure_ = "Ромб";
		sideLengthA_ = sideLengthB_ = sideLengthC_ = sideLengthD_ = sideLengthA;

		angleA_ = angleC_ = angleA;
		angleB_ = angleD_ = angleB;
	}
};

int main()
{
	setlocale(LC_ALL, "Russian"); //Корректное отображение Кириллицы
	system("chcp 1251");

	Figure Fig1;
	Fig1.print_info();

	Triangle Triangle1(10, 20, 1, 70, 50, 60);
	Triangle1.print_info();

	rightTriangle rightTriangle1(11, 22, 30, 30, 60);
	rightTriangle1.print_info();
	
	isoscelesTriangle isoscelesTriangle1(12, 20, 50, 875);
	isoscelesTriangle1.print_info();

	equilateralTriangle equilateralTriangle1(33, 60);
	equilateralTriangle1.print_info();
	
	Quadrilateral Quadrilateral1(14, 20, 30, 40, 50, 60, 70, 80);
	Quadrilateral1.print_info();
	
	Rectangle Rectangle1(15, 20);
	Rectangle1.print_info();
	
	Square Square1(16);
	Square1.print_info();
	
	Parallelogram Parallelogram1(20, 30, 30, 40);
	Parallelogram1.print_info();

	Rhomb Rhomb1(30, 30, 40);
	Rhomb1.print_info();
}