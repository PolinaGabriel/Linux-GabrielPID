#include<cstddef>
#include<cstdio>
#include<unistd.h>
#include<sys/types.h>

int main(int argc, char** argv) {
	pid_t pid;
	pid = fork ();
	if (pid == -1)
		perror("fork");
	if (!pid) {
		int ret;
		ret = execl("/snap/bin/chromium", "chromium", NULL);
		if (ret == -1) {
			perror("execlp");
			_exit(1);
		}
	}
}
