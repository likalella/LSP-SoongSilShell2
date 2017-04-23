#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "ssu_test.h"
#include "ssu_lsproc.h"

void ssu_test(struct lsproc_opt *opt){
	int i;
	
	printf("is_f : %d\n", opt->is_f);
	for(i=0; i<opt->is_f; i++){
		printf("  f_pid[%d] : %d\n", i, opt->f_pid[i]);
	}

	printf("is_t : %d\n", opt->is_t);
	for(i=0; i<opt->is_t; i++){
		printf("  t_pid[%d] : %d\n", i, opt->t_pid[i]);
	}
	
	printf("is_c : %d\n", opt->is_c);
	for(i=0; i<opt->is_c; i++){
		printf("  c_pid[%d] : %d\n", i, opt->c_pid[i]);
	}

	printf("is_n : %d\n", opt->is_n);
	for(i=0; i<opt->is_n; i++){
		printf("  n_pid[%d] : %d\n", i, opt->n_pid[i]);
	}

	printf("is_m : %d\n", opt->is_m);
	for(i=0; i<opt->is_m; i++){
		printf("  m_pid[%d] : %d\n", i, opt->m_pid[i]);
	}

	printf("is_k : %d\n", opt->is_k);
	for(i=0; i<opt->is_k; i++){
		printf("  key[%d] : %s\n", i, opt->key[i]);
	}

	printf("is_w : %d\n", opt->is_w);
	printf("is_e : %d\n", opt->is_e);
	printf("is_l : %d\n", opt->is_l);
	printf("is_v : %d\n", opt->is_v);
	printf("is_r : %d\n", opt->is_r);
	printf("is_s : %d\n", opt->is_s);
	if(opt->is_s == 0){
		printf("s_filedes : %d\n", opt->s_filedes);
		printf("s_cmdline : %d\n", opt->s_cmdline);
		printf("s_io : %d\n", opt->s_io);
		printf("s_stat : %d\n", opt->s_stat);
		printf("s_environ : %d\n", opt->s_environ);
	}
	printf("is_o : %d\n", opt->is_o);
	if(opt->is_o == 0)
		printf("o_fname : %s\n", opt->o_fname);

}
