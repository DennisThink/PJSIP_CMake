#include "phone_base.hpp"
#include "pjsip_phone_client.hpp"
namespace dt_pjsip_cpp
{
    static pjsip_wrapper::CPjsipClient g_client;
    C_Pj_Sip_Phone_base::C_Pj_Sip_Phone_base()
    {

    }

    C_Pj_Sip_Phone_base::~C_Pj_Sip_Phone_base()
    {

    }

    bool C_Pj_Sip_Phone_base::SendMessage(const std::string strReciver, const std::string strContext)
    {
        return false;
    }

    bool C_Pj_Sip_Phone_base::RegisterToSipServer(const std::string strIp, const int port, const std::string strUserName, const std::string strPassword)
    {
        return g_client.RegisterToSipServer(strIp,port,strUserName,strPassword);
        return false;
    }
}