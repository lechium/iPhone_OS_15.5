//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray;

@interface WLKArtworkVariantListing : NSObject
{
    NSArray *_artworkVariants;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000001e3ca
@property(readonly, copy, nonatomic) NSArray *artworkVariants; // @synthesize artworkVariants=_artworkVariants;
- (id)artworkVariantOfType:(long long)arg1;	// IMP=0x000000000001e26b
- (id)bestArtworkVariantOfType:(long long)arg1 forSize:(struct CGSize)arg2;	// IMP=0x000000000001df24
- (id)initWithArtworkDictionary:(id)arg1;	// IMP=0x000000000001dc85

@end
