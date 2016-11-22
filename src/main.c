#include "main.h"

int
main(int argc, char *argv[]) {
  size_t header_num = 4;
  struct HTTPHeader *headers[header_num];

  for (size_t i=0; i<header_num; i++) {
    char *header_str;

    if (i % 2 == 0) {
      header_str = strdup("Authorization: KlsdAfeNa");
    } else {
      header_str = strdup("Content-Type: application/json");
    }

    headers[i] = header_from_str(header_str);
  }

  printf("%s: %s\n", headers[0]->key, headers[0]->value);
  printf("%s: %s\n", headers[1]->key, headers[1]->value);
  printf("%s: %s\n", headers[2]->key, headers[2]->value);
  printf("%s: %s\n", headers[3]->key, headers[3]->value);

  return 0;
}
