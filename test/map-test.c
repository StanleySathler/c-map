#include <stdio.h>
#include "../lib/assert.h"
#include "../src/map.h"

int
main()
{
  map_t map;

  map = map_create_node(1, "Stanley", NULL);
  assert_int(1, map->key, "(map_create): Should create the first node");

  map = map_create_node(1, "Stanley", NULL);
  map_add(&map, 3, "Bella");
  map_add(&map, 2, "Joao");
  assert_int(2, map->next->key, "(map_add): Should add the node");

  map = map_create_node(1, "Stanley", NULL);
  map_add(&map, 2, "Bella");
  map_add(&map, 3, "Otavio");
  map_remove(&map, 2);
  assert_int(3, map->next->key, "(map_remove): Should remove the node");

  map = map_create_node(1, "Stanley", NULL);
  map_value found_name;
  map_add(&map, 2, "Bella");
  map_add(&map, 3, "Andrey");
  map_get(map, 2, found_name);
  assert_string("Bella", found_name, "(map_get): Should get the node's value");
}