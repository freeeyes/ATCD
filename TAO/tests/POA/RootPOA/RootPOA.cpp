#include "ace/streams.h"
#include "tao/corba.h"

int 
main (int argc, char **argv)
{
  CORBA::Environment env;

  CORBA::ORB_ptr orb = CORBA::ORB_init (argc, argv, 0, env);
  if (env.exception () != 0)
    {
      env.print_exception ("CORBA::ORB_init");
      return -1;
    }

  CORBA::Object_ptr obj = orb->resolve_initial_references ("RootPOA");

  PortableServer::POA_ptr rootPOA = PortableServer::POA::_narrow (obj, env);
  if (env.exception () != 0)
    {
      env.print_exception ("PortableServer::POA::_narrow");
      return -1;
    }
  
  CORBA::String_var poa_name = rootPOA->the_name (env);
  if (env.exception () != 0)
    {
      env.print_exception ("PortableServer::POA::_narrow");
      return -1;
    }
  
  cout << poa_name << endl;
  return 0;
}
