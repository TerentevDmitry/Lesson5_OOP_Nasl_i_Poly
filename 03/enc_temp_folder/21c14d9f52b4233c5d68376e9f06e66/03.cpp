#include <iostream>
#include <string>

class Figure
{
protected:
	std::string nameOfFigure_ = "Фигура";
	bool haveFourSides_ = false; //признак что четыре стороны
	bool checkFigure = false;
	int quantityOfSides = 0;
	int sideLengthA_ = 0;
	int sideLengthB_ = 0;
	int sideLengthC_ = 0;
	int sideLengthD_ = 0;
	int angleA_ = 0;
	int angleB_ = 0;
	int angleC_ = 0;
	int angleD_ = 0;

virtual bool metodCheckFigure()
	{
		if (quantityOfSides == 0)
		{
			return true;
		}
		else
		{
			return false;
		}
	};

public:
	std::string getNameOfFigure() { return nameOfFigure_; }
	int getHaveFourSides() { return haveFourSides_; }

	int getSideLengthA() { return sideLengthA_; }
	int getSideLengthB() { return sideLengthB_; }
	int getSideLengthC() { return sideLengthC_; }
	int getSideLengthD() { return sideLengthD_; }

	int getAngleA() { return angleA_; }
	int getAngleB() { return angleB_; }
	int getAngleC() { return angleC_; }
	int getAngleD() { return angleD_; }

	virtual void printFigure()
	{
		std::cout << std::endl;
		std::cout << nameOfFigure_ << ":" << std::endl;
		if (metodCheckFigure())
		{
			std::cout << "Правильная" << std::endl;
		}
		else { std::cout << "Неправильная" << std::endl; }

		std::cout << "Количество сторон: " << quantityOfSides << std::endl;
	}
};

class Triangle : public Figure
{
protected:
	bool metodCheckFigure() override
	{
		if ((angleA_ + angleB_ + angleC_) == 180)
		{
			return true;
		}
		else
		{
			return false;
		}
	};

public:
	//Конструктор треугольника
	Triangle(int sideLengthA, int sideLengthB, int sideLengthC, int angleA, int angleB, int angleC)
	{
		nameOfFigure_ = "Треугольник";
		sideLengthA_ = sideLengthA;
		sideLengthB_ = sideLengthB;
		sideLengthC_ = sideLengthC;
		angleA_ = angleA;
		angleB_ = angleB;
		angleC_ = angleC;
		quantityOfSides = 3;
		checkFigure = metodCheckFigure();
	}

	void printFigure() override
	{
		Figure::printFigure();

		std::cout << "Стороны:";
		std::cout << " a = " << getSideLengthA() << ", b = " << getSideLengthB() << ", с = " << getSideLengthC();
		if (getHaveFourSides())
		{
			std::cout << ", d = " << getSideLengthD() << std::endl;
		}
		else { std::cout << std::endl; }
		
		std::cout << "Углы:";
		std::cout << " А = " << getAngleA() << ", В = " << getAngleB() << ", С = " << getAngleC();
		if (getHaveFourSides()) { std::cout << ", D = " << getAngleD() << std::endl; }
		else { std::cout << std::endl; }
	}

};

class rightTriangle : public Triangle
{
protected:
	bool metodCheckFigure() override
	{
		if (Triangle::metodCheckFigure())
		{
			return true;
		}
		else
		{
			return false;
		};
	};

public:
	rightTriangle(int sideLengthA, int sideLengthB, int sideLengthC, int angleA, int angleB)
		: Triangle(sideLengthA, sideLengthB, sideLengthC, angleA, angleB, 90)
	{
		Triangle::nameOfFigure_ = "Прямоугольный треугольник";
	};
};

class isoscelesTriangle : public Triangle
{
protected:
	bool metodCheckFigure() override
	{
		if (Triangle::metodCheckFigure() && (sideLengthA_ == sideLengthC_ && angleA_ == angleC_))
		{
			return true;
		}
		else
		{
			return false;
		};
	};

public:
	isoscelesTriangle(int sideLengthA, int sideLengthB, int angleA, int angleB)
		: Triangle(sideLengthA, sideLengthB, sideLengthA, angleA, angleB, angleA)
	{
		Triangle::nameOfFigure_ = "Равнобедренный треугольник";
	};
};

