#include "request.h"

struct Request *
add_headers(struct Request *req, struct HTTPHeader headers[], size_t num_headers) {
  for (size_t i=0; i<num_headers; i++) {
    req->headers[i] = headers[i];
  }

  return req;
}

struct Request *
request_factory(char *body, struct HTTPHeader headers[], size_t num_headers) {
  struct Request *req;

  req = malloc(sizeof(*req) + sizeof(*req->headers) * num_headers);

  if (req == NULL) {
    printf("Null pointer created inside request_factory");
  }

  req->body = body;

  add_headers(req, headers, num_headers);

  return req;
}
