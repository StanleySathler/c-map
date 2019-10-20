#ifndef __C_MAP_H__
#define __C_MAP_H__

  typedef int map_key;
  typedef char map_value;

  /**
   * @brief: Represents a map node. Each item in a map
   *         is a node.
   */
  typedef struct {
    map_key key;          /* Node's key. */
    map_value value[512]; /* Node's value. */
    map_node_t* next;     /* Next map node. */
  } map_node_t;

  /**
   * @brief: Represents a map. A map is a pointer to a
   *         map node.
   */
  typedef map_node_t* map_t;

  /**
   * @brief: Creates a map node.
   */
  map_node_t*
  map_create_node(map_key key, map_value value, map_node_t* next);

  /**
   * @brief: Adds a map node to the given map.
   */
  void
  map_add(map_t map, map_key key, map_value value);

#endif /* __C_MAP_H__ */
