//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HealthDaemon/HKSourceStoreServer-Protocol.h>

@class NSString;

@interface HDSourceStoreServer <HKSourceStoreServer>
{
}

+ (id)requiredEntitlements;	// IMP=0x0000000000198ace
+ (id)taskIdentifier;	// IMP=0x0000000000198ab5
- (id)remoteInterface;	// IMP=0x0000000000198aab
- (id)exportedInterface;	// IMP=0x0000000000198aa1
- (void)remote_updateOrderedSources:(id)arg1 forObjectType:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000001989b3
- (void)remote_fetchOrderedSourcesForObjectType:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000001988c5
- (void)remote_deleteSourceWithBundleIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000019850b
- (void)remote_fetchHasSampleWithBundleIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000001982f8
- (void)remote_fetchAllSourcesWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000001980cc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
