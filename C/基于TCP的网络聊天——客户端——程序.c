#include <stdio.h>
#include <winsock.h>

int main(void)
{
	char Sendbuf[100],Receivebuf[100];
	int SendLen,ReceiveLen;
	
	SOCKET socket_send;
	SOCKADDR_IN Server_add;
	
	WORD wVersionRequested;
	WSADATA wsaData;
	int error;
	
	wVersionRequested = MAKEWORD(2,2);
	
	error = WSAStartup(wVersionRequested,&wsaData);
	
	if (error != 0)
	{
		printf("�����׽���ʧ�ܣ�");
		return 0;
	}
	
	if (LOBYTE(wsaData.wVersion) != 2 || HIBYTE(wsaData.wVersion) != 2)
	{
		WSACleanup();
		return 0;
	}
	
	
	
	Server_add.sin_family = AF_INET;
	Server_add.sin_addr.S_un.S_addr = inet_addr("192.168.153.1");
	Server_add.sin_port = htons(5000);									//���ļ��ж������ 	SOCKET socket_send;
																		//���������ļ��е��� 	SOCKET socket_server;	Ҫ�ǵø��ģ�
	
	
	
	socket_send = socket(AF_INET,SOCK_STREAM,0);
	
	if(connect(socket_send,(SOCKADDR*)&Server_add,sizeof(SOCKADDR)) == SOCKET_ERROR)
	{
		printf("����ʧ�ܣ�\n");
	}
	
	
	while(1)
	{
		printf("enter:");
		scanf("%s",Sendbuf);
		SendLen=send(socket_send,Sendbuf,100,0);
		if (SendLen < 0)
		{
			printf("����ʧ��!\n");
		}
		
		ReceiveLen = recv(socket_send,Receivebuf,100,0);
		if (ReceiveLen < 0)
		{
			printf("����ʧ��!\n");
			break;
		}
		else
		{
			printf("Server say:%s\n",Receivebuf);
		}
	}
	
	closesocket(socket_send);
	WSACleanup();
	return 0;
}
