//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SpringBoardUIServices/SBUIRemoteAlertServiceViewController.h>

@class ACAccount, AMSBag, ApprovalRequest, NSString, UIViewController;

@interface RemoteProductViewController : SBUIRemoteAlertServiceViewController
{
    ACAccount *_account;	// 8 = 0x8
    AMSBag *_bag;	// 16 = 0x10
    UIViewController *_childViewController;	// 24 = 0x18
    ApprovalRequest *_request;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0020000000003c97
@property(retain, nonatomic) ApprovalRequest *request; // @synthesize request=_request;
@property(nonatomic) __weak UIViewController *childViewController; // @synthesize childViewController=_childViewController;
@property(retain, nonatomic) AMSBag *bag; // @synthesize bag=_bag;
@property(retain, nonatomic) ACAccount *account; // @synthesize account=_account;
- (void)productViewController:(id)arg1 didFinishWithResult:(long long)arg2;	// IMP=0x0010000000003bd1
- (void)productViewControllerDidFinishWithAction:(unsigned long long)arg1;	// IMP=0x0010000000003746
- (void)presentationControllerDidDismiss:(id)arg1;	// IMP=0x001000000000372f
- (void)_updateRequestWithAction:(long long)arg1;	// IMP=0x00100000000032fb
- (void)_presentErrorAlert;	// IMP=0x001000000000309a
- (id)_viewControllerProxy;	// IMP=0x0010000000002e8f
- (void)_presentWebProductViewController;	// IMP=0x0010000000002ba0
- (void)_presentStoreProductViewController;	// IMP=0x001000000000222d
- (void)handleButtonActions:(id)arg1;	// IMP=0x0010000000002214
- (void)configureWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000002021
- (void)dismissViewControllerAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000001e3b
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x0010000000001c46
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0010000000001af8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
