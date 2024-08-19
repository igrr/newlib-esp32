#include "config.h"
#include "warning.h"

int	pthread_spin_init (void *__spinlock, int __pshared) {
  return -1;
}
stub_warning(pthread_spin_init);
