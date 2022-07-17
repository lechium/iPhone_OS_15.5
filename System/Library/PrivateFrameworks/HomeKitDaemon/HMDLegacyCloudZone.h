//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitBackingStore/HMBCloudZone.h>

@class NSSet;

@interface HMDLegacyCloudZone : HMBCloudZone
{
    NSSet *_participants;	// 8 = 0x8
    long long _keyStatus;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000050dfcc
@property(readonly, nonatomic) long long keyStatus; // @synthesize keyStatus=_keyStatus;
@property(readonly, nonatomic) NSSet *participants; // @synthesize participants=_participants;
- (id)encodeRecordFromModel:(id)arg1 existingRecord:(id)arg2 encodingContext:(id)arg3 error:(id *)arg4;	// IMP=0x000000000050de30
- (id)decodeModelFromRecord:(id)arg1 externalRecordFields:(id)arg2 source:(unsigned long long)arg3 error:(id *)arg4;	// IMP=0x000000000050dae4
- (id)waitForPendingRebuild;	// IMP=0x000000000050dacb
- (void)startUpWithLocalZone:(id)arg1;	// IMP=0x000000000050da9c
- (id)initWithCloudDatabase:(id)arg1 configuration:(id)arg2 state:(id)arg3;	// IMP=0x000000000050da4e

@end
