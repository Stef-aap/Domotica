
#ifndef RFL_Protocol_Finish_h
#define RFL_Protocol_Finish_h

//#include <Arduino.h>

#include "Plugins/NEW_Plugin_254.h"

// ***********************************************************************************
// ***********************************************************************************
class _RFL_Protocol_Finish : public _RFL_Protocol_BaseClass {
	
  public:

    // ***********************************************************************
    // Creator, 
    // ***********************************************************************
    _RFL_Protocol_Finish () {
      Name = "Finish" ;
    }
 

    
// void setup () {
//  _RFL_Protocol_BaseClass::setup() ;
// Serial.println ( ":::::::::::::::::::::::::" ); 
//    }

    
    
    // ***********************************************************************
    // ***********************************************************************
    bool Decode (  ) {
	  return NEW_Plugin_254 ( 0, 0 ) ;
    }

//  private :
};
#endif
