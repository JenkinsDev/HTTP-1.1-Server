#ifndef __HTTPHEADER_H
#define __HTTPHEADER_H

// Includes
////////////////////////////////////////////////////////////
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

// Constants
////////////////////////////////////////////////////////////
extern const char HEADER_GROUP_SEP[2];
extern const char HEADER_KEY_VAL_SEP[2];


// Struct/Union Signatures
////////////////////////////////////////////////////////////
struct HTTPHeader {
  char *key;
  char *value;
};

// Function Signatures
////////////////////////////////////////////////////////////
struct HTTPHeader *header_factory(char *key, char *value);
struct HTTPHeader *header_from_str(char *header_str);

#endif
