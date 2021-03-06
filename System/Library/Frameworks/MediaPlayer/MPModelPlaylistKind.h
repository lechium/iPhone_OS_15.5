//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MPModelPlaylistEntryKind;

@interface MPModelPlaylistKind
{
    unsigned long long _variants;	// 8 = 0x8
    MPModelPlaylistEntryKind *_playlistEntryKind;	// 16 = 0x10
    unsigned long long _options;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000227521
+ (id)kindWithVariants:(unsigned long long)arg1 playlistEntryKind:(id)arg2 options:(unsigned long long)arg3;	// IMP=0x0000000000227417
+ (id)identityKind;	// IMP=0x00000000002273e5
- (void).cxx_destruct;	// IMP=0x00000000002273d2
@property(readonly, nonatomic) unsigned long long options; // @synthesize options=_options;
@property(readonly, nonatomic) MPModelPlaylistEntryKind *playlistEntryKind; // @synthesize playlistEntryKind=_playlistEntryKind;
@property(readonly, nonatomic) unsigned long long variants; // @synthesize variants=_variants;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000002272e1
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000227204
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000022714a
- (unsigned long long)hash;	// IMP=0x00000000002270de
- (id)humanDescription;	// IMP=0x0000000000226e80
- (shared_ptr_cf7b8a22)predicateWithBaseProperty:(void *)arg1;	// IMP=0x00000000002752fd
- (shared_ptr_cf7b8a22)representedSearchScopePredicate;	// IMP=0x00000000002752dc
- (void)applyToView:(shared_ptr_5c01893c)arg1 withContext:(id)arg2;	// IMP=0x0000000000275055

@end

