//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface INCancelRideIntent
{
    NSString *_rideIdentifier;	// 8 = 0x8
}

+ (id)intentDescription;	// IMP=0x000000000012b2c0
+ (_Bool)supportsSecureCoding;	// IMP=0x000000000012b2b8
- (void).cxx_destruct;	// IMP=0x000000000012b2a5
@property(readonly, copy, nonatomic) NSString *rideIdentifier; // @synthesize rideIdentifier=_rideIdentifier;
- (id)_dictionaryRepresentation;	// IMP=0x000000000012b1d5
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000012b1ab
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000012b113
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000012b0c3
- (id)initWithRideIdentifier:(id)arg1;	// IMP=0x000000000012b055

@end

