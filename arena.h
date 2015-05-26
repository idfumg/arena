#ifndef ARENA_H
#define ARENA_H
#include <stdint.h>
#include <memory.h>

typedef struct arena {
  uint8_t *region;
  size_t size;
  size_t current;
  struct arena *next;
} arena_t;

arena_t *
arena_create();

void *
arena_malloc(arena_t *arena, size_t size);

void *
arena_calloc(arena_t *arena, size_t num, size_t size);

void
arena_destroy(arena_t *arena);

#endif