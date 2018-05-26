#ifndef RSA_H
#define RSA_H
#include<iostream>
#include<string>
#include<math.h>
#include<ctime>
#include<vector>
#include"operaciones.h"
#include<NTL/ZZ.h>
using namespace NTL;
using namespace std;
static string alphabet = "abcdefghijklmnopqrstuvwxyz ABCDEFGHIJKLMNOPQRSTUVWXYZ.,_-0123456789";
class rsa{
    public:
        long long e;
        long long p;
        long long q;
        long long keypub;
        long long keypri;
        long long n;
        long long phieu;
        rsa();
        rsa(long long, long long );
        void cifrado(string);
        void descifrado(vector<long long>);
        void descifrado2(string);
        long long getkeypub()const;
        long long getkeypri()const;
        long long getn()const;
        long long getq()const;
};
#endif // RSA_H
