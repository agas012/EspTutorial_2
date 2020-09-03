#include <iostream>
#include <string>
#include <typeinfo>
#include "MathTools.h"

void main()
{
	double x1_main = 1, x2_main = 6, y1_main = 4, y2_main = 15, dist_main = 0;
	std::cout << "Result = " << addition(5, 3) << std::endl;
	std::cout << "Result = " << addition(5, 8) << std::endl;
	std::cout << "Result = " << addtwo(5) << std::endl;
	std::cout << "Result = " << addtwo(5, 4) << std::endl;
	std::cout << "Distances (1,2,4,5) = " << OpDist(x1_main, x2_main, y1_main, y2_main) << std::endl;
	std::cout << "Distances(1,2,4,5) and add 3 = " << addition(OpDist(x1_main, x2_main, y1_main, y2_main), 3) << std::endl;
	OpDistVoid(x1_main, x2_main, y1_main, y2_main, dist_main);
	std::cout << "Distances void (1,2,4,5) = " << dist_main << std::endl;
	std::cout << "Distances (1,2,4,5) = " << OpDistZero(x1_main, x2_main, y1_main, y2_main) << std::endl;
	std::cout << "Distances (1,2,4,5) = " << OpDist(x1_main, x2_main, y1_main, y2_main) << std::endl;
	//factorial
	//n! = n * (n-1) * (n-2) * (n-3) * ... * 1
	std::cout << "Factorial of 5 " << OpFactorial(5) << std::endl;

	//Overload please dont Do
	std::cout << "With int: " << Op(3, 4) << std::endl;
	std::cout << "With double " << Op(3.0, 4.0) << std::endl;

	//sum overload
	std::cout << "With int: " << Opsum(3, 4) << std::endl;
	std::cout << "With double " << Opsum(3.3, 4.6) << std::endl;
	//std::cout << "With double " << Opsum(3, 4.6) << std::endl;

	//templates
	if (Opgreaterthan<int, int>(4, 2))
		std::cout << "Yes" << std::endl;
	else
		std::cout << "No" << std::endl;

	if (Opgreaterthan<int, double>(4, 4.1))
		std::cout << "Yes" << std::endl;
	else
		std::cout << "No" << std::endl;

	if (Opgreaterthan(4.9, 4))
		std::cout << "Yes" << std::endl;
	else
		std::cout << "No" << std::endl;

	std::cout << "concatenation " << OpSumCat<int, std::string>(40, "a") << std::endl;

	std::string str_1 = "1223123";
	std::string str_2 = "122312b3";

	if (isnumber(str_1))
		std::cout << "is a number " << str_1 << std::endl;
	else
		std::cout << "is a string " << str_1 << std::endl;

	if (isnumber(str_2))
		std::cout << "is a number " << str_2 << std::endl;
	else
		std::cout << "is a string " << str_2 << std::endl;
	//NNNNNNNNNNNNNNNNOOOOOOOOOOOOOOOOOOOOOOOOO
	int test_1 = 60;
	std::string test_2 = "adasf";
	double test_3 = 80.12;
	std::cout << typeid(test_1).name() << std::endl;
	std::cout << typeid(test_2).name() << std::endl;
	std::cout << typeid(test_3).name() << std::endl;



}