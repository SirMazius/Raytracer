/*
 * vec3.cpp
 *
 *  Created on: 22 Apr 2020
 *      Author: mgarcia
 */

#include "vec3.h"

vec3::vec3() {
	x = y = z = 0;
}

vec3::vec3(float x, float y, float z) {
	this->x = x;
	this->y = y;
	this->z = z;
}

vec3 vec3::operator+ (const vec3 & v) {
	return vec3(this->x + v.x, this->y + v.y, this->z + v.z);
}

vec3 vec3::operator- (const vec3 & v) {
	return vec3(this->x - v.x, this->y - v.y, this->z - v.z);
}

vec3 vec3::operator/(float value) {
	return vec3(this->x / value, this->y / value, this->z / value);
}

vec3 vec3::operator*(float value) {
	return vec3(this->x * value, this->y * value, this->z * value);
}

vec3 vec3::unit() {
	float mag = this->mag();
	return this / mag;
}

float vec3::operator [](int index) {
	float value = 0;
	switch(index) {
		case 0:
			value = this->x;
			break;
		case 1:
			value = this->y;
			break;
		case 2:
			value = this->z;
			break;
	}
	return value;
}

float vec3::mag() {
	return sqrt((this->x * this->x) + (this->y * this->y) + (this->z * this->z));
}


