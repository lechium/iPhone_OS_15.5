//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSNumber;

@interface HMDUserCloudShareParticipantAdoptionDailyEvent
{
    NSNumber *_configureState;	// 8 = 0x8
    NSNumber *_hasOwnerCloudShareID;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000088f5ac
@property(readonly, copy) NSNumber *hasOwnerCloudShareID; // @synthesize hasOwnerCloudShareID=_hasOwnerCloudShareID;
@property(readonly, copy) NSNumber *configureState; // @synthesize configureState=_configureState;
- (id)initWithConfigureState:(long long)arg1 hasOwnerCloudShareID:(_Bool)arg2;	// IMP=0x000000000088f4c7
- (id)serializedEvent;	// IMP=0x000000000063fb85
- (id)eventName;	// IMP=0x000000000063fb78

@end

