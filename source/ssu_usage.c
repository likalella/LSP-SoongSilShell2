#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "ssu_usage.h"

void lsprocUsage(void){
	printf("Usage: ssu_lsproc [OPTION]\n");
	printf("List information about process and systems in proc file system.\n");
	printf("  -f [PID1] [PID2]...[PID16]  :\n");
	printf("  -t [PID1] [PID2]...[PID16]  :\n");
	printf("  -c [PID1] [PID2]...[PID16]  :\n");
	printf("  -n [PID1] [PID2]...[PID16]  :\n");
	printf("  -m [PID1] [PID2]...[PID16] [-k] [KEY1] [KEY2]...[KEY16]\n");
	printf("  -w                          :\n");
	printf("  -e                          :\n");
	printf("  -l                          :\n");
	printf("  -v                          :\n");
	printf("  -r                          :\n");
	printf("  -s [ATTRIBUTE_NAME]         :\n");
	printf("  -o [FILE_NAME]              :\n");
}
