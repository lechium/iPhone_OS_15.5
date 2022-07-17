//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <TrackingAvoidance/OSLogCoding-Protocol.h>
#import <TrackingAvoidance/TAEventProtocol-Protocol.h>

@class NSDate, NSDateInterval, NSDictionary, NSString;

@interface TAPeopleDensityResult : NSObject <OSLogCoding, TAEventProtocol>
{
    long long _peopleDensityState;	// 8 = 0x8
    double _confidence;	// 16 = 0x10
    NSDateInterval *_observationInterval;	// 24 = 0x18
    NSDictionary *_additionalInfo;	// 32 = 0x20
    NSDate *_date;	// 40 = 0x28
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000032274
- (void).cxx_destruct;	// IMP=0x00000000000325a1
@property(readonly, copy, nonatomic) NSDate *date; // @synthesize date=_date;
@property(readonly, copy, nonatomic) NSDictionary *additionalInfo; // @synthesize additionalInfo=_additionalInfo;
@property(readonly, copy, nonatomic) NSDateInterval *observationInterval; // @synthesize observationInterval=_observationInterval;
@property(readonly, nonatomic) double confidence; // @synthesize confidence=_confidence;
@property(readonly, nonatomic) long long peopleDensityState; // @synthesize peopleDensityState=_peopleDensityState;
- (id)getDate;	// IMP=0x0000000000032560
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000032516
- (void)encodeWithOSLogCoder:(id)arg1 options:(unsigned long long)arg2 maxLength:(unsigned long long)arg3;	// IMP=0x000000000003246a
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000323b4
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000003227c
@property(readonly, copy) NSString *description;
- (id)descriptionDictionary;	// IMP=0x0000000000031f3e
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000031c04
@property(readonly) unsigned long long hash;
- (id)initWithState:(long long)arg1 confidence:(double)arg2 observationInterval:(id)arg3 additionalInfo:(id)arg4 date:(id)arg5;	// IMP=0x000000000003198e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
