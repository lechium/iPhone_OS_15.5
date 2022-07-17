//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <WorkflowKit/WFAppInstalledResource.h>

#import <ActionKitUI/SKStoreProductViewControllerDelegate-Protocol.h>
#import <ActionKitUI/WFAppSearchViewControllerDelegate-Protocol.h>

@class NSString, SKStoreProductViewController;

@interface WFAppInstalledResource (UIKit) <WFAppSearchViewControllerDelegate, SKStoreProductViewControllerDelegate>
- (void)appSearchViewController:(id)arg1 didFinishWithApp:(id)arg2;	// IMP=0x0000000000033992
- (void)appSearchViewControllerDidCancel:(id)arg1;	// IMP=0x000000000003393e
- (void)productViewControllerDidFinish:(id)arg1;	// IMP=0x00000000000338b0
- (void)showAppStoreForApp:(id)arg1 userInterface:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000003369c
- (void)attemptRecoveryFromError:(id)arg1 optionIndex:(unsigned long long)arg2 userInterface:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0000000000033389
@property(retain, nonatomic) SKStoreProductViewController *viewController;
@property(copy, nonatomic) CDUnknownBlockType recoveryCompletionHandler;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end
