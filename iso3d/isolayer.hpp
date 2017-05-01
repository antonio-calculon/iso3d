// isolayer.hpp

#ifndef _ISOLAYER_HPP_
#define _ISOLAYER_HPP_

#include "iso3d/isobase.hpp"

namespace iso
{
  class View; // [FIXME]
  
  class Layer
  {
  public:
    virtual void display ( View *view ) = 0;
  };
}

#endif
