//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSNumber, NSString;

@interface TPSAnalyticsEventFrequencyControl
{
    NSString *_displayType;	// 8 = 0x8
    NSNumber *_displayCount;	// 16 = 0x10
    NSNumber *_notDisplayedDueToFrequencyControlCount;	// 24 = 0x18
    NSString *_experimentID;	// 32 = 0x20
    NSString *_experimentCampID;	// 40 = 0x28
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000320dc
- (void).cxx_destruct;	// IMP=0x0000000000032712
@property(retain, nonatomic) NSString *experimentCampID; // @synthesize experimentCampID=_experimentCampID;
@property(retain, nonatomic) NSString *experimentID; // @synthesize experimentID=_experimentID;
@property(retain, nonatomic) NSNumber *notDisplayedDueToFrequencyControlCount; // @synthesize notDisplayedDueToFrequencyControlCount=_notDisplayedDueToFrequencyControlCount;
@property(retain, nonatomic) NSNumber *displayCount; // @synthesize displayCount=_displayCount;
@property(retain, nonatomic) NSString *displayType; // @synthesize displayType=_displayType;
- (id)mutableAnalyticsEventRepresentation;	// IMP=0x0000000000032581
- (id)eventName;	// IMP=0x000000000003254e
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000032455
- (void)setDataProvider:(id)arg1;	// IMP=0x000000000003234f
- (id)initWithDisplayType:(id)arg1 displayCount:(id)arg2 notDisplayedDueToFrequencyControlCount:(id)arg3;	// IMP=0x0000000000032287
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000320e4

@end
