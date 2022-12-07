#include <iostream>
#include <string>

class Figure 
{
protected:
	std::string nameOfFigure_ = "Фигура";
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

virtual bool metodCheckFigure() //Виртуальный метод проверки фигуры.Кол-во сторон == 0 
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
	//Геттеры
	std::string getNameOfFigure() { return nameOfFigure_; }

	int getSideLengthA() { return sideLengthA_; }
	int getSideLengthB() { return sideLengthB_; }
	int getSideLengthC() { return sideLengthC_; }
	int getSideLengthD() { return sideLengthD_; }

	int getAngleA() { return angleA_; }
	int getAngleB() { return angleB_; }
	int getAngleC() { return angleC_; }
	int getAngleD() { return angleD_; }

	virtual void printFigure() //Виртуальный метод печати и проверка правильности фигуры
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
	bool metodCheckFigure() override //Переписанный метод проверки на сумма всех углов треуг == 180
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

	void printFigure() override //Переписанный метод печати с вызовом базового метода печати
	{
		Figure::printFigure(); 

		std::cout << "Стороны:";
		std::cout << " a = " << getSideLengthA() << ", b = " << getSideLengthB() << ", с = " << getSideLengthC();
		std::cout << std::endl;
		
		std::cout << "Углы:";
		std::cout << " А = " << getAngleA() << ", В = " << getAngleB() << ", С = " << getAngleC();
		std::cout << std::endl;
	}

};

class rightTriangle : public Triangle
{
protected:
	bool metodCheckFigure() override
	{
		if (Triangle::metodCheckFigure() && (angleC_ == 90))
		{
			return true;
		}
		else
		{
			return false;
		};
	};

public:
	rightTriangle(int sideLengthA, int sideLengthB, int sideLengthC, int angleA, int angleB, int angleC)
		: Triangle(sideLengthA, sideLengthB, sideLengthC, angleA, angleB, angleC)
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
	isoscelesTriangle(int sideLengthA, int sideLengthB, int sideLengthC, int angleA, int angleB, int angleC)
		: Triangle(sideLengthA, sideLengthB, sideLengthC, angleA, angleB, angleC)
	{
		Triangle::nameOfFigure_ = "Равнобедренный треугольник";
	};
};

