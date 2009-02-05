/*
 * Copyright (c) 2000-2001 Apple Computer, Inc. All Rights Reserved.
 * 
 * The contents of this file constitute Original Code as defined in and are
 * subject to the Apple Public Source License Version 1.2 (the 'License').
 * You may not use this file except in compliance with the License. Please obtain
 * a copy of the License at http://www.apple.com/publicsource and read it before
 * using this file.
 * 
 * This Original Code and all software distributed under the License are
 * distributed on an 'AS IS' basis, WITHOUT WARRANTY OF ANY KIND, EITHER EXPRESS
 * OR IMPLIED, AND APPLE HEREBY DISCLAIMS ALL SUCH WARRANTIES, INCLUDING WITHOUT
 * LIMITATION, ANY WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR
 * PURPOSE, QUIET ENJOYMENT OR NON-INFRINGEMENT. Please see the License for the
 * specific language governing rights and limitations under the License.
 */


//
// Tester - test driver for securityserver client side.
//
#ifndef _H_TESTCLIENT
#define _H_TESTCLIENT

#include "ssclient.h"
#include <Security/cssmerrno.h>
#include <Security/debugging.h>
#include <Security/cssmclient.h>
#include <Security/signclient.h>
#include <Security/cryptoclient.h>
#include <stdarg.h>


//
// Names from the SecurityServerSession class
//
using namespace SecurityServer;
using namespace CssmClient;


//
// Test drivers
//
void integrity();
void signWithRSA();
void desEncryption();
void blobs();
void keyBlobs();
void databases();
void timeouts();
void acls();
void authAcls();
void codeSigning();
void keychainAcls();
void authorizations();
void adhoc();


//
// Global constants
//
extern const CssmData null;					// zero pointer, zero length constant data
extern const AccessCredentials nullCred;	// null credentials

extern CSSM_GUID ssguid;					// a fixed guid
extern CssmSubserviceUid ssuid;				// a subservice-uid using this guid


#endif //_H_TESTCLIENT
