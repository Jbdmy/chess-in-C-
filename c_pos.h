#ifndef _c_pos_h_
#define _c_pos_h_
#include <map>
#include<string>
#include<iostream> // pour tester
//#include<vector> //test

using namespace std;

class Pos{
private:
    int Ligne; // chiffre sur echequier
    int Colonne; // lettre sur echequier
    //static map<char, int> charToColonne;
public:
    Pos(int x, int y);
    Pos(const Pos &p, int dx, int dy); //verifier reference
    Pos(string s);

    string toString();
    int getLigne() const;
    int getColonne() const ;
};


#endif
