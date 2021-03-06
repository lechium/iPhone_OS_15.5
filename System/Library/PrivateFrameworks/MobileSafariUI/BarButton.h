//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIButton.h>

__attribute__((visibility("hidden")))
@interface BarButton : UIButton
{
    _Bool _shouldRespectContextMenuOrdering;	// 8 = 0x8
    struct CGRect _barButtonHitRect;	// 16 = 0x10
}

@property(nonatomic) _Bool shouldRespectContextMenuOrdering; // @synthesize shouldRespectContextMenuOrdering=_shouldRespectContextMenuOrdering;
@property(nonatomic) struct CGRect barButtonHitRect; // @synthesize barButtonHitRect=_barButtonHitRect;
- (id)_contextMenuInteraction:(id)arg1 styleForMenuWithConfiguration:(id)arg2;	// IMP=0x000000000013fe35
- (id)pointerInteraction:(id)arg1 regionForRequest:(id)arg2 defaultRegion:(id)arg3;	// IMP=0x000000000013fdce
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;	// IMP=0x000000000013fd7f
- (struct CGRect)_barButtonHitRect;	// IMP=0x000000000013fd11
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000013fc05

@end

