//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MPModelTVSeasonKind;

@interface MPModelTVShowKind
{
    MPModelTVSeasonKind *_seasonKind;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000002d2ed6
+ (id)kindWithSeasonKind:(id)arg1;	// IMP=0x00000000002d2de3
+ (id)identityKind;	// IMP=0x00000000002d2db1
- (void).cxx_destruct;	// IMP=0x00000000002d2d9e
@property(readonly, copy, nonatomic) MPModelTVSeasonKind *seasonKind; // @synthesize seasonKind=_seasonKind;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000002d2d10
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000002d2c70
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000002d2bf5
- (unsigned long long)hash;	// IMP=0x00000000002d2b9f
- (id)humanDescription;	// IMP=0x00000000002d2b28
- (shared_ptr_cf7b8a22)representedSearchScopePredicate;	// IMP=0x000000000027289e
- (void)applyToView:(shared_ptr_5c01893c)arg1 withContext:(id)arg2;	// IMP=0x000000000027279a

@end
