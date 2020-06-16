#ifndef _c_dame_h_
#define _c_dame_h_
#include "c_piece.h" //On inclut ça ici
#include "c_plato.h"
#include "c_tour.h"
#include "c_fou.h"
using namespace std;

class Dame : public Fou, public Tour { // verif héritage public
  public:
    Dame(bool estNoir); // ajouter setPiece??
    bool isValidMove(Pos start, Pos end, bool isCapture, Plato *board);

};

#endif
