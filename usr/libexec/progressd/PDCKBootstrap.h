//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface PDCKBootstrap
{
}

- (void)subscribeToZonesIfNeeded;	// IMP=0x00200000000d2d96
- (void)markAsBootstrapped;	// IMP=0x00100000000d2d63
- (_Bool)isSubscribedTo:(id)arg1;	// IMP=0x00100000000d2cec
- (void)setSubscribed:(_Bool)arg1 toSubscriptionWithID:(id)arg2;	// IMP=0x00100000000d2c74
- (void)createMissingZones:(id)arg1;	// IMP=0x00100000000d2a05
- (void)createRecordZonesIfNeeded;	// IMP=0x00100000000d214a
- (_Bool)writeZoneNamesForUserID:(id)arg1;	// IMP=0x00100000000d1e50
- (void)setupZones;	// IMP=0x00100000000d1ccf
- (void)cleanupStaleZoneInfo;	// IMP=0x00100000000d1a93
- (void)execute;	// IMP=0x00100000000d1a48
@property(readonly, nonatomic) _Bool needsToBootstrap;
- (_Bool)maySyncWithSurveyAnswerZone;	// IMP=0x00100000000d1786
- (_Bool)maySyncWithAssetZone;	// IMP=0x00100000000d177e
- (_Bool)maySyncWithTeacherZone;	// IMP=0x00100000000d1735
- (_Bool)maySyncWithProgressZone;	// IMP=0x00100000000d16b3

@end

