#include "main.h"

int
main(int argc, char *argv[]) {
  size_t header_num = 4;
  struct HTTPHeader headers[header_num];

  for (size_t i=0; i<header_num; i++) {
    char header_str[51];

    if (i % 2 == 0) {
      strncpy(header_str, "Authorization: KlsdAfeNa", sizeof(header_str));
    } else {
      strncpy(header_str, "Content-Type: application/json", sizeof(header_str));
    }

    headers[i] = header_from_str(header_str);
  }

  printf("%s: %s\n", headers[0].key, headers[0].value);
  printf("%s: %s\n", headers[1].key, headers[1].value);
  printf("%s: %s\n", headers[2].key, headers[2].value);

  return 0;
}
