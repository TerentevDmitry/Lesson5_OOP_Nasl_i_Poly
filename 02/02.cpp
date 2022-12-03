#include <iostream>

class Triangle
{
protected:
	std::string nameOfFigure_ = "Треугольник";
	int sideLengthA_ = 0;
	int sideLengthB_ = 0;
	int sideLengthC_ = 0;
	int angleA_ = 0;
	int angleB_ = 0;
	int angleC_ = 0;
	
public:
	Triangle() = default;
	
	Triangle(int sideLengthA, int sideLengthB, int sideLengthC, int angleA, int angleB, int angleC)
	{
		sideLengthA_ = sideLengthA;
		sideLengthB_ = sideLengthB;
		sideLengthC_ = sideLengthC;
		angleA_ = angleA;
		angleB_ = angleB;
		angleC_ = angleC;
	}

	std::string getNameOfFigure() { return nameOfFigure_; }

	int getSideLengthA() { return sideLengthA_; }
	int getSideLengthB() { return sideLengthB_; }
	int getSideLengthC() { return sideLengthC_; }

	int getAngleA() { return angleA_; }
	int getAngleB() { return angleB_; }
	int getAngleC() { return angleC_; }
};

class rightTriangle : public Triangle
{
public:

	rightTriangle(int sideLengthA, int sideLengthB, int sideLengthC, int angleA, int angleB)
	{
		Triangle::nameOfFigure_ = "Прямоугольный треугольник";
		Triangle::sideLengthA_ = sideLengthA;
		Triangle::sideLengthB_ = sideLengthB;
		Triangle::sideLengthC_ = sideLengthC;
		Triangle::angleA_ = angleA;
		Triangle::angleB_ = angleB;
		Triangle::angleC_ = 90;
	}
};

class isoscelesTriangle : public Triangle
{
public:

	isoscelesTriangle(int sideLengthA, int sideLengthB, int angleA, int angleB)
	{
		Triangle::nameOfFigure_ = "Равнобедренный треугольник";
		Triangle::sideLengthA_ = sideLengthA;
		Triangle::sideLengthB_ = sideLengthB;
		Triangle::sideLengthC_ = sideLengthA;
		Triangle::angleA_ = angleA;
		Triangle::angleB_ = angleB;
		Triangle::angleC_ = angleA;
	}
};

class equilateralTriangle : public Triangle
{
public:

	equilateralTriangle(int sideLengthA, int angleA)
	{
		Triangle::nameOfFigure_ = "Равносторонний треугольник";
		Triangle::sideLengthA_ = sideLengthA;
		Triangle::sideLengthB_ = sideLengthA;
		Triangle::sideLengthC_ = sideLengthA;
		Triangle::angleA_ = angleA;
		Triangle::angleB_ = angleA;
		Triangle::angleC_ = angleA;
	}
};

class Quadrilateral
{
protected:
	std::string nameOfFigure_ = "Четырехугольник";
	int sideLengthA_ = 0;
	int sideLengthB_ = 0;
	int sideLengthC_ = 0;
	int sideLengthD_ = 0;
	int angleA_ = 0;
	int angleB_ = 0;
	int angleC_ = 0;
	int angleD_ = 0;

public:
	Quadrilateral() = default;

	Quadrilateral(int sideLengthA, int sideLengthB, int sideLengthC, int sideLengthD, int angleA, int angleB, int angleC, int angleD)
	{
		sideLengthA_ = sideLengthA;
		sideLengthB_ = sideLengthB;
		sideLengthC_ = sideLengthC;
		sideLengthD_ = sideLengthD;

		angleA_ = angleA;
		angleB_ = angleB;
		angleC_ = angleC;
		angleD_ = angleD;
	}

	std::string getNameOfFigure() { return nameOfFigure_; }

	int getSideLengthA() { return sideLengthA_; }
	int getSideLengthB() { return sideLengthB_; }
	int getSideLengthC() { return sideLengthC_; }
	int getSideLengthD() { return sideLengthD_; }

	int getAngleA() { return angleA_; }
	int getAngleB() { return angleB_; }
	int getAngleC() { return angleC_; }
	int getAngleD() { return angleD_; }



};

class Rectangle : public Quadrilateral
{
public:
	Rectangle() = default;
	
