#include "config.h"
#include "warning.h"

int
__attribute__((weak))
pthread_spin_trylock (void *__spinlock) {
  return -1;
}
stub_warning(pthread_spin_trylock);
