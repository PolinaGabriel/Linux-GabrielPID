#include<cstddef>
#include<cstdio>
#include<unistd.h>
#include<signal.h>

int main(int argc, char** argv) {

	int ret1;
	int ret2;
	ret1 = execl("/bin/nano", "nano", "/home/student/text.txt", NULL);
	ret2 = execl("/bin/kill", "kill", "nano", NULL);
	if (ret1 == -1 || ret2 == -1)
		perror("execl");
}
