/*
 * vec3.h
 *
 *  Created on: 22 Apr 2020
 *      Author: mgarcia
 */

#pragma once

#include <cmath>
class vec3 {

public:

	vec3();
	vec3(float, float, float);

	vec3 operator+ (const vec3 & v);
	vec3 operator- (const vec3 & v);
	vec3 operator/ (float value);
	vec3 operator* (float value);
	vec3 unit();

	float operator[](int index);
	float mag();

private:
	float x, y, z;

};


