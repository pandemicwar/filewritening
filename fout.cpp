#include <fstream>
#include <iostream>
#include <string>
 
using namespace std;
void main(void)
{
FILE *f;
string a;
f = fopen("1.txt","w");
ofstream fout ("1.txt"); 
fout << "3455646";
fclose(f);
}
