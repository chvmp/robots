#ifndef QUADRUPED_DESCRIPTION_H
#define QUADRUPED_DESCRIPTION_H

#include <quadruped_base/quadruped_base.h>

namespace champ
{
    namespace URDF
    {
        void loadFromHeader(champ::QuadrupedBase &base)
        {
      base.lf.hip.setOrigin(0.2999, 0.104, 0.0, 2.61799387799, 0.0, 0.0);
base.lf.upper_leg.setOrigin(0.0599, 0.08381, -0.0, -2.61799387799, 0.0, 1.57079632679);
base.lf.lower_leg.setOrigin(0.0, 0.1003, -0.285, 0.0, 0.0, 0.0);
     base.lf.foot.setOrigin(0.08795, 0.01305, -0.33797, 0.0, 0.0, -1.57079632679);

      base.rf.hip.setOrigin(0.2999, -0.104, 0.0, -2.61799387799, 0.0, 0.0);
base.rf.upper_leg.setOrigin(0.0599, -0.08381, -0.0, 2.61799387799, 0.0, -1.57079632679);
base.rf.lower_leg.setOrigin(0.0, -0.1003, -0.285, 0.0, 0.0, 0.0);
     base.rf.foot.setOrigin(0.08795, -0.01305, -0.33797, 0.0, 0.0, 1.57079632679);

      base.lh.hip.setOrigin(-0.2999, 0.104, 0.0, -2.61799387799, 0.0, -3.14159265359);
base.lh.upper_leg.setOrigin(-0.0599, 0.08381, -0.0, -2.61799387799, 0.0, -1.5707963268);
base.lh.lower_leg.setOrigin(0.0, 0.1003, -0.285, 0.0, 0.0, 0.0);
     base.lh.foot.setOrigin(-0.08795, 0.01305, -0.33797, 0.0, 0.0, -1.57079632679);

      base.rh.hip.setOrigin(-0.2999, -0.104, 0.0, 2.61799387799, 0.0, -3.14159265359);
base.rh.upper_leg.setOrigin(-0.0599, -0.08381, -0.0, 2.61799387799, 0.0, -4.71238898038);
base.rh.lower_leg.setOrigin(0.0, -0.1003, -0.285, 0.0, 0.0, 0.0);
     base.rh.foot.setOrigin(-0.08795, -0.01305, -0.33797, 0.0, 0.0, 1.57079632679);
        }
    }
}
#endif