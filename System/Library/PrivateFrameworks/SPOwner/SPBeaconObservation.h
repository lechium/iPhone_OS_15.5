//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SPOwner/NSSecureCoding-Protocol.h>

@class NSDate, NSUUID, SPObservationLocation;

@interface SPBeaconObservation : NSObject <NSSecureCoding>
{
    NSUUID *_beaconIdentifier;	// 8 = 0x8
    long long _type;	// 16 = 0x10
    NSDate *_date;	// 24 = 0x18
    SPObservationLocation *_location;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000185b0
- (void).cxx_destruct;	// IMP=0x0000000000018820
@property(readonly, copy, nonatomic) SPObservationLocation *location; // @synthesize location=_location;
@property(readonly, copy, nonatomic) NSDate *date; // @synthesize date=_date;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
@property(readonly, copy, nonatomic) NSUUID *beaconIdentifier; // @synthesize beaconIdentifier=_beaconIdentifier;
- (id)description;	// IMP=0x000000000001876e
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000018651
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000185b8
- (id)initWithBeaconIdentifier:(id)arg1 type:(long long)arg2 date:(id)arg3 location:(id)arg4;	// IMP=0x00000000000183a0
- (id)init;	// IMP=0x00000000000182ff

@end
