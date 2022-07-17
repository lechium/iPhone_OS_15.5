//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ContextKitExtraction/_UISceneComponentProviding-Protocol.h>

@class NSString, NSTimer, UIButton, UIScene;

@interface CKContextContentProviderUIScene <_UISceneComponentProviding>
{
    UIButton *_debugButton;	// 8 = 0x8
    UIButton *_recentsButton;	// 16 = 0x10
    _Bool _allowAppSwitcherControls;	// 24 = 0x18
    NSTimer *_toolInstallationTimer;	// 32 = 0x20
    UIScene *__scene;	// 40 = 0x28
}

+ (void)_extractContentFromWebView:(id)arg1 includingSnapshot:(_Bool)arg2 includingUIBoundingBox:(_Bool)arg3 ignoreViewTextLengthRequirements:(_Bool)arg4 ignoreViewCountCap:(_Bool)arg5 includeRawHTML:(_Bool)arg6 withCompletionHandler:(CDUnknownBlockType)arg7;	// IMP=0x000000000000b9dc
+ (id)_handleWKWebView:(id)arg1 withExecutor:(id)arg2;	// IMP=0x000000000000b2d8
+ (id)_handleUIButtonView:(id)arg1 withExecutor:(id)arg2;	// IMP=0x000000000000b030
+ (id)_blocksFromText:(id)arg1;	// IMP=0x000000000000aee4
+ (_Bool)_textBlockLooksLikeAListWithText:(id)arg1;	// IMP=0x000000000000ab7f
+ (id)_bestContentStringForWebViewUIElements:(id)arg1 andTitle:(id)arg2;	// IMP=0x000000000000a8c4
+ (id)_UIElementsForWebViewContentString:(id)arg1;	// IMP=0x000000000000a482
+ (id)_extractItemsFromViewControllers:(id)arg1;	// IMP=0x0000000000009c9f
+ (id)_bestVisibleStringForView:(id)arg1 usingExecutor:(id)arg2;	// IMP=0x00000000000095e7
+ (double)_fontSizeOfView:(id)arg1 usingExecutor:(id)arg2;	// IMP=0x0000000000009526
+ (_Bool)_isSensitiveTextContentType:(id)arg1;	// IMP=0x000000000000950d
+ (void)_donateText:(id)arg1 withTitle:(id)arg2 debugText:(id)arg3 debugUrlString:(id)arg4 rawHTML:(id)arg5 leadImage:(id)arg6 snapshot:(id)arg7 uiElements:(id)arg8 extractionItems:(id)arg9 usingContextFromExecutor:(id)arg10;	// IMP=0x0000000000009306
+ (id)_bestImageForView:(id)arg1;	// IMP=0x0000000000009145
+ (id)_getNotableSuperviewClassNamesForView:(id)arg1;	// IMP=0x0000000000008ffa
+ (void)_donateContentsOfWindow:(id)arg1 usingExecutor:(id)arg2 withOptions:(unsigned long long)arg3;	// IMP=0x0000000000008434
+ (id)_firstAvailableUIViewControllerForUIView:(id)arg1;	// IMP=0x000000000000839b
+ (id)_allViewControllersFromUIViews:(id)arg1;	// IMP=0x00000000000081ea
+ (id)_descendantsRelevantForContentExtractionFromWindow:(id)arg1;	// IMP=0x0000000000007db4
+ (void)_descendantsRelevantForContentExtractionFromView:(id)arg1 intoArray:(id)arg2;	// IMP=0x0000000000007ae6
+ (_Bool)_isRelevantForExtractionWithView:(id)arg1;	// IMP=0x00000000000079cb
+ (void)extractFromScene:(id)arg1 usingExecutor:(id)arg2 withOptions:(unsigned long long)arg3;	// IMP=0x00000000000076f1
+ (void)initialize;	// IMP=0x000000000000737f
- (void).cxx_destruct;	// IMP=0x000000000000e5be
@property(nonatomic, getter=_scene, setter=_setScene:) __weak UIScene *_scene; // @synthesize _scene=__scene;
- (id)_descendantsRelevantForDebugControls:(id)arg1;	// IMP=0x000000000000e2ff
- (id)_containerViewForDebugButtons;	// IMP=0x000000000000df72
- (void)_didSelectDebugControl:(id)arg1;	// IMP=0x000000000000de16
- (void)_didSelectRecentsControl:(id)arg1;	// IMP=0x000000000000dd6e
- (void)_installDebuggingButton;	// IMP=0x000000000000da45
- (void)_installRecentsButton;	// IMP=0x000000000000d71c
- (void)_setUpDebuggingControlsIfPossibleAfterDelay:(double)arg1;	// IMP=0x000000000000d5e0
- (void)_installDebuggingControlsIfApplicable;	// IMP=0x000000000000d4a7
- (_Bool)_shouldInstallAppSwitcherControls;	// IMP=0x000000000000d41d
- (_Bool)_determineIfDebuggingControlsShouldBeAllowed;	// IMP=0x000000000000d39f
- (void)extractUsingExecutor:(id)arg1 withOptions:(unsigned long long)arg2;	// IMP=0x0000000000007676
- (void)_sceneWillInvalidate:(id)arg1;	// IMP=0x00000000000075af
- (id)initWithScene:(id)arg1;	// IMP=0x00000000000074c2

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
