//
// Generated file, do not edit! Created by opp_msgtool 6.0 from inet/transportlayer/tcp/flavours/TcpBaseAlgState.msg.
//

#ifndef __INET__TCP_TCPBASEALGSTATE_M_H
#define __INET__TCP_TCPBASEALGSTATE_M_H

#if defined(__clang__)
#  pragma clang diagnostic ignored "-Wreserved-id-macro"
#endif
#include <omnetpp.h>

// opp_msgtool version check
#define MSGC_VERSION 0x0600
#if (MSGC_VERSION!=OMNETPP_VERSION)
#    error Version mismatch! Probably this file was generated by an earlier version of opp_msgtool: 'make clean' should help.
#endif

// dll export symbol
#ifndef INET_API
#  if defined(INET_EXPORT)
#    define INET_API  OPP_DLLEXPORT
#  elif defined(INET_IMPORT)
#    define INET_API  OPP_DLLIMPORT
#  else
#    define INET_API
#  endif
#endif


namespace inet {
namespace tcp {

struct TcpBaseAlgStateVariables;

}  // namespace tcp
}  // namespace inet

#include "inet/transportlayer/tcp/TcpConnectionState_m.h" // import inet.transportlayer.tcp.TcpConnectionState

// cplusplus {{
    #include "inet/transportlayer/tcp/TcpAlgorithm.h"
// }}


namespace inet {
namespace tcp {

/**
 * Struct generated from inet/transportlayer/tcp/flavours/TcpBaseAlgState.msg:19 by opp_msgtool.
 */
struct INET_API TcpBaseAlgStateVariables : ::inet::tcp::TcpStateVariables
{
    TcpBaseAlgStateVariables();
    int rexmit_count = 0;
    ::omnetpp::simtime_t rexmit_timeout = 3.0;
    unsigned int persist_factor = 0;
    ::omnetpp::simtime_t persist_timeout = 5.0;
    uint32_t snd_cwnd = 0;
    uint32_t rtseq = 0;
    ::omnetpp::simtime_t rtseq_sendtime = SIMTIME_ZERO;
    ::omnetpp::simtime_t srtt = 0;
    ::omnetpp::simtime_t rttvar = 3.0 / 4.0;
    uint32_t numRtos = 0;
    uint32_t recover = iss;
    bool firstPartialACK = false;

  public:
    virtual std::string str() const override;
    virtual std::string detailedInfo() const override;
};

// helpers for local use
void INET_API __doPacking(omnetpp::cCommBuffer *b, const TcpBaseAlgStateVariables& a);
void INET_API __doUnpacking(omnetpp::cCommBuffer *b, TcpBaseAlgStateVariables& a);

inline void doParsimPacking(omnetpp::cCommBuffer *b, const TcpBaseAlgStateVariables& obj) { __doPacking(b, obj); }
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, TcpBaseAlgStateVariables& obj) { __doUnpacking(b, obj); }


}  // namespace tcp
}  // namespace inet


namespace omnetpp {

template<> inet::tcp::TcpBaseAlgStateVariables *fromAnyPtr(any_ptr ptr);

}  // namespace omnetpp

#endif // ifndef __INET__TCP_TCPBASEALGSTATE_M_H
