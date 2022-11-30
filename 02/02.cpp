#include <iostream>

class Triangle
{
private:
	std::string nameOfFigure_ = "Треугольник";
	int sideLengthA_ = 11;
	int sideLengthB_ = 21;
	int sideLengthC_ = 31;
	int angleA_ = 12;
	int angleB_ = 22;
	int angleC_ = 32;

	int sideLengthD_ = 1;
	int angleD_ = 1;
	
public:
	Triangle() = default;
	
	Triangle(std::string nameOfFigure, int sideLengthA, int sideLengthB, int sideLengthC, int angleA, int angleB, int angleC)
	{
		nameOfFigure_ = nameOfFigure;
		sideLengthA_ = sideLengthA;
		sideLengthB_ = sideLengthB;
		sideLengthC_ = sideLengthC;
		angleA_ = angleA;
		angleB_ = angleB;
		angleC_ = angleC;
	}

	std::string getNameOfFigure() const { return nameOfFigure_; }

	int getSideLengthA() const { return sideLengthA_; }
	int getSideLengthB() const { return sideLengthB_; }
	int getSideLengthC() const { return sideLengthC_; }
	//int getSideLengthD() const { return sideLengthD_; }

	int getAngleA() const { return angleA_; }
	int getAngleB() const { return angleB_; }
	int getAngleC() const { return angleC_; }
	//int getAngleD() const { return angleD_; }





};

class rightTriangle : public Triangle
{
private:
	std::string nameOfFigure = "Прямоугольный треугольник";

public:
};

//printTriangle(std::string nameOfFigure, int sideLengthA, int sideLengthB, int sideLengthC, int angleA, int angleB, int angleC)

void printTriangle(std::string nameOfFigure, int sideLengthA, int sideLengthB, int sideLengthC, int angleA, int angleB, int angleC, int sideLengthD, int angleD)
{
	std::cout << nameOfFigure << ":" << std::endl;
	
	std::cout << "Стороны:";
	std::cout << " a = " << sideLengthA << ", b = " << sideLengthB << ", с = " << sideLengthC;
	if (sideLengthD != 0 && angleD != 0)
	{ std::cout << ", d = " << sideLengthD << std::endl; }
	else { std::cout << std::endl; }
	
	std::cout << "Углы:";
	std::cout << " А = " << angleA << ", В = " << angleB << ", С = " << angleC;
	if (sideLengthD != 0 && angleD != 0) { std::cout << ", D = " << angleD << std::endl; }
	else { std::cout << std::endl; }
}

int main()
{
	setlocale(LC_ALL, "Russian"); //Корректное отображение Кириллицы
	system("chcp 1251");

	Triangle Triangle;

	printTriangle(Triangle.getNameOfFigure(), Triangle.getSideLengthA(), Triangle.getSideLengthB(), Triangle.getSideLengthC(), Triangle.getAngleA(), Triangle.getAngleB(), Triangle.getAngleC(), Triangle.getSideLengthD(), Triangle.getAngleD());


}