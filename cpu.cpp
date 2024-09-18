#include <stdio.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <string.h>
#ifdef _WIN32
#include <io.h>
#define access _access

#else
#include <unistd.h>
#endif

int main(int argc, char *argv[]) {
    
}