
#pragma once

class Printer
{
private :
	std::string str;
public :
	void SetString(std::string input);
	void ShowString();
};

inline void Printer::SetString(std::string input)
{
	str = input;
}

void Printer::ShowString()
{
	std::cout << str <<std::endl;
}
