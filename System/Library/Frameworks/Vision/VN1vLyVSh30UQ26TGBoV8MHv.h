//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSDictionary;

@interface VN1vLyVSh30UQ26TGBoV8MHv
{
    NSDictionary *_adjustments;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000018ff39
- (void).cxx_destruct;	// IMP=0x000000000018ff26
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000018fea9
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000018fd78
- (id)vn_cloneObject;	// IMP=0x000000000018fd02
- (id)description;	// IMP=0x000000000018fc2a
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000018fbba
- (unsigned long long)hash;	// IMP=0x000000000018fb60
- (id)adjustmentValuesForKey:(id)arg1;	// IMP=0x000000000018fb43
- (_Bool)hasAdjustmentForKey:(id)arg1;	// IMP=0x000000000018fb05
@property(readonly, copy) NSArray *adjustmentKeys;
- (id)initWithOriginatingRequestSpecifier:(id)arg1 adjustments:(id)arg2;	// IMP=0x000000000018fa50

@end
