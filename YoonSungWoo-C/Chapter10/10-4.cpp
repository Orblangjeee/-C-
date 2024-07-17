#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

int main()
{
	int cream = 0;  //500
	int shrimp = 0; //700
	int coke = 0; //400
	int money = 3500;
	printf("당신이 소유하고 있는 금액 : %d\n", money);

	//하나씩 뺀 가격 1900원
	
	for (cream = 1; money - (cream * 500) > 0; cream++)
	{
		for (shrimp = 1; money - (shrimp * 700) > 0; shrimp++)
		{     
			for (coke = 1; money - (coke * 400) > 0; coke++)
			{
				if ((cream * 500) + (shrimp * 700) + (coke * 400) == money) {
					printf("크림빵 %d개, 새우깡 %d개, 콜라 %d개\n", cream, shrimp, coke);
				}
			}
		}
	}

	printf("어떻게 구입하시겠습니까?");
}
