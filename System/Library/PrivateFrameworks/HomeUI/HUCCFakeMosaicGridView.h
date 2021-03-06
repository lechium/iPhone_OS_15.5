//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class HUMosaicLayoutGeometry, NSMutableArray;
@protocol HUProvidesMosaicFrames;

@interface HUCCFakeMosaicGridView : UIView
{
    id <HUProvidesMosaicFrames> _frameDelegate;	// 8 = 0x8
    HUMosaicLayoutGeometry *_mosaicLayoutGeometry;	// 16 = 0x10
    NSMutableArray *_fakeCellLayers;	// 24 = 0x18
    struct CGRect _contentBounds;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000000d10ce
@property(nonatomic) struct CGRect contentBounds; // @synthesize contentBounds=_contentBounds;
@property(retain, nonatomic) NSMutableArray *fakeCellLayers; // @synthesize fakeCellLayers=_fakeCellLayers;
@property(retain, nonatomic) HUMosaicLayoutGeometry *mosaicLayoutGeometry; // @synthesize mosaicLayoutGeometry=_mosaicLayoutGeometry;
@property(nonatomic) __weak id <HUProvidesMosaicFrames> frameDelegate; // @synthesize frameDelegate=_frameDelegate;
- (void)layoutSublayersOfLayer:(id)arg1;	// IMP=0x00000000000d09ca
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000000d0932

@end

