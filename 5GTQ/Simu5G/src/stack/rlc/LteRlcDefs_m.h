//
// Generated file, do not edit! Created by opp_msgtool 6.0 from stack/rlc/LteRlcDefs.msg.
//

#ifndef __LTERLCDEFS_M_H
#define __LTERLCDEFS_M_H

#if defined(__clang__)
#  pragma clang diagnostic ignored "-Wreserved-id-macro"
#endif
#include <omnetpp.h>

// opp_msgtool version check
#define MSGC_VERSION 0x0600
#if (MSGC_VERSION!=OMNETPP_VERSION)
#    error Version mismatch! Probably this file was generated by an earlier version of opp_msgtool: 'make clean' should help.
#endif

// cplusplus {{
#include "stack/rlc/LteRlcDefs.h"
// }}


namespace omnetpp {

inline any_ptr toAnyPtr(const RlcFragDesc *p) {return any_ptr(p);}
template<> inline RlcFragDesc *fromAnyPtr(any_ptr ptr) { return ptr.get<RlcFragDesc>(); }
inline any_ptr toAnyPtr(const RlcWindowDesc *p) {return any_ptr(p);}
template<> inline RlcWindowDesc *fromAnyPtr(any_ptr ptr) { return ptr.get<RlcWindowDesc>(); }
inline any_ptr toAnyPtr(const MrwDesc *p) {return any_ptr(p);}
template<> inline MrwDesc *fromAnyPtr(any_ptr ptr) { return ptr.get<MrwDesc>(); }
inline any_ptr toAnyPtr(const RlcUmRxWindowDesc *p) {return any_ptr(p);}
template<> inline RlcUmRxWindowDesc *fromAnyPtr(any_ptr ptr) { return ptr.get<RlcUmRxWindowDesc>(); }

}  // namespace omnetpp

#endif // ifndef __LTERLCDEFS_M_H

