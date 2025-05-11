#include <iostream>
#include <cmath>
#include <cstdio>

#define PI 3.14159265358979323846

int main(){
	double area, a, b, ang;
	while (true){
		std::cin >> a >> b >> ang;
		
		if (a == 0 && b == 0 && ang == 0){
			break;
		}
	
		ang = ang * (PI / 180.0);
		area = 0.5 * a * b * sin(ang);
		
		printf("%.4f\n", area);
	}
}
