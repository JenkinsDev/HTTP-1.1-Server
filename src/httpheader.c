#include "httpheader.h"

struct HTTPHeader header_factory(char *key, char *value) {
  // More to be done here...
  return (struct HTTPHeader) {.key = key, .value = value};
}

struct HTTPHeader header_from_str(char *header_str) {
  
}
