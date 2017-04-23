#ifndef SSU_LSPROC_H
#define SSU_LSPROC_H

struct lsproc_opt{
	int is_f;
	int f_pid[16];
	int is_t;
	int t_pid[16];
	int is_c;
	int c_pid[16];
	int is_n;
	int n_pid[16];
	int is_m;
	int m_pid[16];
	int is_k;
	char *key[16];
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

int ssu_lsproc(int argc, char *argv[]);
void init_lsproc(struct lsproc_opt *);
int parsing_lsproc(int argc, char*argv[], struct lsproc_opt *);

#endif
