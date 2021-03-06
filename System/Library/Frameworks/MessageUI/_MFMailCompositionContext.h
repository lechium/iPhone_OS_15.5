//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <MessageUI/EMCollectionChangeObserver-Protocol.h>
#import <MessageUI/MFMailCompositionAdditionalDonating-Protocol.h>
#import <MessageUI/MFMailCompositionShareSheetRecipients-Protocol.h>
#import <MessageUI/MFMailCompositionValuesProtocol-Protocol.h>

@class EFFuture, EMMessage, EMMessageList, MFAttachmentComposeManager, MFAttachmentCompositionContext, MFAttachmentManager, MFComposeWebView, MFMailCompositionValues, MFMailMessage, MFMessageLoadingContext, NSArray, NSData, NSMutableArray, NSString, NSURL;
@protocol EFScheduler, _MFMailCompositionContextDelegate;

@interface _MFMailCompositionContext : NSObject <EMCollectionChangeObserver, MFMailCompositionValuesProtocol, MFMailCompositionAdditionalDonating, MFMailCompositionShareSheetRecipients>
{
    MFMailMessage *_legacyMessage;	// 8 = 0x8
    NSString *_attachmentToMarkupContentID;	// 16 = 0x10
    id _originalContent;	// 24 = 0x18
    MFMessageLoadingContext *_loadingContext;	// 32 = 0x20
    _Bool _loadRest;	// 40 = 0x28
    _Bool _includeAttachmentsWhenAdding;	// 41 = 0x29
    MFAttachmentCompositionContext *_attachmentContext;	// 48 = 0x30
    MFAttachmentComposeManager *_attachmentManager;	// 56 = 0x38
    _Bool _registeredForDraw;	// 64 = 0x40
    EMMessageList *_messageList;	// 72 = 0x48
    _Bool _isLoadingMessageData;	// 80 = 0x50
    _Bool _originatingFromAttachmentMarkup;	// 81 = 0x51
    NSString *_draftSubject;	// 88 = 0x58
    NSString *_contentVariationAttachmentCID;	// 96 = 0x60
    NSString *_originatingBundleID;	// 104 = 0x68
    EMMessage *_originalMessage;	// 112 = 0x70
    EFFuture *_rawContentRepresentation;	// 120 = 0x78
    id <_MFMailCompositionContextDelegate> _delegate;	// 128 = 0x80
    NSString *_remoteDelegateIdentifier;	// 136 = 0x88
    MFMailCompositionValues *_compositionValues;	// 144 = 0x90
    MFComposeWebView *_composeWebView;	// 152 = 0x98
    id <EFScheduler> _observationScheduler;	// 160 = 0xa0
}

