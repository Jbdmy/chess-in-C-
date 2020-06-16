#include "c_tour.h"
using namespace std;
 // ajouter setPiece??
//Pion::Pion(bool estNoir){}
// ici appeler le constructeur de pièce en lui passant un truc en parmètre ??
Tour::Tour(bool estNoir):Piece(estNoir, "Tour"){}


bool Tour::isValidMove(Pos start, Pos end, bool isCapture, Plato *board){
  bool a=1;
  if(start.getLigne()>end.getLigne() && start.getColonne() == end.getColonne()){
    for(int i=end.getLigne()+1; i<start.getLigne(); i++){
      Pos p(i, start.getColonne() );
      if( board->getPiece( p ) !=0 ){
        return !a;
      }
    }
    return a;
  }// fin 1er if
  else if(end.getLigne()>start.getLigne() && start.getColonne() == end.getColonne()){
    for(int i=start.getLigne()+1; i<end.getLigne(); i++){
      Pos p(i, end.getColonne() );
      if( board->getPiece( p ) !=0 ){
        return !a;
      }
    }
    return a;
  }// fin 1er if
  else if( start.getColonne() > end.getColonne() && end.getLigne()==start.getLigne() ){
    for(int i=end.getColonne()+1; i<start.getColonne(); i++){
      Pos p(end.getLigne(), i );
      if( board->getPiece( p ) !=0 ){
        return !a;
      }
    }
    return a;
  }// fin 1er if
  else if( start.getColonne() < end.getColonne() && end.getLigne()==start.getLigne() ){
    for(int i=start.getColonne()+1; i<end.getColonne(); i++){
      Pos p(end.getLigne(), i );
      if( board->getPiece( p ) !=0 ){
        return !a;
      }
    }
    return a;
  }// fin 1er if
  else{return !a;}
}
