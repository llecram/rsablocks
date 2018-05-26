#include "rsa.h"
#include "generar.h"
rsa::rsa(){
    srand(time(0));
	p = generarprimo();
	q = generarprimo();
	n=p*q;
	phieu=euler(p,q);
	e=generare(phieu);
	long long d=euclidesext(e,phieu);
	keypri=modulo(d,phieu);
	keypub=e;
}
rsa::rsa(long long n1, long long e1){
    n=n1;
    e=e1;
}

void rsa::cifrado(string mensaje){
    /*long long aux;
	for (int i = 0; i < mensaje.size(); i++) {
		for (int j = 0; j < alphabet.size(); j++) {
			if (mensaje[i] == alphabet[j]) {
				long long aux=expomod(j,e,n);
				cout <<aux << " ";
			}
		}

	}*/
	vector<long long>auxiliar_700;
	vector<string> auxiliar_7007;
	auxiliar_700={};
	string temporalx="";
	string auxiliar="";
	string auxiliar_2="";
	string auxalpha=myitos(alphabet.size());
	string aux=myitos(n);
	long long d=aux.size()-1;
	for (long long i = 0; i < mensaje.size(); i++) {
		for (long long j = 0; j < alphabet.size(); j++) {
             if (mensaje[i] == alphabet[j]) {
                string aux_1=myitos(j);
                if(aux_1.size()<auxalpha.size()){
                    aux_1="0"+aux_1;
                }
                auxiliar+=aux_1;
             }
		}
	}
	while((auxiliar.size()%d)!= 0){
        auxiliar+=myitos(alphabet.find("w"));
	}
	for(long long i=0;i<auxiliar.size();i++){
        auxiliar_2+=auxiliar[i];
        if(auxiliar_2.size()==d){
            long long auxiliar_3=mystoi(auxiliar_2);
            long long temporal=expomod(auxiliar_3,keypub,n);
            auxiliar_700.push_back(temporal);
            auxiliar_2="";
        }
	}
	cout<<endl<<aux.size()<<endl;
	for(int i=0;i<auxiliar_700.size();i++){
        if(myitos(auxiliar_700[i]).size()<aux.size()){
                temporalx=rellenar(myitos(auxiliar_700[i]),aux.size());
                auxiliar_7007.push_back(temporalx);
        }
        else
            auxiliar_7007.push_back(myitos(auxiliar_700[i]));
        cout<<auxiliar_7007[i]<<endl;
	}
	for(int i=0;i<auxiliar_7007.size();i++)
        cout<<auxiliar_7007[i];
}

void rsa::descifrado(vector<long long> a){
    for(int i=0;i<a.size();i++){
        cout<<alphabet[expomod(a[i],keypri,n)];
    }
}
void rsa::descifrado2(string amen){
    string aux=myitos(n);
    string aux1="";
    string aux3="";
    vector<long long> change;
    vector<string> change7000;
    int s=aux.size();
    int d=aux.size()-1;
    for(long i=0;i<amen.size();i++){
        aux1+=amen[i];
        if(aux1.size()==s){
            long long aux2=mystoi(aux1);
            long long temporal=expomod(aux2,keypri,n);
            change.push_back(temporal);
            aux1="";
        }
    }
    for(int i=0;i<change.size();i++){
        if((myitos(change[i]).size())<d){
            aux3=rellenar(myitos(change[i]),d);
            change7000.push_back(aux3);
        }
        else{
            change7000.push_back(myitos(change[i]));
        }
        cout<<endl<<" "<<change7000[i];
    }
    string auxalpha=myitos(alphabet.size());
    string tempo="";
    vector<string>finale;
    for(int i=0;i<change7000.size();i++){
        for(int j=0;j<d;j++){
            tempo+=change7000[i][j];
            if(tempo.size()==auxalpha.size()){
                finale.push_back(tempo);
                tempo="";
                }
        }
    }
    cout<<endl;
    for(int j=0;j<finale.size();j++){
        cout<<alphabet[mystoi(finale[j])];
    }

}
long long rsa::getn()const{
    return n;
}

long long rsa::getq()const{
    return q;
}
long long rsa::getkeypub()const{
    return keypub;
}

long long rsa::getkeypri()const{
    return keypri;
}