class equilateralTriangle : public Triangle
{


public:
	equilateralTriangle(int sideLengthA, int sideLengthB, int sideLengthC)
		: Triangle(sideLengthA, sideLengthB, sideLengthC, 60, 60, 60)
	{
		Triangle::nameOfFigure_ = "Равносторонний треугольник";
	};
protected:
	bool metodCheckFigure() override
	{
		if (Triangle::metodCheckFigure() && (sideLengthA_ == sideLengthB_ == sideLengthC_))
		{
			return true;
		}
		else
		{
			return false;
		};
	};
};

class Quadrilateral : public Figure
{

public:
	Quadrilateral(int sideLengthA, int sideLengthB, int sideLengthC, int sideLengthD, int angleA, int angleB, int angleC, int angleD)
	{
		nameOfFigure_ = "Четырехугольник";

		haveFourSides_ = true;

		sideLengthA_ = sideLengthA;
		sideLengthB_ = sideLengthB;
		sideLengthC_ = sideLengthC;
		sideLengthD_ = sideLengthD;

		angleA_ = angleA;
		angleB_ = angleB;
		angleC_ = angleC;
		angleD_ = angleD;
	}
};

class Rectangle : public Quadrilateral
{
public:
	Rectangle(int sideLengthA, int sideLengthB)
		: Quadrilateral(sideLengthA, sideLengthB, sideLengthA, sideLengthB, 90, 90, 90, 90)
	{
		Quadrilateral::nameOfFigure_ = "Прямоугольник";
	}
};

class Square : public Quadrilateral
{
public:
	Square(int sideLengthA)
		: Quadrilateral(sideLengthA, sideLengthA, sideLengthA, sideLengthA, 90, 90, 90, 90)
	{
		Quadrilateral::nameOfFigure_ = "Квадрат";
	}
};

class Parallelogram : public Quadrilateral
{
public:
	Parallelogram(int sideLengthA, int sideLengthB, int angleA, int angleB)
		: Quadrilateral(sideLengthA, sideLengthB, sideLengthA, sideLengthB, angleA, angleB, angleA, angleB)
	{
		Quadrilateral::nameOfFigure_ = "Параллелограмм";
	}
};

class Rhomb : public Quadrilateral
{
public:
	Rhomb(int sideLengthA, int angleA, int angleB)
		: Quadrilateral(sideLengthA, sideLengthA, sideLengthA, sideLengthA, angleA, angleB, angleA, angleB)
	{
		Quadrilateral::nameOfFigure_ = "Ромб";
	}
};

int main()
{
	setlocale(LC_ALL, "Russian"); //Корректное отображение Кириллицы
	system("chcp 1251");

	Figure Figure1;
	Figure1.printFigure();

	Triangle Triangle1(10, 20, 30, 50, 60, 70);
	Triangle1.printFigure();

	rightTriangle rightTriangle1(10, 20, 30, 30, 60);
	rightTriangle1.printFigure();

	rightTriangle rightTriangle2(10, 20, 30, 50, 60);
	rightTriangle2.printFigure();

	isoscelesTriangle isoscelesTriangle1(10, 20, 50, 60);
	isoscelesTriangle1.printFigure();

	isoscelesTriangle isoscelesTriangle2(10, 20, 50, 80);
	isoscelesTriangle2.printFigure();

	equilateralTriangle equilateralTriangle1(20, 20, 20);
	equilateralTriangle1.printFigure();

	equilateralTriangle equilateralTriangle2(20, 30, 20);
	equilateralTriangle2.printFigure();

	//Quadrilateral Quadrilateral1(10, 20, 30, 40, 50, 60, 70, 80);
	//Quadrilateral1.printFigure();

	//Rectangle Rectangle1(10, 20);
	//Rectangle1.printFigure();

	//Square Square1(20);
	//Square1.printFigure();

	//Parallelogram Parallelogram1(20, 30, 30, 40);
	//Parallelogram1.printFigure();

	//Rhomb Rhomb1(30, 30, 40);
	//Rhomb1.printFigure();
}