class equilateralTriangle : public Triangle
{
private:
	bool CheckEquilateralTriangle()
	{
		if ((sideLengthA_ == sideLengthB_ && sideLengthB_ == sideLengthC_) && ((angleA_ == 60) && (angleA_ = 60) && (angleC_ = 60)))
		{
			return true;
		}
		else
		{
			return false;
		};
	}

public:
	equilateralTriangle(int sideLengthA, int sideLengthB, int sideLengthC, int angleA, int angleB, int angleC)
		: Triangle(sideLengthA, sideLengthB, sideLengthC, angleA, angleB, angleC)
	{
		Triangle::nameOfFigure_ = "Равносторонний треугольник";
	};
protected:
	bool metodCheckFigure() override
	{
		if (Triangle::metodCheckFigure() && (CheckEquilateralTriangle()))
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
protected:
	virtual bool metodCheckFigure()
	{
		if ((angleA_ + angleB_ + angleC_ + angleD_) == 360)
		{
			return true;
		}
		else
		{
			return false;
		}
	};

	//Метод проверки "стороны a,c и b,d попарно равны"
	bool metodCheckSideLengthACiBD()
	{
		if (sideLengthA_ == sideLengthC_ && sideLengthB_ == sideLengthD_)
		{
			return true;
		}
		else
		{
			return false;
		}
	};

	//Метод проверки "все стороны равны"
	bool metodCheckSideLengthACBD() 
	{
		if (sideLengthA_ == sideLengthB_ && sideLengthB_ == sideLengthC_ && sideLengthC_ == sideLengthD_)
		{
			return true;
		}
		else
		{
			return false;
		}
	};

	//Метод проверки "все углы равны 90 градусов"
	bool metodCheckAngleabcd90() 
	{
		if (angleA_ == 90 && angleB_ == 90 && angleC_ == 90 && angleD_ == 90)
		{
			return true;
		}
		else
		{
			return false;
		}
	};

	//Метод проверки "углы A,C и B,D попарно равны"
	bool metodCheckAngleACiBD() 
	{
		if (angleA_ == angleC_ && angleB_ == angleD_)
		{
			return true;
		}
		else
		{
			return false;
		}
	};

public:
	Quadrilateral(int sideLengthA, int sideLengthB, int sideLengthC, int sideLengthD, int angleA, int angleB, int angleC, int angleD)
	{
		nameOfFigure_ = "Четырехугольник";

		quantityOfSides = 4;
		sideLengthA_ = sideLengthA;
		sideLengthB_ = sideLengthB;
		sideLengthC_ = sideLengthC;
		sideLengthD_ = sideLengthD;
		
		angleA_ = angleA;
		angleB_ = angleB;
		angleC_ = angleC;
		angleD_ = angleD;
	}

	void printFigure() override
	{
		Figure::printFigure();

		std::cout << "Стороны:";
		std::cout << " a = " << getSideLengthA() << ", b = " << getSideLengthB() << ", с = " << getSideLengthC();
		std::cout << ", d = " << getSideLengthD() << std::endl;
		
		std::cout << "Углы:";
		std::cout << " А = " << getAngleA() << ", В = " << getAngleB() << ", С = " << getAngleC();
		std::cout << ", D = " << getAngleD() << std::endl;
	}

};

class Rectangle : public Quadrilateral
{
protected:
	bool metodCheckFigure() override
	{
		if (Quadrilateral::metodCheckFigure() && Quadrilateral::metodCheckSideLengthACiBD() && Quadrilateral::metodCheckAngleabcd90())
		{
			return true;
		}
		else
		{
			return false;
		}
	};

public:
	Rectangle(int sideLengthA, int sideLengthB, int sideLengthC, int sideLengthD, int angleA, int angleB, int angleC, int angleD)
		: Quadrilateral(sideLengthA, sideLengthB, sideLengthC, sideLengthD, angleA, angleB, angleC, angleD)
	{
		Quadrilateral::nameOfFigure_ = "Прямоугольник";
	}
};

class Square : public Quadrilateral
{
protected:
	bool metodCheckFigure() override
	{
		if (Quadrilateral::metodCheckFigure() && Quadrilateral::metodCheckSideLengthACBD() && Quadrilateral::metodCheckAngleabcd90())
		{
			return true;
		}
		else
		{
			return false;
		}
	}
public:
	Square(int sideLengthA, int sideLengthB, int sideLengthC, int sideLengthD, int angleA, int angleB, int angleC, int angleD)
		: Quadrilateral(sideLengthA, sideLengthB, sideLengthC, sideLengthD, angleA, angleB, angleC, angleD)
	{
		Quadrilateral::nameOfFigure_ = "Квадрат";
	}
};

class Parallelogram : public Quadrilateral
{
protected:
	bool metodCheckFigure() override
	{
		if (Quadrilateral::metodCheckFigure() && Quadrilateral::metodCheckSideLengthACiBD() && Quadrilateral::metodCheckAngleACiBD())
		{
			return true;
		}
		else
		{
			return false;
		}
	}

public:
	Parallelogram(int sideLengthA, int sideLengthB, int sideLengthC, int sideLengthD, int angleA, int angleB, int angleC, int angleD)
		: Quadrilateral(sideLengthA, sideLengthB, sideLengthC, sideLengthD, angleA, angleB, angleC, angleD)
	{
		Quadrilateral::nameOfFigure_ = "Параллелограмм";
	}
};

class Rhomb : public Quadrilateral
{
protected:
	bool metodCheckFigure() override
	{
		if (Quadrilateral::metodCheckFigure() && Quadrilateral::metodCheckSideLengthACBD() && Quadrilateral::metodCheckAngleACiBD())
		{
			return true;
		}
		else
		{
			return false;
		}
	}

public:
	Rhomb(int sideLengthA, int sideLengthB, int sideLengthC, int sideLengthD, int angleA, int angleB, int angleC, int angleD)
		: Quadrilateral(sideLengthA, sideLengthB, sideLengthC, sideLengthD, angleA, angleB, angleC, angleD)
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

	rightTriangle rightTriangle1(10, 20, 30, 50, 60, 90);
	rightTriangle1.printFigure();
	
	rightTriangle rightTriangle2(10, 20, 30, 50, 40, 90);
	rightTriangle2.printFigure();

	isoscelesTriangle isoscelesTriangle1(10, 20, 10, 50, 60, 90);
	isoscelesTriangle1.printFigure();

	equilateralTriangle equilateralTriangle1(30, 30, 30, 60, 60, 60);
	equilateralTriangle1.printFigure();

	Quadrilateral Quadrilateral1(10, 20, 30, 40, 50, 60, 70, 80);
	Quadrilateral1.printFigure();

	Rectangle Rectangle1(10, 20, 10, 20, 90, 90, 90, 90);
	Rectangle1.printFigure();

	Square Square1(20, 20, 20, 20, 90, 90, 90, 90);
	Square1.printFigure();

	Parallelogram Parallelogram1(20, 30, 20, 30, 30, 40, 30, 40);
	Parallelogram1.printFigure();

	Rhomb Rhomb1(30, 30, 30, 30, 30, 40, 30, 40);
	Rhomb1.printFigure();
}