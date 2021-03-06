//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class SSSOccludingCoveringView;

@interface SSSUncroppedOccludingView : UIView
{
    SSSOccludingCoveringView *_topView;	// 8 = 0x8
    SSSOccludingCoveringView *_bottomView;	// 16 = 0x10
    SSSOccludingCoveringView *_leftView;	// 24 = 0x18
    SSSOccludingCoveringView *_rightView;	// 32 = 0x20
    struct CGRect _unoccludedRect;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00200000000291d6
@property(nonatomic) struct CGRect unoccludedRect; // @synthesize unoccludedRect=_unoccludedRect;
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0010000000028fa9
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;	// IMP=0x0010000000028f77
- (_Bool)_pointInsideAnOccludingView:(struct CGPoint)arg1;	// IMP=0x0010000000028dd1
- (_Bool)pointCanPassthrough:(struct CGPoint)arg1;	// IMP=0x0010000000028dbc
- (id)_occludingViews;	// IMP=0x0010000000028d24
- (void)layoutSubviews;	// IMP=0x00100000000289a5

@end

