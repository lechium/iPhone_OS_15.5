//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDictionary;

@interface PKPassTileStateMetadataVehicleFunction
{
    NSDictionary *_vehicleFunctionStates;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000041da90
- (void).cxx_destruct;	// IMP=0x000000000041dcaf
@property(copy, nonatomic) NSDictionary *vehicleFunctionStates; // @synthesize vehicleFunctionStates=_vehicleFunctionStates;
- (_Bool)isEqualToUnresolvedMetadata:(id)arg1;	// IMP=0x000000000041dc1d
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000041dba0
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000041da98
- (_Bool)_setupWithDictionary:(id)arg1;	// IMP=0x000000000041d6a9

@end

