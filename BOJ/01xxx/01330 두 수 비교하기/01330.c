// Copyright 2021 Johy. All rights reserved.
// Licensed under the MIT License.
// See LICENSE file in the project root for license information.

#include <stdio.h>

int main(int argc, char* argv[]) {
  int a, b;

  scanf(" %d %d", &a, &b);

  if (a > b)
    printf(">\n");
  else if (a < b)
    printf("<\n");
  else
    printf("==\n");
}
