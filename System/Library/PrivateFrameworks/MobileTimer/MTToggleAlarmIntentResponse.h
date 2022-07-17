//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Intents/INIntentResponse.h>

@class MTIntentAlarm;

@interface MTToggleAlarmIntentResponse : INIntentResponse
{
    long long _code;	// 8 = 0x8
}

+ (id)failureRequiringAppLaunchIntentResponseWithState:(long long)arg1;	// IMP=0x00000000000a0348
+ (id)successIntentResponseWithState:(long long)arg1 alarm:(id)arg2;	// IMP=0x00000000000a02c8
+ (id)inProgressIntentResponseWithState:(long long)arg1;	// IMP=0x00000000000a026f
+ (id)continueInAppIntentResponseWithState:(long long)arg1;	// IMP=0x00000000000a0216
+ (id)readyIntentResponseWithState:(long long)arg1;	// IMP=0x00000000000a01bd
+ (id)unspecifiedIntentResponseWithState:(long long)arg1;	// IMP=0x00000000000a0167
@property(nonatomic) long long code; // @synthesize code=_code;
- (id)initWithCode:(long long)arg1 userActivity:(id)arg2;	// IMP=0x00000000000a00ed

// Remaining properties
@property(copy, nonatomic) MTIntentAlarm *alarm; // @dynamic alarm;
@property(nonatomic) long long state; // @dynamic state;

@end
