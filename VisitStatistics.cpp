#include <iostream>
#include <fstream>
#include "visitStat.pb.h"
using namespace::std;
void fillTheVisit(auth::AuthUser* user)
{
    cout<< "Enter name of person: ";
    getline(cin, *user->mutable_name());
    cout<<"Enter browser";
    getline(cin, *user->mutable_browser());
    int i = 0;
    while(true) 
    {
        cout<<"Enter ip (or blank to finish): ";
        string ipes;
        getline(cin, ipes);
        if(ipes.empty())
        {
            break;
        }
    
    user->add_ip(ipes);
    cout<<"Which system? ";
    string sys;
    getline(cin, sys);
    if(sys == "linux") 
    {
        user->set_system(auth::AuthUser::LINUX);
    } 
    else if(sys == "macos")
    {
        user->set_system(auth::AuthUser::MACOS);
    }
    else if(sys == "windows")
    {
        user->set_system(auth::AuthUser::WINDOWS);
    }
    else
    {
        cout<<"Unknown system. Using default." << endl;
    }
    i++;
  }
}
// Main function:  Reads the entire auth list from a file,
//   adds one user based on user input, then writes it back out to the same
//   file.

int main(int argc, char* argv[]) {
  GOOGLE_PROTOBUF_VERIFY_VERSION;
    
//  if (argc != 2) {
//    cerr << "Usage:  " << argv[0] << " AUTH_FILE" << endl;
//    return -1;
//  }

  auth::AuthCheck auth_check;

  {
    // Read the existing auth list.
    fstream input(argv[1], ios::in | ios::binary);
    if (!input) {
      cout << argv[1] << ": File not found.  Creating a new file." << endl;
    } else if (!auth_check.ParseFromIstream(&input)) {
      cerr << "Failed to parse auth list." << endl;
      return -1;
    }
  }

  // Add an address.
  fillTheVisit(auth_check.add_users());

  {
    // Write the new auth list back to disk.
    fstream output(argv[1], ios::out | ios::trunc | ios::binary);
    if (!auth_check.SerializeToOstream(&output)) {
      cerr << "Failed to write auth list." << endl;
      return -1;
    }
  }

  // Optional:  Delete all global objects allocated by libprotobuf.
  google::protobuf::ShutdownProtobufLibrary();

  return 0;
}

