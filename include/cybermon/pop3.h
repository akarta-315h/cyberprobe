
////////////////////////////////////////////////////////////////////////////
//
// POP3 processing
//
////////////////////////////////////////////////////////////////////////////

#ifndef CYBERMON_POP3_H
#define CYBERMON_POP3_H

#include <cybermon/context.h>
#include <cybermon/manager.h>
#include <cybermon/pdu.h>


namespace cybermon
{
    
class pop3
{
  public:

    // POP3 processing.
    static void process(manager& mgr, context_ptr c, pdu_iter s, pdu_iter e);
};

}; // End namespace

#endif

