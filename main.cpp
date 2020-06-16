#include"c_pos.h"
#include "c_piece.h"
#include "c_plato.h"
#include "c_pion.h"
#include "c_echequier.h"

#include<iostream> // pour cout
//#include<string> //testé sans : ça fonctionne via namespace
using namespace std;


int main(void){
/*
  string s="A1";
  Pos p6(s);//"B3"); //ok
  Pos p2(1,1); //ok
  Pos p3(p2, 1,2); //ok
  //cout << p.Ligne << " "<< p.Colonne << endl; // passer en public

  Pos p("C2");
  p.toString(); // ok
  p.getLigne(); // ok
  p.getColonne(); //ok
  cout << p3.toString() << " "<<p3.getLigne()<<" "<< p3.getColonne()<< endl;
*/

  //Pion p1(true);
  Echequier e;
  e.conditionInitiales();

  //Pos p("A1");
  //cout<< e.getPiece(p)->getNom() << endl;

  //Pos p1("A2");
  //bool a = 1;
  //e.joue(p, p1, a);

  //Pos p9("B5");
  //cout<< !e.getPiece(p9) << endl;
  //cout<< e.getPiece(p1)->getNom() << endl;
  //cout<< !e.getPiece(p) << endl;

/*
  Pos p2("A2");
  cout<< (*e.getPiece(p2)).getNom() << endl;

  Pos p3("A3");
  cout<< e.getPiece(p3)->getNom() << endl;

  Pos p4("A6");
  cout<< e.getPiece(p4)->getNom() << endl;

  Pos p5("A5");
  cout<< e.getPiece(p5)->getNom() << endl;
*/
  return 0;
}
