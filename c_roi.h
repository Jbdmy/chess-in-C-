#ifndef _c_roi_h_
#define _c_roi_h_
#include "c_piece.h" //On inclut ça ici
#include "c_plato.h"
#include<stdlib.h>
using namespace std;

class Roi : public Piece { // verif héritage public
  public:
    bool firstMove;
    Roi(bool estNoir); // ajouter setPiece??
    bool isValidMove(Pos start, Pos end, bool isCapture, Plato *board);

};

#endif
