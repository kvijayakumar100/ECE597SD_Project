#include <time.h>
#include <stdio.h>
#include <unistd.h>
#include <sys/syscall.h>
#include <linux/perf_event.h>
// #include "count.h"

static int fddev = -1;
long  elapse();

void main() {
	int i = 0;
	long time = 0;
	struct timespec spec = {0,0};
	time_t stamp = spec.tv_nsec;

	while (i < 1000) {
		time = time + elapse();
		i++;
		printf("%llu \n", time);
	}
}
