//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIButton.h>

#import <MapKit/_MKPlaceActionControlledButton-Protocol.h>

@class CAGradientLayer, CALayer, NSAttributedString, NSString, _MKPlaceActionButtonController;

@interface MKCatalystButton : UIButton <_MKPlaceActionControlledButton>
{
    _Bool _isPrimaryButton;	// 8 = 0x8
    _MKPlaceActionButtonController *_buttonController;	// 16 = 0x10
    CALayer *_extraShadowLayer;	// 24 = 0x18
    CAGradientLayer *_gradientLayer;	// 32 = 0x20
    NSAttributedString *_title;	// 40 = 0x28
    NSAttributedString *_subTitle;	// 48 = 0x30
}

+ (struct CGColor *)extraShadowLayerBackgroundColorWithDarkMode:(_Bool)arg1 isbuttonEnabled:(_Bool)arg2;	// IMP=0x00000000001ed673
+ (id)titleFont;	// IMP=0x00000000001ebdc5
+ (id)catalystButton;	// IMP=0x00000000001eb66c
- (void).cxx_destruct;	// IMP=0x00000000001ed7a5
@property(retain, nonatomic) NSAttributedString *subTitle; // @synthesize subTitle=_subTitle;
@property(retain, nonatomic) NSAttributedString *title; // @synthesize title=_title;
@property(retain, nonatomic) CAGradientLayer *gradientLayer; // @synthesize gradientLayer=_gradientLayer;
@property(retain, nonatomic) CALayer *extraShadowLayer; // @synthesize extraShadowLayer=_extraShadowLayer;
@property(nonatomic) _Bool isPrimaryButton; // @synthesize isPrimaryButton=_isPrimaryButton;
@property(nonatomic) __weak _MKPlaceActionButtonController *buttonController; // @synthesize buttonController=_buttonController;
- (void)_updateColors;	// IMP=0x00000000001ece78
- (id)_attributedStringForSubTitle:(id)arg1 controlState:(unsigned long long)arg2;	// IMP=0x00000000001ecb0b
- (id)_attributedStringForTitle:(id)arg1 controlState:(unsigned long long)arg2;	// IMP=0x00000000001ec861
- (id)_attributedStringWithTitle:(id)arg1 subtitle:(id)arg2 controlState:(unsigned long long)arg3;	// IMP=0x00000000001ec6dd
- (void)placeActionButtonControllerTextDidChange:(id)arg1;	// IMP=0x00000000001ec5f7
- (void)setPrimaryTitle:(id)arg1 subtitle:(id)arg2;	// IMP=0x00000000001ec4e8
- (void)setPrimaryTitle:(id)arg1;	// IMP=0x00000000001ec199
- (void)setEnabled:(_Bool)arg1;	// IMP=0x00000000001ec158
- (void)setHighlighted:(_Bool)arg1;	// IMP=0x00000000001ec0fb
- (void)applyBorder:(_Bool)arg1;	// IMP=0x00000000001ebbdf
- (void)buttonSelected:(id)arg1;	// IMP=0x00000000001ebb20
- (void)layoutSubviews;	// IMP=0x00000000001eb7f2
- (struct CGSize)intrinsicContentSize;	// IMP=0x00000000001eb7a8
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x00000000001eb767
- (void)didMoveToSuperview;	// IMP=0x00000000001eb726

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
