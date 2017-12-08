// Arrays.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include <iostream>

int foo[] = { 18, 4, 55, 32, 14394 };
int na, result = 0;

int main()
{
	for (na = 0; na < 5; ++na)
	{
		result += foo[na];
	}
	std::cout << result << std::endl;

    return 0;
}

