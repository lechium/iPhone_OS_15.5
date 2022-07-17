//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UISplittableInputView-Protocol.h>
#import <UIKitCore/_UIRemoteKeyboardInputViewPlaceholder-Protocol.h>

@class NSString, UIView, UIWindowScene;

__attribute__((visibility("hidden")))
@interface _UIRemoteKeyboardPlaceholderView <UISplittableInputView, _UIRemoteKeyboardInputViewPlaceholder>
{
    UIView *_mirroredView;	// 8 = 0x8
    struct CGSize _fixedSize;	// 16 = 0x10
    CDUnknownBlockType _sizeBlock;	// 32 = 0x20
    UIWindowScene *_sceneForHeight;	// 40 = 0x28
    _Bool _isLocalMinimumHeight;	// 48 = 0x30
    UIView *_fallbackView;	// 56 = 0x38
    UIView *_associatedView;	// 64 = 0x40
}

+ (id)placeholderWithWidthSizer:(CDUnknownBlockType)arg1 heightWithScene:(id)arg2;	// IMP=0x0000000000af55df
+ (id)placeholderWithWidth:(double)arg1 height:(double)arg2;	// IMP=0x0000000000af559a
+ (id)placeholderForView:(id)arg1;	// IMP=0x0000000000af5510
@property(retain, nonatomic) UIView *associatedView; // @synthesize associatedView=_associatedView;
@property(retain, nonatomic) UIView *fallbackView; // @synthesize fallbackView=_fallbackView;
@property(readonly, nonatomic) _Bool isLocalMinimumHeightPlaceholder;
- (void)_isPlaceholderViewSelector;	// IMP=0x0000000000af5c27
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000af5a90
@property(readonly, copy) NSString *description;
@property(nonatomic) struct CGSize fixedSize;
- (_Bool)refreshPlaceholder;	// IMP=0x0000000000af583a
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;	// IMP=0x0000000000af5832
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;	// IMP=0x0000000000af574b
- (struct CGSize)intrinsicContentSize;	// IMP=0x0000000000af5711
@property(readonly, retain) UIView *placeheldView;
- (void)dealloc;	// IMP=0x0000000000af566e
- (id)initWithSize:(struct CGSize)arg1;	// IMP=0x0000000000af549c
- (void)_setProgress:(double)arg1 boundedBy:(double)arg2;	// IMP=0x0000000000af5d2f
- (void)_endSplitTransitionIfNeeded:(_Bool)arg1;	// IMP=0x0000000000af5d29
- (struct CGSize)rightContentViewSize;	// IMP=0x0000000000af5d13
- (struct CGSize)leftContentViewSize;	// IMP=0x0000000000af5cfd
- (void)_beginSplitTransitionIfNeeded:(double)arg1 gapWidth:(double)arg2;	// IMP=0x0000000000af5cf7
- (void)_setLeftOffset:(double)arg1 gapWidth:(double)arg2;	// IMP=0x0000000000af5cf1
- (struct CGRect)_compatibleBounds;	// IMP=0x0000000000af5ca5
- (void)didEndSplitTransition;	// IMP=0x0000000000af5c9f
- (void)willBeginSplitTransition;	// IMP=0x0000000000af5c99
- (void)updateSplitSubviewContraintsWithLeftContentSize:(struct CGSize)arg1 rightContentSize:(struct CGSize)arg2;	// IMP=0x0000000000af5c93
- (void)layoutSplitSubviewsWithLeftContentSize:(struct CGSize)arg1 rightContentSize:(struct CGSize)arg2;	// IMP=0x0000000000af5c8d
- (void)updateMergedSubviewConstraints;	// IMP=0x0000000000af5c87
- (void)layoutMergedSubviews;	// IMP=0x0000000000af5c81

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
