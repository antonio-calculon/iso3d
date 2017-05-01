// isolayer.cpp

#include "iso3d/private.hpp"
#include "iso3d/isolayermesh.hpp"

using namespace iso;


LayerMesh::LayerMesh ( int width, int height )
{
  this->width = width;
  this->height = height;
}


void LayerMesh::display ( View *view )
{
  DEBUG("layer display...");
}
