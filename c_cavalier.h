#ifndef _c_cavalier_h_
#define _c_cavalier_h_
#include "c_piece.h" //On inclut ça ici
#include "c_plato.h"
#include<stdlib.h>
using namespace std;

class Cavalier : public Piece { // verif héritage public
  public:
    Cavalier(bool estNoir); // ajouter setPiece??
    bool isValidMove(Pos start, Pos end, bool isCapture, Plato *board);

};

#endif
