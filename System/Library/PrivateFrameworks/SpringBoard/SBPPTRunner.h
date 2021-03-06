//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SpringBoard/CCUIPPTHostDelegate-Protocol.h>
#import <SpringBoard/NCNotificationViewControllerObserving-Protocol.h>

@class NSString;

@interface SBPPTRunner : NSObject <CCUIPPTHostDelegate, NCNotificationViewControllerObserving>
{
}

+ (id)sharedInstance;	// IMP=0x00000000006f0845
+ (_Bool)isPageManagementTest:(id)arg1;	// IMP=0x00000000005317d9
+ (id)_operationToUnstashStashedPIP;	// IMP=0x0000000000600036
+ (id)_operationToStashPIP;	// IMP=0x00000000005fff51
+ (id)_operationToRestoreVideoFromPIP;	// IMP=0x00000000005ffe87
+ (id)_operationToPutVideoInPIP;	// IMP=0x00000000005ffdbd
+ (_Bool)isAppLibraryTest:(id)arg1;	// IMP=0x00000000006ceb46
- (_Bool)runTestWithName:(id)arg1 options:(id)arg2;	// IMP=0x00000000006f08ca
- (void)prepareForControlCenterPPTHostState:(unsigned long long)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000049afd6
- (void)_runFloatingDockDismissTestWithOptions:(id)arg1;	// IMP=0x00000000004d107f
- (void)_runFloatingDockBringupTestWithOptions:(id)arg1;	// IMP=0x00000000004d0d37
- (void)longLookDidDismissForNotificationViewController:(id)arg1;	// IMP=0x00000000004d3aa3
- (void)longLookWillDismissForNotificationViewController:(id)arg1;	// IMP=0x00000000004d3a36
- (void)longLookDidPresentForNotificationViewController:(id)arg1;	// IMP=0x00000000004d39c9
- (void)longLookWillPresentForNotificationViewController:(id)arg1;	// IMP=0x00000000004d395c
- (void)_runNotificationBannerTransitionTestWithOptions:(id)arg1;	// IMP=0x00000000004d3514
- (void)_runNotificationClearLongLookTransitionTestWithOptions:(id)arg1;	// IMP=0x00000000004d2ffe
- (void)_runNotificationReParkLongLookTransitionTestWithOptions:(id)arg1;	// IMP=0x00000000004d2a95
- (void)_runNotificationShortToLongLookTransitionTestWithOptions:(id)arg1;	// IMP=0x00000000004d2543
- (void)assistantDidAppear:(id)arg1;	// IMP=0x00000000004ed3ae
- (void)assistantWillAppear:(id)arg1;	// IMP=0x00000000004ed2b8
- (void)_runSiriTestWithName:(id)arg1 options:(id)arg2;	// IMP=0x00000000004ed112
- (void)_runPageManagementPresentTestWithName:(id)arg1 options:(id)arg2;	// IMP=0x000000000053195d
- (void)_runPageManagementTestWithName:(id)arg1 options:(id)arg2;	// IMP=0x00000000005318e5
- (void)_setCoverSheetPresentationManagerTransitionCallbacksForTestName:(id)arg1 operation:(id)arg2;	// IMP=0x00000000005924b3
- (id)_operationToDismissCoverSheetForTestWithName:(id)arg1;	// IMP=0x00000000005923da
- (id)_operationToPresentCoverSheetForTestWithName:(id)arg1;	// IMP=0x00000000005922e5
- (void)_runCoverSheetDismissToSafariTestWithOptions:(id)arg1;	// IMP=0x0000000000592169
- (void)_runCoverSheetPresentOverSafariTestWithOptions:(id)arg1;	// IMP=0x0000000000591fe5
- (void)_runCoverSheetDismissTestWithOptions:(id)arg1;	// IMP=0x0000000000591e73
- (void)_runCoverSheetPresentTestWithOptions:(id)arg1;	// IMP=0x0000000000591cfc
- (_Bool)_runCoverSheetTestWithName:(id)arg1 options:(id)arg2;	// IMP=0x0000000000591c10
- (void)_runPiPAutoUnstashAndRestoreByExitingSwitcherBackToAppTestWithOptions:(id)arg1;	// IMP=0x0000000000600fe9
- (void)_runPiPAutoStashByEnteringSwitcherTestWithOptions:(id)arg1;	// IMP=0x0000000000600fd7
- (void)_runPiPManualUnstashTestWithOptions:(id)arg1;	// IMP=0x0000000000600fc5
- (void)_runPiPManualStashTestWithOptions:(id)arg1;	// IMP=0x0000000000600fb3
- (void)_runPiPBasicRestoreTestWithOptions:(id)arg1;	// IMP=0x0000000000600fa1
- (void)_runPIPAutoUnstashAndRestoreByExitingSwitcherBackToAppTestWithOptions:(id)arg1;	// IMP=0x0000000000600c49
- (void)_runPIPAutoStashByEnteringSwitcherTestWithOptions:(id)arg1;	// IMP=0x0000000000600997
- (void)_runPIPManualUnstashTestWithOptions:(id)arg1;	// IMP=0x0000000000600667
- (void)_runPIPManualStashTestWithOptions:(id)arg1;	// IMP=0x000000000060037a
- (void)_runPIPBasicRestoreTestWithOptions:(id)arg1;	// IMP=0x00000000006000c4
- (void)_configureParams:(id)arg1 forScrollView:(id)arg2;	// IMP=0x00000000006d03c8
- (void)_runPullToAppLibrarySearchTest;	// IMP=0x00000000006d0153
- (void)_runScrollWithinExpandedPodTest;	// IMP=0x00000000006cfbe3
- (void)_runLibrarySearchTest;	// IMP=0x00000000006cf7e2
- (void)_runScrollDeweyTest;	// IMP=0x00000000006cf3a9
- (void)_runSwipeFromDeweyTest;	// IMP=0x00000000006cf1a0
- (void)_runSwipeToDeweyTest;	// IMP=0x00000000006cefca
- (void)_runAppLibraryPadPresent;	// IMP=0x00000000006cedb7
- (void)_runAppLibraryTestWithName:(id)arg1 options:(id)arg2;	// IMP=0x00000000006cec94

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

