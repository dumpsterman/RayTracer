#include <iostream>
#include<math.h>
#include<stdlib.h>
//#include<fstream>
#include "stdafx.h"
#include "vec3.h"


vec3::vec3()
{//not prototyped
	inline std::istream& operator>> (std::istream &is, vec3 &t) { 
		is >> t.e[0] >> t.e[1] >> t.e[2];
		return is;
	}//not prototyped
	inline std::ostream& operator<< (std::ostream &os, const vec3 &t){
		os << t.e[0] << " " << t.e[1] << " " << t.e[2];
		return os;
	}
	
	inline void vec3::make_unit_vector() {
		
	}






}





