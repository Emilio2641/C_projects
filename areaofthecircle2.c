#include <stdio.h>

int areaTriangle(int, int);     // function prototype
float areaCircle(float);
const float
int b = 2, h = 4;		// global scope

int main(){
    int b = 2, h = 4;
    int area = areaTriangle(b,h);   // pass by value calling a function " areaTriangle "
    printf("The area of the triangle is: %d \n", area);

    float areaC = areaCircle(r)
    printf("The area of the circle is: %f \n", areaC)
    return 0;
}


int areaTriangle(int base, int height){		// local scope for variables base and height
    int result = 0.5 * base * height;
    return result;
}
int areaCircle(float radius){
    float answer = PI * radius, radius;
    return answer;
}
