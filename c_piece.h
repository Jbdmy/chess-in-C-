#ifndef _c_piece_h_
#define _c_piece_h_
#include<string>
#include"c_pos.h"


using namespace std;
class Plato ;

class Piece{
private:
  string Nom;
  bool EstNoir;

  public:
    Piece(bool estNoir, string name);
    //Piece();
    virtual bool isValidMove(Pos start, Pos end, bool isCapture, Plato *board) =0 ; //verif =0
    string toString();
    string getNom();

    void setNom(string str);
    void setEstNoir(bool estNoir);
    bool getEstNoir();
};


#endif
