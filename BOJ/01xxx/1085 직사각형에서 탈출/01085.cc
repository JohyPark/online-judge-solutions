// Copyright 2021 Johy. All rights reserved.
// Licensed under the MIT License.
// See LICENSE file in the project root for license information.

#include <iostream>

size_t GetMinDistance(size_t x, size_t y, size_t width, size_t height) {
  size_t distance_x = x < width - x ? x : width - x;
  size_t distance_y = y < height - y ? y : height - y;

  return distance_x < distance_y ? distance_x : distance_y;
}

int main(int argc, char* argv[]) {
  int x, y, w, h;

  std::cin >> x >> y >> w >> h;

  std::cout << GetMinDistance(x, y, w, h) << std::endl;
}
