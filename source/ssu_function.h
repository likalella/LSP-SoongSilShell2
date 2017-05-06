#ifndef SSU_FUNCTION_H
#define SSU_FUNCTION_H

void ssu_shell();
void ssu_lsproc(int argc, char *argv[]);
void ssu_itoa(int, char *);
int ssu_isnum(char *);

struct ssu_function{
	char *cmd;
	void (*func)(int argc, char *argv[]);
};

#endif
