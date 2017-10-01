// Raytracer.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "vec3.h"
#include <fstream>
#include <iostream>




int main()
{
	int nx = 200;
	int ny = 100;
	std::ofstream myfile;
	myfile.open("HelloWorld2.ppm");
	myfile << "P3\n" << nx << " " << ny << "\n255\n";
	for (int j = ny - 1; j >= 0; j--) {
		for (int i = 0; i < nx; i++) {
			vec3 ob1(float(i) / float(nx), float(j) / float(ny), .2);
			int ir = int(255*ob1[0]);
			int ig = int(255*ob1[1]);
			int ib = int(255*ob1[2]);
			//std::cout << r << " " << g << " " << b << std::endl;
			
			
			myfile << ir << " " << ig << " " << ib << "\n";
			
			


		}
	}
	myfile.close();
}

