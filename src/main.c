#include "main.h"

int main(int argc, char *argv[]) {
  struct HTTPHeader headers[] = {header_factory("Authorization", "KlsdAdfeNa")};
  size_t header_arr_size = 1;

  struct Request *req = request_factory("test", headers, header_arr_size);

  printf("%s\n", req->body);

  for (size_t i=0; i<header_arr_size; i++) {
    printf("%s: %s\n", (&req->headers[i])->key, (&req->headers[i])->value);
  }

  return 0;
}
