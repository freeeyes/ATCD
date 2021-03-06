/**
 * @author Marcel Smit (msmit@remedy.nl)
 *
 * $Id$
 *
 * Wrapper facade for NDDS.
 */

#ifndef DDS4CCM_RELIABLEREADERACTIVITYCHANGEDSTATUS_H
#define DDS4CCM_RELIABLEREADERACTIVITYCHANGEDSTATUS_H

#include "dds4ccm/impl/ndds/convertors/InstanceHandle_t.h"
#include "dds4ccm/impl/dds4ccm_conf.h"

inline void
operator<<= (::DDS::ReliableReaderActivityChangedStatus &ddsstatus, const ::DDS_ReliableReaderActivityChangedStatus & status)
{
  ddsstatus.active_count = status.active_count;
  ddsstatus.active_count_change = status.active_count_change;
  ddsstatus.inactive_count = status.inactive_count;
  ddsstatus.inactive_count_change = status.inactive_count_change;
  ddsstatus.last_instance_handle <<= status.last_instance_handle;
}

inline void
operator<<= (::DDS_ReliableReaderActivityChangedStatus &ddsstatus, const ::DDS::ReliableReaderActivityChangedStatus & status)
{
  ddsstatus.active_count = status.active_count;
  ddsstatus.active_count_change = status.active_count_change;
  ddsstatus.inactive_count = status.inactive_count;
  ddsstatus.inactive_count_change = status.inactive_count_change;
  ddsstatus.last_instance_handle <<= status.last_instance_handle;
}

#endif /* DDS4CCM_RELIABLEREADERACTIVITYCHANGEDSTATUS_H */
