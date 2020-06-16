#include "c_roi.h"
using namespace std;
 // ajouter setPiece??
//Pion::Pion(bool estNoir){}
// ici appeler le constructeur de pièce en lui passant un truc en parmètre ??
Roi::Roi(bool estNoir):Piece(estNoir, "Roi "){
  firstMove=true;
}


bool Roi::isValidMove(Pos start, Pos end, bool isCapture, Plato *board){
  bool a=1;
  if( abs(start.getLigne()-end.getLigne())==1 && abs(start.getColonne()-end.getColonne())==1 ){
    return a;
  }
  else if( abs(start.getLigne()-end.getLigne())==0 && abs(start.getColonne()-end.getColonne())==1 ){
    return a;
  }
  else if( abs(start.getLigne()-end.getLigne())==1 && abs(start.getColonne()-end.getColonne())==0 ){
    return a;
  }
  else{return !a;}
}
