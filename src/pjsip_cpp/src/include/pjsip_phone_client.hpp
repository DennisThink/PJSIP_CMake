#ifndef _PJSIP_PHONE_CLIENT_H_
#define _PJSIP_PHONE_CLIENT_H_
#include <string>
namespace pjsip_wrapper
{
    class CPjsipClient
    {
    public:
        CPjsipClient();
        virtual ~CPjsipClient();
    public:
        virtual bool RegisterToSipServer(const std::string strIp, const int port, const std::string strUserName, const std::string strPassword);
    };
}
#endif