//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PassKitUI/PKSubcredentialMessageComposeViewControllerDelegate-Protocol.h>

@class NSArray, NSString, PKAppletSubcredentialSharingRequest, PKPaymentPass, PKSharedCredentialsGroupController, PKSubcredentialMessageComposeViewController;
@protocol PKAppletSubcredentialSharingExplanationViewControllerDelegate;

@interface PKAppletSubcredentialEntitlementPickerViewController <PKSubcredentialMessageComposeViewControllerDelegate>
{
    PKPaymentPass *_pass;	// 8 = 0x8
    PKSharedCredentialsGroupController *_groupController;	// 16 = 0x10
    PKAppletSubcredentialSharingRequest *_sharingRequest;	// 24 = 0x18
    NSArray *_supportedEntitlements;	// 32 = 0x20
    long long _selectedEntitlementIndex;	// 40 = 0x28
    id <PKAppletSubcredentialSharingExplanationViewControllerDelegate> _delegate;	// 48 = 0x30
    _Bool _isSharing;	// 56 = 0x38
    PKSubcredentialMessageComposeViewController *_messageComposeViewController;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x00000000000ca8db
@property(retain, nonatomic) PKSubcredentialMessageComposeViewController *messageComposeViewController; // @synthesize messageComposeViewController=_messageComposeViewController;
- (void)messageComposeViewControllerDidFinishWithResult:(_Bool)arg1;	// IMP=0x00000000000ca7ec
- (void)handleSharedButton;	// IMP=0x00000000000ca5de
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x00000000000ca439
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x00000000000ca117
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x00000000000ca0fa
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x00000000000ca0ef
- (void)viewDidLoad;	// IMP=0x00000000000c9e67
- (id)initWithSharedCredentialsGroupController:(id)arg1 delegate:(id)arg2 sharingRequest:(id)arg3;	// IMP=0x00000000000c9c8a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

