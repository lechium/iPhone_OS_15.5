//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PlatterKit/UIContextMenuInteractionDelegate_Private-Protocol.h>

@class NSString, UIContextMenuInteraction, UIViewController;
@protocol PLExpandedPlatterInteractionHosting, PLExpandedPlatterInteractionManagerDelegate;

@interface PLExpandedPlatterInteractionManager : NSObject <UIContextMenuInteractionDelegate_Private>
{
    UIContextMenuInteraction *_contextMenuInteraction;	// 8 = 0x8
    CDUnknownBlockType _cachedCompletion;	// 16 = 0x10
    struct {
        unsigned int delegateImplementsIdentifier:1;
        unsigned int delegateImplementsContentViewController:1;
        unsigned int delegateImplementsMenu:1;
        unsigned int delegateImplementsShouldBeginInteraction:1;
        unsigned int delegateImplementsWillPresentContent:1;
        unsigned int delegateImplementsShouldCommitInteraction:1;
        unsigned int delegateImplementsShouldAllowInitialSwipeToDismiss:1;
        unsigned int delegateImplementsWillDismissContent:1;
        unsigned int delegateImplementsShouldAllowLongPressGesture:1;
    } _expandedPlatterInteractionManagerDelegateFlags;	// 24 = 0x18
    _Bool _initialPanOccurred;	// 28 = 0x1c
    UIViewController<PLExpandedPlatterInteractionHosting> *_presentingViewController;	// 32 = 0x20
    id <PLExpandedPlatterInteractionManagerDelegate> _delegate;	// 40 = 0x28
}

+ (void)initialize;	// IMP=0x0000000000020ef9
- (void).cxx_destruct;	// IMP=0x0000000000021e65
@property(readonly, nonatomic) __weak id <PLExpandedPlatterInteractionManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) __weak UIViewController<PLExpandedPlatterInteractionHosting> *presentingViewController; // @synthesize presentingViewController=_presentingViewController;
- (void)_setPresentingViewControllerHighlighted:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x0000000000021d1b
- (id)_contextMenuConfigurationIdentifier;	// IMP=0x0000000000021cc4
- (id)_identifier;	// IMP=0x0000000000021c0a
- (unsigned long long)_activationMethodForContextMenuInteraction:(id)arg1;	// IMP=0x0000000000021bc1
- (void)_contextMenuInteraction:(id)arg1 shouldPresentWithCompletion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000021b54
- (_Bool)_contextMenuInteractionShouldAllowSwipeToDismiss:(id)arg1;	// IMP=0x0000000000021af2
- (id)_contextMenuInteraction:(id)arg1 styleForMenuWithConfiguration:(id)arg2;	// IMP=0x00000000000219c7
- (void)contextMenuInteraction:(id)arg1 willEndForConfiguration:(id)arg2 animator:(id)arg3;	// IMP=0x000000000002190b
- (void)contextMenuInteraction:(id)arg1 willDisplayMenuForConfiguration:(id)arg2 animator:(id)arg3;	// IMP=0x00000000000217d2
- (id)contextMenuInteraction:(id)arg1 previewForHighlightingMenuWithConfiguration:(id)arg2;	// IMP=0x000000000002161d
- (id)contextMenuInteraction:(id)arg1 configurationForMenuAtLocation:(struct CGPoint)arg2;	// IMP=0x000000000002128c
@property(readonly, nonatomic, getter=reachedForceThreshold) _Bool reachedForceThreshold;
- (void)dismiss;	// IMP=0x000000000002123d
- (void)updateVisibleMenuWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000021220
- (void)presentAtLocation:(struct CGPoint)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000021172
- (id)initWithPresentingViewController:(id)arg1 delegate:(id)arg2;	// IMP=0x0000000000020f36

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
