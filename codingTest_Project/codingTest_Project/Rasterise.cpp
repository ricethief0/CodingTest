#pragma once
#include <iostream>
#include <fstream>
//#include "Header.h"

using namespace std;



void 레스터라이즈()
{
	ofstream oFile("example.ppm");
	oFile << "P3\n" << 128 << " " << 128 << "\n" << 255 << "\n";

	for (int i = 0; i < 128 / 2; i++)
	{
		for (int k = 0; k < 128; k++)
		{
			oFile << 255 << " " << 0 << " " << 0;
			if (k != 127)
				oFile << " ";
		}
		oFile << "\n";
	}
	for (int i = 0; i < 128 / 2; i++)
	{
		for (int k = 0; k < 128; k++)
		{
			oFile << 0 << " " << 0 << " " << 255;
			if (k != 127)
				oFile << " ";
		}
		oFile << "\n";
	}
	oFile << flush;
	
}