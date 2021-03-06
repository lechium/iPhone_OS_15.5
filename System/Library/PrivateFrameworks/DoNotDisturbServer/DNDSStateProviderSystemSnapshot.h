//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <DoNotDisturbServer/NSCopying-Protocol.h>
#import <DoNotDisturbServer/NSMutableCopying-Protocol.h>

@class NSArray, NSDate, NSDictionary;

@interface DNDSStateProviderSystemSnapshot : NSObject <NSCopying, NSMutableCopying>
{
    NSArray *_assertions;	// 8 = 0x8
    NSArray *_activeAssertionUUIDs;	// 16 = 0x10
    NSDictionary *_activeDateIntervalByAssertionUUID;	// 24 = 0x18
    unsigned long long _interruptionBehaviorSetting;	// 32 = 0x20
    unsigned long long _lostModeState;	// 40 = 0x28
    NSDate *_lastUpdate;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0000000000079e9d
@property(readonly, copy, nonatomic) NSDate *lastUpdate; // @synthesize lastUpdate=_lastUpdate;
@property(readonly, nonatomic) unsigned long long lostModeState; // @synthesize lostModeState=_lostModeState;
@property(readonly, nonatomic) unsigned long long interruptionBehaviorSetting; // @synthesize interruptionBehaviorSetting=_interruptionBehaviorSetting;
@property(readonly, copy, nonatomic) NSDictionary *activeDateIntervalByAssertionUUID; // @synthesize activeDateIntervalByAssertionUUID=_activeDateIntervalByAssertionUUID;
@property(readonly, copy, nonatomic) NSArray *activeAssertionUUIDs; // @synthesize activeAssertionUUIDs=_activeAssertionUUIDs;
@property(readonly, copy, nonatomic) NSArray *assertions; // @synthesize assertions=_assertions;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000079e33
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000079e28
- (id)description;	// IMP=0x0000000000079cc8
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000798bf
- (unsigned long long)hash;	// IMP=0x00000000000797a6
- (id)_initWithAssertions:(id)arg1 activeAssertionUUIDs:(id)arg2 activeDateIntervalByAssertionUUID:(id)arg3 interruptionBehaviorSetting:(unsigned long long)arg4 lostModeState:(unsigned long long)arg5 lastUpdate:(id)arg6;	// IMP=0x0000000000079633
- (id)_initWithSnapshot:(id)arg1;	// IMP=0x000000000007951b
- (id)init;	// IMP=0x0000000000079507

@end

