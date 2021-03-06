//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

#import <PhotosUI/CNAutocompleteResultsTableViewControllerDelegate-Protocol.h>
#import <PhotosUI/CNAutocompleteSearchConsumer-Protocol.h>
#import <PhotosUI/CNComposeRecipientTextViewDelegate-Protocol.h>
#import <PhotosUI/CNContactPickerDelegate-Protocol.h>
#import <PhotosUI/IDSBatchIDQueryControllerDelegate-Protocol.h>
#import <PhotosUI/UIPopoverPresentationControllerDelegate-Protocol.h>

@class CNAutocompleteResultsTableViewController, CNAutocompleteSearchManager, CNComposeRecipientTextView, CNContactPickerViewController, CNContactStore, IDSBatchIDQueryController, NSArray, NSMutableSet, NSNumber, NSString, UIScrollView;

@interface PUPhotoStreamRecipientViewController : UIViewController <UIPopoverPresentationControllerDelegate, IDSBatchIDQueryControllerDelegate, CNContactPickerDelegate, CNAutocompleteResultsTableViewControllerDelegate, CNComposeRecipientTextViewDelegate, CNAutocompleteSearchConsumer>
{
    CNAutocompleteResultsTableViewController *_searchResultsTableViewController;	// 8 = 0x8
    CNComposeRecipientTextView *_recipientView;	// 16 = 0x10
    UIScrollView *_recipientContainerView;	// 24 = 0x18
    CNAutocompleteSearchManager *_searchManager;	// 32 = 0x20
    NSNumber *_currentSearchTaskID;	// 40 = 0x28
    IDSBatchIDQueryController *_idsBatchIDQueryController;	// 48 = 0x30
    NSMutableSet *_validPhoneNumbers;	// 56 = 0x38
    CNContactPickerViewController *_contactPickerPresentedController;	// 64 = 0x40
    struct CGSize _recipientViewSize;	// 72 = 0x48
    double _lastHeight;	// 88 = 0x58
    CNContactStore *_contactStore;	// 96 = 0x60
    id _delegate;	// 104 = 0x68
    double _bottomTableOffset;	// 112 = 0x70
}

+ (void)recordRecentInvitationRecipient:(id)arg1 displayName:(id)arg2 date:(id)arg3;	// IMP=0x00000000003232e7
- (void).cxx_destruct;	// IMP=0x000000000032240f
@property(nonatomic) double bottomTableOffset; // @synthesize bottomTableOffset=_bottomTableOffset;
@property(nonatomic) __weak id delegate; // @synthesize delegate=_delegate;
- (void)popoverPresentationControllerDidDismissPopover:(id)arg1;	// IMP=0x0000000000322364
- (void)prepareForPopoverPresentation:(id)arg1;	// IMP=0x0000000000322274
- (void)_dismissContactPicker;	// IMP=0x00000000003221b5
- (void)contactPicker:(id)arg1 didSelectContactProperty:(id)arg2;	// IMP=0x0000000000321d95
- (void)contactPicker:(id)arg1 didSelectContact:(id)arg2;	// IMP=0x0000000000321bff
- (void)contactPickerDidCancel:(id)arg1;	// IMP=0x0000000000321bed
- (void)_addRecipientForContact:(id)arg1 address:(id)arg2 kind:(unsigned long long)arg3;	// IMP=0x0000000000321a8f
- (void)autocompleteResultsController:(id)arg1 tintColorForRecipient:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000003219b8
- (void)autocompleteResultsController:(id)arg1 didRequestInfoAboutRecipient:(id)arg2;	// IMP=0x00000000003218cd
- (void)autocompleteResultsController:(id)arg1 didSelectRecipient:(id)arg2 atIndex:(unsigned long long)arg3;	// IMP=0x0000000000321799
- (void)batchQueryController:(id)arg1 updatedDestinationsStatus:(id)arg2 onService:(id)arg3 error:(id)arg4;	// IMP=0x0000000000321581
- (void)_setSearchResults:(id)arg1;	// IMP=0x0000000000321269
- (id)_selectedNormalizedPhoneForRecipient:(id)arg1;	// IMP=0x000000000032120b
- (void)finishedSearchingForAutocompleteResults;	// IMP=0x00000000003211ea
- (void)consumeAutocompleteSearchResults:(id)arg1 taskID:(id)arg2;	// IMP=0x00000000003211d8
- (id)_searchManager;	// IMP=0x00000000003210c3
- (void)_searchForRecipientWithText:(id)arg1;	// IMP=0x0000000000320fb3
- (id)composeRecipientView:(id)arg1 composeRecipientForAddress:(id)arg2;	// IMP=0x0000000000320da5
- (void)composeRecipientView:(id)arg1 disambiguateRecipientForAtom:(id)arg2;	// IMP=0x0000000000320ceb
- (void)composeRecipientView:(id)arg1 showPersonCardForAtom:(id)arg2;	// IMP=0x0000000000320913
- (void)composeRecipientViewDidFinishPickingRecipient:(id)arg1;	// IMP=0x0000000000320901
- (void)composeRecipientViewRequestAddRecipient:(id)arg1;	// IMP=0x0000000000320693
- (void)composeRecipientView:(id)arg1 didChangeSize:(struct CGSize)arg2;	// IMP=0x0000000000320597
- (void)composeRecipientView:(id)arg1 textDidChange:(id)arg2;	// IMP=0x00000000003204f0
- (void)composeRecipientView:(id)arg1 didRemoveRecipient:(id)arg2;	// IMP=0x0000000000320474
- (void)composeRecipientView:(id)arg1 didFinishEnteringAddress:(id)arg2;	// IMP=0x000000000032038e
- (void)composeRecipientView:(id)arg1 didAddRecipient:(id)arg2;	// IMP=0x0000000000320304
@property(readonly, nonatomic) CNContactStore *contactStore; // @synthesize contactStore=_contactStore;
@property(readonly, nonatomic) NSArray *recipients;
- (void)viewWillLayoutSubviews;	// IMP=0x000000000031fe3c
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;	// IMP=0x000000000031fe2a
- (void)makeRecipientViewFirstResponder;	// IMP=0x000000000031fde2
- (void)makeRecipientViewResignFirstResponder;	// IMP=0x000000000031fd9a
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x000000000031fca3
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x000000000031fc0b
- (void)viewDidLoad;	// IMP=0x000000000031f8b3
- (void)dealloc;	// IMP=0x000000000031f7fa
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x000000000031f4df

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

