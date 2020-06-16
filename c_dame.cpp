#include "c_dame.h"
using namespace std;
 // ajouter setPiece??
//Pion::Pion(bool estNoir){}
// ici appeler le constructeur de pièce en lui passant un truc en parmètre ??
Dame::Dame(bool estNoir):Piece(estNoir, "Dame"), Fou(estNoir), Tour(estNoir){}


bool Dame::isValidMove(Pos start, Pos end, bool isCapture, Plato *board){
  Fou::isValidMove(start, end, isCapture, board);


/*  bool a=1;
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
  else if (end.getLigne()-start.getLigne() == end.getColonne()-start.getColonne() && end.getColonne()-start.getColonne() >0 && end.getLigne()-start.getLigne() >0 ){
    for(int i=start.getLigne()+1  ; i<end.getLigne() ; i++){
      Pos p( i , i);
      if(board->getPiece(p)!=0){return !a;}
    }
    return a;
  }
  else if ( start.getLigne()-end.getLigne() == start.getColonne()-end.getColonne() && start.getColonne()-end.getColonne() >0 && start.getLigne()-end.getLigne() >0){
    for(int i=1  ; i<start.getLigne()-end.getLigne() ; i++){
      Pos p(end.getLigne()+i, end.getColonne()+i);
      if(board->getPiece(p)!=0){return !a;}
    }
    return a;
  }
  else if (end.getColonne()-start.getColonne() == start.getLigne()-end.getLigne() && start.getLigne()-end.getLigne() >0 && end.getColonne()-start.getColonne() >0 ){
    for(int i=1  ; i<end.getColonne()-start.getColonne() ; i++){
      Pos p(end.getLigne()+i , end.getColonne()-i );
      if(board->getPiece(p)!=0){return !a;}
    }
    return a;
  }
  else if (end.getLigne()-start.getLigne() == start.getColonne()-end.getColonne() && end.getLigne()-start.getLigne() >0 && start.getColonne()-end.getColonne() >0){
    for(int i=1  ; i<end.getLigne()-start.getLigne() ; i++){
      Pos p(start.getLigne()+i , start.getColonne()-i );
      if(board->getPiece(p)!=0){return !a;}
    }
    return a;
  }
  else{return !a;}

  */
}
