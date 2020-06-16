#ifndef _c_plato_h_
#define _c_plato_h_
#include"c_pos.h"
#include "c_piece.h" // test001: good évide big error
#include<string>

#include<vector> //test
using namespace std;

//class Piece ; //test001: better ac include on indique au compilater que la classe existe pour éviter les erreures de compilation

class Plato{
protected:
  //Piece*  **t;
  vector< vector< Piece* > > Tableau;
  //Piece *piece; //ou vect de vect de pièces??
  Plato(int hauteur, int largeur);

  void ajoute(Piece *piece, Pos pos);
  void deplace(Pos start, Pos end);


  public:
    Plato(); //pour non bug de échequier

    int getHeight(); //faire la sortie
    int getWidth();  //faire sortie
    virtual void conditionInitiales() =0; //verif =0
    bool estDedans(Pos pos);
    Piece* getPiece(Pos pos); // /!\ error class piece incomplete
    void joue(Pos start, Pos end, bool turnNoir); // verif type=void!!

};

#endif
