#pragma once

class Calculator
{
private:
	int AddCount;
	int SubCount;
	int MulCount;
	int DivCount;

public:
	void Init();
	double Add(double a, double b);
	double Sub(double a, double b);
	double Mul(double a, double b);
	double Div(double a, double b);
	void ShowOpCount();
};

inline void Calculator::Init()
{
	AddCount = 0;
	SubCount = 0;
	MulCount = 0;
	DivCount = 0;
}

double Calculator::Add(double a, double b)
{
	AddCount++;
	return a+b;
}

double Calculator::Sub(double a, double b)
{
	SubCount++;
	return a-b;
}

double Calculator::Mul(double a, double b)
{
	MulCount++;
	return a*b;
}

double Calculator::Div(double a, double b)
{
	DivCount++;
	return a/b;
}

inline void Calculator::ShowOpCount()
{
	std::cout << "덧셈 :" << AddCount << " 뺄셈 : " << SubCount << " 곱셈 : " << MulCount << " 나눗셈 : " << DivCount << std::endl;
}
