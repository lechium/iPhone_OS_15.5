//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

#import <MediaPlayer/UIViewControllerAnimatedTransitioning-Protocol.h>
#import <MediaPlayer/UIViewControllerTransitioningDelegate-Protocol.h>

@class MPMediaControls, MPMediaControlsConfiguration, NSString;
@protocol MPMediaControlsViewControllerDelegate;

@interface MPMediaControlsViewController : UIViewController <UIViewControllerTransitioningDelegate, UIViewControllerAnimatedTransitioning>
{
    MPMediaControlsConfiguration *_configuration;	// 8 = 0x8
    CDUnknownBlockType _didDismissHandler;	// 16 = 0x10
    id <MPMediaControlsViewControllerDelegate> _delegate;	// 24 = 0x18
    MPMediaControls *_mediaControls;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000002e849
@property(retain, nonatomic) MPMediaControls *mediaControls; // @synthesize mediaControls=_mediaControls;
@property(nonatomic) __weak id <MPMediaControlsViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) CDUnknownBlockType didDismissHandler; // @synthesize didDismissHandler=_didDismissHandler;
- (void)animateTransition:(id)arg1;	// IMP=0x000000000002e7cf
- (double)transitionDuration:(id)arg1;	// IMP=0x000000000002e7c6
- (id)presentationControllerForPresentedViewController:(id)arg1 presentingViewController:(id)arg2 sourceViewController:(id)arg3;	// IMP=0x000000000002e756
- (id)animationControllerForDismissedController:(id)arg1;	// IMP=0x000000000002e74d
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;	// IMP=0x000000000002e744
- (void)setOverrideRouteSharingPolicy:(unsigned long long)arg1 routingContextUID:(id)arg2;	// IMP=0x000000000002e6c5
- (void)dismiss;	// IMP=0x000000000002e6a8
- (void)stopPrewarming;	// IMP=0x000000000002e68b
- (void)startPrewarming;	// IMP=0x000000000002e66e
- (void)prepareRemoteViewController;	// IMP=0x000000000002e65c
- (void)_present;	// IMP=0x000000000002e56a
- (void)_createMediaControlsIfNeeded;	// IMP=0x000000000002e4af
@property(readonly, nonatomic) MPMediaControlsConfiguration *configuration; // @synthesize configuration=_configuration;
- (_Bool)prefersStatusBarHidden;	// IMP=0x000000000002e341
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x000000000002e300
- (void)viewDidLoad;	// IMP=0x000000000002e2bf
- (id)initWithConfiguration:(id)arg1;	// IMP=0x000000000002e228
- (id)init;	// IMP=0x000000000002e214

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

