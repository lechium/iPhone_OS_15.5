//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <IMSharedUtilities/IMRemoteObjectCoding-Protocol.h>
#import <IMSharedUtilities/NSCopying-Protocol.h>
#import <IMSharedUtilities/NSSecureCoding-Protocol.h>

@class NSArray, NSAttributedString, NSData, NSDate, NSDictionary, NSString;

@interface IMMessageItem <NSSecureCoding, NSCopying, IMRemoteObjectCoding>
{
    _Bool _blockingRichLinks;	// 8 = 0x8
    _Bool _isBeingRetried;	// 9 = 0x9
    _Bool _updatingDataSourcePayload;	// 10 = 0xa
    _Bool _backwardsCompatibleVersion;	// 11 = 0xb
    _Bool _isSOS;	// 12 = 0xc
    _Bool _useStandalone;	// 13 = 0xd
    _Bool _NicknameRequested;	// 14 = 0xe
    _Bool _shouldSendMeCard;	// 15 = 0xf
    unsigned int _error;	// 16 = 0x10
    NSString *_subject;	// 24 = 0x18
    NSString *_plainBody;	// 32 = 0x20
    NSArray *_fileTransferGUIDs;	// 40 = 0x28
    unsigned long long _flags;	// 48 = 0x30
    NSAttributedString *_body;	// 56 = 0x38
    NSData *_bodyData;	// 64 = 0x40
    long long _replaceID;	// 72 = 0x48
    NSDate *_timeRead;	// 80 = 0x50
    NSDate *_timeDelivered;	// 88 = 0x58
    NSDate *_timePlayed;	// 96 = 0x60
    long long _expireState;	// 104 = 0x68
    NSData *_payloadData;	// 112 = 0x70
    NSData *_contactsAvatarRecipeData;	// 120 = 0x78
    NSString *_expressiveSendStyleID;	// 128 = 0x80
    NSDate *_timeExpressiveSendPlayed;	// 136 = 0x88
    NSData *_typingIndicatorIcon;	// 144 = 0x90
    NSDictionary *_messageSummaryInfo;	// 152 = 0x98
    NSDictionary *_bizIntent;	// 160 = 0xa0
    NSString *_locale;	// 168 = 0xa8
    NSString *_threadIdentifier;	// 176 = 0xb0
    IMMessageItem *_threadOriginator;	// 184 = 0xb8
    NSArray *_syndicationRanges;	// 192 = 0xc0
    NSArray *_syncedSyndicationRanges;	// 200 = 0xc8
    NSAttributedString *_translatedText;	// 208 = 0xd0
    NSString *_detectedLanguage;	// 216 = 0xd8
    NSString *_retryToParticipant;	// 224 = 0xe0
    NSString *_notificationIDSTokenURI;	// 232 = 0xe8
    NSString *_suggestedAuthorName;	// 240 = 0xf0
    NSString *_suggestedAuthorAvatarPath;	// 248 = 0xf8
    NSDictionary *_replyCountsByPart;	// 256 = 0x100
}

