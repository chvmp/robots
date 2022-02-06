#ifndef QUADRUPED_DESCRIPTION_H
#define QUADRUPED_DESCRIPTION_H

#include <quadruped_base/quadruped_base.h>

namespace champ
{
    namespace URDF
    {
        void loadFromHeader(champ::QuadrupedBase &base)
        {
      base.lf.hip.setOrigin(0.0705, 0.04, 0.02425, 0.0, 0.0, 0.0);
base.lf.upper_leg.setOrigin(0.02735, 0.029523, -0.0012724, 0.0, 0.0, -1.5708);
base.lf.lower_leg.setOrigin(-0.00516, -0.10458, -0.065536, -0.043072, 0.0, 1.5708);
     base.lf.foot.setOrigin(0.097, -0.0055, -0.064, 0.0, 0.0, 0.0);

      base.rf.hip.setOrigin(0.0705, -0.04, 0.02425, 0.0, 0.0, 0.0);
base.rf.upper_leg.setOrigin(0.02735, -0.029523, -0.0012724, 0.0, 0.0, -1.5708);
base.rf.lower_leg.setOrigin(0.00516, -0.10458, -0.065536, -0.043072, 0.0, 1.5708);
     base.rf.foot.setOrigin(0.097, 0.0054, -0.064, 0.0, 0.0, 0.0);

      base.lh.hip.setOrigin(-0.1299, 0.04, 0.02425, 0.0, 0.0, 0.0);
base.lh.upper_leg.setOrigin(0.02775, 0.029523, -0.0012724, 0.0, 0.0, -1.5708);
base.lh.lower_leg.setOrigin(-0.0054498, -0.10458, -0.065524, -0.043072, 0.0, 1.5708);
     base.lh.foot.setOrigin(0.097, -0.0055, -0.064, 0.0, 0.0, 0.0);

      base.rh.hip.setOrigin(-0.0705, -0.04, 0.02425, 0.0, 0.0, 0.0);
base.rh.upper_leg.setOrigin(-0.17265, -0.029523, -0.0012724, 0.0, 0.0, -1.5708);
base.rh.lower_leg.setOrigin(0.0054098, -0.10458, -0.065525, -0.043072, 0.0, 1.5708);
     base.rh.foot.setOrigin(0.097, 0.0054, -0.064, 0.0, 0.0, 0.0);
        }
    }
}
#endif