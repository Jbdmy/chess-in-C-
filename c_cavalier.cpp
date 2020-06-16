#include "c_cavalier.h"
using namespace std;
 // ajouter setPiece??
//Pion::Pion(bool estNoir){}
// ici appeler le constructeur de pièce en lui passant un truc en parmètre ??
Cavalier::Cavalier(bool estNoir):Piece(estNoir, "Cava"){}


bool Cavalier::isValidMove(Pos start, Pos end, bool isCapture, Plato *board){
  bool a=1;
  if( abs(start.getLigne()-end.getLigne())+abs(start.getColonne()-end.getColonne()) == 3 && abs(start.getColonne()-end.getColonne()) != 0 && abs(start.getLigne()-end.getLigne()) !=0 ){
    return a;
  }
  else{return !a;}
}
