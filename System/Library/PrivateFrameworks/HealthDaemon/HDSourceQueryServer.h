//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HealthDaemon/HDDataObserver-Protocol.h>

@class NSMutableSet, NSString;

@interface HDSourceQueryServer <HDDataObserver>
{
    _Bool _deliversUpdates;	// 8 = 0x8
    NSMutableSet *_sources;	// 16 = 0x10
}

+ (id)requiredEntitlements;	// IMP=0x000000000011f0d1
+ (Class)queryClass;	// IMP=0x000000000011f0c0
- (void).cxx_destruct;	// IMP=0x00000000001200be
- (void)samplesAdded:(id)arg1 anchor:(id)arg2;	// IMP=0x000000000011f943
- (double)_queue_queryLogThreshold;	// IMP=0x000000000011f931
- (void)_queue_start;	// IMP=0x000000000011f0de
- (_Bool)_shouldListenForUpdates;	// IMP=0x000000000011f0b0
- (id)initWithUUID:(id)arg1 configuration:(id)arg2 client:(id)arg3 delegate:(id)arg4;	// IMP=0x000000000011f020

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

