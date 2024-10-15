#include <iostream>
#include <string>
using namespace std;
int main(){
char name[100];
int age;
char initial;
float grade;
cout << "First Name, Age, Initial, GPA." << "\n";
scanf("%s\n", &name );
scanf("%d\n", &age );
scanf("%c\n", &initial );
scanf("%f", &grade );
printf("Hello, %s\n", name);
printf("Last initial: %c\n", initial);
printf("Age: %d\n", age);
printf("GPA: %.2f\n", grade);
}
