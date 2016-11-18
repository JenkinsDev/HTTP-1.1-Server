#include "main.h"

int main(int argc, char *argv[]) {
  Request req;
  HttpHeader header = header_factory("Authorization", "KlsdAdfeNa");

  req.status = 200;
  req.body = "test";
  req.headers[0] = header;

  printf("%d", req.status);
  printf("\n");
  printf("%s", req.body);
  printf("\n");

  for (size_t i = 0; i<=header_size(req.headers); i++) {
    HttpHeader header = req.headers[i];

    printf("%s: %s", header.key, header.value);
  }

  return 0;
}
