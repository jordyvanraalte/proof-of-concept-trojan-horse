//
// Created by Jordy on 12/26/2020.
//

#ifndef PROOF_OF_CONCEPT_TROJAN_HORSE_SERVER_H
#define PROOF_OF_CONCEPT_TROJAN_HORSE_SERVER_H

#undef UNICODE

#define WIN32_LEAN_AND_MEAN

#include <Windows.h>
#include <WinSock2.h>
#include <WS2tcpip.h>
#include <cstdio>
#include <cstdlib>
#undef UNICODE

#define DEFAULT_BUFLEN 512
#define DEFAULT_PORT "27017"

#pragma comment(lib,"WS2_32")

class Server {
public:
    int start();
};


#endif //PROOF_OF_CONCEPT_TROJAN_HORSE_SERVER_H
