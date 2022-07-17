//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

#import <SiriUICore/SUICProgressStateMachineObserving-Protocol.h>

@class NSString, SUICProgressIndicatorView;
@protocol SUICProgressIndicatorViewControllerDataSource;

@interface SUICProgressIndicatorViewController : UIViewController <SUICProgressStateMachineObserving>
{
    SUICProgressIndicatorView *_progressIndicatorView;	// 8 = 0x8
    id <SUICProgressIndicatorViewControllerDataSource> _dataSource;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000000efb8
@property(nonatomic) __weak id <SUICProgressIndicatorViewControllerDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(retain, nonatomic, getter=_progressIndicatorView, setter=_setProgressIndicatorView:) SUICProgressIndicatorView *progressIndicatorView; // @synthesize progressIndicatorView=_progressIndicatorView;
- (void)progressStateMachine:(id)arg1 ignoredEvent:(unsigned long long)arg2;	// IMP=0x000000000000ee33
- (void)progressStateMachine:(id)arg1 didTransitionToState:(unsigned long long)arg2 fromState:(unsigned long long)arg3 forEvent:(unsigned long long)arg4;	// IMP=0x000000000000e5de
- (_Bool)_canShowWhileLocked;	// IMP=0x000000000000e5d6
- (void)loadView;	// IMP=0x000000000000e55f
- (_Bool)_shouldAcceptEventsFromStateMachine:(id)arg1;	// IMP=0x000000000000e4db
- (id)_stateMachine;	// IMP=0x000000000000e47c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
