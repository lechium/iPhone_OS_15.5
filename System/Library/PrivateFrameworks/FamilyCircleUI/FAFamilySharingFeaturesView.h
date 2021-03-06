//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class UIButton, UIStackView;

@interface FAFamilySharingFeaturesView : UIView
{
    long long _context;	// 8 = 0x8
    UIButton *_learnMoreButton;	// 16 = 0x10
    _Bool _shouldHideLocationSharing;	// 24 = 0x18
    UIStackView *_stack;	// 32 = 0x20
}

+ (id)rowForIcon:(id)arg1 andLabel:(id)arg2;	// IMP=0x00000000000307d2
- (void).cxx_destruct;	// IMP=0x00000000000312b3
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x00000000000311c0
- (void)_updateFonts;	// IMP=0x0000000000030f12
- (id)_contextSensitiveLocalizedStringWithKey:(id)arg1;	// IMP=0x0000000000030db7
- (void)_learnMoreButtonTapped:(id)arg1;	// IMP=0x0000000000030cf4
- (id)_imageViewWithIconNamed:(id)arg1 addBorder:(_Bool)arg2;	// IMP=0x0000000000030b4b
- (id)_labelWithStringAtKey:(id)arg1;	// IMP=0x0000000000030a7b
- (id)initWithContext:(long long)arg1 hideLocationSharing:(_Bool)arg2;	// IMP=0x000000000002ff6b

@end

