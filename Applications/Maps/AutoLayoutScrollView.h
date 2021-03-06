//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIScrollView.h>

@class NSArray, NSLayoutConstraint, UIView;

__attribute__((visibility("hidden")))
@interface AutoLayoutScrollView : UIScrollView
{
    NSArray *_edgeConstraints;	// 8 = 0x8
    NSLayoutConstraint *_minimumWidthConstraint;	// 16 = 0x10
    NSLayoutConstraint *_minimumHeightConstraint;	// 24 = 0x18
    NSLayoutConstraint *_horizontalCompressionConstraint;	// 32 = 0x20
    NSLayoutConstraint *_verticalCompressionConstraint;	// 40 = 0x28
    float _horizontalCompressionPriority;	// 48 = 0x30
    float _verticalCompressionPriority;	// 52 = 0x34
    UIView *_contentView;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x0020000000149a93
@property(readonly, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
- (void)setContentOverflowCompressionPriority:(float)arg1 forAxis:(long long)arg2;	// IMP=0x00100000001499d5
- (float)contentOverflowCompressionPriorityForAxis:(long long)arg1;	// IMP=0x00100000001499ac
- (void)layoutSubviews;	// IMP=0x001000000014996e
- (void)_updateConstraintConstants;	// IMP=0x0010000000149897
- (void)updateConstraints;	// IMP=0x00100000001492c7
- (id)initWithCoder:(id)arg1;	// IMP=0x001000000014927b
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x001000000014921e
- (id)init;	// IMP=0x00100000001491d2
- (void)_commonInit;	// IMP=0x0010000000149123

@end

