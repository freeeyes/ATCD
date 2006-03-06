// -*- C++ -*-
//
// $Id$

// ****  Code generated by the The ACE ORB (TAO) IDL Compiler ****
// TAO and the TAO IDL Compiler have been developed by:
//       Center for Distributed Object Computing
//       Washington University
//       St. Louis, MO
//       USA
//       http://www.cs.wustl.edu/~schmidt/doc-center.html
// and
//       Distributed Object Computing Laboratory
//       University of California at Irvine
//       Irvine, CA
//       USA
//       http://doc.ece.uci.edu/
// and
//       Institute for Software Integrated Systems
//       Vanderbilt University
//       Nashville, TN
//       USA
//       http://www.isis.vanderbilt.edu/
//
// Information about TAO is available at:
//     http://www.cs.wustl.edu/~schmidt/TAO.html

// TAO_IDL - Generated from
// be\be_codegen.cpp:277


#include "Messaging_SyncScope_PolicyC.h"
#include "tao/CDR.h"
#include "ace/OS_NS_string.h"

// TAO_IDL - Generated from
// be\be_visitor_arg_traits.cpp:70

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

// Arg traits specializations.
namespace TAO
{
}


// TAO_IDL - Generated from
// be\be_visitor_interface/interface_cs.cpp:60

// Traits specializations for Messaging::SyncScopePolicy.

Messaging::SyncScopePolicy_ptr
TAO::Objref_Traits<Messaging::SyncScopePolicy>::duplicate (
    Messaging::SyncScopePolicy_ptr p
  )
{
  return Messaging::SyncScopePolicy::_duplicate (p);
}

void
TAO::Objref_Traits<Messaging::SyncScopePolicy>::release (
    Messaging::SyncScopePolicy_ptr p
  )
{
  ::CORBA::release (p);
}

Messaging::SyncScopePolicy_ptr
TAO::Objref_Traits<Messaging::SyncScopePolicy>::nil (void)
{
  return Messaging::SyncScopePolicy::_nil ();
}

::CORBA::Boolean
TAO::Objref_Traits<Messaging::SyncScopePolicy>::marshal (
    Messaging::SyncScopePolicy_ptr p,
    TAO_OutputCDR & cdr
  )
{
  return ::CORBA::Object::marshal (p, cdr);
}

Messaging::SyncScopePolicy::SyncScopePolicy (void)
{}

Messaging::SyncScopePolicy::~SyncScopePolicy (void)
{}

Messaging::SyncScopePolicy_ptr
Messaging::SyncScopePolicy::_narrow (
    ::CORBA::Object_ptr _tao_objref
    ACE_ENV_ARG_DECL_NOT_USED
  )
{
  return SyncScopePolicy::_duplicate (
      dynamic_cast<SyncScopePolicy_ptr> (_tao_objref)
    );
}

Messaging::SyncScopePolicy_ptr
Messaging::SyncScopePolicy::_unchecked_narrow (
    ::CORBA::Object_ptr _tao_objref
    ACE_ENV_ARG_DECL_NOT_USED
  )
{
  return SyncScopePolicy::_duplicate (
      dynamic_cast<SyncScopePolicy_ptr> (_tao_objref)
    );
}

Messaging::SyncScopePolicy_ptr
Messaging::SyncScopePolicy::_duplicate (SyncScopePolicy_ptr obj)
{
  if (! ::CORBA::is_nil (obj))
    {
      obj->_add_ref ();
    }

  return obj;
}

void
Messaging::SyncScopePolicy::_tao_release (SyncScopePolicy_ptr obj)
{
  ::CORBA::release (obj);
}

::CORBA::Boolean
Messaging::SyncScopePolicy::_is_a (
    const char *value
    ACE_ENV_ARG_DECL_NOT_USED
  )
{
  if (
      !ACE_OS::strcmp (
          value,
          "IDL:omg.org/CORBA/Policy:1.0"
        ) ||
      !ACE_OS::strcmp (
          value,
          "IDL:omg.org/Messaging/SyncScopePolicy:1.0"
        ) ||
      !ACE_OS::strcmp (
          value,
          "IDL:omg.org/CORBA/LocalObject:1.0"
        ) ||
      !ACE_OS::strcmp (
          value,
          "IDL:omg.org/CORBA/Object:1.0"
        )
    )
    {
      return true; // success using local knowledge
    }
  else
    {
      return false;
    }
}

const char* Messaging::SyncScopePolicy::_interface_repository_id (void) const
{
  return "IDL:omg.org/Messaging/SyncScopePolicy:1.0";
}

::CORBA::Boolean
Messaging::SyncScopePolicy::marshal (TAO_OutputCDR &)
{
  return false;
}

TAO_END_VERSIONED_NAMESPACE_DECL
