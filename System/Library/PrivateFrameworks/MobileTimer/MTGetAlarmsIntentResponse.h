//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Intents/INIntentResponse.h>

@class NSArray;

@interface MTGetAlarmsIntentResponse : INIntentResponse
{
    long long _code;	// 8 = 0x8
}

+ (id)successIntentResponseWithAlarms:(id)arg1;	// IMP=0x00000000000a043d
@property(nonatomic) long long code; // @synthesize code=_code;
- (id)initWithCode:(long long)arg1 userActivity:(id)arg2;	// IMP=0x00000000000a03c3

// Remaining properties
@property(copy, nonatomic) NSArray *alarms; // @dynamic alarms;

@end
