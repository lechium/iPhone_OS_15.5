//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class PKImage;

@interface PKPassPersonalizationImageSet
{
    PKImage *_logoImage;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000039ecbc
+ (_Bool)shouldCache;	// IMP=0x000000000039ec97
+ (long long)imageSetType;	// IMP=0x000000000039ec8c
- (void).cxx_destruct;	// IMP=0x000000000039eed3
@property(retain, nonatomic) PKImage *logoImage; // @synthesize logoImage=_logoImage;
- (unsigned long long)hash;	// IMP=0x000000000039ee5f
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000039edf6
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000039ed73
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000039ecc4
- (void)preheatImages;	// IMP=0x000000000039ec9f
- (id)initWithDisplayProfile:(id)arg1 fileURL:(id)arg2 screenScale:(double)arg3 suffix:(id)arg4;	// IMP=0x000000000039eb88

@end
