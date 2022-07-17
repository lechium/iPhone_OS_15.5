//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

#import <MobileSafari/SFCapsuleContentView-Protocol.h>

@class NSArray, NSLayoutConstraint, NSNumber, NSString, UITextField, _SFBarTheme, _SFDimmingButton;
@protocol SFCapsuleContentViewSizeUpdating;

@interface SFCapsuleURLField : UIView <SFCapsuleContentView>
{
    NSLayoutConstraint *_textFieldTrailingConstraint;	// 8 = 0x8
    double _lastPlaceholderWidth;	// 16 = 0x10
    _SFDimmingButton *_clearTextButton;	// 24 = 0x18
    NSLayoutConstraint *_voiceSearchToClearButtonConstraint;	// 32 = 0x20
    NSLayoutConstraint *_voiceSearchToCapsuleConstraint;	// 40 = 0x28
    _SFDimmingButton *_voiceSearchButton;	// 48 = 0x30
    NSArray *_voiceSearchButtonConstraints;	// 56 = 0x38
    double _nonKeyContentAlpha;	// 64 = 0x40
    UITextField *_textField;	// 72 = 0x48
    CDUnknownBlockType _voiceSearchTappedAction;	// 80 = 0x50
    struct _NSRange _rangeOfKeyText;	// 88 = 0x58
    struct CGAffineTransform _keyContentTransform;	// 104 = 0x68
    struct CGAffineTransform _microphoneContentTransform;	// 152 = 0x98
}

- (void).cxx_destruct;	// IMP=0x000000000008dfe1
@property(nonatomic) struct _NSRange rangeOfKeyText; // @synthesize rangeOfKeyText=_rangeOfKeyText;
@property(copy, nonatomic) CDUnknownBlockType voiceSearchTappedAction; // @synthesize voiceSearchTappedAction=_voiceSearchTappedAction;
@property(readonly, nonatomic) UITextField *textField; // @synthesize textField=_textField;
@property(nonatomic) double nonKeyContentAlpha; // @synthesize nonKeyContentAlpha=_nonKeyContentAlpha;
@property(nonatomic) struct CGAffineTransform microphoneContentTransform; // @synthesize microphoneContentTransform=_microphoneContentTransform;
@property(nonatomic) struct CGAffineTransform keyContentTransform; // @synthesize keyContentTransform=_keyContentTransform;
- (void)_voiceSearchButtonTapped:(id)arg1;	// IMP=0x000000000008df04
- (void)_clearTextButtonTapped:(id)arg1;	// IMP=0x000000000008deb5
- (void)_updatePlaceholderText;	// IMP=0x000000000008dc09
- (void)_updateClearButtonVisibility;	// IMP=0x000000000008da60
- (void)textFieldDidChange:(id)arg1;	// IMP=0x000000000008da4e
- (void)_tap:(id)arg1;	// IMP=0x000000000008da31
- (void)_voiceSearchAvailabilityDidChange:(id)arg1;	// IMP=0x000000000008d95c
- (void)updateConstraints;	// IMP=0x000000000008d8a0
@property(nonatomic) _Bool showsVoiceSearchButton;
@property(copy, nonatomic) CDUnknownBlockType buttonPointerStyleProvider;
@property(readonly, nonatomic) NSNumber *microphoneContentOriginX;
@property(readonly, nonatomic) struct CGRect keyContentRect;
- (void)layoutSubviews;	// IMP=0x000000000008d222
- (id)_newDimmingButtonWithSystemImageNamed:(id)arg1 action:(SEL)arg2 accessibilityIdentifier:(id)arg3;	// IMP=0x000000000008cfdc
- (void)dealloc;	// IMP=0x000000000008cf67
- (id)initWithTextField:(id)arg1;	// IMP=0x000000000008c087

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(copy, nonatomic) CDUnknownBlockType highlightObserver;
@property(nonatomic, setter=setHighlighted:) _Bool isHighlighted;
@property(nonatomic, setter=setMinimized:) _Bool isMinimized;
@property(nonatomic, setter=setSelected:) _Bool isSelected;
@property(nonatomic) long long layoutStyle;
@property(nonatomic) double minimizationPercent;
@property(nonatomic) double minimizedContentHorizontalInset;
@property(nonatomic) __weak id <SFCapsuleContentViewSizeUpdating> sizeUpdater;
@property(readonly) Class superclass;
@property(retain, nonatomic) _SFBarTheme *theme;
@property(nonatomic) __weak UIView *unclippedContainer;

@end
