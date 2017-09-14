// Raytracer.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <fstream>
#include <iostream>




int main()
{
	int nx = 200;
	int ny = 100;
	std::ofstream myfile;
	myfile.open("HelloWorld1.ppm");
	myfile << "P3\n" << nx << " " << ny << "\n255\n";
	for (int j = ny - 1; j >= 0; j--) {
		for (int i = 0; i < nx; i++) {
			float r = float(i) / float(nx);
			float g = float(j) / float(ny);
			float b = .2;
			int ir = int(255*r);
			int ig = int(255*g);
			int ib = int(255*b);
			//std::cout << r << " " << g << " " << b << std::endl;
			
			
			myfile << ir << " " << ig << " " << ib << "\n";
			
			


		}
	}
	myfile.close();
}

