//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <IMCore/IMVisibleAssociatedMessageHost-Protocol.h>

@class IMMessageItem, IMMessagePartHighlightChatItem, NSArray, NSAttributedString, NSString;

@interface IMMessagePartChatItem <IMVisibleAssociatedMessageHost>
{
    NSAttributedString *_text;	// 40 = 0x28
    NSAttributedString *_fallbackCorruptText;	// 48 = 0x30
    long long _index;	// 56 = 0x38
    struct _NSRange _messagePartRange;	// 64 = 0x40
    NSArray *_visibleAssociatedMessageChatItems;	// 80 = 0x50
    NSArray *_messageEditChatItems;	// 88 = 0x58
    _Bool _isBusiness;	// 96 = 0x60
    _Bool _chatInScrutinyMode;	// 97 = 0x61
    _Bool _allowlistedRichLinkSender;	// 98 = 0x62
    long long _syndicationType;	// 104 = 0x68
    long long _syndicationStatus;	// 112 = 0x70
    IMMessagePartHighlightChatItem *_messageHighlightChatItem;	// 120 = 0x78
    long long _syndicationBehavior;	// 128 = 0x80
    unsigned long long _replyCount;	// 136 = 0x88
}

+ (_Bool)isSiriEnabled;	// IMP=0x000000000007469c
+ (id)_messageItemWithPartsDeleted:(id)arg1 fromMessageItem:(id)arg2 indexesOfItemsDeleted:(id *)arg3 indexToRangeMapping:(id *)arg4;	// IMP=0x0000000000073447
+ (_Bool)_shouldAggregateForTransferType:(id)arg1;	// IMP=0x0000000000073399
+ (id)messageBodyStringForAttachmentGUIDs:(id)arg1;	// IMP=0x00000000000730ce
+ (id)aggregatePartsForParts:(id)arg1 forMessage:(id)arg2 context:(id)arg3;	// IMP=0x0000000000072485
+ (long long)_attachmentStackAggregationThreshold;	// IMP=0x0000000000072435
+ (id)_newMessagePartsForMessageItem:(id)arg1 chatContext:(id)arg2 photosPluginPayload:(id)arg3;	// IMP=0x000000000006f594
+ (id)messageBodyStringForCMMMessage:(id)arg1;	// IMP=0x000000000006f3bb
+ (id)_newMessagePartsForMessageItem:(id)arg1 chatContext:(id)arg2;	// IMP=0x000000000006f3a6
+ (_Bool)_supportsRichLinkURL:(id)arg1 forSender:(id)arg2 isAllowlistedRichLinkSender:(_Bool)arg3;	// IMP=0x000000000006f2a3
+ (id)_richLinkRangesForMessageText:(id)arg1 sender:(id)arg2 isAllowlistedRichLinkSender:(_Bool)arg3;	// IMP=0x000000000006f215
+ (id)_additionalSupportedRichLinkSchemesForAllowlistedSender:(id)arg1;	// IMP=0x000000000006f208
+ (_Bool)_isAllowlistedRichLinkSender:(id)arg1 isBusiness:(_Bool)arg2;	// IMP=0x000000000006f16f
+ (_Bool)_isAllowlistedURL:(id)arg1;	// IMP=0x000000000006ecd3
+ (id)_defaultRichLinkAllowlist;	// IMP=0x000000000006ebed
+ (id)_newMessagePartsForMessageItem:(id)arg1;	// IMP=0x000000000006ebd9
+ (id)_guidForMessage:(id)arg1 url:(id)arg2;	// IMP=0x000000000006eb20
- (void).cxx_destruct;	// IMP=0x0000000000074883
@property(nonatomic) unsigned long long replyCount; // @synthesize replyCount=_replyCount;
@property(nonatomic, getter=isAllowlistedRichLinkSender) _Bool allowlistedRichLinkSender; // @synthesize allowlistedRichLinkSender=_allowlistedRichLinkSender;
@property(readonly, copy, nonatomic) NSAttributedString *fallbackCorruptText; // @synthesize fallbackCorruptText=_fallbackCorruptText;
@property(nonatomic) _Bool chatInScrutinyMode; // @synthesize chatInScrutinyMode=_chatInScrutinyMode;
@property(readonly, nonatomic) NSArray *messageEditChatItems; // @synthesize messageEditChatItems=_messageEditChatItems;
@property(retain, nonatomic, setter=_setVisibleAssociatedMessageChatItems:) NSArray *visibleAssociatedMessageChatItems; // @synthesize visibleAssociatedMessageChatItems=_visibleAssociatedMessageChatItems;
@property(nonatomic) struct _NSRange messagePartRange; // @synthesize messagePartRange=_messagePartRange;
@property(nonatomic, setter=_setIndex:) long long index; // @synthesize index=_index;
@property(readonly, copy, nonatomic) NSAttributedString *text; // @synthesize text=_text;
@property(readonly, nonatomic) long long syndicationBehavior; // @synthesize syndicationBehavior=_syndicationBehavior;
@property(readonly, copy, nonatomic) IMMessagePartHighlightChatItem *messageHighlightChatItem; // @synthesize messageHighlightChatItem=_messageHighlightChatItem;
@property(readonly, nonatomic) long long syndicationStatus; // @synthesize syndicationStatus=_syndicationStatus;
@property(readonly, nonatomic) long long syndicationType; // @synthesize syndicationType=_syndicationType;
- (_Bool)isHighlighted;	// IMP=0x0000000000074735
@property(readonly, nonatomic) _Bool requiresSiriAttribution;
- (id)replyContextPreviewChatItemForReply:(id)arg1 chatContext:(id)arg2;	// IMP=0x00000000000745ce
@property(readonly, nonatomic) IMMessageItem *threadOriginator;
@property(readonly, copy, nonatomic) NSString *threadIdentifier;
- (_Bool)canSendMessageAcknowledgment;	// IMP=0x000000000007437f
- (void)_setMessageEditChatItems:(id)arg1;	// IMP=0x00000000000741ab
- (id)_initWithItem:(id)arg1 text:(id)arg2 index:(long long)arg3 messagePartRange:(struct _NSRange)arg4 visibleAssociatedMessageChatItems:(id)arg5;	// IMP=0x0000000000073e1b
- (id)_initWithItem:(id)arg1 index:(long long)arg2 messagePartRange:(struct _NSRange)arg3 syndicationBehavior:(long long)arg4;	// IMP=0x0000000000073b49
- (id)_initWithItem:(id)arg1 index:(long long)arg2 messagePartRange:(struct _NSRange)arg3;	// IMP=0x0000000000073b26
@property(readonly, nonatomic) _Bool isCorrupt;
- (id)transcriptText;	// IMP=0x000000000006eaca
@property(nonatomic) _Bool isBusiness; // @synthesize isBusiness=_isBusiness;
- (_Bool)canDelete;	// IMP=0x000000000006ea0c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000006e946
- (long long)messagePartAttributeName;	// IMP=0x000000000006e8c9
@property(readonly, copy) NSString *description;
- (_Bool)__im_ff_isInterstellarEnabled;	// IMP=0x000000000006d10a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

