//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/_UIAtomTextViewAtomLayout-Protocol.h>

@class NSArray, NSLayoutConstraint, NSString, UIColor, UIFont, UIImageView, UILabel, _UISearchAtomBackgroundView;

__attribute__((visibility("hidden")))
@interface _UISearchAtomView <_UIAtomTextViewAtomLayout>
{
    struct {
        unsigned int enabled:1;
    } _flags;	// 120 = 0x78
    UIColor *_atomBackgroundColor;	// 128 = 0x80
    UILabel *_textLabel;	// 136 = 0x88
    UIImageView *_leadingImage;	// 144 = 0x90
    _UISearchAtomBackgroundView *_backgroundView;	// 152 = 0x98
    NSArray *_defaultConstraints;	// 160 = 0xa0
    NSLayoutConstraint *_maximumAtomWidthConstraint;	// 168 = 0xa8
    NSLayoutConstraint *_imageBaselineConstraint;	// 176 = 0xb0
    NSLayoutConstraint *_imageCenterYConstraint;	// 184 = 0xb8
    NSArray *_withImageConstraints;	// 192 = 0xc0
    NSArray *_withoutImageConstraints;	// 200 = 0xc8
}

+ (id)defaultAtomBackgroundColorForTraitCollection:(id)arg1;	// IMP=0x0000000000d533c6
+ (id)_defaultFont;	// IMP=0x0000000000d53350
+ (_Bool)requiresConstraintBasedLayout;	// IMP=0x0000000000d527d1
- (void).cxx_destruct;	// IMP=0x0000000000d53f3c
@property(copy, nonatomic) NSArray *withoutImageConstraints; // @synthesize withoutImageConstraints=_withoutImageConstraints;
@property(copy, nonatomic) NSArray *withImageConstraints; // @synthesize withImageConstraints=_withImageConstraints;
@property(retain, nonatomic) NSLayoutConstraint *imageCenterYConstraint; // @synthesize imageCenterYConstraint=_imageCenterYConstraint;
@property(retain, nonatomic) NSLayoutConstraint *imageBaselineConstraint; // @synthesize imageBaselineConstraint=_imageBaselineConstraint;
@property(retain, nonatomic) NSLayoutConstraint *maximumAtomWidthConstraint; // @synthesize maximumAtomWidthConstraint=_maximumAtomWidthConstraint;
@property(copy, nonatomic) NSArray *defaultConstraints; // @synthesize defaultConstraints=_defaultConstraints;
@property(retain, nonatomic) _UISearchAtomBackgroundView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain) UIImageView *leadingImage; // @synthesize leadingImage=_leadingImage;
@property(retain) UILabel *textLabel; // @synthesize textLabel=_textLabel;
@property(retain, nonatomic) UIColor *atomBackgroundColor; // @synthesize atomBackgroundColor=_atomBackgroundColor;
@property(readonly, nonatomic) struct CGRect selectionBounds;
@property(nonatomic) double viewportWidth;
- (void)setSelectionStyle:(long long)arg1 animated:(_Bool)arg2;	// IMP=0x0000000000d53cd8
@property(nonatomic) long long selectionStyle;
- (void)setEnabled:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x0000000000d53bbc
@property(nonatomic, getter=isEnabled) _Bool enabled;
- (void)_dynamicUserInterfaceTraitDidChange;	// IMP=0x0000000000d53b55
- (void)tintColorDidChange;	// IMP=0x0000000000d53b14
- (id)viewForLastBaselineLayout;	// IMP=0x0000000000d53b02
- (void)_updateColors;	// IMP=0x0000000000d537ad
- (void)updateConstraints;	// IMP=0x0000000000d5358a
@property(retain, nonatomic) UIFont *atomFont;
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000d527d9

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
