//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class PXUIWidgetBarViewTile;

@interface PXUIWidgetBar
{
    PXUIWidgetBarViewTile *__viewTile;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000179412
- (void)updateView;	// IMP=0x000000000017937f
@property(readonly, nonatomic) PXUIWidgetBarViewTile *_viewTile; // @synthesize _viewTile=__viewTile;
- (void)checkInTile:(id)arg1;	// IMP=0x00000000001792f9
- (id)checkOutTileWithKind:(long long)arg1;	// IMP=0x00000000001791b4
- (id)createTileAnimator;	// IMP=0x000000000017919b

@end
