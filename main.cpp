/*
 * main.cpp
 *
 *  Created on: 22 Apr 2020
 *      Author: mgarcia
 */

#include <iostream>
using namespace std;

int rearrangeRGB(int rangeIndex, int rangeWidth) {
	float percentage = float(rangeIndex) / float(rangeWidth);
	return 255 * percentage;
}


int main() {
	const int image_width = 600;
	const int image_height = 300;

	std::cout << "P3\n" << image_width << ' ' << image_height << "\n255\n";


	for (int i = 0; i < image_height; i++) {
		for (int j = 0; j < image_width; j++)
		{
			//cout << "i >>> " << i << " " << 255 - rearrangeRGB(i, image_height) <<  " j >> " << j << " " << 255 - rearrangeRGB(j, image_width) <<endl;
			int r = (255 - rearrangeRGB(i, image_height) + 255 - rearrangeRGB(j, image_width)) / 2;
			int g = (rearrangeRGB(i, image_height) + rearrangeRGB(j, image_width)) / 2;
			std::cout << r << ' ' << g << ' ' << 128 << '\n';
		}
	}


	/*
	for (int j = image_height-1; j >= 0; --j) {
		for (int i = 0; i < image_width; ++i) {
			auto r = double(i) / image_width;
			auto g = double(j) / image_height;
			auto b = 0.0;
			int ir = static_cast<int>(255.999 * r);
			int ig = static_cast<int>(255.999 * g);
			int ib = static_cast<int>(255.999 * b);
			std::cout << ir << ' ' << ig << ' ' << ib << '\n';
		}
	}
	*/
	return 0;
}




