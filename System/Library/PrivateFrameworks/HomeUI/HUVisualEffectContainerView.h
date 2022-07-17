//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIVisualEffectView.h>

@class UIView;

@interface HUVisualEffectContainerView : UIVisualEffectView
{
    UIView *_innerContentView;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000025de32
@property(retain, nonatomic) UIView *innerContentView; // @synthesize innerContentView=_innerContentView;
- (void)layoutSubviews;	// IMP=0x000000000025dd87
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x000000000025dd19
- (struct CGSize)intrinsicContentSize;	// IMP=0x000000000025dcbf
- (struct CGSize)systemLayoutSizeFittingSize:(struct CGSize)arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3;	// IMP=0x000000000025dbd6
- (id)initWithInnerContentView:(id)arg1;	// IMP=0x000000000025dabd

@end
