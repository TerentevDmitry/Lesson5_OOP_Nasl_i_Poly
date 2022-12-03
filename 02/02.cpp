#include <iostream>
#include <string>

class Triangle
{
protected:
	std::string nameOfFigure_;
	int sideLengthA_ = 0;
	int sideLengthB_ = 0;
	int sideLengthC_ = 0;
	int angleA_ = 0;
	int angleB_ = 0;
	int angleC_ = 90;
	
public:
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

	//Конструктор для равнобедренного треугольника
	Triangle(int sideLengthA, int sideLengthB, int sideLengthC, int angleA, int angleB)
	{
		nameOfFigure_ = "Прямоугольный треугольник";
		sideLengthA_ = sideLengthA;
		sideLengthB_ = sideLengthB;
		sideLengthC_ = sideLengthC;
		angleA_ = angleA;
		angleB_ = angleB;
	}

	Triangle(int sideLengthA, int sideLengthB, int angleA, int angleB)
	{
		nameOfFigure_ = "Равнобедренный треугольник";
		sideLengthA_ = sideLengthC_ = sideLengthA;
		sideLengthB_ = sideLengthB;
		angleA_ = angleC_ = angleA;
		angleB_ = angleB;
	}

	Triangle(int sideLengthA, int angleA)
	{
		nameOfFigure_ = "Равносторонний треугольник";
		sideLengthA_ = sideLengthB_ = sideLengthC_ = sideLengthA;
		angleA_ = angleB_ = angleC_ = angleA;
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
		: Triangle(sideLengthA, sideLengthB, sideLengthC, angleA, angleB) {}
};

class isoscelesTriangle : public Triangle
{
public:
	isoscelesTriangle(int sideLengthA, int sideLengthB, int angleA, int angleB)
		: Triangle(sideLengthA, sideLengthB, angleA, angleB) {}
};

class equilateralTriangle : public Triangle
{
public:
	equilateralTriangle(int sideLengthA, int angleA)
		: Triangle(sideLengthA, angleA) {}
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

public:
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

class Rectangle
{
protected:
	std::string nameOfFigure_;
	int sideLengthA_ = 0;
	int sideLengthB_ = 0;
	int sideLengthC_ = 0;
	int sideLengthD_ = 0;
	int angleA_ = 90;
	int angleB_ = 90;
	int angleC_ = 90;
	int angleD_ = 90;

public:
	

	Rectangle(int sideLengthA, int sideLengthB)
	{
		nameOfFigure_ = "Прямоугольник";

		sideLengthA_ = sideLengthC_ = sideLengthA;
		sideLengthB_ = sideLengthD_ = sideLengthB;
	}

	Rectangle(int sideLengthA)
	{
		nameOfFigure_ = "Квадрат";

		sideLengthA_ = sideLengthB_ = sideLengthC_ = sideLengthD_ = sideLengthA;
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

class Square : public Rectangle
{
public:
	Square(int sideLengthA)
		: Rectangle(sideLengthA) {}
};

class Parallelogram
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

public:
	Parallelogram(int sideLengthA, int sideLengthB, int angleA, int angleB)
	{
		nameOfFigure_ = "Параллелограмм";

		sideLengthA_ = sideLengthC_ = sideLengthA;
		sideLengthB_ = sideLengthD_ = sideLengthB;

		angleA_ = angleC_ = angleA;
		angleB_ = angleD_ = angleB;
	}

	Parallelogram(int sideLengthA, int angleA, int angleB)
	{
		nameOfFigure_ = "Ромб";

		sideLengthA_ = sideLengthB_ = sideLengthC_ = sideLengthD_ = sideLengthA;

		angleA_ = angleC_ = angleA;
		angleB_ = angleD_ = angleB;
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

class Rhomb : public Parallelogram
{
public:
	Rhomb(int sideLengthA, int angleA, int angleB)
		: Parallelogram(sideLengthA, angleA, angleB) {}
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
void printRectangle(Rectangle &form)
{
	std::cout << std::endl;
	std::cout << form.getNameOfFigure() << ":" << std::endl;

	std::cout << "Стороны:";
	std::cout << " a = " << form.getSideLengthA() << ", b = " << form.getSideLengthB() << ", с = " << form.getSideLengthC()
		<< ", d = " << form.getSideLengthD() << std::endl;

	std::cout << "Углы:";
	std::cout << " А = " << form.getAngleA() << ", В = " << form.getAngleB() << ", С = " << form.getAngleC()
		<< ", D = " << form.getAngleD() << std::endl;


};
void printParallelogram(Parallelogram &form)
{
	std::cout << std::endl;
	std::cout << form.getNameOfFigure() << ":" << std::endl;

	std::cout << "Стороны:";
	std::cout << " a = " << form.getSideLengthA() << ", b = " << form.getSideLengthB() << ", с = " << form.getSideLengthC()
		<< ", d = " << form.getSideLengthD() << std::endl;

	std::cout << "Углы:";
	std::cout << " А = " << form.getAngleA() << ", В = " << form.getAngleB() << ", С = " << form.getAngleC()
		<< ", D = " << form.getAngleD() << std::endl;


};

int main()
{
	setlocale(LC_ALL, "Russian"); //Корректное отображение Кириллицы
	system("chcp 1251");
		
	Triangle Triangle1(10, 20, 30, 40, 50, 60);
	printTriangle(Triangle1);

	rightTriangle rightTriangle1 (11, 22, 30, 55, 60);
	printTriangle(rightTriangle1);

	isoscelesTriangle isoscelesTriangle1(12, 20, 50, 60);
	printTriangle(isoscelesTriangle1);

	equilateralTriangle equilateralTriangle1(33, 60);
	printTriangle(equilateralTriangle1);

	Quadrilateral Quadrilateral1(14, 20, 30, 40, 50, 60, 70, 80);
	printQuadrilateral(Quadrilateral1);

	Rectangle Rectangle1(15, 20);
	printRectangle(Rectangle1);

	Square Square1(16);
	printRectangle(Square1);

	Parallelogram Parallelogram1(20, 30, 30, 40);
	printParallelogram(Parallelogram1);

	Rhomb Rhomb1(30, 30, 40);
	printParallelogram(Rhomb1);
} 