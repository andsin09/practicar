#include <iostream>
#include <string>
using namespace std;
int main(){
char name[100];
int age;
char initial;
float grade;
scanf("%c", &name );
scanf("%d", &age );
scanf("%c", &initial );
scanf("%f", &grade );
scanf("\n");
printf("Hello, %c", name);
printf("Last initial: %c", initial);
printf("Age: %d", age);
printf("GPA: %.2f", grade);
}
