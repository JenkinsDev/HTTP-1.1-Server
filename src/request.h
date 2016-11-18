#ifndef __REQUEST_H
#define __REQUEST_H

// Includes
////////////////////////////////////////////////////////////
#include "httpheader.h"

// Struct/Union Signatures
////////////////////////////////////////////////////////////
typedef struct {
  int status;
  char *body;
  HttpHeader headers[];
} Request;

#endif
