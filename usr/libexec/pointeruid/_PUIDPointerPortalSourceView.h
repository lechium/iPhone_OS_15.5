//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class UIViewFloatAnimatableProperty, _UIPortalView;

@interface _PUIDPointerPortalSourceView : UIView
{
    _UIPortalView *_contentPortalView;	// 8 = 0x8
    UIViewFloatAnimatableProperty *_opacityPairFilterAnimatableProperty;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0020000000026bb3
@property(retain, nonatomic) UIViewFloatAnimatableProperty *opacityPairFilterAnimatableProperty; // @synthesize opacityPairFilterAnimatableProperty=_opacityPairFilterAnimatableProperty;
@property(readonly, nonatomic) _UIPortalView *contentPortalView; // @synthesize contentPortalView=_contentPortalView;
- (void)layoutSubviews;	// IMP=0x0010000000026b01
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00100000000269de

@end

