//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <IMDPersistence/IMDBridgedRecord-Protocol.h>

@class NSAttributedString, NSData, NSDate, NSString;

@interface IMDMessageRecord <IMDBridgedRecord>
{
}

+ (id)keyPathsToColumns;	// IMP=0x0000000000004d39
+ (id)allocWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000043fd
- (id)init;	// IMP=0x0000000000004d2b
- (id)initWithItemType:(long long)arg1 text:(id)arg2 date:(long long)arg3 dateRead:(long long)arg4 dateDelivered:(long long)arg5 datePlayed:(long long)arg6 error:(long long)arg7 type:(long long)arg8 replaceID:(long long)arg9 flags:(id)arg10 guid:(id)arg11 attributedBody:(id)arg12 service:(id)arg13 account:(id)arg14 accountGUID:(id)arg15 subject:(id)arg16 handleID:(id)arg17 countryCode:(id)arg18 unformattedID:(id)arg19 otherHandleID:(id)arg20 groupTitle:(id)arg21 groupActionType:(long long)arg22 shareStatus:(long long)arg23 shareDirection:(long long)arg24 expireState:(long long)arg25 messageActionType:(long long)arg26 associatedMessageGUID:(id)arg27 associatedMessageType:(long long)arg28 associatedMessageRange:(struct _NSRange)arg29 balloonBundleID:(id)arg30 payloadData:(id)arg31 expressiveSendStyleID:(id)arg32 timeExpressiveSendPlayed:(long long)arg33 messageSummaryInfo:(id)arg34 cloudKitSyncState:(long long)arg35 cloudKitRecordID:(id)arg36 cloudKitServerChangeTokenBlob:(id)arg37 cloudKitRecordChangeTag:(id)arg38 dataDetectorsInfo:(id)arg39 destinationCallerID:(id)arg40 replyToGUID:(id)arg41 sortID:(long long)arg42 threadOriginatorGUID:(id)arg43 threadOriginatorPart:(id)arg44 syndicationRanges:(id)arg45 syncedSyndicationRanges:(id)arg46;	// IMP=0x0000000000004800
@property(readonly, nonatomic, getter=isAssociatedMessage) _Bool associatedMessage;
@property(readonly, nonatomic, getter=isReply) _Bool reply;
@property(readonly, nonatomic) NSString *threadOriginatorGUID;
@property(readonly, nonatomic) long long associatedMessageType;
@property(readonly, copy, nonatomic) NSString *associatedMessageGUID;
@property(readonly, copy, nonatomic) NSAttributedString *attributedBodyText;
@property(readonly, copy, nonatomic) NSData *attributedBodyData;
@property(readonly, nonatomic) long long rawDateDelivered;
@property(readonly, nonatomic) NSDate *dateDelivered;
@property(readonly, nonatomic) long long rawDateRead;
@property(readonly, nonatomic) NSDate *dateRead;
@property(readonly, nonatomic) long long rawDate;
@property(readonly, nonatomic) NSDate *date;
@property(readonly, nonatomic) long long itemType;
@property(readonly, copy, nonatomic) NSString *text;
@property(readonly, copy, nonatomic) NSString *guid;
@property(readonly, nonatomic) long long rowID;
- (int)_propertyIDForProperty:(long long)arg1;	// IMP=0x00000000000044ba
- (CDStruct_7ef4fb35)_propertyDescriptorForProperty:(long long)arg1;	// IMP=0x000000000000448d
- (struct __CFArray *)_localCache;	// IMP=0x0000000000004476
- (void *)_fetchUpdatedRecord;	// IMP=0x000000000000445c
- (struct _IMDMessageRecordStruct *)cfMessageRecord;	// IMP=0x0000000000004434
- (unsigned long long)_cfTypeID;	// IMP=0x000000000000442a

@end

