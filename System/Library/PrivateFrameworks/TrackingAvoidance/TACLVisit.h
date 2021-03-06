//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <TrackingAvoidance/OSLogCoding-Protocol.h>
#import <TrackingAvoidance/TAEventProtocol-Protocol.h>

@class NSDate, NSDateInterval, NSString;

@interface TACLVisit : NSObject <OSLogCoding, TAEventProtocol>
{
    NSDate *_arrivalDate;	// 8 = 0x8
    NSDate *_departureDate;	// 16 = 0x10
    double _horizontalAccuracy;	// 24 = 0x18
    NSDate *_detectionDate;	// 32 = 0x20
    unsigned long long _confidence;	// 40 = 0x28
    struct CLLocationCoordinate2D _coordinate;	// 48 = 0x30
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000002b642
- (void).cxx_destruct;	// IMP=0x000000000002c8b2
@property(readonly, nonatomic) unsigned long long confidence; // @synthesize confidence=_confidence;
@property(readonly, copy, nonatomic) NSDate *detectionDate; // @synthesize detectionDate=_detectionDate;
@property(readonly, nonatomic) double horizontalAccuracy; // @synthesize horizontalAccuracy=_horizontalAccuracy;
@property(readonly, nonatomic) struct CLLocationCoordinate2D coordinate; // @synthesize coordinate=_coordinate;
@property(readonly, copy, nonatomic) NSDate *departureDate; // @synthesize departureDate=_departureDate;
@property(readonly, copy, nonatomic) NSDate *arrivalDate; // @synthesize arrivalDate=_arrivalDate;
- (id)getDate;	// IMP=0x000000000002c861
@property(readonly, nonatomic) NSDateInterval *dateInterval;
@property(readonly, nonatomic) _Bool isTemporalOrderSensical;
@property(readonly, nonatomic) _Bool hasDepartureDate;
@property(readonly, nonatomic) _Bool hasArrivalDate;
@property(readonly, copy) NSString *description;
- (id)descriptionDictionary;	// IMP=0x000000000002c06e
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000002bcae
- (id)initWithCoordinate:(struct CLLocationCoordinate2D)arg1 horizontalAccuracy:(double)arg2 arrivalDate:(id)arg3 departureDate:(id)arg4 detectionDate:(id)arg5 confidence:(unsigned long long)arg6;	// IMP=0x000000000002bacc
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000002b9ca
- (void)encodeWithOSLogCoder:(id)arg1 options:(unsigned long long)arg2 maxLength:(unsigned long long)arg3;	// IMP=0x000000000002b91e
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000002b7b9
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000002b64a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

