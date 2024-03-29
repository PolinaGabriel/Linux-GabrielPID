#include<cstddef>
#include<cstdio>
#include<unistd.h>

int main(int argc, char** argv) {
	pid_t pid;
	pid = fork();
	if (pid > 0)
		printf("Я родительский процесс сpid=%d!\n", pid);
	else if (!pid)
		printf("А я дочерний!\n");
	else if (pid == -1)
		perror("fork");
}
