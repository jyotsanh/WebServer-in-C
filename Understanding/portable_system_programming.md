# System Programming Portability:

- #include <sys/types.h> helps make system programming portable by defining data types that work across different architectures and operating systems. Using it ensures that your code is safe, scalable, and future-proof! 🚀.

Data Type	Used For	Example
pid_t	    Process IDs	fork(), getpid()
uid_t	    User IDs	getuid()
gid_t	    Group IDs	getgid()
off_t	    File offsets	lseek()
size_t	    Memory sizes	malloc(), sizeof()
ssize_t 	Signed data sizes	read(), write()
mode_t	    File permissions	chmod(), open()


# For examples:

```
#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

int main() {
    pid_t pid = getpid(); // Get process ID
    printf("Current Process ID: %d\n", pid);
    return 0;
}

```
## Why pid_t?
- On different systems, process IDs might have different sizes.
pid_t ensures the correct data type is used regardless of the system.


- If we don't use **types.h** this how the code will look like:
```
#include <stdio.h>
#include <unistd.h> // for getpid()

// Manually defining pid_t (assuming it's an int)
#typedef int pid_t;
int main() {
    pid_t pid = getpid(); // Get process ID
    printf("Current Process ID: %d\n", pid);
    return 0;
}


```


## Why maually giveing data types is risky?

| System | Type Size |
| Linux 64-bit | long (8 bytes) |
| Linux 32-bit | long (4 bytes) | 