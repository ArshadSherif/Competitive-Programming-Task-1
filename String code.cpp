/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main(void) {
   char str[] = "A string.";
   char *pc = str;

   cout << str[0] <<' '<< *pc <<' '<<pc[3]<<"\n";
   pc += 2;
   cout <<*pc<<' '<< pc[2] <<' '<< pc[5];

   return 0;
}