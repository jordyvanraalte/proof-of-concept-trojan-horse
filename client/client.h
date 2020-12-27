//
// Created by Jordy on 12/26/2020.
//

#ifndef PROOF_OF_CONCEPT_TROJAN_HORSE_CLIENT_H
#define PROOF_OF_CONCEPT_TROJAN_HORSE_CLIENT_H
#include <string>
#include <cstdio>
#include <sys/types.h>
#include <WS2tcpip.h>
#include <WinSock2.h>

#ifndef WIN32_LEAN_AND_MEAN
#define WIN32_LEAN_AND_MEAN
#endif

#include <Windows.h>
#include <WinSock2.h>
#include <WS2tcpip.h>
#include <iphlpapi.h>
#include <stdio.h>

#pragma comment(lib, "Ws2_32.lib")
#pragma comment (lib, "Mswsock.lib")
#pragma comment (lib, "AdvApi32.lib")

#define DEFAULT_BUFLEN 512
#define DEFAULT_HOST "192.168.2.14"
#define DEFAULT_PORT "27017"

class Client {
public:
    int start();
};


#endif //PROOF_OF_CONCEPT_TROJAN_HORSE_CLIENT_H
