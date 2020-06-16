#include "c_echequier.h"
using namespace std;

Echequier::Echequier():Plato(8,8){

}

void Echequier::conditionInitiales(){

  //string str="A1";
  Pion *p1=new Pion(0);
  ajoute(p1 ,Pos("A2"));
  Pion *ppb2=new Pion(0);
  ajoute(ppb2 ,Pos("B2"));
  Pion *ppb3=new Pion(0);
  ajoute(ppb3 ,Pos("C2"));
  Pion *ppb4=new Pion(0);
  ajoute(ppb4 ,Pos("D2"));
  Pion *ppb8=new Pion(0);
  ajoute(ppb8 ,Pos("E2"));
  Pion *ppb5=new Pion(0);
  ajoute(ppb5 ,Pos("F2"));
  Pion *ppb6=new Pion(0);
  ajoute(ppb6 ,Pos("G2"));
  Pion *ppb7=new Pion(0);
  ajoute(ppb7 ,Pos("H2"));

  Pion *pp1=new Pion(1);
  ajoute(pp1 ,Pos("A7"));
  Pion *ppn2=new Pion(1);
  ajoute(ppn2 ,Pos("B7"));
  Pion *ppn3=new Pion(1);
  ajoute(ppn3 ,Pos("C7"));
  Pion *ppn4=new Pion(1);
  ajoute(ppn4 ,Pos("D7"));
  Pion *ppn8=new Pion(1);
  ajoute(ppn8 ,Pos("E7"));
  Pion *ppn5=new Pion(1);
  ajoute(ppn5 ,Pos("F7"));
  Pion *ppn6=new Pion(1);
  ajoute(ppn6 ,Pos("G7"));
  Pion *ppn7=new Pion(1);
  ajoute(ppn7 ,Pos("H7"));


  Tour *ttn1=new Tour(1);
  ajoute(ttn1, Pos("A8"));
  Tour *tttn2=new Tour(1);
  ajoute(tttn2, Pos("H8"));

  Tour *ttb1=new Tour(0);
  ajoute(ttb1, Pos("A1"));
  Tour *ttb2=new Tour(0);
  ajoute(ttb2, Pos("H1"));

  Fou *fn1=new Fou(1);
  ajoute(fn1, Pos("C8"));
  Fou *fn2=new Fou(1);
  ajoute(fn2, Pos("F8"));

  Fou *fb1=new Fou(0);
  ajoute(fb1, Pos("C1"));
  Fou *fb2=new Fou(0);
  ajoute(fb2, Pos("F1"));

  Cavalier *cb1=new Cavalier(0);
  ajoute(cb1, Pos("B1"));
  Cavalier *cb2=new Cavalier(0);
  ajoute(cb2, Pos("G1"));

  Cavalier *cn1=new Cavalier(1);
  ajoute(cn1, Pos("B8"));
  Cavalier *cn2=new Cavalier(1);
  ajoute(cn2, Pos("G8"));

  Roi *rrn=new Roi(0);
  ajoute(rrn, Pos("E1"));
  Roi *rrb=new Roi(0);
  ajoute(rrb, Pos("E8"));

  Dame *ddn=new Dame(1);
  ajoute(ddn, Pos("D8"));
  Dame *ddb=new Dame(0);
  ajoute(ddb, Pos("D1"));


  /////affiche
    cout << "                                Blancs : 0 " << endl;
    cout << "  ....A........B........C........D........E........F........G........H...."<< endl << endl;
    for(int i=0; i<8; i++){
      cout << i+1 << " " ;
      for(int j=0; j<8; j++){
        Pos p(i,j);
        if( this->getPiece(p)!=0){
          cout << (*this).getPiece(p)->getNom() << this->getPiece(p)->getEstNoir() <<"("<< p.toString() << ")";
        }
        else{cout<< "........." ;}
      }
      cout << endl;
    }
    cout << "                                Noir : 1 " << endl;
  /////affiche fin : début jeu
    cout << "Tour de : " << 0 << endl;
    string s1, s2;
    cout<< "Position de Départ?" << endl;
    cin >> s1;
    cout << "Position d'arrivée?" << endl;
    cin >> s2 ;
    Pos s11(s1); Pos s22(s2);
    joue(s11, s22, 1);

  //joue(s11, s22, 0);
}

string Echequier::toString(){}
