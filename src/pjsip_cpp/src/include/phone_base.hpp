#ifndef _DT_PJSIP_CPP_PHONE_BASE_H_
#define _DT_PJSIP_CPP_PHONE_BASE_H_
#include <string>
namespace dt_pjsip_cpp
{
    class C_Pj_Sip_Phone_base
    {
    public:
        C_Pj_Sip_Phone_base();
        virtual ~C_Pj_Sip_Phone_base();
        virtual bool RegisterToSipServer(const std::string strIp, const int port, const std::string strUserName, const std::string strPassword);
        virtual bool SendMessage(const std::string strReciver,const std::string strContext);
    protected:
    };
}
#endif