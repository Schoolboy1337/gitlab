<<<<<<< HEAD:program.cpp
//���� program.cpp
#include "stdafx.h"
#include <iostream>
#include "funcs.h"
using namespace std;
int main()
{
cout << MySum(10, 3) << endl;
cout << MySub(10, 3) << endl;
cout << MyMul(10, 3) << endl;
system("pause");
return 0;
}
=======
//���� program.cpp
#include "stdafx.h"
#include <iostream>
using namespace std;
double MySum(double a, double b)
{
return a+b;
}
double MySub(double a, double b)
{
return a - b;
}

 double MyMul(double a, double b)
 { 
	 return a * b; 
 } 
 
double MyDiv(double a, double b)
{ 
	return a / b;
}
int main()
{
cout << MySum(10, 3) << endl;
cout << MySub(10, 3) << endl;
cout << MyMul(10, 3) << endl;
cout << MyDiv(10, 3) << endl;
return 0;
}
>>>>>>> 7d6f53c1b0ca16ed146cdcd1bf3ddb79631df72d:program1.cpp
