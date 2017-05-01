// isolayermesh.hpp

#ifndef _ISOLAYERMESH_HPP_
#define _ISOLAYERMESH_HPP_

#include "iso3d/isolayer.hpp"

namespace iso
{
  class LayerMesh : public Layer
  {
  private:
    int width;
    int height;
  public:
    LayerMesh ( int width, int height );
    void display ( View *view );
  };
}

#endif
