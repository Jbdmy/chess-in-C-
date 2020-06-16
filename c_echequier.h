#ifndef _c_echequier_h_
#define _c_echequier_h_
#include "c_pion.h"
#include "c_tour.h"
#include "c_fou.h"
#include "c_roi.h"
#include "c_dame.h"
#include "c_cavalier.h"
#include "c_plato.h"
using namespace std;



class Echequier : public Plato {
  public:
    Echequier();
    void conditionInitiales();
    string toString();
};

#endif
