// ======================================================================
//	File:		KCAPI_Manager.cpp
//
//	Operation classes for KC manager APIs:
//		- KCGetKeychainManagerVersion
//		- KeychainManagerAvailable
//
//
//	Copyright:	Copyright (c) 2000,2003 Apple Computer, Inc. All Rights Reserved.
//
//	Change History (most recent first):
//
//		 <1>	2/22/00	em		Created.
// ======================================================================

#include "KCAPI_Manager.h"
#include "KCParamUtility.h"

#if TARGET_RT_MAC_MACHO
	#include <OSServices/KeychainCore.h>
	#include <OSServices/KeychainCorePriv.h>
	#include <SecurityHI/KeychainHI.h>
#else
	#include <Keychain.h>
#endif

// ΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡ
// 	₯ COp_KCGetKeychainManagerVersion
// ΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡ
COp_KCGetKeychainManagerVersion::COp_KCGetKeychainManagerVersion()
	:mVersion("Version")
{
	AddResult(mVersion);
}

// ΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡ
// 	₯ Operate
// ΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡ
OSStatus
COp_KCGetKeychainManagerVersion::Operate()
{
	mStatus = ::KCGetKeychainManagerVersion((UInt32*)mVersion);
	return(mStatus);
}

#pragma mark -
// ΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡ
// 	₯ COp_KeychainManagerAvailable
// ΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡ
COp_KeychainManagerAvailable::COp_KeychainManagerAvailable()
	:mAvailable("Available")
{
	AddResult(mAvailable);
}

// ΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡ
// 	₯ Operate
// ΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡ
OSStatus
COp_KeychainManagerAvailable::Operate()
{
	mAvailable = ::KeychainManagerAvailable();
	return(noErr);
}
