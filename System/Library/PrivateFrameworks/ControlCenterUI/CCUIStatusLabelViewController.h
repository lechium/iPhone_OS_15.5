//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class CCUIStatusUpdateQueue, NSArray, NSTimer;
@protocol CCUIStatusLabelViewControllerDelegate;

@interface CCUIStatusLabelViewController : UIViewController
{
    CCUIStatusUpdateQueue *_updateQueue;	// 8 = 0x8
    NSArray *_statusLabels;	// 16 = 0x10
    unsigned long long _currentStatusLabelIndex;	// 24 = 0x18
    unsigned long long _presentationState;	// 32 = 0x20
    NSTimer *_presentationTimer;	// 40 = 0x28
    id <CCUIStatusLabelViewControllerDelegate> _delegate;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0000000000026b59
@property(nonatomic) __weak id <CCUIStatusLabelViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_notifyDelegateDidFinishStatusUpdates;	// IMP=0x0000000000026aa2
- (void)_notifyDelegateWillBeginStatusUpdates;	// IMP=0x0000000000026a18
- (void)_fadeOutStatusLabel:(id)arg1;	// IMP=0x0000000000026a00
- (void)_fadeInStatusLabel:(id)arg1;	// IMP=0x00000000000269e3
- (unsigned long long)_advancePresentationStateFromFadeOut;	// IMP=0x00000000000269d1
- (unsigned long long)_advancePresentationStateFromPresenting;	// IMP=0x0000000000026426
- (unsigned long long)_advancePresentationStateFromFadeIn;	// IMP=0x00000000000262fc
- (unsigned long long)_advancePresentationStateFromReady;	// IMP=0x0000000000025e8f
- (void)_advancePresentationState;	// IMP=0x0000000000025e57
- (void)_resetPresentationStateAnimated:(_Bool)arg1;	// IMP=0x00000000000258de
- (_Bool)_canShowWhileLocked;	// IMP=0x00000000000258d6
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x0000000000025893
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x0000000000025848
- (void)viewWillLayoutSubviews;	// IMP=0x0000000000025671
- (void)viewDidLoad;	// IMP=0x0000000000025435
- (void)enqueueStatusUpdate:(id)arg1 forIdentifier:(id)arg2;	// IMP=0x00000000000253e9
@property(nonatomic) unsigned long long verticalAlignment; // @dynamic verticalAlignment;
@property(nonatomic) struct UIEdgeInsets edgeInsets; // @dynamic edgeInsets;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x000000000002502d

@end
