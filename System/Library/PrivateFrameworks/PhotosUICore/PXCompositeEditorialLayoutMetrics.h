//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class PXCompositeEditorialLayoutSpec;

@interface PXCompositeEditorialLayoutMetrics
{
    _Bool _useSaliency;	// 8 = 0x8
    double _interTileSpacing;	// 16 = 0x10
    PXCompositeEditorialLayoutSpec *_editorialLayoutSpec;	// 24 = 0x18
    struct UIEdgeInsets _padding;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000000a2352
@property(readonly, nonatomic) PXCompositeEditorialLayoutSpec *editorialLayoutSpec; // @synthesize editorialLayoutSpec=_editorialLayoutSpec;
@property(nonatomic) _Bool useSaliency; // @synthesize useSaliency=_useSaliency;
@property(nonatomic) struct UIEdgeInsets padding; // @synthesize padding=_padding;
@property(nonatomic) double interTileSpacing; // @synthesize interTileSpacing=_interTileSpacing;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000a2236
- (id)init;	// IMP=0x00000000000a21a1

@end

