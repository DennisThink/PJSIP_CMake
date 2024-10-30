#include <iostream>
#include "phone_base.hpp"

void RegisterToServer()
{
	dt_pjsip_cpp::C_Pj_Sip_Phone_base phone;
	std::string strSipServerIp = "127.0.0.1";
	int nSipServerPort = 5656;
	std::string strUserName = "1000";
	std::string strPassword = "1000";
	bool bResult = phone.RegisterToSipServer(strSipServerIp,nSipServerPort,strUserName,strPassword);
	if (bResult)
	{
		std::cout << "RegisterToServer Succeed" << std::endl;
	}
	else
	{
		std::cerr << "RegisterToServer Failed" << std::endl;
	}
}

void SendMsgToFriends()
{

}
int main(int argc, char* argv[])
{
	std::cout << "DennisThink SIP Phone" << std::endl;
	RegisterToServer();
	return 0;
}