//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <TrackingAvoidance/NSCopying-Protocol.h>
#import <TrackingAvoidance/NSSecureCoding-Protocol.h>

@class NSArray, NSData, NSDate, NSDictionary, TAMetricsDetection, TASPAdvertisement;

@interface TASuspiciousDevice : NSObject <NSCopying, NSSecureCoding>
{
    NSData *_address;	// 8 = 0x8
    NSDictionary *_detectionSummary;	// 16 = 0x10
    NSDate *_date;	// 24 = 0x18
    TASPAdvertisement *_latestAdvertisement;	// 32 = 0x20
    NSArray *_locationHistory;	// 40 = 0x28
    TAMetricsDetection *_detectionMetrics;	// 48 = 0x30
    unsigned long long _detectionType;	// 56 = 0x38
    unsigned long long _immediacyType;	// 64 = 0x40
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000057e0
+ (id)convertTANotificationImmediacyTypeToString:(unsigned long long)arg1;	// IMP=0x00000000000057a6
- (void).cxx_destruct;	// IMP=0x0000000000005c22
@property(readonly, nonatomic) unsigned long long immediacyType; // @synthesize immediacyType=_immediacyType;
@property(readonly, nonatomic) unsigned long long detectionType; // @synthesize detectionType=_detectionType;
@property(readonly, nonatomic) TAMetricsDetection *detectionMetrics; // @synthesize detectionMetrics=_detectionMetrics;
@property(readonly, copy, nonatomic) NSArray *locationHistory; // @synthesize locationHistory=_locationHistory;
@property(readonly, copy, nonatomic) TASPAdvertisement *latestAdvertisement; // @synthesize latestAdvertisement=_latestAdvertisement;
@property(readonly, copy, nonatomic) NSDate *date; // @synthesize date=_date;
@property(readonly, copy, nonatomic) NSDictionary *detectionSummary; // @synthesize detectionSummary=_detectionSummary;
@property(readonly, copy, nonatomic) NSData *address; // @synthesize address=_address;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000005a3f
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000057e8
- (id)description;	// IMP=0x00000000000056ba
- (id)descriptionDictionary;	// IMP=0x0000000000005501
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000004f32
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000004ee2
- (id)initWithLatestAdv:(id)arg1 detectionSummary:(id)arg2 date:(id)arg3 locHistory:(id)arg4 detectionMetrics:(id)arg5 detectionType:(unsigned long long)arg6 immediacyType:(unsigned long long)arg7;	// IMP=0x0000000000004d2d

@end

