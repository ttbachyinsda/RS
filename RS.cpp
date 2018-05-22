#include <jni.h>
#include <string>
#include <netinet/in.h>
#include <fcntl.h>
#include <arpa/inet.h>
#include <android/log.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <arpa/inet.h>
#include <stdio.h>
#include <string.h>
#include <errno.h>
#include <sys/socket.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <resolv.h>
#include <stdlib.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <unistd.h>
#include <pthread.h>
#include <time.h>
#include<iomanip>
#include<iostream>

int main(){
    int sd = socket(AF_INET, SOCK_RAW, IPPROTO_UDP);
    int sd2 = socket(AF_INET6, SOCK_STREAM, 0);
    std::cout<<sd<<endl;
    std::cout<<sd2<<endl;
    return 0;
}
