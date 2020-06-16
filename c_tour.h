#ifndef _c_tour_h_
#define _c_tour_h_
#include "c_piece.h" //On inclut ça ici
#include "c_plato.h"
using namespace std;

class Tour : public virtual Piece { // verif héritage public
  public:
    Tour(bool estNoir); // ajouter setPiece??
    bool isValidMove(Pos start, Pos end, bool isCapture, Plato *board);

};

#endif
