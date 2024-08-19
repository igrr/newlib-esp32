#include "config.h"
#include "warning.h"
#include <pthread.h>

void	pthread_yield (void) {
  return;
}
stub_warning(pthread_yield);
