//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIActivityViewController.h>

#import <FamilyCircleUI/MFMailComposeViewControllerDelegate-Protocol.h>
#import <FamilyCircleUI/MFMessageComposeViewControllerInternalDelegate-Protocol.h>
#import <FamilyCircleUI/UIActivityViewControllerAirDropDelegate-Protocol.h>

@class NSArray, NSString;
@protocol FAActivityViewControllerDelegate, UIActivityItemSource;

@interface FAActivityViewController : UIActivityViewController <MFMessageComposeViewControllerInternalDelegate, MFMailComposeViewControllerDelegate, UIActivityViewControllerAirDropDelegate>
{
    id <UIActivityItemSource> _itemSource;	// 8 = 0x8
    _Bool _didCompleteAirdropTransfer;	// 16 = 0x10
    NSArray *_recipientAddresses;	// 24 = 0x18
    id <FAActivityViewControllerDelegate> _delegate;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000016fec
@property(nonatomic) __weak id <FAActivityViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool didCompleteAirdropTransfer; // @synthesize didCompleteAirdropTransfer=_didCompleteAirdropTransfer;
@property(retain, nonatomic) NSArray *recipientAddresses; // @synthesize recipientAddresses=_recipientAddresses;
- (void)activityViewControllerDidFinishAirdropTransfer:(id)arg1;	// IMP=0x0000000000016e5b
- (id)_parseRecipientAddresses:(id)arg1;	// IMP=0x0000000000016c83
- (void)mailComposeController:(id)arg1 didFinishWithResult:(long long)arg2 error:(id)arg3;	// IMP=0x0000000000016b21
- (void)mailComposeController:(id)arg1 shouldSendMail:(id)arg2 toRecipients:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000000016912
- (void)messageComposeViewController:(id)arg1 shouldSendMessage:(id)arg2 toRecipients:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000000001671c
- (void)messageComposeViewController:(id)arg1 didFinishWithResult:(long long)arg2;	// IMP=0x00000000000165b9
- (void)_prepareActivity:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000160b6
- (id)initWithItemSource:(id)arg1;	// IMP=0x0000000000015ee7
- (id)_recipientAlreadyInFamily:(id)arg1 emailOnly:(_Bool)arg2;	// IMP=0x000000000001579c
- (void)_showAlreadyFamilyMember:(id)arg1;	// IMP=0x00000000000154a9

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
