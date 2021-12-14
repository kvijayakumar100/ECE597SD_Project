#include <linux/perf_event.h>
#include <sys/syscall.h>
#include <unistd.h>
#include <stdio.h>

static int fddev = -1;

__attribute__((constructor)) static void init(void) {

	static struct perf_event_attr attr;
	attr.type = PERF_TYPE_HARDWARE;
	attr.config = PERF_COUNT_HW_CPU_CYCLES;
	fddev = syscall(__NR_perf_event_open, &attr);
	printf("Initialization complete \n");
	}

__attribute__((destructor)) static void fini(void) {

	close(fddev);
	printf("Program Finished");
	}

static inline long cpucycles(void) {

	long result = 1;

	/* checks that counter register is not reading -1, or off */
	if (read(fddev, &result, sizeof(result)) < sizeof(result)) return 0;

	return result;
	}

long  elapse() {
	int i = 0;
	int j = 0;
	int elapse = 0;
		while (j < 1000) {

			// printf("%llu \n", cpucycles());
			asm("ldr %%r5, [%0]\n\t"
				"add %%r5, $1\n\t"
                                "add %%r5, $1\n\t"
                                "add %%r5, $1\n\t"
                                "add %%r5, $1\n\t"
                                "add %%r5, $1\n\t"
                                "add %%r5, $1\n\t"
                                "add %%r5, $1\n\t"
                                "add %%r5, $1\n\t"
                                "add %%r5, $1\n\t" // 10 instructions
                                "add %%r5, $1\n\t"
                                "add %%r5, $1\n\t"
                                "add %%r5, $1\n\t"
                                "add %%r5, $1\n\t"
                                "add %%r5, $1\n\t"
                                "add %%r5, $1\n\t"
                                "add %%r5, $1\n\t"
                                "add %%r5, $1\n\t"
                                "add %%r5, $1\n\t"
                                "add %%r5, $1\n\t"// 20 instructions
                                "add %%r5, $1\n\t"
                                "add %%r5, $1\n\t"
                                "add %%r5, $1\n\t"
                                "add %%r5, $1\n\t"
                                "add %%r5, $1\n\t"
                                "add %%r5, $1\n\t"
                                "add %%r5, $1\n\t"
                                "add %%r5, $1\n\t"
                                "add %%r5, $1\n\t"
                                "add %%r5, $1\n\t" // 30 instructions
                                "add %%r5, $1\n\t"
                                "add %%r5, $1\n\t"
                                "add %%r5, $1\n\t"
                                "add %%r5, $1\n\t"
                                "add %%r5, $1\n\t"
                                "add %%r5, $1\n\t"
                                "add %%r5, $1\n\t"
                                "add %%r5, $1\n\t"
                                "add %%r5, $1\n\t"
                                "add %%r5, $1\n\t" // 40 instructions
                                "add %%r5, $1\n\t"
                                "add %%r5, $1\n\t"
                                "add %%r5, $1\n\t"
                                "add %%r5, $1\n\t"
                                "add %%r5, $1\n\t"
                                "add %%r5, $1\n\t"
                                "add %%r5, $1\n\t"
                                "add %%r5, $1\n\t"
                                "add %%r5, $1\n\t"
                                "add %%r5, $1\n\t" // 50 instructions
                                "add %%r5, $1\n\t"
                                "add %%r5, $1\n\t"
                                "add %%r5, $1\n\t"
                                "add %%r5, $1\n\t"
                                "add %%r5, $1\n\t"
                                "add %%r5, $1\n\t"
                                "add %%r5, $1\n\t"
                                "add %%r5, $1\n\t"
                                "add %%r5, $1\n\t"
                                "add %%r5, $1\n\t" // 60 instructions
                                "add %%r5, $1\n\t"
                                "add %%r5, $1\n\t"
                                "add %%r5, $1\n\t"
                                "add %%r5, $1\n\t"
                                "add %%r5, $1\n\t"
                                "add %%r5, $1\n\t"
                                "add %%r5, $1\n\t"
                                "add %%r5, $1\n\t"
                                "add %%r5, $1\n\t"
                                "add %%r5, $1\n\t" // 70 instructions
                                "add %%r5, $1\n\t"
                                "add %%r5, $1\n\t"
                                "add %%r5, $1\n\t"
                                "add %%r5, $1\n\t"
                                "add %%r5, $1\n\t"
                                "add %%r5, $1\n\t"
                                "add %%r5, $1\n\t"
                                "add %%r5, $1\n\t"
                                "add %%r5, $1\n\t"
                                "add %%r5, $1\n\t" // 80 instructions
                                "add %%r5, $1\n\t"
                                "add %%r5, $1\n\t"
                                "add %%r5, $1\n\t"
                                "add %%r5, $1\n\t"
                                "add %%r5, $1\n\t"
                                "add %%r5, $1\n\t"
                                "add %%r5, $1\n\t"
                                "add %%r5, $1\n\t"
                                "add %%r5, $1\n\t"
                                "add %%r5, $1\n\t" // 90 instructions
                                "add %%r5, $1\n\t"
                                "add %%r5, $1\n\t"
                                "add %%r5, $1\n\t"
                                "add %%r5, $1\n\t"
                                "add %%r5, $1\n\t"
                                "add %%r5, $1\n\t"
                                "add %%r5, $1\n\t"
                                "add %%r5, $3\n\t"
				"add %%r5, $3\n\t"
                                "str %%r5, [%0]"
				:
				: "r" (&elapse)
				: "r5");
				j++;
				// printf("%llu \n", cpucycles());
			}

		return cpucycles();
	}
