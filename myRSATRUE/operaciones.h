#ifndef OPERACIONES_H_INCLUDED
#define OPERACIONES_H_INCLUDED
#include <stdlib.h>
#include <ctime>
#include <string>
#include <math.h>
#include <vector>
using namespace std;
long long euclides(long long,long long);
long long euclidesext(long long,long long);
long long modulo(long long, long long);
//long long inversa(long long, long long);
long long expomod(long long,long long,long long);
long long euler(long long,long long);
bool fermat1(long long,int);
string myitos(long long );
long long mystoi(string );
long long comprobar(vector<long long>);
string rellenar(string,int);
#endif // OPERACIONES_H_INCLUDED
