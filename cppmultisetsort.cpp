/*
 * Copyright(C) 2020, Bruno César Ribas <bruno.ribas@unb.br>
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of version 2.1 of the GNU Lesser General Public License
 * as published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it would be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 *
 */
#include "ordenacaomacros.h"
#include <set>

void cppmultisetsort(Item *v, int l, int r) {
  std::multiset<Item> st(v + l, v + r + 1);
  int i = 0;
  for (auto it = st.begin(); it != st.end(); ++it) {
    v[l + i++] = *it;
  }
}
