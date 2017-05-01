// isomap.hpp

#ifndef _ISOMAP_HPP_
#define _ISOMAP_HPP_

#include <vector>
#include <memory>

#include "iso3d/isobase.hpp"
#include "iso3d/isolayer.hpp"

namespace iso
{
  class Map
  {
  private:
    std::vector<Layer *> layers;
    // std::vector<std::shared_ptr<Layer>> layers;
  public:
    void setup ();
    void add_layer ( Layer *layer );
    auto layers_begin () { return this->layers.begin(); }
    auto layers_end () { return this->layers.end(); }
  };
}

#endif
