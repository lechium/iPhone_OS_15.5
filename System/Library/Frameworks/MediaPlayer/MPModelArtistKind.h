//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MPModelAlbumKind;

@interface MPModelArtistKind
{
    MPModelAlbumKind *_albumKind;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000880b5
+ (id)kindWithAlbumKind:(id)arg1;	// IMP=0x0000000000087fc2
+ (id)identityKind;	// IMP=0x0000000000087f90
- (void).cxx_destruct;	// IMP=0x0000000000087f7d
@property(readonly, copy, nonatomic) MPModelAlbumKind *albumKind; // @synthesize albumKind=_albumKind;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000087eef
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000087e4f
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000087dd4
- (unsigned long long)hash;	// IMP=0x0000000000087d7e
- (id)humanDescription;	// IMP=0x0000000000087d07
- (shared_ptr_cf7b8a22)representedSearchScopePredicate;	// IMP=0x0000000000278368
- (void)applyToView:(shared_ptr_5c01893c)arg1 withContext:(id)arg2;	// IMP=0x0000000000278264

@end
