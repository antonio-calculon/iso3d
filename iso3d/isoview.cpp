
#include "iso3d/private.hpp"
#include "iso3d/isoview.hpp"

using namespace iso;

View::View ( Map *map )
{
  this->map = map;
}

void View::display ()
{
  auto end = this->map->layers_end();
  for (auto it=this->map->layers_begin(); it != end; it++)
    {
      Layer *layer = *it;
      DEBUG("layer: %p", layer);
      layer->display(this);
    }
}
