/*
TODO(jyotsan):
    - Create a simple socket server
    - Create a simple socket client
*/

#include <stdio.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <sys/types.h>

/*
int socketfd = socket(domain, type, protocol)
Socket File Descriptor returns -1 on error
domain: 
    - AF_LOCAL -> local communication
    - AF_INET -> IPv4 -> Adress Family ipv4 communication will happen using ipv4 address
    - AF_INET6 -> IPv6 -> Address Family ipv6 communication will happen using ipv6 address
    - AF_UNIX or AF_LOCAL -> local communication (for local inter-process communication)
    - desc: integer, specifies communication domain. We use AF_ LOCAL as defined in the POSIX standard for communication between processes on the same host. For 
          communicating between processes on different hosts connected by IPV4, we use AF_INET and AF_I NET 6 for processes connected by IPV6.

type: 
    - SOCK_STREAM -> TCP connection (reliable, connection-oriented) messages characters are read in a continuous stream
    - SOCK_DGRAM -> UDP connection (unreliable, connectionless) messages are read in chunks
    - desc: integer, specifies the type of socket. We use SOCK_STREAM for TCP and SOCK_DGRAM for UDP.
protocol: 
    - 0 -> IP
    - desc: Protocol value for Internet Protocol(IP), which is 0. This is the same number that appears on the protocol field in the IP header of a packet.(man protocols for more details
*/
#define PORT 8000;
void error(const char *msg){
    perror(msg);
    return 1;
}

int main(int argc, char *argv[]){
    if(argc<2){ // check if the number of arguments is less than 2
        error("ERROR, no port provided\n");
    }
    int sockfd, newsocfd, portno, clilen, n; // creating variable for file descriptors
    char buffer[256];
    struct sockaddr_in serv_addr, cli_addr; // creating structure for server address and client address
    sockfd = socket(AF_INET, SOCK_STREAM, 0);
    if(sockfd<0){
        error("ERROR opening socket");
    }

    return 0;
}