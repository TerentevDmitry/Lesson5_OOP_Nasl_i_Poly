#include <iostream>
#include <string>

class Triangle
{
protected:
	std::string nameOfFigure_ = "Треугольник";
	int sideLengthA_ = 10;
	int sideLengthB_ = 20;
	int sideLengthC_ = 30;
	int angleA_ = 50;
	int angleB_ = 60;
	int angleC_ = 70;
	
public:
	Triangle() {};
	
	//Конструктор
	Triangle(int sideLengthA, int sideLengthB, int sideLengthC, 
			int angleA, int angleB, int angleC)
	{
		nameOfFigure_ = "xTriangle";
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
protected:
	

public:
	rightTriangle() : Triangle(10, 20, 10, 50, 60, 50) 
					{ Triangle::nameOfFigure_ = "Прямоугольный треугольник"; };
};

class isoscelesTriangle : public Triangle
{
public:
	isoscelesTriangle() : Triangle(10, 20, 30, 50, 60, 90) 
						{ Triangle::nameOfFigure_ = "Равнобедренный треугольник"; }
};

class equilateralTriangle : public Triangle
{
public:
	equilateralTriangle() : Triangle(30, 30, 30, 60, 60, 60)
						  { Triangle::nameOfFigure_ = "Равносторонний треугольник"; }
};

class Quadrilateral
{
protected:
	std::string nameOfFigure_ = "Четырехугольник";
	int sideLengthA_ = 10;
	int sideLengthB_ = 20;
	int sideLengthC_ = 30;
	int sideLengthD_ = 40;
	int angleA_ = 50;
	int angleB_ = 60;
	int angleC_ = 70;
	int angleD_ = 80;

public:
	Quadrilateral() {};

	Quadrilateral(int sideLengthA, int sideLengthB, int sideLengthC, int sideLengthD, int angleA, int angleB, int angleC, int angleD)
	{
		nameOfFigure_ = "xQuadrilateral";
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
	Rectangle() : Quadrilateral(10, 20, 10, 20, 90, 90, 90, 90)
				{ Quadrilateral::nameOfFigure_ = "Прямоугольник"; }

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

class Square : public Quadrilateral
{
public:
	Square() : Quadrilateral(20, 20, 20, 20, 90, 90, 90, 90)
	{
		Quadrilateral::nameOfFigure_ = "Квадрат";
	}
};

class Parallelogram : public Quadrilateral
{
public:
	Parallelogram() : Quadrilateral(20, 30, 20, 30, 30, 40, 30, 40)
	{
		Quadrilateral::nameOfFigure_ = "Параллелограмм";
	}
};

class Rhomb : public Quadrilateral
{
public:
	Rhomb() : Quadrilateral(30, 30, 30, 30, 30, 40, 30, 40)
	{
		Quadrilateral::nameOfFigure_ = "Ромб";
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
		
	Triangle Triangle1;
	printTriangle(Triangle1);

	rightTriangle rightTriangle1;
	printTriangle(rightTriangle1);

	isoscelesTriangle isoscelesTriangle1;
	printTriangle(isoscelesTriangle1);

	equilateralTriangle equilateralTriangle1;
	printTriangle(equilateralTriangle1);

	Quadrilateral Quadrilateral1;
	printQuadrilateral(Quadrilateral1);

	Rectangle Rectangle1;
	printQuadrilateral(Rectangle1);

	Square Square1;
	printQuadrilateral(Square1);

	Parallelogram Parallelogram1;
	printQuadrilateral(Parallelogram1);

	Rhomb Rhomb1;
	printQuadrilateral(Rhomb1);
} 