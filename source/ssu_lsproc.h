#ifndef SSU_LSPROC_H
#define SSU_LSPROC_H

struct lsproc_opt{
	int is_f;
	pid_t f_pid[1001];
	int is_t;
	pid_t t_pid[1001];
	int is_c;
	pid_t c_pid[1001];
	int is_n;
	pid_t n_pid[1001];
	int is_m;
	pid_t m_pid[1001];
	int is_k;
	char *key[1001];
	int is_w;
	int is_e;
	int is_l;
	int is_v;
	int is_r;
	int is_s;
	int s_filedes;
	int s_cmdline;
	int s_io;
	int s_stat;
	int s_environ;
	int is_o;
	char *o_fname;
};

void ssu_lsproc(int argc, char *argv[]);
void init_lsproc(struct lsproc_opt *);
int parsing_lsproc(int argc, char*argv[], struct lsproc_opt *);
int optionF(pid_t pid);
int optionT(pid_t pid);
int optionC(pid_t pid);
int optionN(pid_t pid);
int optionM(pid_t pid, int keyNum, char **key);
int optionW(void);
int optionE(void);
int optionL(void);
int optionV(void);
int optionS(struct lsproc_opt *);

#endif
