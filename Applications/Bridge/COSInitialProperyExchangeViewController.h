//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class NSString;
@protocol COSBuddyControllerDelegate;

@interface COSInitialProperyExchangeViewController : UIViewController
{
    _Bool _canBeginActivating;	// 8 = 0x8
    _Bool _didBeginActivating;	// 9 = 0x9
    id <COSBuddyControllerDelegate> _delegate;	// 16 = 0x10
}

+ (_Bool)controllerNeedsToRun;	// IMP=0x0020000000047bc3
- (void).cxx_destruct;	// IMP=0x00200000000496e0
@property(nonatomic) _Bool didBeginActivating; // @synthesize didBeginActivating=_didBeginActivating;
@property(nonatomic) _Bool canBeginActivating; // @synthesize canBeginActivating=_canBeginActivating;
@property(nonatomic) __weak id <COSBuddyControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)endPerformancePhases;	// IMP=0x00100000000495cc
- (void)completedHoldTasks;	// IMP=0x00100000000494b0
- (void)deferredActivationCompleted;	// IMP=0x00100000000493aa
- (void)watchDidSelectLanguageAndLocale:(unsigned short)arg1;	// IMP=0x0010000000048f6f
- (void)tellWatchToDoLanguageAndLocalePrep;	// IMP=0x0010000000048d69
- (void)completedActivationPhase;	// IMP=0x0010000000048cc4
- (void)activationDeferredForUserAction;	// IMP=0x0010000000048c1f
- (void)_prepareForLanguageChangePostActivation;	// IMP=0x0010000000048b25
- (void)beginActivationIfPossible;	// IMP=0x0010000000048737
- (void)completedInitialProperyExchangePhase;	// IMP=0x00100000000482df
- (id)holdActivityIdentifier;	// IMP=0x0010000000048281
- (_Bool)controllerAllowsNavigatingBackTo;	// IMP=0x0010000000048279
- (id)localizedWaitScreenDescription;	// IMP=0x00100000000481b1
- (void)enteredCompatibilityState:(id)arg1;	// IMP=0x001000000004804f
- (double)waitScreenPushGracePeriod;	// IMP=0x0010000000047e7f
- (_Bool)holdWithWaitScreen;	// IMP=0x0010000000047e77
- (_Bool)holdBeforeDisplaying;	// IMP=0x0010000000047df1
- (void)dealloc;	// IMP=0x0010000000047d25

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
