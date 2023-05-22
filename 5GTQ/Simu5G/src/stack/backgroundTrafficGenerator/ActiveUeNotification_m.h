//
// Generated file, do not edit! Created by opp_msgtool 6.0 from stack/backgroundTrafficGenerator/ActiveUeNotification.msg.
//

#ifndef __ACTIVEUENOTIFICATION_M_H
#define __ACTIVEUENOTIFICATION_M_H

#if defined(__clang__)
#  pragma clang diagnostic ignored "-Wreserved-id-macro"
#endif
#include <omnetpp.h>

// opp_msgtool version check
#define MSGC_VERSION 0x0600
#if (MSGC_VERSION!=OMNETPP_VERSION)
#    error Version mismatch! Probably this file was generated by an earlier version of opp_msgtool: 'make clean' should help.
#endif

class ActiveUeNotification;
/**
 * Class generated from <tt>stack/backgroundTrafficGenerator/ActiveUeNotification.msg:13</tt> by opp_msgtool.
 * <pre>
 * message ActiveUeNotification
 * {
 *     // index of the bg UE that has active backlog in the UL 
 *     int index;
 * }
 * </pre>
 */
class ActiveUeNotification : public ::omnetpp::cMessage
{
  protected:
    int index = 0;

  private:
    void copy(const ActiveUeNotification& other);

  protected:
    bool operator==(const ActiveUeNotification&) = delete;

  public:
    ActiveUeNotification(const char *name=nullptr, short kind=0);
    ActiveUeNotification(const ActiveUeNotification& other);
    virtual ~ActiveUeNotification();
    ActiveUeNotification& operator=(const ActiveUeNotification& other);
    virtual ActiveUeNotification *dup() const override {return new ActiveUeNotification(*this);}
    virtual void parsimPack(omnetpp::cCommBuffer *b) const override;
    virtual void parsimUnpack(omnetpp::cCommBuffer *b) override;

    virtual int getIndex() const;
    virtual void setIndex(int index);
};

inline void doParsimPacking(omnetpp::cCommBuffer *b, const ActiveUeNotification& obj) {obj.parsimPack(b);}
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, ActiveUeNotification& obj) {obj.parsimUnpack(b);}


namespace omnetpp {

template<> inline ActiveUeNotification *fromAnyPtr(any_ptr ptr) { return check_and_cast<ActiveUeNotification*>(ptr.get<cObject>()); }

}  // namespace omnetpp

#endif // ifndef __ACTIVEUENOTIFICATION_M_H
