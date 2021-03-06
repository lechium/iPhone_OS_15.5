//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class UIInputViewController, UIKBRenderConfig, UIKeyboard, UIResponder, UIView;

__attribute__((visibility("hidden")))
@interface UIInputViewSet : NSObject
{
    _Bool _isSplit;	// 8 = 0x8
    double _splitHeightDelta;	// 16 = 0x10
    UIResponder *_restorableResponder;	// 24 = 0x18
    UIKBRenderConfig *_restorableRenderConfig;	// 32 = 0x20
    UIResponder *_accessoryViewNextResponder;	// 40 = 0x28
    _Bool _restoreUsingBecomeFirstResponder;	// 48 = 0x30
    UIView *_inputView;	// 56 = 0x38
    UIView *_inputAccessoryView;	// 64 = 0x40
    UIView *_inputAssistantView;	// 72 = 0x48
    UIInputViewController *_inputViewController;	// 80 = 0x50
    UIInputViewController *_accessoryViewController;	// 88 = 0x58
    UIInputViewController *_assistantViewController;	// 96 = 0x60
    _Bool _isNullInputView;	// 104 = 0x68
    _Bool _isCustomInputView;	// 105 = 0x69
    _Bool _isRemoteKeyboard;	// 106 = 0x6a
    struct CGRect _inputAssistantViewBounds;	// 112 = 0x70
}

