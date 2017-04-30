
#ifndef _ISOVIEW_HPP_
#define _ISOVIEW_HPP_

#include "iso3d/isobase.hpp"
#include "iso3d/isomap.hpp"

namespace iso
{
  class View
  {
  private:
    Map *map;
  public:
    View ( Map *map );
    void display ();
  };
}

#endif
