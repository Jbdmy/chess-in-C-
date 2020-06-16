#include "c_pion.h"
using namespace std;
 // ajouter setPiece??
//Pion::Pion(bool estNoir){}
// ici appeler le constructeur de pièce en lui passant un truc en parmètre ??
Pion::Pion(bool estNoir):Piece(estNoir, "Pion"){
  firstMove=true;
  //setEstNoir(estNoir);
}


bool Pion::isValidMove(Pos start, Pos end, bool isCapture, Plato *board){
  bool a=1;
  if(firstMove){ //deb first move // ajouter arrivée != un pion y est
    if(getEstNoir() ){
      if(start.getLigne() - end.getLigne()>0 && start.getLigne() - end.getLigne()<3 && start.getColonne() == end.getColonne() ){
        if(start.getLigne() - end.getLigne()>1){
          Pos p(start.getLigne()-1, start.getColonne() );
          Pos p2(start.getLigne()-2, start.getColonne() );
          if(board->getPiece(p)==0 && board->getPiece(p2)==0 ){firstMove=0 ; return a;}
          else{return !a;}
        }
        else{firstMove=0 ; return a;}
      }
      // add manger
      else if(start.getLigne()-end.getLigne() == 1 && start.getColonne() != end.getColonne() && board->getPiece(end)!=0){
        if(start.getColonne() - end.getColonne() == 1 || end.getColonne() - start.getColonne() == 1){
          firstMove=0 ; return a;
        }
        else{return !a;}
      }
      else{ return !a;} // pas mm colonne ou +2
    }//ferme if noir==1
    else{ // pas noir
        if(start.getLigne() - end.getLigne()<0 && end.getLigne() - start.getLigne()<3 && start.getColonne() == end.getColonne() ){
          if(end.getLigne() - start.getLigne()>1){
            Pos p(start.getLigne()+1, start.getColonne() );
            Pos p2(start.getLigne()+2, start.getColonne() );
            if(board->getPiece(p)==0 && board->getPiece(p2)==0){firstMove=0 ; return a;}
            else{return !a;}
          }
          else{firstMove=0 ; return a;}
        }
        else if(end.getLigne()-start.getLigne() == 1 && start.getColonne() != end.getColonne() && board->getPiece(end)!=0){
          if(start.getColonne() - end.getColonne() == 1 || end.getColonne() - start.getColonne() == 1){
            firstMove=0 ; return a;
          }
          else{return !a;}
        }
        else{ return !a;} // pas mm colonne ou +2
    } // ferme pas noir
  }// ferme first move==1
  else{ // pas first move
    if(getEstNoir()){
      if(start.getLigne()-end.getLigne() == 1 && start.getColonne() == end.getColonne() && board->getPiece(end)==0 ){
        firstMove=0 ; return a;
      }
      else if(start.getLigne()-end.getLigne() == 1 && start.getColonne() == end.getColonne() && board->getPiece(end)!=0){
        return !a;
      }
      else if(start.getLigne()-end.getLigne() == 1 && start.getColonne() != end.getColonne() && board->getPiece(end)!=0){
        if(start.getColonne() - end.getColonne() == 1 || end.getColonne() - start.getColonne() == 1){
          firstMove=0 ; return a;
        }
        else{return !a;}
      }
      else{return !a;}
    }
    else{//pas noir
      if(end.getLigne()-start.getLigne() == 1 && start.getColonne() == end.getColonne() && board->getPiece(end)==0 ){
        firstMove=0 ; return a;
      }
      else if(end.getLigne()-start.getLigne() == 1 && start.getColonne() == end.getColonne() && board->getPiece(end)!=0){
        return !a;
      }
      else if(end.getLigne()-start.getLigne() == 1 && start.getColonne() != end.getColonne() && board->getPiece(end)!=0){
        if(start.getColonne() - end.getColonne() == 1 || end.getColonne() - start.getColonne() == 1){
          firstMove=0 ; return a;
        }
        else{return !a;}
      }
      else{return !a;}
    }// ferme pas noir
  }// ferme pas first move
}