+ (id)emptyInputSet;	// IMP=0x0000000000069ab9
+ (id)inputSetWithOriginalInputSet:(id)arg1 duplicateInputView:(_Bool)arg2 duplicateInputAccessoryView:(_Bool)arg3 duplicateInputAssistantView:(_Bool)arg4;	// IMP=0x000000000006998c
+ (id)inputSetWithPlaceholderAndAccessoryView:(id)arg1;	// IMP=0x00000000000697f2
+ (id)inputSetWithKeyboardAndAccessoryView:(id)arg1;	// IMP=0x00000000000697de
+ (id)inputSetWithKeyboardAndAccessoryView:(id)arg1 assistantView:(id)arg2;	// IMP=0x0000000000069733
+ (id)inputSetWithInputView:(id)arg1 accessoryView:(id)arg2;	// IMP=0x000000000006971e
+ (id)inputSetWithInputView:(id)arg1 accessoryView:(id)arg2 assistantView:(id)arg3;	// IMP=0x00000000000696d1
@property(nonatomic) _Bool isRemoteKeyboard; // @synthesize isRemoteKeyboard=_isRemoteKeyboard;
@property(nonatomic) _Bool isCustomInputView; // @synthesize isCustomInputView=_isCustomInputView;
@property(readonly, nonatomic) struct CGRect inputAssistantViewBounds; // @synthesize inputAssistantViewBounds=_inputAssistantViewBounds;
@property(readonly, nonatomic) _Bool isNullInputView; // @synthesize isNullInputView=_isNullInputView;
@property(nonatomic) __weak UIResponder *accessoryViewNextResponder; // @synthesize accessoryViewNextResponder=_accessoryViewNextResponder;
@property(retain, nonatomic) UIKBRenderConfig *restorableRenderConfig; // @synthesize restorableRenderConfig=_restorableRenderConfig;
@property(nonatomic) __weak UIResponder *restorableResponder; // @synthesize restorableResponder=_restorableResponder;
@property(nonatomic) double splitHeightDelta; // @synthesize splitHeightDelta=_splitHeightDelta;
@property(retain, nonatomic) UIInputViewController *accessoryViewController; // @synthesize accessoryViewController=_accessoryViewController;
@property(retain, nonatomic) UIInputViewController *assistantViewController; // @synthesize assistantViewController=_assistantViewController;
@property(retain, nonatomic) UIInputViewController *inputViewController; // @synthesize inputViewController=_inputViewController;
@property(retain, nonatomic) UIView *inputAssistantView; // @synthesize inputAssistantView=_inputAssistantView;
@property(retain, nonatomic) UIView *inputAccessoryView; // @synthesize inputAccessoryView=_inputAccessoryView;
@property(retain, nonatomic) UIView *inputView; // @synthesize inputView=_inputView;
- (void)_setSplitProgress:(double)arg1;	// IMP=0x000000000006c428
- (void)_endSplitTransitionIfNeeded;	// IMP=0x000000000006c36e
- (void)_beginSplitTransitionIfNeeded;	// IMP=0x000000000006c1af
- (_Bool)_accessorySuppressesShadow;	// IMP=0x000000000006c0e9
- (id)_splittableInputAccessoryView;	// IMP=0x000000000006c0b0
- (id)_themableInputAccessoryView;	// IMP=0x000000000006c07a
- (_Bool)setAccessoryViewVisible:(_Bool)arg1 delay:(double)arg2;	// IMP=0x000000000006be8d
- (_Bool)hierarchyContainsView:(id)arg1;	// IMP=0x000000000006bd61
- (void)refreshPresentation;	// IMP=0x000000000006b7e9
- (struct CGRect)_rightInputViewSetFrame;	// IMP=0x000000000006b4ca
- (struct CGRect)_leftInputViewSetFrame;	// IMP=0x000000000006b22c
- (double)inputViewSplitHeight;	// IMP=0x000000000006b15c
@property(readonly, nonatomic) struct CGRect inputAccessoryViewBounds;
@property(readonly, nonatomic) struct CGRect inputViewBounds;
@property(readonly, nonatomic) _Bool _inputViewIsSplit;
@property(readonly, nonatomic) _Bool isSplit; // @synthesize isSplit=_isSplit;
@property(readonly, nonatomic) _Bool supportsSplit;
@property(readonly, nonatomic) _Bool isLocalMinimumHeightInputView;
@property(readonly, nonatomic) _Bool isInputAccessoryViewPlaceholder;
@property(readonly, nonatomic) _Bool isInputAssistantViewPlaceholder;
@property(readonly, nonatomic) _Bool isInputViewPlaceholder;
@property(readonly, nonatomic) _Bool inputViewKeyboardCanSplit;
- (_Bool)_inputViewSetSupportsSplit;	// IMP=0x000000000006ae04
- (_Bool)_actLikeInputAccessoryViewSupportsSplit;	// IMP=0x000000000006adcd
- (_Bool)_inputAccessoryViewSupportsSplit;	// IMP=0x000000000006ad3a
- (_Bool)_inputViewSupportsSplit;	// IMP=0x000000000006aca8
- (_Bool)_isFullscreen;	// IMP=0x000000000006ab52
- (_Bool)__isCKAccessoryView;	// IMP=0x000000000006aafa
- (_Bool)inSyncWithOrientation:(long long)arg1 forKeyboard:(id)arg2;	// IMP=0x000000000006aa28
- (long long)keyboardOrientation:(id)arg1;	// IMP=0x000000000006a9ba
- (id)description;	// IMP=0x000000000006a7e5
- (_Bool)isStrictSupersetOfViewSet:(id)arg1;	// IMP=0x000000000006a730
- (_Bool)containsResponder:(id)arg1;	// IMP=0x000000000006a6b9
@property(readonly, nonatomic) _Bool visible;
- (_Bool)_inputViewIsVisible;	// IMP=0x000000000006a637
@property(readonly, nonatomic) _Bool usesKeyClicks;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000006a430
- (_Bool)containsView:(id)arg1;	// IMP=0x000000000006a3d1
@property(readonly, nonatomic, getter=isEmpty) _Bool empty;
@property(readonly, nonatomic) _Bool hasNonPlaceholderViews;
@property(nonatomic) _Bool restoreUsingBecomeFirstResponder;
- (void)_forceRestoreUsingBecomeFirstResponder:(_Bool)arg1;	// IMP=0x000000000006a295
@property(readonly, nonatomic) UIView *splitExemptSubview;
@property(readonly, nonatomic) UIView *layeringView;
- (void)_setRenderConfig:(id)arg1;	// IMP=0x000000000006a160
- (id)normalizePlaceholders;	// IMP=0x0000000000069f04
- (id)inputSetWithInputAccessoryViewFromInputSet:(id)arg1;	// IMP=0x0000000000069e23
- (id)inputSetWithInputAccessoryViewOnly;	// IMP=0x0000000000069dec
- (void)setKeyboardAssistantBar:(id)arg1;	// IMP=0x0000000000069d17
- (void)inheritNullState:(id)arg1;	// IMP=0x00000000000696ae
- (void)dealloc;	// IMP=0x000000000006962e
- (id)initWithInputView:(id)arg1 accessoryView:(id)arg2 assistantView:(id)arg3 isKeyboard:(_Bool)arg4;	// IMP=0x00000000000694da
@property(readonly, nonatomic) UIKeyboard *keyboard;
- (_Bool)_isKeyboard;	// IMP=0x0000000000069496
- (_Bool)canAnimateToInputViewSet:(id)arg1;	// IMP=0x00000000000693d6

@end

