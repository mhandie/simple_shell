#include <unistd.h>

#include <unistd.h>

#include <dirent.h>

#include <stdlib.h>

#include <stdio.h>

#include <stdlib.h>

#include <signal.h>

#include <fcntl.h>

#include <sys/stat.h>

#include <string.h>

#include <sys/wait.h>

int access(const char *path, int mode);

int chdir(const char *path);

int close(int fd);

int closedir(DIR *dirp);

int execve(const char *pathname, char *const argv[], char *const envp[]);

void exit(int status);

int open (const char *__file, int __oflag, ...) __nonnull ((1));

void _exit(int status);

int fflush(FILE *stream);

pid_t fork(void);

void free(void *ptr);

char *getcwd(char *buf, size_t size);

ssize_t getline(char **lineptr, size_t *n, FILE *stream);

pid_t getpid(void);

int isatty(int fd);

int kill(pid_t pid, int sig);

void *malloc(size_t size);

DIR *opendir(const char *name);

void perror(const char *s);

ssize_t read(int fd, void *buf, size_t count);

struct dirent *readdir(DIR *dirp);

void (*signal(int signum, void (*handler)(int)))(int);

int stat(const char *path, struct stat *buf);

int lstat(const char *path, struct stat *buf);

int fstat(int fd, struct stat *buf);

char *strtok(char *str, const char *delim);

pid_t wait(int *status);

pid_t waitpid(pid_t pid, int *status, int options);

pid_t wait3(int *status, int options, struct rusage *rusage);

pid_t wait4(pid_t pid, int *status, int options, struct rusage *rusage);

ssize_t write(int fd, const void *buf, size_t count);
