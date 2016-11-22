#include "httpheader.h"

const char HEADER_GROUP_SEP[2] = "\n";
const char HEADER_KEY_VAL_SEP[2] = ":";

struct HTTPHeader *
header_factory(char *key, char *value) {
  // More to be done here...
  struct HTTPHeader *header = malloc(sizeof(struct HTTPHeader));

  header->key = strdup(key);
  header->value = strdup(value);

  return header;
}

struct HTTPHeader *
header_from_str(char *header_str) {
  char *key = strtok(header_str, HEADER_KEY_VAL_SEP);
  char *value = strtok(NULL, HEADER_KEY_VAL_SEP);

  // Shift our string memory up one character if the strings starts with a
  // space-character.
  if (isspace(value[0])) {
    memmove(value, value+1, strlen(value));
  }

  return header_factory(key, value);
}
