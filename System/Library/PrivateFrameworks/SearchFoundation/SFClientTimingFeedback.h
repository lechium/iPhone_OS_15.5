//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface SFClientTimingFeedback
{
    NSString *_input;	// 24 = 0x18
    NSString *_eventName;	// 32 = 0x20
    unsigned long long _nanosecondInterval;	// 40 = 0x28
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000001b3896
- (void).cxx_destruct;	// IMP=0x00000000001b3865
@property unsigned long long nanosecondInterval; // @synthesize nanosecondInterval=_nanosecondInterval;
@property(copy, nonatomic) NSString *eventName; // @synthesize eventName=_eventName;
@property(copy, nonatomic) NSString *input; // @synthesize input=_input;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000001b375f
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000001b369d
- (id)description;	// IMP=0x00000000001b3662
- (id)initWithEvent:(id)arg1 timeInterval:(unsigned long long)arg2 queryId:(unsigned long long)arg3;	// IMP=0x00000000001b35d7

@end

