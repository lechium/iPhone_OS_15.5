//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HealthDaemon/HKAuthorizationStoreWriteServer-Protocol.h>

@class NSString;

@interface HDAuthorizationStoreWriteServer <HKAuthorizationStoreWriteServer>
{
}

+ (id)requiredEntitlements;	// IMP=0x000000000042ce72
+ (id)taskIdentifier;	// IMP=0x000000000042ce59
+ (_Bool)validateClient:(id)arg1 error:(id *)arg2;	// IMP=0x000000000042c69c
- (id)remoteInterface;	// IMP=0x000000000042ce4f
- (id)exportedInterface;	// IMP=0x000000000042ce45
- (void)remote_setObjectAuthorizationStatuses:(id)arg1 forBundleIdentifier:(id)arg2 sessionIdentifier:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000000042c9c2
- (void)remote_setRequestedAuthorizationForBundleIdentifier:(id)arg1 shareTypes:(id)arg2 readTypes:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000000042c858
- (void)remote_setAuthorizationStatuses:(id)arg1 authorizationModes:(id)arg2 forBundleIdentifier:(id)arg3 options:(unsigned long long)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x000000000042c769

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

