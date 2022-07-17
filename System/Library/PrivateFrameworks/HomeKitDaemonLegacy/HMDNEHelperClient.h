//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HomeKitDaemonLegacy/HMDNEHelperClient-Protocol.h>
#import <HomeKitDaemonLegacy/HMFLogging-Protocol.h>

@class NSArray, NSString;

@interface HMDNEHelperClient : NSObject <HMFLogging, HMDNEHelperClient>
{
    NSArray *_cachedEntries;	// 8 = 0x8
}

+ (id)logCategory;	// IMP=0x000000000009762d
- (void).cxx_destruct;	// IMP=0x0000000000097569
- (void)cacheClearUUIDs;	// IMP=0x0000000000097563
- (id)cacheCopySigningIdentifierForProcessIdentifier:(id)arg1;	// IMP=0x000000000009755b
- (id)cacheCopyAppUUIDForSigningIdentifier:(id)arg1 executablePath:(id)arg2;	// IMP=0x0000000000097553
- (id)_signingIdentifierWithProcessId:(id)arg1;	// IMP=0x0000000000097394
- (void)_addIdentifiers:(id)arg1 signingId:(id)arg2;	// IMP=0x00000000000971b1
- (id)init;	// IMP=0x0000000000097160

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
