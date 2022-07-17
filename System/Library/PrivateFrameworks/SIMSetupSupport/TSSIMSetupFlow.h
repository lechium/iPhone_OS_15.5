//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SIMSetupSupport/TSSIMSetupFlowDelegate-Protocol.h>

@class NSString, UIViewController;
@protocol TSSIMSetupDelegate;

@interface TSSIMSetupFlow : NSObject <TSSIMSetupFlowDelegate>
{
    id <TSSIMSetupDelegate> _delegate;	// 8 = 0x8
    UIViewController *_topViewController;	// 16 = 0x10
}

+ (id)initWithActivationCodeOnlyFlow;	// IMP=0x0000000000009db4
+ (id)initWithAppName:(id)arg1 requireSetup:(_Bool)arg2 skipGeneralInstallConsent:(_Bool)arg3;	// IMP=0x0000000000009cbe
+ (id)initWithAppName:(id)arg1 requireSetup:(_Bool)arg2;	// IMP=0x0000000000009bd0
+ (id)initActivationCodeRequireSetup:(_Bool)arg1;	// IMP=0x0000000000009b09
+ (id)initWithSetupFlowWithIccid:(id)arg1 showAddPlan:(_Bool)arg2;	// IMP=0x0000000000009a18
+ (id)flowWithOptions:(id)arg1;	// IMP=0x00000000000094d2
+ (id)createTSRemotePlanWebsheetContext:(id)arg1;	// IMP=0x00000000000092e3
+ (id)initWithOptions:(id)arg1;	// IMP=0x00000000000092ca
+ (void)needsToRunUsingMessageSession:(id)arg1 transferablePlanOnSource:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000000092b4
+ (void)needsToRunUsingMessageSession:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000000929e
+ (void)needsToRun:(CDUnknownBlockType)arg1;	// IMP=0x0000000000009288
- (void).cxx_destruct;	// IMP=0x000000000000a887
@property __weak UIViewController *topViewController; // @synthesize topViewController=_topViewController;
@property __weak id <TSSIMSetupDelegate> delegate; // @synthesize delegate=_delegate;
- (void)receivedResponse;	// IMP=0x000000000000a7ee
- (void)waitForResponse:(id)arg1;	// IMP=0x000000000000a6a5
- (void)userDidTapCancel;	// IMP=0x000000000000a602
- (void)viewControllerDidComplete:(id)arg1;	// IMP=0x000000000000a596
- (void)navigateToNextPaneFrom:(id)arg1 navigationController:(id)arg2;	// IMP=0x0000000000009e98
- (id)nextViewControllerFrom:(id)arg1;	// IMP=0x0000000000009e90
- (void)firstViewController:(CDUnknownBlockType)arg1;	// IMP=0x0000000000009e7a
- (id)firstViewController;	// IMP=0x0000000000009e72

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