+ (id)newMessageItemFrom:(id)arg1 withText:(id)arg2 deleteSubject:(_Bool)arg3 withFileTransferGUIDs:(id)arg4;	// IMP=0x000000000002e5f8
+ (id)_messageItemWithIndexesDeleted:(id)arg1 subRangesToDeleteMapping:(id)arg2 deleteSubject:(_Bool)arg3 deleteTransferCallback:(CDUnknownBlockType)arg4 createItemCallback:(CDUnknownBlockType)arg5 fromMessageItem:(id)arg6;	// IMP=0x000000000002ddd9
+ (_Bool)messageContainsSurfDD:(id)arg1;	// IMP=0x000000000002a4e9
+ (_Bool)supportsSecureCoding;	// IMP=0x000000000002a4e1
+ (unsigned long long)partKeyForAttachmentGUID:(id)arg1 inBody:(id)arg2;	// IMP=0x000000000002987c
@property(copy, nonatomic) NSDictionary *replyCountsByPart; // @synthesize replyCountsByPart=_replyCountsByPart;
@property(copy, nonatomic) NSString *suggestedAuthorAvatarPath; // @synthesize suggestedAuthorAvatarPath=_suggestedAuthorAvatarPath;
@property(copy, nonatomic) NSString *suggestedAuthorName; // @synthesize suggestedAuthorName=_suggestedAuthorName;
@property(nonatomic) _Bool shouldSendMeCard; // @synthesize shouldSendMeCard=_shouldSendMeCard;
@property(nonatomic) _Bool NicknameRequested; // @synthesize NicknameRequested=_NicknameRequested;
@property(nonatomic) _Bool useStandalone; // @synthesize useStandalone=_useStandalone;
@property(nonatomic) _Bool isSOS; // @synthesize isSOS=_isSOS;
@property(nonatomic) _Bool backwardsCompatibleVersion; // @synthesize backwardsCompatibleVersion=_backwardsCompatibleVersion;
@property(nonatomic, getter=isUpdatingDataSourcePayload) _Bool updatingDataSourcePayload; // @synthesize updatingDataSourcePayload=_updatingDataSourcePayload;
@property(retain, nonatomic) NSString *notificationIDSTokenURI; // @synthesize notificationIDSTokenURI=_notificationIDSTokenURI;
@property(retain, nonatomic) NSString *retryToParticipant; // @synthesize retryToParticipant=_retryToParticipant;
@property(nonatomic) _Bool isBeingRetried; // @synthesize isBeingRetried=_isBeingRetried;
@property(retain, nonatomic) NSString *detectedLanguage; // @synthesize detectedLanguage=_detectedLanguage;
@property(retain, nonatomic) NSAttributedString *translatedText; // @synthesize translatedText=_translatedText;
@property(nonatomic) _Bool blockingRichLinks; // @synthesize blockingRichLinks=_blockingRichLinks;
@property(copy, nonatomic) NSArray *syncedSyndicationRanges; // @synthesize syncedSyndicationRanges=_syncedSyndicationRanges;
@property(copy, nonatomic) NSArray *syndicationRanges; // @synthesize syndicationRanges=_syndicationRanges;
@property(retain, nonatomic) IMMessageItem *threadOriginator; // @synthesize threadOriginator=_threadOriginator;
@property(copy, nonatomic) NSString *threadIdentifier; // @synthesize threadIdentifier=_threadIdentifier;
@property(retain, nonatomic) NSString *locale; // @synthesize locale=_locale;
@property(retain, nonatomic) NSDictionary *bizIntent; // @synthesize bizIntent=_bizIntent;
@property(retain, nonatomic) NSDictionary *messageSummaryInfo; // @synthesize messageSummaryInfo=_messageSummaryInfo;
@property(retain, nonatomic) NSData *typingIndicatorIcon; // @synthesize typingIndicatorIcon=_typingIndicatorIcon;
@property(retain, nonatomic) NSDate *timeExpressiveSendPlayed; // @synthesize timeExpressiveSendPlayed=_timeExpressiveSendPlayed;
@property(retain, nonatomic) NSString *expressiveSendStyleID; // @synthesize expressiveSendStyleID=_expressiveSendStyleID;
@property(retain, nonatomic) NSData *contactsAvatarRecipeData; // @synthesize contactsAvatarRecipeData=_contactsAvatarRecipeData;
@property(retain, nonatomic) NSData *payloadData; // @synthesize payloadData=_payloadData;
@property(nonatomic) long long expireState; // @synthesize expireState=_expireState;
@property(retain, nonatomic) NSDate *timePlayed; // @synthesize timePlayed=_timePlayed;
@property(retain, nonatomic) NSDate *timeDelivered; // @synthesize timeDelivered=_timeDelivered;
@property(retain, nonatomic) NSDate *timeRead; // @synthesize timeRead=_timeRead;
@property(nonatomic) long long replaceID; // @synthesize replaceID=_replaceID;
@property(retain, nonatomic) NSData *bodyData; // @synthesize bodyData=_bodyData;
@property(nonatomic) unsigned long long flags; // @synthesize flags=_flags;
- (id)fileTransferGUIDs;	// IMP=0x000000000002ea5a
@property(nonatomic) unsigned int errorCode; // @synthesize errorCode=_error;
@property(retain, nonatomic) NSString *plainBody; // @synthesize plainBody=_plainBody;
@property(retain, nonatomic) NSString *subject; // @synthesize subject=_subject;
- (_Bool)isReply;	// IMP=0x000000000002dd85
- (id)_localizedBackwardsCompatibleExpressiveSendText;	// IMP=0x000000000002da99
- (_Bool)isLastMessageCandidate;	// IMP=0x000000000002da91
- (_Bool)isFirstMessageCandidate;	// IMP=0x000000000002da89
- (id)description;	// IMP=0x000000000002d3fa
@property(readonly, copy, nonatomic) NSAttributedString *breadcrumbText;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000002cbcc
@property(retain, nonatomic) NSAttributedString *body; // @synthesize body=_body;
- (void)_clearBodyData;	// IMP=0x000000000002ca57
- (void)_regenerateBodyData;	// IMP=0x000000000002c97a
- (void)_regenerateBodyText;	// IMP=0x000000000002c884
- (void)_generateBodyTextIfNeeded;	// IMP=0x000000000002c846
- (void)_generateBodyDataIfNeeded;	// IMP=0x000000000002c816
- (void)adjustIsEmptyFlag;	// IMP=0x000000000002c70a
- (void)_updateFlags:(unsigned long long)arg1;	// IMP=0x000000000002c6d2
- (void)setFileTransferGUIDs:(id)arg1;	// IMP=0x000000000002c67a
- (unsigned long long)getCMMAssetOffset;	// IMP=0x000000000002c63c
- (void)setCMMAssetOffset:(unsigned long long)arg1;	// IMP=0x000000000002c592
- (void)setCMMState:(unsigned long long)arg1;	// IMP=0x000000000002c4e8
- (unsigned long long)getCMMState;	// IMP=0x000000000002c4aa
- (void)setCMMStateToRegisteredAndAssetOffsetTo:(unsigned long long)arg1;	// IMP=0x000000000002c3ca
- (void)setWasDataDetected:(_Bool)arg1;	// IMP=0x000000000002c3a5
@property(readonly, nonatomic) _Bool wasDataDetected;
@property(nonatomic) _Bool hasDataDetectorResults;
@property(nonatomic) _Bool hasUnseenMention;
@property(nonatomic) _Bool isSpam;
@property(nonatomic) _Bool isCorrupt;
@property(readonly, nonatomic) _Bool isFromExternalSource;
@property(readonly, nonatomic) _Bool wasDowngraded;
@property(readonly, nonatomic) _Bool isSent;
@property(readonly, nonatomic) _Bool isEmote;
@property(readonly, nonatomic) _Bool isLocatingMessage;
@property(readonly, nonatomic) _Bool isTypingMessage;
@property(readonly, nonatomic) _Bool isPrepared;
@property(readonly, nonatomic) _Bool isSystemMessage;
@property(readonly, nonatomic) _Bool isAutoReply;
@property(readonly, nonatomic) _Bool didNotifyRecipient;
@property(readonly, nonatomic) _Bool wasDeliveredQuietly;
@property(readonly, nonatomic) _Bool isDelivered;
- (_Bool)isFromMe;	// IMP=0x000000000002c0d6
@property(readonly, nonatomic) _Bool isPlayed;
@property(readonly, nonatomic) _Bool isExpirable;
@property(readonly, nonatomic) _Bool isAudioMessage;
@property(readonly, nonatomic) _Bool isRead;
@property(readonly, nonatomic) _Bool isEmpty;
@property(readonly, nonatomic) _Bool isUnfinished;
@property(readonly, nonatomic) _Bool isFinished;
@property(readonly, nonatomic) _Bool isAlert;
- (id)sender;	// IMP=0x000000000002c008
- (void)dealloc;	// IMP=0x000000000002be52
- (id)initWithSenderInfo:(id)arg1 time:(id)arg2 timeRead:(id)arg3 timeDelivered:(id)arg4 timePlayed:(id)arg5 subject:(id)arg6 body:(id)arg7 bodyData:(id)arg8 attributes:(id)arg9 fileTransferGUIDs:(id)arg10 flags:(unsigned long long)arg11 guid:(id)arg12 messageID:(long long)arg13 account:(id)arg14 accountID:(id)arg15 service:(id)arg16 handle:(id)arg17 roomName:(id)arg18 unformattedID:(id)arg19 countryCode:(id)arg20 expireState:(long long)arg21 balloonBundleID:(id)arg22 payloadData:(id)arg23 expressiveSendStyleID:(id)arg24 timeExpressiveSendPlayed:(id)arg25 bizIntent:(id)arg26 locale:(id)arg27 errorType:(unsigned int)arg28 type:(long long)arg29 threadIdentifier:(id)arg30 syndicationRanges:(id)arg31 syncedSyndicationRanges:(id)arg32;	// IMP=0x000000000002bc1a
- (id)initWithSenderInfo:(id)arg1 time:(id)arg2 timeRead:(id)arg3 timeDelivered:(id)arg4 timePlayed:(id)arg5 subject:(id)arg6 body:(id)arg7 bodyData:(id)arg8 attributes:(id)arg9 fileTransferGUIDs:(id)arg10 flags:(unsigned long long)arg11 guid:(id)arg12 messageID:(long long)arg13 account:(id)arg14 accountID:(id)arg15 service:(id)arg16 handle:(id)arg17 roomName:(id)arg18 unformattedID:(id)arg19 countryCode:(id)arg20 expireState:(long long)arg21 balloonBundleID:(id)arg22 payloadData:(id)arg23 expressiveSendStyleID:(id)arg24 timeExpressiveSendPlayed:(id)arg25 bizIntent:(id)arg26 locale:(id)arg27 errorType:(unsigned int)arg28 threadIdentifier:(id)arg29 syndicationRanges:(id)arg30 syncedSyndicationRanges:(id)arg31;	// IMP=0x000000000002bb32
- (id)initWithSenderInfo:(id)arg1 time:(id)arg2 guid:(id)arg3 messageID:(long long)arg4 account:(id)arg5 accountID:(id)arg6 service:(id)arg7 handle:(id)arg8 roomName:(id)arg9 unformattedID:(id)arg10 countryCode:(id)arg11;	// IMP=0x000000000002ba85
- (id)initWithSender:(id)arg1 time:(id)arg2 guid:(id)arg3 type:(long long)arg4;	// IMP=0x000000000002b9af
- (id)initWithSender:(id)arg1 time:(id)arg2 body:(id)arg3 attributes:(id)arg4 fileTransferGUIDs:(id)arg5 flags:(unsigned long long)arg6 error:(id)arg7 guid:(id)arg8 type:(long long)arg9 threadIdentifier:(id)arg10;	// IMP=0x000000000002b88f
- (id)initWithSender:(id)arg1 time:(id)arg2 body:(id)arg3 attributes:(id)arg4 fileTransferGUIDs:(id)arg5 flags:(unsigned long long)arg6 error:(id)arg7 guid:(id)arg8 threadIdentifier:(id)arg9;	// IMP=0x000000000002b851
- (id)copyDictionaryRepresentation;	// IMP=0x000000000002b0a5
- (id)initWithDictionary:(id)arg1;	// IMP=0x000000000002b091
- (id)initWithDictionary:(id)arg1 hint:(id)arg2;	// IMP=0x000000000002aab7
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000002a648
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000029e78
- (id)attachmentGUIDAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000029c8e
- (void)enumerateAttachmentGUIDsWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000029ac1
- (unsigned long long)partKeyForAttachmentGUID:(id)arg1;	// IMP=0x0000000000029832
- (id)copyForBackwardsCompatibility;	// IMP=0x0000000000029645
- (id)copyWithFlags:(unsigned long long)arg1;	// IMP=0x0000000000029606
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000029204
@property(readonly, copy, nonatomic) NSArray *messageParts;
- (unsigned long long)powerLogMessageType;	// IMP=0x0000000000080229

@end

