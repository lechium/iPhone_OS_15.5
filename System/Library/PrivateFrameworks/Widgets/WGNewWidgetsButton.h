//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIButton.h>

@class NSCache, NSString, _UILegibilitySettings;

@interface WGNewWidgetsButton : UIButton
{
    UIButton *_vibrantButton;	// 8 = 0x8
    UIButton *_overlayButton;	// 16 = 0x10
    NSCache *_numberAttributedStringCache;	// 24 = 0x18
    unsigned long long _badgeNumber;	// 32 = 0x20
    _UILegibilitySettings *_legibilitySettings;	// 40 = 0x28
    NSString *_text;	// 48 = 0x30
    NSString *_numberText;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x000000000001c7eb
@property(retain, nonatomic) NSString *numberText; // @synthesize numberText=_numberText;
@property(retain, nonatomic) NSString *text; // @synthesize text=_text;
@property(retain, nonatomic) _UILegibilitySettings *legibilitySettings; // @synthesize legibilitySettings=_legibilitySettings;
@property(nonatomic) unsigned long long badgeNumber; // @synthesize badgeNumber=_badgeNumber;
- (struct CGSize)_numberLabelSizeForText:(id)arg1 withAttributes:(id)arg2;	// IMP=0x000000000001c63e
- (id)_numberImageForNumberText:(id)arg1 withAttributes:(id)arg2;	// IMP=0x000000000001c456
- (id)_numberAttributedStringWithNumberText:(id)arg1 attributes:(id)arg2;	// IMP=0x000000000001c13d
- (id)_attributedStringWithColor:(id)arg1;	// IMP=0x000000000001bf8a
- (id)_numberTextAttributes;	// IMP=0x000000000001be37
- (id)_textAttributesWithColor:(id)arg1;	// IMP=0x000000000001bcf3
- (id)_numberFont;	// IMP=0x000000000001bce1
- (id)_textFont;	// IMP=0x000000000001bc7b
- (void)_setAttributeTitleForButton:(id)arg1 withColor:(id)arg2;	// IMP=0x000000000001bb9e
- (void)_updateButtons;	// IMP=0x000000000001bade
- (void)_buttonStateChanged:(id)arg1;	// IMP=0x000000000001ba64
- (void)_buttonPushed:(id)arg1;	// IMP=0x000000000001ba4d
- (void)layoutSubviews;	// IMP=0x000000000001b99a
- (void)setHighlighted:(_Bool)arg1;	// IMP=0x000000000001b94c
- (void)updateForContentCategorySizeChange;	// IMP=0x000000000001b93a
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x000000000001b7c6
- (id)init;	// IMP=0x000000000001b5e2

@end
