//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class NSAttributedString, UIButton;

__attribute__((visibility("hidden")))
@interface MUPlaceLinkFooterAttributionView : UIView
{
    UIButton *_attributionButton;	// 8 = 0x8
    id _target;	// 16 = 0x10
    SEL _action;	// 24 = 0x18
    NSAttributedString *_attributedTitle;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000057e46
@property(copy, nonatomic) NSAttributedString *attributedTitle; // @synthesize attributedTitle=_attributedTitle;
- (void)_updateAppearance;	// IMP=0x0000000000057cff
- (void)setTarget:(id)arg1 action:(SEL)arg2;	// IMP=0x0000000000057c63
- (void)_setupLinkView;	// IMP=0x000000000005798d
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000057930

@end
