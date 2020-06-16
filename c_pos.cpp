#include"c_pos.h"
using namespace std;


Pos::Pos(int x, int y):Ligne(x),Colonne(y){
}

Pos::Pos(const Pos &p , int dx, int dy){
  Ligne = p.Ligne+ dx;
  Colonne = p.Colonne + dy;
}

Pos::Pos(string s){
  //if charToColonne.size() == 0;

  //string s("ABCDEFGHIFKLM");
  map<char, int> charToColonne; // enlever later
  charToColonne['A']=0;
  charToColonne['B']=1;
  charToColonne['C']=2;
  charToColonne['D']=3;
  charToColonne['E']=4;
  charToColonne['F']=5;
  charToColonne['G']=6;
  charToColonne['H']=7;
  map<char, int> charToLigne;
  charToLigne['1']=0;
  charToLigne['2']=1;
  charToLigne['3']=2;
  charToLigne['4']=3;
  charToLigne['5']=4;
  charToLigne['6']=5;
  charToLigne['7']=6;
  charToLigne['8']=7;

  Colonne = charToColonne[ s[0] ] ;
  Ligne = charToLigne[ s[1] ] ;
}

string Pos::toString(){
  map<int, string> colonneToLettre;
  colonneToLettre[0]="A";
  colonneToLettre[1]="B";
  colonneToLettre[2]="C";
  colonneToLettre[3]="D";
  colonneToLettre[4]="E";
  colonneToLettre[5]="F";
  colonneToLettre[6]="G";
  colonneToLettre[7]="H";
  map<int, string> ligneToChiffre;
  ligneToChiffre[0]="1";
  ligneToChiffre[1]="2";
  ligneToChiffre[2]="3";
  ligneToChiffre[3]="4";
  ligneToChiffre[4]="5";
  ligneToChiffre[5]="6";
  ligneToChiffre[6]="7";
  ligneToChiffre[7]="8";


  string str=colonneToLettre[ (*this).Colonne ] +ligneToChiffre[ (*this).Ligne ] ;
  return str;
}

int Pos::getLigne() const {
  return Ligne;
}

int Pos::getColonne() const {
  return Colonne;
}
