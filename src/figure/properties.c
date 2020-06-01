#include "properties.h"


static const figure_properties properties[] = {
//  cat  dmg  atk  def Mdef Matk Mfrq
    {0,   0,   0,   0,   0,   0,   0},
    {1,  20,   0,   0,   0,   0,   0},
    {1,  20,   0,   0,   0,   0,   0},
    {1,  20,   0,   0,   0,   0,   0},
    {1,  20,   0,   0,   0,   0,   0},
    {0,   0,   0,   0,   0,   0,   0},
    {0,   0,   0,   0,   0,   0,   0},
    {1,  20,   0,   0,   0,   0,   0},
    {1,  20,   0,   0,   0,   0,   0},
    {1,  20,   0,   0,   0,   0,   0},
    {2,  50,   5,   0,   0,   0,   0},
    {2,  80,   4,   0,   0,   4, 100},
    {2, 120,   8,   0,   0,   0,   0},
    {2, 150,  10,   0,   0,   0,   0},
    {0,   0,   0,   0,   0,   0,   0},
    {1,  20,   0,   0,   0,   0,   0},
    {2, 100,   9,   2,   0,   0,   0},
    {2, 100,  15,   0,   0,   0,   0},
    {1,  20,   0,   0,   0,   0,   0},
    {1,  10,   0,   0,   0,   0,   0},
    {0,   0,   0,   0,   0,   0,   0},
    {1,  10,   0,   0,   0,   0,   0},
    {4,  12,   0,   0,   0,   0,   0},
    {4,  12,   0,   0,   0,   0,   0},
    {4,  12,   0,   0,   0,   0,   0},
    {0,   0,   0,   0,   0,   0,   0},
    {1,  20,   0,   0,   0,   0,   0},
    {1,  20,   0,   0,   0,   0,   0},
    {1,  10,   0,   0,   0,   0,   0},
    {1,  20,   0,   0,   0,   0,   0},
    {1,  20,   0,   0,   0,   0,   0},
    {1,  20,   0,   0,   0,   0,   0},
    {1,  20,   0,   0,   0,   0,   0},
    {1,  20,   0,   0,   0,   0,   0},
    {1,  20,   0,   0,   0,   0,   0},
    {1,  20,   0,   0,   0,   0,   0},
    {0,   0,   0,   0,   0,   0,   0},
    {0,   0,   0,   0,   0,   0,   0},
    {1,  20,   0,   0,   0,   0,   0},
    {1,  20,   0,   0,   0,   0,   0},
    {1,  10,   0,   0,   0,   0,   0},
    {5,  40,   6,   0,   0,   0,   0},
    {2,  50,   6,   0,   0,   6,  50},
    {3,  70,   5,   0,   0,   4,  70},
    {3,  90,   7,   0,   0,   0,   0},
    {3, 120,  12,   2,   2,   0,   0},
    {3, 120,   7,   1,   0,   5,  70},
    {3, 200,  20,   5,   8,   6,  70},
    {3, 120,  15,   4,   4,   0,   0},
    {3,  90,   7,   1,   0,   0,   0},
    {3, 110,  10,   1,   2,   0,   0},
    {3,  70,   5,   0,   0,   3, 100},
    {3, 100,   6,   1,   0,   4,  70},
    {3, 120,  15,   2,   3,   0,   0},
    {3, 100,   9,   2,   0,   0,   0},
    {3,  90,   4,   0,   0,   4, 100},
    {3, 100,   8,   0,   0,   0,   0},
    {3, 150,  13,   2,   0,   0,   0},
    {5,  40,   0,   0,   0,   0,   0},
    {0, 100,   0,   0,   0,  12,   0},
    {0, 100,   0,   0,   0,  20,   0},
    {0, 100,   0,   0,   0, 200,   0},
    {0, 100,   0,   0,   0,   0, 200},
    {0, 100,   0,   0,   0,   0,   0},
    {0, 100,   0,   0,   0,   0,   0},
    {0, 100,   0,   0,   0,   0,   0},
    {0, 100,   0,   0,   0,   0,   0},
    {0, 100,   0,   0,   0,   0,   0},
    {6,  10,   0,   0,   0,   0,   0},
    {3,  80,   8,   0,   0,   0,   0},
    {6,  20,   0,   0,   0,   0,   0},
    {0, 100,   0,   0,   0,  10,   0},
    {0, 100,   0,   0,   0,   0,   0},
    {2, 60,    5,   0,   0,   0,  60},
    {0, 100,   0,   0,   0,  12,   0},
    {0, 100,   0,   0,   0,   0,   0},
    {0, 100,   0,   0,   0,   0,   0},
    {0, 100,   0,   0,   0,   0,   0},
    {0, 100,   0,   0,   0,   0,   0},
    {0, 100,   0,   0,   0,   0,   0},
    {0, 100,   0,   0,   0,   0,   0},
    {0, 100,   0,   0,   0,   0,   0},

};

const figure_properties *figure_properties_for_type(figure_type type)
{
    return &properties[type];
}
