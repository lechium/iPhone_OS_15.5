//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class PKGradientVerticalConnector;

@interface PKConnectedCircleView : UIView
{
    PKGradientVerticalConnector *_topConnector;	// 8 = 0x8
    PKGradientVerticalConnector *_bottomConnector;	// 16 = 0x10
    UIView *_targetView;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000002e6126
@property(retain, nonatomic) UIView *targetView; // @synthesize targetView=_targetView;
@property(retain, nonatomic) PKGradientVerticalConnector *bottomConnector; // @synthesize bottomConnector=_bottomConnector;
@property(retain, nonatomic) PKGradientVerticalConnector *topConnector; // @synthesize topConnector=_topConnector;
- (void)drawRect:(struct CGRect)arg1;	// IMP=0x00000000002e5a19
- (struct CGRect)_targetViewRectForBounds:(struct CGRect)arg1;	// IMP=0x00000000002e5974
- (void)layoutSubviews;	// IMP=0x00000000002e58c7
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x00000000002e5871
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000002e569c
- (id)init;	// IMP=0x00000000002e566a
- (id)initWithSize:(struct CGSize)arg1;	// IMP=0x00000000002e562d

@end
