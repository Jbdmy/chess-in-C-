#ifndef _c_pion_h_
#define _c_pion_h_
#include "c_piece.h" //On inclut ça ici
#include "c_plato.h"
using namespace std;

class Pion : public Piece { 
  public:
    bool firstMove;
    Pion(bool estNoir); // ajouter setPiece?? // bool estNoir
    bool isValidMove(Pos start, Pos end, bool isCapture, Plato *board);

};

#endif
