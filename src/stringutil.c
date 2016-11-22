#include "stringutil.h"

// strdup is a POSIX function so it's not always going to be accessible.
// Defining it here
char *strdup(const char *src) {
  char *dest = malloc(strlen(src) + 1); // Allocate space for string + NULL Termination

  if (dest == NULL) return NULL;

  strcpy(dest, src);
  return dest;
}
