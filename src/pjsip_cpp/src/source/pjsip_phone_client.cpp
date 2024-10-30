#include "pjsip_phone_client.hpp"
#include <iostream>
namespace pjsip_wrapper
{
    CPjsipClient::CPjsipClient()
    {

    }
    CPjsipClient::~CPjsipClient()
    {

    }
    bool CPjsipClient::RegisterToSipServer(const std::string strIp, const int port, const std::string strUserName, const std::string strPort)
    {
        std::cout << "CPjsipClient::RegisterToSipServer Failed" << std::endl;
        return false;
    }
}