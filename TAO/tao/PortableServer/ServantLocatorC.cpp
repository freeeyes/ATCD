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


#include "ServantLocatorC.h"
#include "tao/CDR.h"
#include "tao/ORB_Core.h"
#include "ace/OS_NS_string.h"

// TAO_IDL - Generated from
// be\be_visitor_arg_traits.cpp:70

#if (TAO_HAS_MINIMUM_POA == 0)

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

// Arg traits specializations.
namespace TAO
{
}


// TAO_IDL - Generated from
// be\be_visitor_interface/interface_cs.cpp:60

// Traits specializations for PortableServer::ServantLocator.

PortableServer::ServantLocator_ptr
TAO::Objref_Traits<PortableServer::ServantLocator>::duplicate (
    PortableServer::ServantLocator_ptr p
  )
{
  return PortableServer::ServantLocator::_duplicate (p);
}

void
TAO::Objref_Traits<PortableServer::ServantLocator>::release (
    PortableServer::ServantLocator_ptr p
  )
{
  ::CORBA::release (p);
}

PortableServer::ServantLocator_ptr
TAO::Objref_Traits<PortableServer::ServantLocator>::nil (void)
{
  return PortableServer::ServantLocator::_nil ();
}

CORBA::Boolean
TAO::Objref_Traits<PortableServer::ServantLocator>::marshal (
    PortableServer::ServantLocator_ptr p,
    TAO_OutputCDR & cdr
  )
{
  return CORBA::Object::marshal (p, cdr);
}

PortableServer::ServantLocator::ServantLocator (void)
{}

PortableServer::ServantLocator::~ServantLocator (void)
{}

PortableServer::ServantLocator_ptr
PortableServer::ServantLocator::_narrow (
    CORBA::Object_ptr _tao_objref
    ACE_ENV_ARG_DECL_NOT_USED
  )
{
  return ServantLocator::_duplicate (
      dynamic_cast<ServantLocator_ptr> (_tao_objref)
    );
}

PortableServer::ServantLocator_ptr
PortableServer::ServantLocator::_unchecked_narrow (
    CORBA::Object_ptr _tao_objref
    ACE_ENV_ARG_DECL_NOT_USED
  )
{
  return ServantLocator::_duplicate (
      dynamic_cast<ServantLocator_ptr> (_tao_objref)
    );
}

PortableServer::ServantLocator_ptr
PortableServer::ServantLocator::_duplicate (ServantLocator_ptr obj)
{
  if (! ::CORBA::is_nil (obj))
    {
      obj->_add_ref ();
    }

  return obj;
}

void
PortableServer::ServantLocator::_tao_release (ServantLocator_ptr obj)
{
  ::CORBA::release (obj);
}

CORBA::Boolean
PortableServer::ServantLocator::_is_a (
    const char *value
    ACE_ENV_ARG_DECL_NOT_USED
  )
{
  if (
      !ACE_OS::strcmp (
          value,
          "IDL:omg.org/PortableServer/ServantManager:1.0"
        ) ||
      !ACE_OS::strcmp (
          value,
          "IDL:omg.org/PortableServer/ServantLocator:2.3"
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

const char* PortableServer::ServantLocator::_interface_repository_id (void) const
{
  return "IDL:omg.org/PortableServer/ServantLocator:2.3";
}

CORBA::Boolean
PortableServer::ServantLocator::marshal (TAO_OutputCDR &)
{
  return false;
}

TAO_END_VERSIONED_NAMESPACE_DECL

#endif /* TAO_HAS_MINIMUM_CORBA == 0 */
