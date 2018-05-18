#include <emscripten/emscripten.h>
#include <stdint.h>

#define GRID_WIDTH 256

struct grid {
  uint8_t cells[GRID_WIDTH*GRID_WIDTH];
};

struct grid initialize(struct grid g) {
  for(int x=0;x<GRID_WIDTH;x++) {
    for(int y=0;y<GRID_WIDTH;y++) {
      g.cells[(x*GRID_WIDTH)+y] = 0;
    }
  }
  return g;
}

int main() {
  return 0;
};
