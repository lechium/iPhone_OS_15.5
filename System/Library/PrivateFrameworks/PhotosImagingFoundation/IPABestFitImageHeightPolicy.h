//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface IPABestFitImageHeightPolicy
{
    double _fitHeight;	// 8 = 0x8
}

- (unsigned long long)hash;	// IMP=0x0000000000012598
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000012578
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000124f9
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000012471
- (id)description;	// IMP=0x0000000000012428
- (double)transformScaleForSize:(struct CGSize)arg1;	// IMP=0x000000000001237b
- (struct CGSize)transformSize:(struct CGSize)arg1;	// IMP=0x000000000001230c
- (_Bool)isBestFitPolicy;	// IMP=0x0000000000012304
- (id)initWithHeight:(double)arg1;	// IMP=0x000000000001228f

@end