	Rectangle(int sideLengthA, int sideLengthB)
	{
		Quadrilateral::nameOfFigure_ = "Прямоугольник";
		
		Quadrilateral::sideLengthA_ = sideLengthA;
		Quadrilateral::sideLengthB_ = sideLengthB;
		Quadrilateral::sideLengthC_ = sideLengthA;
		Quadrilateral::sideLengthD_ = sideLengthB;

		Quadrilateral::angleA_ = 90;
		Quadrilateral::angleB_ = 90;
		Quadrilateral::angleC_ = 90;
		Quadrilateral::angleD_ = 90;
	}
};

class Square : public Rectangle
{
public:
	Square(int sideLengthA)
	{
		Quadrilateral::nameOfFigure_ = "Квадрат";

		Rectangle::sideLengthA_ = sideLengthA;
		Rectangle::sideLengthB_ = sideLengthA;
		Rectangle::sideLengthC_ = sideLengthA;
		Rectangle::sideLengthD_ = sideLengthA;

		Rectangle::angleA_ = 90;
		Rectangle::angleB_ = 90;
		Rectangle::angleC_ = 90;
		Rectangle::angleD_ = 90;
	}
};

class Parallelogram : public Quadrilateral
{
public:
	Parallelogram(int sideLengthA, int sideLengthB, int angleA, int angleB)
	{
		Quadrilateral::nameOfFigure_ = "Параллелограмм";

		Quadrilateral::sideLengthA_ = sideLengthA;
		Quadrilateral::sideLengthB_ = sideLengthB;
		Quadrilateral::sideLengthC_ = sideLengthA;
		Quadrilateral::sideLengthD_ = sideLengthB;

		Quadrilateral::angleA_ = angleA;
		Quadrilateral::angleB_ = angleB;
		Quadrilateral::angleC_ = angleA;
		Quadrilateral::angleD_ = angleB;
	}
};

class Rhomb : public Quadrilateral
{
public:
	Rhomb(int sideLengthA, int angleA, int angleB)
	{
		Quadrilateral::nameOfFigure_ = "Ромб";

		Quadrilateral::sideLengthA_ = sideLengthA;
		Quadrilateral::sideLengthB_ = sideLengthA;
		Quadrilateral::sideLengthC_ = sideLengthA;
		Quadrilateral::sideLengthD_ = sideLengthA;

		Quadrilateral::angleA_ = angleA;
		Quadrilateral::angleB_ = angleB;
		Quadrilateral::angleC_ = angleA;
		Quadrilateral::angleD_ = angleB;
	}
};

void printTriangle(Triangle &form)
{
	std::cout << std::endl;
	std::cout << form.getNameOfFigure() << ":" << std::endl;

	std::cout << "Стороны:";
	std::cout << " a = " << form.getSideLengthA() << ", b = " << form.getSideLengthB() << ", с = " << form.getSideLengthC()
		<< std::endl;

	std::cout << "Углы:";
	std::cout << " А = " << form.getAngleA() << ", В = " << form.getAngleB() << ", С = " << form.getAngleC()
		<< std::endl;
}
void printQuadrilateral(Quadrilateral &form)
{
	std::cout << std::endl;
	std::cout << form.getNameOfFigure() << ":" << std::endl;
	
	std::cout << "Стороны:";
	std::cout << " a = " << form.getSideLengthA() << ", b = " << form.getSideLengthB() << ", с = " << form.getSideLengthC()
			  << ", d = " << form.getSideLengthD() << std::endl;
		
	std::cout << "Углы:";
	std::cout << " А = " << form.getAngleA() << ", В = " << form.getAngleB() << ", С = " << form.getAngleC()
		      << ", D = " << form.getAngleD() << std::endl;
}

int main()
{
	setlocale(LC_ALL, "Russian"); //Корректное отображение Кириллицы
	system("chcp 1251");
		
	Triangle Triangle1 (10, 20, 30, 50, 60, 70);
	printTriangle(Triangle1);

	rightTriangle rightTriangle1 (10, 20, 30, 50, 60);
	printTriangle(rightTriangle1);

	isoscelesTriangle isoscelesTriangle1(10, 20, 50, 60);
	printTriangle(isoscelesTriangle1);

	equilateralTriangle equilateralTriangle1(30, 60);
	printTriangle(equilateralTriangle1);

	Quadrilateral Quadrilateral1(10, 20, 30, 40, 50, 60, 70, 80);
	printQuadrilateral(Quadrilateral1);

	Rectangle Rectangle1(10, 20);
	printQuadrilateral(Rectangle1);

	Square Square1(10);
	printQuadrilateral(Square1);

	Parallelogram Parallelogram1(20, 30, 30, 40);
	printQuadrilateral(Parallelogram1);

	Rhomb Rhomb1(30, 30, 40);
	printQuadrilateral(Rhomb1);
} 