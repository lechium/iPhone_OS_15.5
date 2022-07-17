//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIView.h>

@class UIVisualEffectView;

@interface STSRootView : UIView
{
    UIVisualEffectView *_visualEffectView;	// 8 = 0x8
    UIView *_contentView;	// 16 = 0x10
    struct UIEdgeInsets _contentInsets;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000025e2d
@property(nonatomic) struct UIEdgeInsets contentInsets; // @synthesize contentInsets=_contentInsets;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
- (void)_setupView;	// IMP=0x0000000000025c71
- (void)awakeFromNib;	// IMP=0x0000000000025c30
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000025bd3

@end
