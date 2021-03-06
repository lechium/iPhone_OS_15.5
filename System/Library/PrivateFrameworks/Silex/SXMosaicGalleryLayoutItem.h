//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface SXMosaicGalleryLayoutItem : NSObject
{
    int _tileType;	// 8 = 0x8
    struct CGSize _dimensions;	// 16 = 0x10
}

@property(readonly, nonatomic) struct CGSize dimensions; // @synthesize dimensions=_dimensions;
- (id)description;	// IMP=0x00000000000d9070
@property(readonly, nonatomic) int tileType; // @synthesize tileType=_tileType;
- (double)aspectRatio;	// IMP=0x00000000000d8fd8
- (id)initWithDimensions:(struct CGSize)arg1;	// IMP=0x00000000000d8f86

@end

