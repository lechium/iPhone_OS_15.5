//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class BSProcessHandle, SBTransientOverlayPresentationManager, SBWorkspaceTransientOverlay;

@interface SBWorkspaceTransientOverlayTransitionContext
{
    _Bool _animated;	// 16 = 0x10
    _Bool _shouldDismissSiriUponPresentation;	// 17 = 0x11
    _Bool _shouldPreserveAppSwitcher;	// 18 = 0x12
    SBTransientOverlayPresentationManager *_presentationManager;	// 24 = 0x18
    SBWorkspaceTransientOverlay *_transientOverlay;	// 32 = 0x20
    long long _transitionType;	// 40 = 0x28
    BSProcessHandle *_originatingProcess;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000000056bf21
@property(retain, nonatomic) BSProcessHandle *originatingProcess; // @synthesize originatingProcess=_originatingProcess;
@property(nonatomic) long long transitionType; // @synthesize transitionType=_transitionType;
@property(retain, nonatomic) SBWorkspaceTransientOverlay *transientOverlay; // @synthesize transientOverlay=_transientOverlay;
@property(retain, nonatomic) SBTransientOverlayPresentationManager *presentationManager; // @synthesize presentationManager=_presentationManager;
@property(nonatomic) _Bool shouldPreserveAppSwitcher; // @synthesize shouldPreserveAppSwitcher=_shouldPreserveAppSwitcher;
@property(nonatomic) _Bool shouldDismissSiriUponPresentation; // @synthesize shouldDismissSiriUponPresentation=_shouldDismissSiriUponPresentation;
@property(nonatomic, getter=isAnimated) _Bool animated; // @synthesize animated=_animated;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;	// IMP=0x000000000056bcb2
- (id)compactDescriptionBuilderWithMultilinePrefix:(id)arg1;	// IMP=0x000000000056bbe9
- (id)init;	// IMP=0x000000000056bb9f

@end

