#ifndef _c_fou_h_
#define _c_fou_h_
#include "c_piece.h" //On inclut ça ici
#include "c_plato.h"
using namespace std;

class Fou : public virtual Piece { // verif héritage public
  public:
    Fou(bool estNoir); // ajouter setPiece??
    bool isValidMove(Pos start, Pos end, bool isCapture, Plato *board);

};

#endif
