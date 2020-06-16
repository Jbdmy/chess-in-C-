#include "c_plato.h"
using namespace std;


Plato::Plato(int hauteur, int largeur){
  Tableau.resize(hauteur);
  for(int i=0; i<=hauteur; i++){
    Tableau[i].resize(largeur);
  }
}

Plato::Plato(){
  // utile pour échequier
}

int Plato::getHeight(){
  int z=8;
  return z;
}

int Plato::getWidth(){
  int z=8;
  return z;
}

void Plato::conditionInitiales(){}

void Plato::ajoute(Piece *piece, Pos pos){
  Tableau[pos.getLigne()][pos.getColonne() ]=piece; //verif ligne & colonne
}

void Plato::deplace(Pos start, Pos end){
  bool a =1;
  if(Tableau[start.getLigne()][start.getColonne() ]!=0 && getPiece(start)->isValidMove(start, end, a, this) ){
    Tableau[end.getLigne()][end.getColonne() ]=getPiece(start);
    Tableau[start.getLigne()][start.getColonne() ]=0;
  }
}

bool Plato::estDedans(Pos pos){}

Piece* Plato::getPiece(Pos pos){ // retourne la pièce
  return Tableau[pos.getLigne()][pos.getColonne()];
}


void Plato::joue(Pos start, Pos end, bool turnNoir){

  try{
    if (this->getPiece(start)==0 ) throw 1;
  }
  catch(int e){
    if(e==1){
      cout  << "Il n'y a pas de piece" << endl;
      cout << "Tour de : " << !turnNoir << endl;
      string ss1, ss2;
      cout<< "Position de Départ?" << endl;
      cin >> ss1;
      cout << "Position d'arrivée?" << endl;
      cin >> ss2 ;
      Pos ss11(ss1); start =ss11;
      Pos ss22(ss2); end = ss22;
    }
  }
  try{
    if (this->getPiece(start)->getEstNoir() == turnNoir ) throw 1; // this->getPiece(start)->getEstNoir() != turnNoir
  }
  catch(int e){
    if(e==1){
      cout  << "Cette pièce n'est pas a vous !" << endl;
      cout << "Tour de : " << !turnNoir << endl;
      string ss1, ss2;
      cout<< "Position de Départ?" << endl;
      cin >> ss1;
      cout << "Position d'arrivée?" << endl;
      cin >> ss2 ;
      Pos ss11(ss1); start =ss11;
      Pos ss22(ss2); end = ss22;
    }
  }
  try{
    if (getPiece(end)!=0 && getPiece(start)->getEstNoir() == getPiece(end)->getEstNoir() ) throw 1; // this->getPiece(start)->getEstNoir() != turnNoir
  }
  catch(int e){
    if(e==1){
      cout  << "Vous allez manger votre pièce" << endl;
      cout << "Tour de : " << !turnNoir << endl;
      string ss1, ss2;
      cout<< "Position de Départ?" << endl;
      cin >> ss1;
      cout << "Position d'arrivée?" << endl;
      cin >> ss2 ;
      Pos ss11(ss1); start =ss11;
      Pos ss22(ss2); end = ss22;
    }
  }
  try{
    if ( getPiece(start)->getNom() != "Pion" && getPiece(start)->isValidMove(start, end, 1, this) == 0 ) throw 1; // this->getPiece(start)->getEstNoir() != turnNoir
  }
  catch(int e){
    if(e==1){
      cout  << "Ce moove n'est pas autorisé" << endl;
      cout << "Tour de : " << !turnNoir << endl;
      string ss1, ss2;
      cout<< "Position de Départ?" << endl;
      cin >> ss1;
      cout << "Position d'arrivée?" << endl;
      cin >> ss2 ;
      Pos ss11(ss1); start =ss11;
      Pos ss22(ss2); end = ss22;
    }
  }

  bool Stop=0;
  deplace(start, end);
  /*
  if(getPiece(end)->getNom() == "Pion"){
    getPion(end)->FirstMove = 0;
  }
*/
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
/////affiche fin

// début jeu
  cout << "Tour de : " << turnNoir << endl;
  string s1, s2;
  cout<< "Position de Départ?" << endl;
  cin >> s1;
  if(s1 == "S"){
    Stop =1;
  }
  cout << "Position d'arrivée?" << endl;
  cin >> s2 ;
  Pos s11(s1); Pos s22(s2);


/*  try{
    //if (this->getPiece(start)==0 ) throw 1;
    if (this->getPiece(start)->getEstNoir() != turnNoir)
      throw 2;
  }
  catch(int e){
      cout  << "Ce n'est pas votre piece choisissez une position occupée par une pièce finissant par: " << !turnNoir << endl;
      cout << "Tour de : " << !turnNoir << endl;
      string ss1, ss2;
      cout<< "Position de Départ?" << endl;
      cin >> ss1;
      cout << "Position d'arrivée?" << endl;
      cin >> ss2 ;
      Pos ss11(ss1); s11 =ss11;
      Pos ss22(ss2); s22 = ss22;
      throw;
  } */

  if(Stop != 1){joue(s11, s22, !turnNoir);}

}
