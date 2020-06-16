#include "c_piece.h"
using namespace std;


Piece::Piece(bool estNoir, string name){
  setNom(name);
  setEstNoir(estNoir);
}
//Piece::Piece(bool estNoir, string name);

string Piece::toString(){}
string Piece::getNom(){
  return Nom;
}

void Piece::setNom(string str){
  Nom=str;
}

void Piece::setEstNoir(bool estNoir){
  EstNoir=estNoir;
}

bool Piece::getEstNoir(){
  return EstNoir;
}
