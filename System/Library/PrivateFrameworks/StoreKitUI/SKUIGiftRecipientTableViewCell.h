//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITableViewCell.h>

#import <StoreKitUI/CNComposeRecipientTextViewDelegate-Protocol.h>
#import <StoreKitUI/CNContactPickerDelegate-Protocol.h>
#import <StoreKitUI/SKUIGiftContactSearchDelegate-Protocol.h>

@class CNComposeRecipientTextView, CNContactPickerViewController, CNContactStore, NSArray, NSAttributedString, NSString, SKUIGiftContactSearchController, UILabel, UIView;

__attribute__((visibility("hidden")))
@interface SKUIGiftRecipientTableViewCell : UITableViewCell <CNContactPickerDelegate, CNComposeRecipientTextViewDelegate, SKUIGiftContactSearchDelegate>
{
    CNContactStore *_contactStore;	// 8 = 0x8
    CNContactPickerViewController *_contactPickerController;	// 16 = 0x10
    UILabel *_placeholderLabel;	// 24 = 0x18
    CNComposeRecipientTextView *_recipientView;	// 32 = 0x20
    SKUIGiftContactSearchController *_searchController;	// 40 = 0x28
    UIView *_topBorderView;	// 48 = 0x30
    _Bool _didLayoutSubviews;	// 56 = 0x38
    _Bool _leftToRight;	// 57 = 0x39
}

- (void).cxx_destruct;	// IMP=0x00000000002ec74f
@property(nonatomic) _Bool leftToRight; // @synthesize leftToRight=_leftToRight;
@property(nonatomic) _Bool didLayoutSubviews; // @synthesize didLayoutSubviews=_didLayoutSubviews;
- (void)_sendDismissContactPicker;	// IMP=0x00000000002ec624
- (void)_sendDidUpdateSearchController;	// IMP=0x00000000002ec539
- (void)_sendDidChangeRecipients;	// IMP=0x00000000002ec459
- (void)_resetSearchController;	// IMP=0x00000000002ec416
- (id)_contactStore;	// IMP=0x00000000002ec3c5
- (void)searchControllerDidFinishSearch:(id)arg1;	// IMP=0x00000000002ec3b3
- (void)searchController:(id)arg1 didSelectRecipient:(id)arg2;	// IMP=0x00000000002ec353
- (void)recipientViewDidResignFirstResponder:(id)arg1;	// IMP=0x00000000002ec2f6
- (void)composeRecipientViewRequestAddRecipient:(id)arg1;	// IMP=0x00000000002ec105
- (void)composeRecipientViewDidFinishPickingRecipient:(id)arg1;	// IMP=0x00000000002ec0d7
- (void)composeRecipientViewDidBecomeFirstResponder:(id)arg1;	// IMP=0x00000000002ec086
- (void)composeRecipientView:(id)arg1 textDidChange:(id)arg2;	// IMP=0x00000000002ebfb4
- (void)composeRecipientView:(id)arg1 didFinishEnteringAddress:(id)arg2;	// IMP=0x00000000002ebf1a
- (void)composeRecipientView:(id)arg1 didAddRecipient:(id)arg2;	// IMP=0x00000000002ebede
- (id)composeRecipientView:(id)arg1 composeRecipientForAddress:(id)arg2;	// IMP=0x00000000002ebe7f
- (void)composeHeaderView:(id)arg1 didChangeSize:(struct CGSize)arg2;	// IMP=0x00000000002ebcfa
- (void)contactPicker:(id)arg1 didSelectContactProperty:(id)arg2;	// IMP=0x00000000002ebc0f
- (void)contactPickerDidCancel:(id)arg1;	// IMP=0x00000000002ebbfd
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x00000000002ebbab
- (void)layoutSubviews;	// IMP=0x00000000002eb840
@property(copy, nonatomic) NSArray *recipientAddresses;
@property(copy, nonatomic) NSString *label;
@property(copy, nonatomic) NSAttributedString *attributedPlaceholder;
- (void)presentSearchResultsPopover:(id)arg1 animated:(_Bool)arg2;	// IMP=0x00000000002eb358
- (void)presentPeoplePickerPopover:(id)arg1 animated:(_Bool)arg2;	// IMP=0x00000000002eb2b3
- (void)dealloc;	// IMP=0x00000000002eb1bb
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;	// IMP=0x00000000002eaca2

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

