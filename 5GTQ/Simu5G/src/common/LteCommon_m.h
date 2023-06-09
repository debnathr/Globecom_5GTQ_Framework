//
// Generated file, do not edit! Created by opp_msgtool 6.0 from common/LteCommon.msg.
//

#ifndef __LTECOMMON_M_H
#define __LTECOMMON_M_H

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
#include "common/LteCommon.h"
// }}


namespace omnetpp {

inline any_ptr toAnyPtr(const Lambda *p) {return any_ptr(p);}
template<> inline Lambda *fromAnyPtr(any_ptr ptr) { return ptr.get<Lambda>(); }
inline any_ptr toAnyPtr(const RemoteTable *p) {return any_ptr(p);}
template<> inline RemoteTable *fromAnyPtr(any_ptr ptr) { return ptr.get<RemoteTable>(); }
inline any_ptr toAnyPtr(const LtePhyFrameTable *p) {return any_ptr(p);}
template<> inline LtePhyFrameTable *fromAnyPtr(any_ptr ptr) { return ptr.get<LtePhyFrameTable>(); }
inline any_ptr toAnyPtr(const LteNodeTable *p) {return any_ptr(p);}
template<> inline LteNodeTable *fromAnyPtr(any_ptr ptr) { return ptr.get<LteNodeTable>(); }
inline any_ptr toAnyPtr(const BandLimit *p) {return any_ptr(p);}
template<> inline BandLimit *fromAnyPtr(any_ptr ptr) { return ptr.get<BandLimit>(); }
inline any_ptr toAnyPtr(const RemoteUnitPhyData *p) {return any_ptr(p);}
template<> inline RemoteUnitPhyData *fromAnyPtr(any_ptr ptr) { return ptr.get<RemoteUnitPhyData>(); }
inline any_ptr toAnyPtr(const EnbInfo *p) {return any_ptr(p);}
template<> inline EnbInfo *fromAnyPtr(any_ptr ptr) { return ptr.get<EnbInfo>(); }
inline any_ptr toAnyPtr(const UeInfo *p) {return any_ptr(p);}
template<> inline UeInfo *fromAnyPtr(any_ptr ptr) { return ptr.get<UeInfo>(); }
inline any_ptr toAnyPtr(const UeAllocationInfo *p) {return any_ptr(p);}
template<> inline UeAllocationInfo *fromAnyPtr(any_ptr ptr) { return ptr.get<UeAllocationInfo>(); }
inline any_ptr toAnyPtr(const QCIParameters *p) {return any_ptr(p);}
template<> inline QCIParameters *fromAnyPtr(any_ptr ptr) { return ptr.get<QCIParameters>(); }
inline any_ptr toAnyPtr(const ApplicationTable *p) {return any_ptr(p);}
template<> inline ApplicationTable *fromAnyPtr(any_ptr ptr) { return ptr.get<ApplicationTable>(); }
inline any_ptr toAnyPtr(const SchedDisciplineTable *p) {return any_ptr(p);}
template<> inline SchedDisciplineTable *fromAnyPtr(any_ptr ptr) { return ptr.get<SchedDisciplineTable>(); }
inline any_ptr toAnyPtr(const TxTable *p) {return any_ptr(p);}
template<> inline TxTable *fromAnyPtr(any_ptr ptr) { return ptr.get<TxTable>(); }
inline any_ptr toAnyPtr(const TxDirectionTable *p) {return any_ptr(p);}
template<> inline TxDirectionTable *fromAnyPtr(any_ptr ptr) { return ptr.get<TxDirectionTable>(); }
inline any_ptr toAnyPtr(const FeedbackRequest *p) {return any_ptr(p);}
template<> inline FeedbackRequest *fromAnyPtr(any_ptr ptr) { return ptr.get<FeedbackRequest>(); }
inline any_ptr toAnyPtr(const FeedbackGeneratorTypeTable *p) {return any_ptr(p);}
template<> inline FeedbackGeneratorTypeTable *fromAnyPtr(any_ptr ptr) { return ptr.get<FeedbackGeneratorTypeTable>(); }
inline any_ptr toAnyPtr(const DeploymentScenarioMapping *p) {return any_ptr(p);}
template<> inline DeploymentScenarioMapping *fromAnyPtr(any_ptr ptr) { return ptr.get<DeploymentScenarioMapping>(); }
inline any_ptr toAnyPtr(const X2InformationElement *p) {return any_ptr(p);}
template<> inline X2InformationElement *fromAnyPtr(any_ptr ptr) { return ptr.get<X2InformationElement>(); }
inline any_ptr toAnyPtr(const LteMacBuffer *p) {return any_ptr(p);}
template<> inline LteMacBuffer *fromAnyPtr(any_ptr ptr) { return ptr.get<LteMacBuffer>(); }
inline any_ptr toAnyPtr(const LteMacQueue *p) {return any_ptr(p);}
template<> inline LteMacQueue *fromAnyPtr(any_ptr ptr) { return ptr.get<LteMacQueue>(); }
inline any_ptr toAnyPtr(const Binder *p) {return any_ptr(p);}
template<> inline Binder *fromAnyPtr(any_ptr ptr) { return ptr.get<Binder>(); }
inline any_ptr toAnyPtr(const LteCellInfo *p) {return any_ptr(p);}
template<> inline LteCellInfo *fromAnyPtr(any_ptr ptr) { return ptr.get<LteCellInfo>(); }
inline any_ptr toAnyPtr(const LteMacEnb *p) {return any_ptr(p);}
template<> inline LteMacEnb *fromAnyPtr(any_ptr ptr) { return ptr.get<LteMacEnb>(); }
inline any_ptr toAnyPtr(const LteMacBase *p) {return any_ptr(p);}
template<> inline LteMacBase *fromAnyPtr(any_ptr ptr) { return ptr.get<LteMacBase>(); }
inline any_ptr toAnyPtr(const LtePhyBase *p) {return any_ptr(p);}
template<> inline LtePhyBase *fromAnyPtr(any_ptr ptr) { return ptr.get<LtePhyBase>(); }
inline any_ptr toAnyPtr(const LteRealisticChannelModel *p) {return any_ptr(p);}
template<> inline LteRealisticChannelModel *fromAnyPtr(any_ptr ptr) { return ptr.get<LteRealisticChannelModel>(); }
inline any_ptr toAnyPtr(const ExtCell *p) {return any_ptr(p);}
template<> inline ExtCell *fromAnyPtr(any_ptr ptr) { return ptr.get<ExtCell>(); }

}  // namespace omnetpp

#endif // ifndef __LTECOMMON_M_H

