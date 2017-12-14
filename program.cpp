<<<<<<< HEAD:program1.cpp
//פאיכ program.cpp
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
=======
//פאיכ program.cpp
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
>>>>>>> 96a3f5bb3db4791ccf8eb7be5104ccabc522278f:program.cpp
