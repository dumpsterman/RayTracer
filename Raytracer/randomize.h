#pragma once
#include <time.h>
#include <stdlib.h>
#include <iostream>
#include "float.h"

class randomize
{
	public:
	randomize() {  }
	float randm() {
		float x = (double) rand() / (RAND_MAX);
		return x;

	}
};
