//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface TransitDirectionsListArtworkWidthCalculator : NSObject
{
    NSArray *_artworks;	// 8 = 0x8
    struct ArtworkWidthCalculatorSizeParameter _sizeParameter;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0020000000b18926
@property(readonly, nonatomic) struct ArtworkWidthCalculatorSizeParameter sizeParameter; // @synthesize sizeParameter=_sizeParameter;
@property(readonly, copy, nonatomic) NSArray *artworks; // @synthesize artworks=_artworks;
- (id)calculateArtworkViewWidthAndArtworkSizes:(out double *)arg1;	// IMP=0x0010000000b18325
- (id)initWithSizedArtworks:(id)arg1 sizeParameter:(struct ArtworkWidthCalculatorSizeParameter)arg2;	// IMP=0x0010000000b18233

@end
