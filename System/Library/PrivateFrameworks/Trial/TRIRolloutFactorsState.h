//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class TRIRolloutDeployment;

@interface TRIRolloutFactorsState
{
    TRIRolloutDeployment *_deployment;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000001c2ee
- (void).cxx_destruct;	// IMP=0x000000000001c4ba
@property(readonly, nonatomic) TRIRolloutDeployment *deployment; // @synthesize deployment=_deployment;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000001c2f6
- (id)description;	// IMP=0x000000000001c231
- (unsigned long long)hash;	// IMP=0x000000000001c214
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000001c1a0
- (_Bool)_isEqualToState:(id)arg1;	// IMP=0x000000000001c142
- (id)persisted;	// IMP=0x000000000001c059
- (id)rolloutIdentifiers;	// IMP=0x000000000001bfd0
- (id)initWithDeployment:(id)arg1;	// IMP=0x000000000001be5f

@end
