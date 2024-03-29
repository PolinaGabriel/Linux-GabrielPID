#include<cstdio>
#include<unistd.h>

int main(int argc, char** argv) {
	const char *args[] = {"vi", "/home/student/text.txt", NULL};
	int ret;
	char *normal_args[3];
	for(int i=0; i < 3; i++){
		normal_args[i] = (char*)args[i]; 		
	}
	ret = execv("/bin/vi", normal_args);
	if (ret == -1)
		perror("execv");
}
