
#include "iso3d/private.hpp"
#include "iso3d/isomap.hpp"

using namespace iso;

#include <stdio.h> // remove me

void Map::setup ()
{
  printf("iso map setup");
}

void Map::add_layer ( Layer *layer )
{
  DEBUG("add_layer: %p", layer);
  this->layers.push_back(layer);
}
