//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreUI/CUIPSDImageRef.h>

@class NSArray;

@interface CTDPSDPreviewRef : CUIPSDImageRef
{
    struct _PSDImageInfo _imageInfo;	// 40 = 0x28
    long long _layerCount;	// 64 = 0x40
    long long _sliceCount;	// 72 = 0x48
    long long _columnWidth;	// 80 = 0x50
    long long _rowHeight;	// 88 = 0x58
    NSArray *_layerIndexLayout;	// 96 = 0x60
    long long _sliceRowCount;	// 104 = 0x68
    long long _sliceColumnCount;	// 112 = 0x70
    NSArray *_sliceRects;	// 120 = 0x78
}

- (long long)indexOfDrawingLayerType:(long long)arg1;	// IMP=0x00000000000590ec
- (long long)numberOfAlphaChannels;	// IMP=0x00000000000590d6
- (long long)numberOfGradientLayers;	// IMP=0x0000000000059064
- (_Bool)hasGradient;	// IMP=0x0000000000058ff5
- (_Bool)hasRegularSliceGrid;	// IMP=0x0000000000058fbf
- (void)evaluateSliceGrid;	// IMP=0x0000000000058c41
- (long long)sliceColumnCount;	// IMP=0x0000000000058c30
- (long long)sliceRowCount;	// IMP=0x0000000000058c1f
- (void)dealloc;	// IMP=0x0000000000058bdd
- (id)initWithPath:(id)arg1;	// IMP=0x0000000000058b91

@end

