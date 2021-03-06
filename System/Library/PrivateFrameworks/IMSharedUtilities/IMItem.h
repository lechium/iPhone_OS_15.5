//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <IMSharedUtilities/IMRemoteObjectCoding-Protocol.h>
#import <IMSharedUtilities/NSCopying-Protocol.h>
#import <IMSharedUtilities/NSSecureCoding-Protocol.h>

@class NSArray, NSData, NSDate, NSDictionary, NSString;

@interface IMItem : NSObject <NSSecureCoding, NSCopying, IMRemoteObjectCoding>
{
    NSString *_handle;	// 8 = 0x8
    NSString *_service;	// 16 = 0x10
    NSString *_account;	// 24 = 0x18
    NSString *_unformattedID;	// 32 = 0x20
    NSString *_accountID;	// 40 = 0x28
    NSString *_roomName;	// 48 = 0x30
    NSDictionary *_senderInfo;	// 56 = 0x38
    NSString *_guid;	// 64 = 0x40
    NSDate *_time;	// 72 = 0x48
    NSString *_countryCode;	// 80 = 0x50
    long long _messageID;	// 88 = 0x58
    id _context;	// 96 = 0x60
    long long _type;	// 104 = 0x68
    NSString *_balloonBundleID;	// 112 = 0x70
    unsigned long long _sortID;	// 120 = 0x78
    NSString *_destinationCallerID;	// 128 = 0x80
    NSDate *_clientSendTime;	// 136 = 0x88
    NSString *_replyToGUID;	// 144 = 0x90
    NSString *_personCentric;	// 152 = 0x98
    long long _cloudKitSyncState;	// 160 = 0xa0
    NSString *_cloudKitRecordID;	// 168 = 0xa8
    NSData *_cloudKitServerChangeTokenBlob;	// 176 = 0xb0
    NSString *_cloudKitRecordChangeTag;	// 184 = 0xb8
    NSString *_parentChatID;	// 192 = 0xc0
    NSArray *_fileTransferGUIDs;	// 200 = 0xc8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000000fc1a
+ (id)stringGUID;	// IMP=0x000000000000edd4
+ (Class)classForMessageItemDictionary:(id)arg1;	// IMP=0x000000000000ecee
+ (Class)classForIMItemType:(long long)arg1;	// IMP=0x000000000000ec5c
@property(retain, nonatomic) NSArray *fileTransferGUIDs; // @synthesize fileTransferGUIDs=_fileTransferGUIDs;
@property(copy, nonatomic) NSString *parentChatID; // @synthesize parentChatID=_parentChatID;
@property(copy, nonatomic) NSString *cloudKitRecordChangeTag; // @synthesize cloudKitRecordChangeTag=_cloudKitRecordChangeTag;
@property(copy, nonatomic) NSData *cloudKitServerChangeTokenBlob; // @synthesize cloudKitServerChangeTokenBlob=_cloudKitServerChangeTokenBlob;
@property(copy, nonatomic) NSString *cloudKitRecordID; // @synthesize cloudKitRecordID=_cloudKitRecordID;
@property(nonatomic) long long cloudKitSyncState; // @synthesize cloudKitSyncState=_cloudKitSyncState;
@property(retain, nonatomic) NSString *personCentric; // @synthesize personCentric=_personCentric;
@property(copy, nonatomic) NSString *replyToGUID; // @synthesize replyToGUID=_replyToGUID;
@property(retain, nonatomic) NSDate *clientSendTime; // @synthesize clientSendTime=_clientSendTime;
@property(retain, nonatomic) NSString *destinationCallerID; // @synthesize destinationCallerID=_destinationCallerID;
@property(nonatomic) unsigned long long sortID; // @synthesize sortID=_sortID;
@property(retain, nonatomic) NSString *balloonBundleID; // @synthesize balloonBundleID=_balloonBundleID;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(retain, nonatomic) id context; // @synthesize context=_context;
@property(nonatomic, setter=_setMessageID:) long long messageID; // @synthesize messageID=_messageID;
@property(retain, nonatomic) NSString *countryCode; // @synthesize countryCode=_countryCode;
@property(retain, nonatomic) NSDate *time; // @synthesize time=_time;
@property(retain, nonatomic) NSString *guid; // @synthesize guid=_guid;
@property(retain, nonatomic) NSDictionary *senderInfo; // @synthesize senderInfo=_senderInfo;
@property(retain, nonatomic) NSString *roomName; // @synthesize roomName=_roomName;
@property(retain, nonatomic) NSString *accountID; // @synthesize accountID=_accountID;
@property(retain, nonatomic) NSString *unformattedID; // @synthesize unformattedID=_unformattedID;
@property(retain, nonatomic) NSString *account; // @synthesize account=_account;
@property(retain, nonatomic) NSString *service; // @synthesize service=_service;
@property(retain, nonatomic) NSString *handle; // @synthesize handle=_handle;
@property(readonly, nonatomic) _Bool isLastMessageCandidate;
@property(readonly, nonatomic) _Bool isFirstMessageCandidate;
- (unsigned long long)hash;	// IMP=0x0000000000010885
- (_Bool)isReply;	// IMP=0x000000000001087d
- (_Bool)unsentIsFromMeItem;	// IMP=0x0000000000010811
- (_Bool)isOlderThanItem:(id)arg1;	// IMP=0x0000000000010788
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000010400
@property(retain, nonatomic) NSString *personCentricID;
@property(retain, nonatomic) NSString *sender;
@property(readonly, nonatomic) _Bool isFromMe;
- (id)dictionaryRepresentation;	// IMP=0x0000000000010215
- (id)copyDictionaryRepresentation;	// IMP=0x000000000000ff30
- (id)initWithIMRemoteObjectSerializedDictionary:(id)arg1;	// IMP=0x000000000000ff1e
- (void)encodeWithIMRemoteObjectSerializedDictionary:(id)arg1;	// IMP=0x000000000000fedf
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000000fc22
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000000f7cb
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000000f5c9
- (void)dealloc;	// IMP=0x000000000000f4df
- (id)initWithSenderInfo:(id)arg1 time:(id)arg2 guid:(id)arg3 messageID:(long long)arg4 account:(id)arg5 accountID:(id)arg6 service:(id)arg7 handle:(id)arg8 roomName:(id)arg9 unformattedID:(id)arg10 countryCode:(id)arg11 type:(long long)arg12;	// IMP=0x000000000000f33e
- (id)initWithSender:(id)arg1 time:(id)arg2 guid:(id)arg3 type:(long long)arg4;	// IMP=0x000000000000f2b4
- (id)initWithDictionary:(id)arg1;	// IMP=0x000000000000ef18
- (id)description;	// IMP=0x000000000000eded
- (struct _NSRange)associatedMessageRange;	// IMP=0x00000000000631b3
- (_Bool)isSticker;	// IMP=0x00000000000631ab
- (_Bool)isMessageEdit;	// IMP=0x00000000000631a3
- (_Bool)isBreadcrumb;	// IMP=0x000000000006319b
- (_Bool)isMessageAcknowledgment;	// IMP=0x0000000000063193
- (long long)associatedMessageType;	// IMP=0x000000000006318b
- (id)associatedMessageGUID;	// IMP=0x0000000000063183
- (_Bool)isAssociatedMessageItem;	// IMP=0x000000000006317b
- (id)pluginSessionGUID;	// IMP=0x0000000000063111
- (id)consumedSessionPayloads;	// IMP=0x0000000000063109

@end

