/*
TODO(jyotsan):
    - Create a simple socket server
    - Create a simple socket client
*/

#include <stdio.h>
#include <sys/socket.h>

/*
int socketfd = socket(domain, type, protocol)
Socket File Descriptor returns -1 on error
domain: 
    - AF_LOCAL -> local communication
    - AF_INET -> IPv4
    - AF_INET6 -> IPv6
    - desc: integer, specifies communication domain. We use AF_ LOCAL as defined in the POSIX standard for communication between processes on the same host. For 
          communicating between processes on different hosts connected by IPV4, we use AF_INET and AF_I NET 6 for processes connected by IPV6.

type: 
    - SOCK_STREAM -> TCP connection (reliable, connection-oriented)
    - SOCK_DGRAM -> UDP connection (unreliable, connectionless)
    - desc: integer, specifies the type of socket. We use SOCK_STREAM for TCP and SOCK_DGRAM for UDP.
protocol: 
    - 0 -> IP
    - desc: Protocol value for Internet Protocol(IP), which is 0. This is the same number that appears on the protocol field in the IP header of a packet.(man protocols for more details
*/
int main(){
    int sockfd = socket(AF_INET, SOCK_STREAM, 0);
    return 0;
}