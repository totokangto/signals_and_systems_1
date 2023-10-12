#pragma once
#ifndef __COMPLEX
#define __COMPLEX
#include <math.h>
class complex {
public:
	// 실수 허수 정의
	double re_num, im_num;
	// 생성자
	complex() { re_num = im_num = 0; }; // argument 없을 때
	complex(double x, double y) { re_num = x; im_num = y; }; //argument 2개
	complex(double theta) { re_num = cos(theta); im_num = sin(theta); }; // argument 1개

	// 멤버 함수
	double get_mag();
	double get_phase();

	// 연산자 오버로딩
	complex& operator=(const complex&);
	complex& operator+=(const complex&);
	complex operator+(const complex&);
	complex operator-(const complex&);
	complex operator*(const complex&); // 허수 곱하기
	complex operator/(const double&);  // 실수로 나누기
	complex operator/(const complex&); // 허수로 나누기
	complex operator*(const double&);  // 실수 곱하기

};
#endif#pragma once
