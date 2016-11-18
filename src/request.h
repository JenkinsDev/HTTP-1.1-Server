#ifndef __REQUEST_H
#define __REQUEST_H

// Includes
////////////////////////////////////////////////////////////
#include <stdlib.h>
#include "httpheader.h"

// Struct/Union Signatures
////////////////////////////////////////////////////////////
struct Request {
  char *body;
  struct HTTPHeader headers[]; // C99+ idiom for creating a flexible array member
};

// Function Signatures
////////////////////////////////////////////////////////////
struct Request *add_headers(struct Request *req, struct HTTPHeader headers[], size_t num_headers);
struct Request *request_factory(char *body, struct HTTPHeader headers[], size_t num_headers);

#endif
