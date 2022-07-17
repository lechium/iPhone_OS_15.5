//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreTelephony/NSSecureCoding-Protocol.h>

@class CTSweetgumUsagePlanItemData, CTSweetgumUsagePlanItemMessages, CTSweetgumUsagePlanItemVoice, NSDate, NSString;

@interface CTSweetgumUsagePlanMetrics : NSObject <NSSecureCoding>
{
    _Bool _currentUsedPlan;	// 8 = 0x8
    _Bool _throttled;	// 9 = 0x9
    NSString *_planLabel;	// 16 = 0x10
    long long _planCategory;	// 24 = 0x18
    CTSweetgumUsagePlanItemData *_dataUsage;	// 32 = 0x20
    CTSweetgumUsagePlanItemMessages *_messages;	// 40 = 0x28
    CTSweetgumUsagePlanItemVoice *_voice;	// 48 = 0x30
    NSString *_remainingBalance;	// 56 = 0x38
    NSDate *_lastUpdatedAt;	// 64 = 0x40
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000014cdf
- (void).cxx_destruct;	// IMP=0x0000000000014dc1
@property(retain, nonatomic) NSDate *lastUpdatedAt; // @synthesize lastUpdatedAt=_lastUpdatedAt;
@property(nonatomic) _Bool throttled; // @synthesize throttled=_throttled;
@property(retain, nonatomic) NSString *remainingBalance; // @synthesize remainingBalance=_remainingBalance;
@property(retain, nonatomic) CTSweetgumUsagePlanItemVoice *voice; // @synthesize voice=_voice;
@property(retain, nonatomic) CTSweetgumUsagePlanItemMessages *messages; // @synthesize messages=_messages;
@property(retain, nonatomic) CTSweetgumUsagePlanItemData *dataUsage; // @synthesize dataUsage=_dataUsage;
@property(nonatomic) _Bool currentUsedPlan; // @synthesize currentUsedPlan=_currentUsedPlan;
@property(nonatomic) long long planCategory; // @synthesize planCategory=_planCategory;
@property(retain, nonatomic) NSString *planLabel; // @synthesize planLabel=_planLabel;
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000014af3
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000149ed
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000143f2
- (id)description;	// IMP=0x00000000000141b8
- (id)init;	// IMP=0x000000000001411c

@end
