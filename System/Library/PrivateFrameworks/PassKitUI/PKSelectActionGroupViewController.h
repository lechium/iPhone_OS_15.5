//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

#import <PassKitUI/PKRemoteActionGroupViewControllerDelegate-Protocol.h>
#import <PassKitUI/PKSelectActionGroupViewDelegate-Protocol.h>

@class NSArray, NSString, PKPaymentPass, PKPaymentPassActionGroup, PKPaymentWebService, PKPerformActionPassView, PKSelectActionGroupView;
@protocol PKPaymentDataProvider, PKSelectActionGroupViewControllerDelegate;

@interface PKSelectActionGroupViewController : UIViewController <PKSelectActionGroupViewDelegate, PKRemoteActionGroupViewControllerDelegate>
{
    PKPerformActionPassView *_passView;	// 8 = 0x8
    PKPaymentPass *_pass;	// 16 = 0x10
    NSArray *_actionGroups;	// 24 = 0x18
    PKSelectActionGroupView *_actionGroupView;	// 32 = 0x20
    PKPaymentPassActionGroup *_selectedActionGroup;	// 40 = 0x28
    id <PKPaymentDataProvider> _paymentDataProvider;	// 48 = 0x30
    PKPaymentWebService *_webService;	// 56 = 0x38
    id <PKSelectActionGroupViewControllerDelegate> _delegate;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x00000000003cf805
@property(nonatomic) __weak id <PKSelectActionGroupViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)remoteGroupActionsViewControllerDidPerformFetchActionGroup:(id)arg1;	// IMP=0x00000000003cf75f
- (void)remoteGroupActionsViewControllerDidCancel:(id)arg1;	// IMP=0x00000000003cf6e6
- (void)selectActionGroupViewDidSelectActionGroup:(id)arg1;	// IMP=0x00000000003cf6d2
- (void)setRightBarButtonEnabled:(_Bool)arg1;	// IMP=0x00000000003cf663
- (void)_cancelButtonPressed:(id)arg1;	// IMP=0x00000000003cf617
- (void)_rightBarButtonPressed:(id)arg1;	// IMP=0x00000000003cf544
- (_Bool)pkui_disablesAutomaticDismissalUponEnteringBackground;	// IMP=0x00000000003cf53c
- (void)viewWillLayoutSubviews;	// IMP=0x00000000003cf307
- (void)_reloadActionGroupView;	// IMP=0x00000000003cf1fe
- (void)viewDidLoad;	// IMP=0x00000000003cf0cd
- (id)initWithPass:(id)arg1 actionGroups:(id)arg2 paymentDataProvider:(id)arg3 webService:(id)arg4;	// IMP=0x00000000003ceec6

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
