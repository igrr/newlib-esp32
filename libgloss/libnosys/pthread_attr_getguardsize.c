#include "config.h"
#include "warning.h"
#include <pthread.h>

int
__attribute__((weak))
pthread_attr_getguardsize (const pthread_attr_t *__attr,
				   size_t *__guardsize) {
  return -1;
}
stub_warning(pthread_attr_getguardsize);
