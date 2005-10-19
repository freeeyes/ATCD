// $Id$
#ifndef FOO_I_H
#define FOO_I_H

#include "FooS.h"
#include "CallbackC.h"
#include "ace/SString.h"
#include "ace/CORBA_macros.h"
#include "tao/Environment.h"

class FooServantList;

class Foo_i : public virtual POA_Foo,
              public virtual PortableServer::ServantBase
{
  public:

    Foo_i(const char* servant_name);
    virtual ~Foo_i();

    virtual void op1(ACE_ENV_SINGLE_ARG_DECL_WITH_DEFAULTS) 
      ACE_THROW_SPEC((CORBA::SystemException));

    virtual void op2(CORBA::Long value ACE_ENV_ARG_DECL_WITH_DEFAULTS)  
      ACE_THROW_SPEC((CORBA::SystemException));

    virtual CORBA::Long op3(ACE_ENV_SINGLE_ARG_DECL_WITH_DEFAULTS)
      ACE_THROW_SPEC((CORBA::SystemException));

    virtual void op4(CORBA::Long value ACE_ENV_ARG_DECL_WITH_DEFAULTS)  
      ACE_THROW_SPEC((CORBA::SystemException));

    virtual void op5(ACE_ENV_SINGLE_ARG_DECL_WITH_DEFAULTS)   
      ACE_THROW_SPEC((CORBA::SystemException, FooException));

    virtual CORBA::Boolean op6 (
        const char * user_name,
        char *& message
        ACE_ENV_ARG_DECL_WITH_DEFAULTS
      )
      ACE_THROW_SPEC ((
        CORBA::SystemException
      ));

    virtual void test_unbounded_string_arg (
        const char * message
        ACE_ENV_ARG_DECL_WITH_DEFAULTS
      )
      ACE_THROW_SPEC ((
        CORBA::SystemException
      ));
  
    virtual void test_bounded_string_arg (
        const char * message
        ACE_ENV_ARG_DECL_WITH_DEFAULTS
      )
      ACE_THROW_SPEC ((
        CORBA::SystemException
      ));
  
    virtual void test_fixed_array_arg (
        const ::Fixed_Array message
        ACE_ENV_ARG_DECL_WITH_DEFAULTS
      )
      ACE_THROW_SPEC ((
        CORBA::SystemException
      ));
  
    virtual void test_var_array_arg (
        const ::Var_Array messages
        ACE_ENV_ARG_DECL_WITH_DEFAULTS
      )
      ACE_THROW_SPEC ((
        CORBA::SystemException
      ));

    virtual void test_bounded_var_size_arg (
        const ::Bounded_Var_Size & message
        ACE_ENV_ARG_DECL_WITH_DEFAULTS
      )
      ACE_THROW_SPEC ((
        CORBA::SystemException
      ));
    
    virtual void test_unbounded_var_size_arg (
        const ::Unbounded_Var_Size & message
        ACE_ENV_ARG_DECL_WITH_DEFAULTS
      )
      ACE_THROW_SPEC ((
        CORBA::SystemException
      ));

    virtual void test_fixed_size_arg (
        const ::TimeOfDay & t
        ACE_ENV_ARG_DECL_WITH_DEFAULTS
      )
      ACE_THROW_SPEC ((
        CORBA::SystemException
      ));

    virtual void test_fixed_size_arg_two_way (
        const ::TimeOfDay & t
        ACE_ENV_ARG_DECL_WITH_DEFAULTS
      )
      ACE_THROW_SPEC ((
        CORBA::SystemException
      ));

    virtual void test_special_basic_arg (
        ::CORBA::Boolean value
        ACE_ENV_ARG_DECL_WITH_DEFAULTS
      )
      ACE_THROW_SPEC ((
        CORBA::SystemException
      ));

    virtual void test_objref_arg (
        ::Callback_ptr cb
        ACE_ENV_ARG_DECL_WITH_DEFAULTS
      )
      ACE_THROW_SPEC ((
        CORBA::SystemException
      ));

    virtual void callback_object (
        ::Callback_ptr cb
        ACE_ENV_ARG_DECL_WITH_DEFAULTS
      )
      ACE_THROW_SPEC ((
        CORBA::SystemException
      ));
    
    virtual void test_callback (
      ACE_ENV_SINGLE_ARG_DECL_WITH_DEFAULTS
      )
      ACE_THROW_SPEC ((
        CORBA::SystemException
      ));
  
    virtual void done(ACE_ENV_SINGLE_ARG_DECL_WITH_DEFAULTS)   
      ACE_THROW_SPEC((CORBA::SystemException));


  private:

    CORBA::Long value_;

    unsigned count_op1_;
    unsigned count_op2_;
    unsigned count_op3_;
    unsigned count_op4_;
    unsigned count_op5_;

    ACE_CString     servant_name_;
    Callback_var    callback_;
};

#endif
