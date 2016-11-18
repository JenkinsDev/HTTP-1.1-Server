#ifndef __HTTPHEADER_H
#define __HTTPHEADER_H

// Includes
////////////////////////////////////////////////////////////
#include <stdio.h>

// Struct/Union Signatures
////////////////////////////////////////////////////////////
typedef struct {
  char *key;
  char *value;
} HttpHeader;

// Function Signatures
////////////////////////////////////////////////////////////
HttpHeader header_factory(char *key, char *value);
size_t header_size(HttpHeader *array);

#endif
