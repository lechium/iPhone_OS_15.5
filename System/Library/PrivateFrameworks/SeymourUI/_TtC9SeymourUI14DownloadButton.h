//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIControl.h>

@class MISSING_TYPE;

__attribute__((visibility("hidden")))
@interface _TtC9SeymourUI14DownloadButton : UIControl
{
    MISSING_TYPE *delegate;	// 8 = 0x8
    MISSING_TYPE *backgroundLayer;	// 24 = 0x18
    MISSING_TYPE *contentLayer;	// 32 = 0x20
    MISSING_TYPE *contentView;	// 40 = 0x28
    MISSING_TYPE *iconLayer;	// 56 = 0x38
    MISSING_TYPE *configurationFactory;	// 64 = 0x40
    MISSING_TYPE *alphaAnimator;	// 72 = 0x48
    MISSING_TYPE *configuration;	// 80 = 0x50
    MISSING_TYPE *contentWidthConstraint;	// 96 = 0x60
    MISSING_TYPE *fromWidth;	// 104 = 0x68
    MISSING_TYPE *propertyAnimator;	// 112 = 0x70
    MISSING_TYPE *currentState;	// 120 = 0x78
    MISSING_TYPE *toWidth;	// 136 = 0x88
}

- (void).cxx_destruct;	// IMP=0x000000000052ef20
- (void)contentSizeCategoryChanged:(id)arg1;	// IMP=0x000000000052de70
- (void)tintColorDidChange;	// IMP=0x000000000052d8d0
- (void)layoutSubviews;	// IMP=0x000000000052d6c0
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000052d3e0
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000052d3b0
@property(nonatomic) _Bool highlighted;
- (_Bool)isHighlighted;	// IMP=0x000000000052c960

@end
