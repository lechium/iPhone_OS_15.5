//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class NSArray, NSString, UIButton, UIFocusGuide, UIFont;
@protocol PXUIWidgetFooterViewDelegate;

@interface PXUIWidgetFooterView : UIView
{
    _Bool _isPerformingChanges;	// 8 = 0x8
    _Bool _isPerformingUpdates;	// 9 = 0x9
    struct {
        _Bool hasContent;
        _Bool disclosure;
        _Bool separators;
        _Bool focusGuide;
    } _needsUpdateFlags;	// 10 = 0xa
    struct {
        _Bool didSelectDisclosure;
    } _delegateRespondsTo;	// 14 = 0xe
    _Bool __hasContent;	// 15 = 0xf
    id <PXUIWidgetFooterViewDelegate> _delegate;	// 16 = 0x10
    NSString *_disclosureTitle;	// 24 = 0x18
    UIFont *_font;	// 32 = 0x20
    long long _layoutStyle;	// 40 = 0x28
    NSArray *__constraints;	// 48 = 0x30
    UIButton *__disclosureButton;	// 56 = 0x38
    UIView *__leadingSeparator;	// 64 = 0x40
    UIView *__trailingSeparator;	// 72 = 0x48
    UIFocusGuide *__focusGuide;	// 80 = 0x50
    struct UIEdgeInsets _contentInsets;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x000000000010d45e
@property(readonly, nonatomic) UIFocusGuide *_focusGuide; // @synthesize _focusGuide=__focusGuide;
@property(readonly, nonatomic) UIView *_trailingSeparator; // @synthesize _trailingSeparator=__trailingSeparator;
@property(readonly, nonatomic) UIView *_leadingSeparator; // @synthesize _leadingSeparator=__leadingSeparator;
@property(readonly, nonatomic) UIButton *_disclosureButton; // @synthesize _disclosureButton=__disclosureButton;
@property(copy, nonatomic, setter=_setConstraints:) NSArray *_constraints; // @synthesize _constraints=__constraints;
@property(nonatomic, setter=_setHasContent:) _Bool _hasContent; // @synthesize _hasContent=__hasContent;
@property(nonatomic) struct UIEdgeInsets contentInsets; // @synthesize contentInsets=_contentInsets;
@property(nonatomic) long long layoutStyle; // @synthesize layoutStyle=_layoutStyle;
@property(retain, nonatomic) UIFont *font; // @synthesize font=_font;
@property(copy, nonatomic) NSString *disclosureTitle; // @synthesize disclosureTitle=_disclosureTitle;
@property(nonatomic) __weak id <PXUIWidgetFooterViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_updateFocusGuideIfNeeded;	// IMP=0x000000000010d24d
- (void)_invalidateFocusGuide;	// IMP=0x000000000010d22f
- (void)_updateSeparatorsIfNeeded;	// IMP=0x000000000010d0aa
- (void)_invalidateSeparators;	// IMP=0x000000000010d08c
- (void)_updateDisclosureIfNeeded;	// IMP=0x000000000010ce7e
- (void)_invalidateDisclosure;	// IMP=0x000000000010ce60
- (void)_updateHasContentIfNeeded;	// IMP=0x000000000010cde2
- (void)_invalidateHasContent;	// IMP=0x000000000010cdc5
- (void)_setNeedsUpdate;	// IMP=0x000000000010cd24
- (_Bool)_needsUpdate;	// IMP=0x000000000010ccf9
- (void)_updateIfNeeded;	// IMP=0x000000000010cc02
- (void)performChanges:(CDUnknownBlockType)arg1;	// IMP=0x000000000010cba2
- (void)_handleDisclosureButton:(id)arg1;	// IMP=0x000000000010cb21
- (id)_focusGuideCreateIfNeeded:(_Bool)arg1;	// IMP=0x000000000010c79e
- (id)_trailingSeparatorCreateIfNeeded:(_Bool)arg1;	// IMP=0x000000000010c728
- (id)_leadingSeparatorCreateIfNeeded:(_Bool)arg1;	// IMP=0x000000000010c6b2
- (id)_disclosureButtonCreateIfNeeded:(_Bool)arg1;	// IMP=0x000000000010c60c
- (void)tintColorDidChange;	// IMP=0x000000000010c59a
- (void)updateConstraints;	// IMP=0x000000000010bfa8

@end

