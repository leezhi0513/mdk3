#include <string.h>

#include "attacks.h"

int attack_count = 3;

struct attacks *load_attacks(int *count) {
  struct attacks *attacks = malloc(sizeof(struct attacks) * attack_count);
  
  attacks[0] = load_beacon_flood();
  attacks[1] = load_auth_dos();
  attacks[2] = load_probing();
  
  *count = attack_count;
  return attacks;
}