+ (id)processMessageBody:(id)arg1 asHTML:(_Bool)arg2;	// IMP=0x00000000000c308a
+ (id)log;	// IMP=0x00000000000bfe0e
- (void).cxx_destruct;	// IMP=0x00000000000c6164
@property(retain, nonatomic) id <EFScheduler> observationScheduler; // @synthesize observationScheduler=_observationScheduler;
@property MFComposeWebView *composeWebView; // @synthesize composeWebView=_composeWebView;
@property(retain, nonatomic) MFMailCompositionValues *compositionValues; // @synthesize compositionValues=_compositionValues;
@property(retain, nonatomic) NSString *remoteDelegateIdentifier; // @synthesize remoteDelegateIdentifier=_remoteDelegateIdentifier;
@property(nonatomic) __weak id <_MFMailCompositionContextDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) MFAttachmentCompositionContext *attachmentContext; // @synthesize attachmentContext=_attachmentContext;
@property(retain, nonatomic) EFFuture *rawContentRepresentation; // @synthesize rawContentRepresentation=_rawContentRepresentation;
@property(retain, nonatomic) EMMessage *originalMessage; // @synthesize originalMessage=_originalMessage;
@property(copy, nonatomic) NSString *originatingBundleID; // @synthesize originatingBundleID=_originatingBundleID;
@property(readonly, nonatomic) MFMailMessage *legacyMessage; // @synthesize legacyMessage=_legacyMessage;
@property(copy, nonatomic) NSString *contentVariationAttachmentCID; // @synthesize contentVariationAttachmentCID=_contentVariationAttachmentCID;
@property(nonatomic) _Bool originatingFromAttachmentMarkup; // @synthesize originatingFromAttachmentMarkup=_originatingFromAttachmentMarkup;
@property(retain, nonatomic) MFMessageLoadingContext *loadingContext; // @synthesize loadingContext=_loadingContext;
@property(readonly, nonatomic) _Bool isLoadingMessageData; // @synthesize isLoadingMessageData=_isLoadingMessageData;
@property(nonatomic) _Bool includeAttachmentsWhenAdding; // @synthesize includeAttachmentsWhenAdding=_includeAttachmentsWhenAdding;
@property(nonatomic) _Bool loadRest; // @synthesize loadRest=_loadRest;
@property(retain, nonatomic) NSString *attachmentToMarkupContentID; // @synthesize attachmentToMarkupContentID=_attachmentToMarkupContentID;
@property(readonly, nonatomic) NSString *draftSubject; // @synthesize draftSubject=_draftSubject;
@property(copy, nonatomic) NSString *autosaveIdentifier;
@property(copy, nonatomic) NSString *subject;
@property(retain, nonatomic) NSMutableArray *deferredAttachments;
@property(copy, nonatomic) NSData *serializedMailboxObjectID;
@property(nonatomic) _Bool includeAttachments;
@property(copy, nonatomic) NSData *serializedMessageObjectID;
@property(nonatomic) _Bool prefersFirstLineSelection;
@property(nonatomic) long long composeType;
@property(nonatomic) _Bool isUsingDefaultAccount;
@property(copy, nonatomic) NSString *shareSheetSessionID;
@property(nonatomic) long long defaultContentVariationIndex;
@property(copy, nonatomic) NSMutableArray *contentVariations;
@property(retain, nonatomic) NSArray *originalContent;
@property(copy, nonatomic) NSArray *contentURLs;
@property(copy, nonatomic) NSArray *contentText;
@property(copy, nonatomic) NSArray *cloudPhotoIDs;
@property(copy, nonatomic) NSArray *photoIDs;
@property(copy, nonatomic) NSArray *UTITypes;
@property(nonatomic) unsigned long long caretPosition;
@property(nonatomic) int sourceAccountManagement;
@property(nonatomic) _Bool showContentImmediately;
@property(nonatomic) _Bool showKeyboardImmediately;
@property(copy, nonatomic) NSString *preferredSendingEmailAddress;
@property(copy, nonatomic) NSArray *bccRecipients;
@property(copy, nonatomic) NSArray *ccRecipients;
@property(copy, nonatomic) NSArray *toRecipients;
@property(nonatomic) _Bool isHTML;
@property(copy, nonatomic) NSString *messageBody;
@property(retain, nonatomic) NSURL *mailtoURL;
- (void)collection:(id)arg1 replacedExistingItemID:(id)arg2 withNewItemID:(id)arg3;	// IMP=0x00000000000c3e28
- (void)collection:(id)arg1 movedItemIDs:(id)arg2 before:(id)arg3;	// IMP=0x00000000000c3e22
- (void)collection:(id)arg1 movedItemIDs:(id)arg2 after:(id)arg3;	// IMP=0x00000000000c3e1c
- (void)collection:(id)arg1 deletedItemIDs:(id)arg2;	// IMP=0x00000000000c3e16
- (void)collection:(id)arg1 changedItemIDs:(id)arg2;	// IMP=0x00000000000c3e10
- (void)collection:(id)arg1 addedItemIDs:(id)arg2 before:(id)arg3;	// IMP=0x00000000000c3e0a
- (void)collection:(id)arg1 addedItemIDs:(id)arg2 after:(id)arg3;	// IMP=0x00000000000c3e04
- (_Bool)hasDuetDonationContext;	// IMP=0x00000000000c3d07
- (void)insertDeferredAttachmentsIntoComposeWebView:(id)arg1;	// IMP=0x00000000000c3838
- (void)insertAttachmentWithData:(id)arg1 fileName:(id)arg2 mimeType:(id)arg3 contentID:(id)arg4;	// IMP=0x00000000000c3680
- (void)insertAttachmentWithURL:(id)arg1;	// IMP=0x00000000000c359e
- (id)attachments;	// IMP=0x00000000000c3588
- (void)removeAttachment:(id)arg1;	// IMP=0x00000000000c3524
- (void)recordUndoAttachmentsForURLs:(id)arg1;	// IMP=0x00000000000c3495
- (void)recordPasteboardAttachmentsForURLs:(id)arg1;	// IMP=0x00000000000c3406
- (id)addAttachmentDataItemProvider:(id)arg1 mimeType:(id)arg2 filename:(id)arg3 contentID:(id)arg4;	// IMP=0x00000000000c32ef
- (id)addAttachmentData:(id)arg1 mimeType:(id)arg2 fileName:(id)arg3 contentID:(id)arg4;	// IMP=0x00000000000c31d8
- (id)addAttachmentData:(id)arg1 mimeType:(id)arg2 fileName:(id)arg3;	// IMP=0x00000000000c31b3
@property(readonly, nonatomic) NSString *contextID;
- (void)setMessageBody:(id)arg1 isHTML:(_Bool)arg2;	// IMP=0x00000000000c30f1
@property(readonly, nonatomic) MFAttachmentManager *attachmentManager;
- (void)switchToReplyWithDelegate:(id)arg1;	// IMP=0x00000000000c3000
- (void)switchToReplyAllWithDelegate:(id)arg1;	// IMP=0x00000000000c2f84
- (void)dealloc;	// IMP=0x00000000000c2ec0
- (id)initWithOpenMailComposeContext:(id)arg1;	// IMP=0x00000000000c26e8
- (void)_loadMessageWithAutosaveIdentifier:(id)arg1;	// IMP=0x00000000000c1ef3
- (void)_loadMessageWithObjectID:(id)arg1 mailboxObjectID:(id)arg2 messageRepository:(id)arg3 mailboxProvider:(id)arg4;	// IMP=0x00000000000c185e
- (id)initWithComposeType:(long long)arg1 objectID:(id)arg2 mailboxID:(id)arg3 subject:(id)arg4 autosaveID:(id)arg5 messageRepository:(id)arg6 mailboxProvider:(id)arg7;	// IMP=0x00000000000c15c2
- (id)initWithCompositionValues:(id)arg1 hostApplicationBundleIdentifier:(id)arg2 messageRepository:(id)arg3 mailboxProvider:(id)arg4;	// IMP=0x00000000000c1281
- (id)initWithCompositionValues:(id)arg1 hostApplicationBundleIdentifier:(id)arg2;	// IMP=0x00000000000c1268
- (id)initWithCompositionValueRepresentation:(id)arg1 hostApplicationBundleIdentifier:(id)arg2;	// IMP=0x00000000000c1076
- (id)initWithHandoffActivityPayload:(id)arg1;	// IMP=0x00000000000c0def
- (id)initOutboxRestoreOfMessage:(id)arg1 legacyMessage:(id)arg2;	// IMP=0x00000000000c0dd1
- (id)initSendAgainDraftOfMessage:(id)arg1 legacyMessage:(id)arg2;	// IMP=0x00000000000c0db3
- (id)initDraftRestoreOfMessage:(id)arg1 legacyMessage:(id)arg2;	// IMP=0x00000000000c0d95
- (id)initForwardOfMessage:(id)arg1 legacyMessage:(id)arg2 isEML:(_Bool)arg3;	// IMP=0x00000000000c0d74
- (id)initReplyAllToMessage:(id)arg1 legacyMessage:(id)arg2 isEML:(_Bool)arg3;	// IMP=0x00000000000c0d53
- (id)initReplyToMessage:(id)arg1 legacyMessage:(id)arg2 isEML:(_Bool)arg3;	// IMP=0x00000000000c0d32
- (id)initForwardOfMessage:(id)arg1 legacyMessage:(id)arg2;	// IMP=0x00000000000c0d11
- (id)initReplyAllToMessage:(id)arg1 legacyMessage:(id)arg2;	// IMP=0x00000000000c0cf0
- (id)initReplyToMessage:(id)arg1 legacyMessage:(id)arg2;	// IMP=0x00000000000c0ccf
- (id)initRecoveredAutosavedMessageWithIdentifier:(id)arg1 draftSubject:(id)arg2 composeType:(long long)arg3;	// IMP=0x00000000000c0bf3
- (id)initRecoveredAutosavedMessageWithIdentifier:(id)arg1 draftSubject:(id)arg2;	// IMP=0x00000000000c0bda
- (id)initWithURL:(id)arg1 composeType:(long long)arg2 originalMessage:(id)arg3 legacyMessage:(id)arg4 isEML:(_Bool)arg5;	// IMP=0x00000000000c0105
- (id)initWithURL:(id)arg1 composeType:(long long)arg2 originalMessage:(id)arg3 legacyMessage:(id)arg4;	// IMP=0x00000000000c00e3
- (id)initWithComposeType:(long long)arg1 RFC822Data:(id)arg2;	// IMP=0x00000000000bff7e
- (id)initWithComposeType:(long long)arg1 originalMessage:(id)arg2 legacyMessage:(id)arg3;	// IMP=0x00000000000bff60
- (id)initWithComposeType:(long long)arg1 originalMessage:(id)arg2 legacyMessage:(id)arg3 isEML:(_Bool)arg4;	// IMP=0x00000000000bff33
- (id)initWithComposeType:(long long)arg1;	// IMP=0x00000000000bff1b
- (id)initWithURL:(id)arg1;	// IMP=0x00000000000bff00
- (id)init;	// IMP=0x00000000000bfeeb

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

