#include "main.h"

int
main(int argc, char *argv[]) {
  size_t header_num = 10;
  struct HTTPHeader *headers[header_num];

  for (size_t i=0; i<header_num; i++) {
    char *header_str;

    if ((i+1) % 2 == 0) {
      header_str = strdup("Authorization: KlsdAfeNa");
    } else if (i == 2) {
      header_str = strdup("Test: Testing");
    } else {
      header_str = strdup("Content-Type: application/json");
    }

    headers[i] = header_from_str(header_str);
  }

  for (size_t j=0; j<header_num; j++) {
    printf("%s: %s\n", headers[j]->key, headers[j]->value);
  }

  struct Request *req = request_factory(NOT_FOUND, " ", *headers, header_num);

  printf("\n%i\n", req->status_code);


  free(req);
  for (size_t k=0; k<header_num; k++) {
    free(headers[k]);
  }

  return 0;
}
