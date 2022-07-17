//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <QuartzCore/CALayer.h>

@class NSArray, NSMutableArray;

__attribute__((visibility("hidden")))
@interface _MKResizingLayer : CALayer
{
    NSMutableArray *_sizedLayers;	// 8 = 0x8
    _Bool _needsLayoutOnBoundsChange;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000078908
@property(nonatomic) _Bool needsLayoutOnBoundsChange; // @synthesize needsLayoutOnBoundsChange=_needsLayoutOnBoundsChange;
- (void)setContentsScale:(double)arg1;	// IMP=0x0000000000078754
- (void)setMask:(id)arg1;	// IMP=0x0000000000078633
- (void)setBounds:(struct CGRect)arg1;	// IMP=0x0000000000078375
- (void)sizeSublayerToBounds:(id)arg1;	// IMP=0x000000000007831c
@property(readonly, copy, nonatomic) NSArray *sizeToBoundsLayers;

@end
