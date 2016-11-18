#include "httpheader.h"

HttpHeader header_factory(char *key, char *value) {
  HttpHeader header;

  header.key = key;
  header.value = value;

  return header;
}

size_t header_size(HttpHeader *array) {
  return sizeof(array) / sizeof(array[0]);
}
