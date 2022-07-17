//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIPointerInteractionDelegate-Protocol.h>
#import <UIKitCore/_UINavigationBarTransitionContextParticipant-Protocol.h>

@class NSArray, NSDictionary, NSString, UIView, _UINavigationBarLargeTitleViewLayout, _UINavigationBarTransitionContext, _UIPointerInteractionAssistant;

__attribute__((visibility("hidden")))
@interface _UINavigationBarLargeTitleView <UIPointerInteractionDelegate, _UINavigationBarTransitionContextParticipant>
{
    _UINavigationBarTransitionContext *_transitionContext;	// 8 = 0x8
    NSArray *_titleCandidates;	// 16 = 0x10
    NSString *__effectiveTitle;	// 24 = 0x18
    _Bool _providesExtraSpaceForExcessiveLineHeights;	// 32 = 0x20
    _Bool _alignAccessoryViewToTitleBaseline;	// 33 = 0x21
    NSDictionary *_effectiveTitleAttributes;	// 40 = 0x28
    _UIPointerInteractionAssistant *_assistant;	// 48 = 0x30
    long long _titleType;	// 56 = 0x38
    NSString *_title;	// 64 = 0x40
    NSArray *_alternateTitles;	// 72 = 0x48
    NSDictionary *_titleAttributes;	// 80 = 0x50
    unsigned long long _twoLineMode;	// 88 = 0x58
    UIView *_accessoryView;	// 96 = 0x60
    unsigned long long _accessoryViewHorizontalAlignment;	// 104 = 0x68
    _UINavigationBarLargeTitleViewLayout *_layout;	// 112 = 0x70
}

- (void).cxx_destruct;	// IMP=0x00000000001a1131
@property(readonly, nonatomic) _UINavigationBarLargeTitleViewLayout *layout; // @synthesize layout=_layout;
@property(nonatomic) unsigned long long accessoryViewHorizontalAlignment; // @synthesize accessoryViewHorizontalAlignment=_accessoryViewHorizontalAlignment;
@property(nonatomic) _Bool alignAccessoryViewToTitleBaseline; // @synthesize alignAccessoryViewToTitleBaseline=_alignAccessoryViewToTitleBaseline;
@property(retain, nonatomic) UIView *accessoryView; // @synthesize accessoryView=_accessoryView;
@property(nonatomic) _Bool providesExtraSpaceForExcessiveLineHeights; // @synthesize providesExtraSpaceForExcessiveLineHeights=_providesExtraSpaceForExcessiveLineHeights;
@property(nonatomic) unsigned long long twoLineMode; // @synthesize twoLineMode=_twoLineMode;
@property(copy, nonatomic) NSDictionary *titleAttributes; // @synthesize titleAttributes=_titleAttributes;
@property(retain, nonatomic) NSArray *alternateTitles; // @synthesize alternateTitles=_alternateTitles;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) long long titleType; // @synthesize titleType=_titleType;
@property(nonatomic) __weak _UIPointerInteractionAssistant *assistant; // @synthesize assistant=_assistant;
- (void)adoptNewLayout;	// IMP=0x00000000001a0fcc
- (void)adoptLayout:(id)arg1;	// IMP=0x00000000001a0ee0
- (void)clearTransitionContext;	// IMP=0x00000000001a0e77
- (void)finalizeStateFromTransition:(id)arg1;	// IMP=0x00000000001a0e71
- (void)ensureBackButtonTruncationOccursWithContext:(id)arg1;	// IMP=0x00000000001a0e6b
- (void)recordToStateForTransition:(id)arg1;	// IMP=0x00000000001a0dc8
- (void)prepareToRecordToState:(id)arg1;	// IMP=0x00000000001a0d47
- (void)recordFromStateForTransition:(id)arg1;	// IMP=0x00000000001a0c99
- (void)pointerInteraction:(id)arg1 willExitRegion:(id)arg2 animator:(id)arg3;	// IMP=0x00000000001a0c1a
- (void)pointerInteraction:(id)arg1 willEnterRegion:(id)arg2 animator:(id)arg3;	// IMP=0x00000000001a0b9b
- (id)pointerInteraction:(id)arg1 styleForRegion:(id)arg2;	// IMP=0x00000000001a0ae4
- (id)pointerInteraction:(id)arg1 regionForRequest:(id)arg2 defaultRegion:(id)arg3;	// IMP=0x00000000001a08f8
- (void)_clearAssistants;	// IMP=0x00000000001a0843
- (void)_setAssistants;	// IMP=0x00000000001a07c2
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x00000000001a06c0
- (void)updateContent;	// IMP=0x00000000001a06a9
- (void)_updateContentAndInvalidate:(_Bool)arg1;	// IMP=0x00000000001a02b1
- (id)_effectiveTitle;	// IMP=0x00000000001a0234
- (id)_titleForCurrentWidth;	// IMP=0x000000000019fb90
- (void)layoutSubviews;	// IMP=0x000000000019faa0
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x000000000019fa83
- (struct CGSize)sizeThatFits:(struct CGSize)arg1 titleType:(long long)arg2;	// IMP=0x000000000019fa0b
- (struct CGSize)intrinsicContentSize;	// IMP=0x000000000019f9ba
@property(readonly, nonatomic) double restingHeightOfTitleView;
- (id)_layoutForMeasurement;	// IMP=0x000000000019f8ea
@property(readonly, nonatomic) NSDictionary *effectiveTitleAttributes; // @synthesize effectiveTitleAttributes=_effectiveTitleAttributes;
@property(readonly, nonatomic) UIView *accessibilityTitleView;
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000019f4ad
- (id)_newLayout;	// IMP=0x000000000019f47f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
