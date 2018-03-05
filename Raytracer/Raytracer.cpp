// Raytracer.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "vec3.h"
<<<<<<< HEAD
#include "ray.h"
#include "sphere.h"
#include "hitable_list.h"
#include "float.h"
#include "camera.h"
#include "randomize.h"
#include "lambertian.h"
#include "material.h"
#include "metal.h"
=======
>>>>>>> remotes/origin/master
#include <fstream>
#include <iostream>


vec3 color(const ray& r, hitable *world, int depth) {
	hit_record rec;
	if (world->hit(r, FLT_MIN, FLT_MAX, rec)) {
		ray scattered;
		vec3 attenuation;
		if (depth < 50 && rec.mat_ptr->scatter(r, rec, attenuation, scattered)) {
			return attenuation*color(scattered, world, depth + 1);
		}
		else {
			return vec3(0, 0, 0);
		}
	}
	else { 
		vec3 unit_direction = unit_vector(r.direction());
		float t = 0.5*(unit_direction.y() + 1.0);
		return (1.0 - t)*vec3(1.0, 1.0, 1.0) + t*vec3(0.5, 0.7, 1.0);
	}
}



int main()
{

	int nx = 400;
	int ny = 200;
	int ns = 200;
	std::ofstream myfile;
<<<<<<< HEAD
	myfile.open("HelloWorld8.ppm");
=======
	myfile.open("HelloWorld2.ppm");
>>>>>>> remotes/origin/master
	myfile << "P3\n" << nx << " " << ny << "\n255\n";
	hitable *list[4];
	list[0] = new sphere(vec3(0, 0, -1), 0.5, new lambertian(vec3(0.8, 0.3, 0.3)));
	list[1] = new sphere(vec3(0, -100.5, -1), 100, new lambertian(vec3(0.8, 0.8, 0.0)));
	list[2] = new sphere(vec3(1,0,-1), 0.5, new metal(vec3(0.8, 0.6, 0.2)));
	list[3] = new sphere(vec3(-1, 0, -1), 0.5, new metal(vec3(0.8, 0.8, 0.8)));
	hitable *world = new hitable_list(list, 4);
	srand(time(0));
	camera cam;
	randomize o;
	for (int j = ny - 1; j >= 0; j--) {
		for (int i = 0; i < nx; i++) {
<<<<<<< HEAD
			vec3 ob1(0, 0, 0);
			for (int s = 0; s < ns; s++){	
			float u = float(i + (o.randm())) / float(nx);
			float v = float(j + (o.randm())) / float(ny);
			ray r = cam.get_ray(u, v);
			ob1 += color(r, world, 0);
		}
			ob1 /= float(ns);
			ob1 = vec3(sqrt(ob1[0]), sqrt(ob1[1]), sqrt(ob1[2]));
			int ir = int(255.99*ob1[0]);
			int ig = int(255.99*ob1[1]);
			int ib = int(255.99*ob1[2]);			
=======
			vec3 ob1(float(i) / float(nx), float(j) / float(ny), .2);
			int ir = int(255*ob1[0]);
			int ig = int(255*ob1[1]);
			int ib = int(255*ob1[2]);
			//std::cout << r << " " << g << " " << b << std::endl;
			
			
>>>>>>> remotes/origin/master
			myfile << ir << " " << ig << " " << ib << "\n";
		}
	}
	myfile.close();

}

