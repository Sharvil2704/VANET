//
// Generated file, do not edit! Created by opp_msgtool 6.0 from plexe/messages/MergePlatoonRequest.msg.
//

#ifndef __MERGEPLATOONREQUEST_M_H
#define __MERGEPLATOONREQUEST_M_H

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
#ifndef PLEXE_API
#  if defined(PLEXE_EXPORT)
#    define PLEXE_API  OPP_DLLEXPORT
#  elif defined(PLEXE_IMPORT)
#    define PLEXE_API  OPP_DLLIMPORT
#  else
#    define PLEXE_API
#  endif
#endif

class MergePlatoonRequest;
#include "JoinPlatoonRequest_m.h" // import JoinPlatoonRequest

/**
 * Class generated from <tt>plexe/messages/MergePlatoonRequest.msg:26</tt> by opp_msgtool.
 * <pre>
 * // Request to merge two platoons
 * // Is sent from a leader to the leader of the Platoon to be merged with
 * packet MergePlatoonRequest extends JoinPlatoonRequest
 * {
 *     // list of members following the leader of the merging platoon
 *     int members[];
 * }
 * </pre>
 */
class PLEXE_API MergePlatoonRequest : public ::JoinPlatoonRequest
{
  protected:
    int *members = nullptr;
    size_t members_arraysize = 0;

  private:
    void copy(const MergePlatoonRequest& other);

  protected:
    bool operator==(const MergePlatoonRequest&) = delete;

  public:
    MergePlatoonRequest(const char *name=nullptr, short kind=0);
    MergePlatoonRequest(const MergePlatoonRequest& other);
    virtual ~MergePlatoonRequest();
    MergePlatoonRequest& operator=(const MergePlatoonRequest& other);
    virtual MergePlatoonRequest *dup() const override {return new MergePlatoonRequest(*this);}
    virtual void parsimPack(omnetpp::cCommBuffer *b) const override;
    virtual void parsimUnpack(omnetpp::cCommBuffer *b) override;

    virtual void setMembersArraySize(size_t size);
    virtual size_t getMembersArraySize() const;
    virtual int getMembers(size_t k) const;
    virtual void setMembers(size_t k, int members);
    virtual void insertMembers(size_t k, int members);
    [[deprecated]] void insertMembers(int members) {appendMembers(members);}
    virtual void appendMembers(int members);
    virtual void eraseMembers(size_t k);
};

inline void doParsimPacking(omnetpp::cCommBuffer *b, const MergePlatoonRequest& obj) {obj.parsimPack(b);}
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, MergePlatoonRequest& obj) {obj.parsimUnpack(b);}


namespace omnetpp {

template<> inline MergePlatoonRequest *fromAnyPtr(any_ptr ptr) { return check_and_cast<MergePlatoonRequest*>(ptr.get<cObject>()); }

}  // namespace omnetpp

#endif // ifndef __MERGEPLATOONREQUEST_M_H

