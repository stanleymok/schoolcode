#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[], char *envp[]) {
	// if user adds a command line argument
	// wanting to only see the environment var specified
	// i.e. printenv USER
	if (argc > 1) {
		for (int i=1; i<argc; i++) {
			for (char **env = envp; *env != 0; env++) {
				if (strstr(*env, argv[i]) != NULL)
					if (*(*env + strlen(argv[i])) == '=')
						printf("%s\n", *env + strlen(argv[i]) + 1); //remove = sign, +1
			}		
		}
	}
	else { //else print all env var
		for (char **env = envp; *env != 0; env++) {
			printf("%s\n", *env);
		}
		return 0;
	}
}
