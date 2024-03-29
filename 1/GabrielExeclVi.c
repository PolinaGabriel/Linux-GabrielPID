#include<cstddef>
#include<cstdio>
#include<unistd.h>

int main(int argc, char** argv) {
	int ret;
	ret = execl("/bin/vi", "vi", NULL);
	if (ret == -1)
		perror("execl");
}
