//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSExtension, UIViewController, _UIWaitingForRemoteViewContainerViewController;
@protocol NSCopying;

@interface _UIResilientRemoteViewContainerViewController
{
    UIViewController *_remoteViewController;	// 400 = 0x190
    _Bool _delayingDisplayOfRemoteView;	// 408 = 0x198
    NSExtension *_extension;	// 416 = 0x1a0
    id <NSCopying> _extensionRequestIdentifier;	// 424 = 0x1a8
    UIViewController *_containedViewController;	// 432 = 0x1b0
    _UIWaitingForRemoteViewContainerViewController *_waitingController;	// 440 = 0x1b8
    UIViewController *_errorViewController;	// 448 = 0x1c0
}

+ (id)instantiateWithExtension:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000005bb3c3
- (void).cxx_destruct;	// IMP=0x00000000005bc042
@property(nonatomic) _Bool delayingDisplayOfRemoteView; // @synthesize delayingDisplayOfRemoteView=_delayingDisplayOfRemoteView;
@property(retain, nonatomic) UIViewController *errorViewController; // @synthesize errorViewController=_errorViewController;
@property(retain, nonatomic) _UIWaitingForRemoteViewContainerViewController *waitingController; // @synthesize waitingController=_waitingController;
@property(retain, nonatomic) UIViewController *containedViewController; // @synthesize containedViewController=_containedViewController;
@property(copy, nonatomic) id <NSCopying> extensionRequestIdentifier; // @synthesize extensionRequestIdentifier=_extensionRequestIdentifier;
@property(retain, nonatomic) NSExtension *extension; // @synthesize extension=_extension;
@property(readonly, nonatomic) id remoteViewController; // @synthesize remoteViewController=_remoteViewController;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1;	// IMP=0x00000000005bbf11
- (void)_displayError:(id)arg1;	// IMP=0x00000000005bbccb
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x00000000005bbc26
- (void)invalidate;	// IMP=0x00000000005bbbd9
- (void)dealloc;	// IMP=0x00000000005bbb9b
- (void)viewWillLayoutSubviews;	// IMP=0x00000000005bbac7
- (void)endDelayingDisplayOfRemoteController;	// IMP=0x00000000005bb8af
- (void)delayDisplayOfRemoteController;	// IMP=0x00000000005bb89e
- (void)_displayRemoteViewController;	// IMP=0x00000000005bb83f
- (id)initWithExtension:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000005bb42f
- (struct CGRect)_defaultInitialViewFrame;	// IMP=0x00000000005bb35d

@end

