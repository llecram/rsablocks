#include <iostream>
#include "rsa.h"
#include "operaciones.h"
using namespace std;
int main(){
    //char mensaje[100000];
	//cin.getline(mensaje, 100000);
	//string mesagge(mensaje);
    rsa first;
    cout<<first.getn()<<endl<<first.getkeypub()<<endl<<first.getkeypri()<<endl;
    //vector<int> a(1);
    //a={2192 ,14435, 1910 ,0, 17700 ,3524 ,14435 ,10183 ,14435, 17700 ,17880, 15885 ,6813, 0 ,15885};
   // string para="093671980415330057321819513467";
    //first.descifrado2(para);
    //first.cifrado(mensaje);
    return 0;
}
