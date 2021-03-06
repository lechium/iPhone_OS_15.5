//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <IMDaemonCore/APSConnectionDelegate-Protocol.h>

@class APSConnection, CKRecordZone, CKRecordZoneID, IMDCKDatabaseManager, NSString;

@interface IMDRecordZoneManager : NSObject <APSConnectionDelegate>
{
    CKRecordZoneID *_chatRecordZoneID;	// 8 = 0x8
    CKRecordZone *_chatRecordZone;	// 16 = 0x10
    CKRecordZoneID *_attachmentRecordZoneID;	// 24 = 0x18
    CKRecordZone *_attachmentRecordZone;	// 32 = 0x20
    CKRecordZoneID *_messageRecordZoneID;	// 40 = 0x28
    CKRecordZone *_messageRecordZone;	// 48 = 0x30
    CKRecordZoneID *_updateRecordZoneID;	// 56 = 0x38
    CKRecordZone *_updateRecordZone;	// 64 = 0x40
    CKRecordZoneID *_analyticRecordZoneID;	// 72 = 0x48
    CKRecordZone *_analyticRecordZone;	// 80 = 0x50
    CKRecordZoneID *_deDupeSaltZoneID;	// 88 = 0x58
    CKRecordZone *_deDupeSaltRecordZone;	// 96 = 0x60
    CKRecordZoneID *_metricZoneID;	// 104 = 0x68
    IMDCKDatabaseManager *_dataBaseManager;	// 112 = 0x70
    APSConnection *_pushConnection;	// 120 = 0x78
}

+ (id)sharedInstance;	// IMP=0x000000000002175d
@property(retain, nonatomic) APSConnection *pushConnection; // @synthesize pushConnection=_pushConnection;
@property(retain, nonatomic) IMDCKDatabaseManager *dataBaseManager; // @synthesize dataBaseManager=_dataBaseManager;
@property(readonly, nonatomic) CKRecordZoneID *metricZoneID; // @synthesize metricZoneID=_metricZoneID;
@property(readonly, nonatomic) CKRecordZone *deDupeSaltRecordZone; // @synthesize deDupeSaltRecordZone=_deDupeSaltRecordZone;
@property(readonly, nonatomic) CKRecordZoneID *deDupeSaltZoneID; // @synthesize deDupeSaltZoneID=_deDupeSaltZoneID;
@property(readonly, nonatomic) CKRecordZone *analyticRecordZone; // @synthesize analyticRecordZone=_analyticRecordZone;
@property(readonly, nonatomic) CKRecordZoneID *analyticRecordZoneID; // @synthesize analyticRecordZoneID=_analyticRecordZoneID;
@property(readonly, nonatomic) CKRecordZone *updateRecordZone; // @synthesize updateRecordZone=_updateRecordZone;
@property(readonly, nonatomic) CKRecordZoneID *updateRecordZoneID; // @synthesize updateRecordZoneID=_updateRecordZoneID;
@property(readonly, nonatomic) CKRecordZone *messageRecordZone; // @synthesize messageRecordZone=_messageRecordZone;
@property(readonly, nonatomic) CKRecordZoneID *messageRecordZoneID; // @synthesize messageRecordZoneID=_messageRecordZoneID;
@property(readonly, nonatomic) CKRecordZone *attachmentRecordZone; // @synthesize attachmentRecordZone=_attachmentRecordZone;
@property(readonly, nonatomic) CKRecordZoneID *attachmentRecordZoneID; // @synthesize attachmentRecordZoneID=_attachmentRecordZoneID;
@property(readonly, nonatomic) CKRecordZone *chatRecordZone; // @synthesize chatRecordZone=_chatRecordZone;
@property(readonly, nonatomic) CKRecordZoneID *chatRecordZoneID; // @synthesize chatRecordZoneID=_chatRecordZoneID;
- (void)fetchChatZoneToCheckManateeStatus:(CDUnknownBlockType)arg1;	// IMP=0x00000000000231f0
- (long long)derivedQualityOfService;	// IMP=0x000000000002315e
- (id)errorAnalyzer;	// IMP=0x0000000000023145
- (id)ckUtilities;	// IMP=0x000000000002312c
- (void)_deleteAllZonesForDatabase:(id)arg1;	// IMP=0x0000000000022f4a
- (void)deleteAllZones;	// IMP=0x0000000000022f0c
- (void)createSubscriptionIfNeededOnDeDupeZoneForSubscription:(id)arg1 recordType:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;	// IMP=0x0000000000022e88
- (void)deleteDeDupeSaltZone;	// IMP=0x0000000000022e57
- (void)createDeDupeSaltZoneIfNeededWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000022e17
- (void)deleteAnalyticZone;	// IMP=0x0000000000022de6
- (void)createAnalyticZoneIfNeededWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000022da6
- (void)deleteUpdateZone;	// IMP=0x0000000000022d75
- (void)createUpdateZoneIfNeededWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000022d35
- (void)deleteMessageZone;	// IMP=0x0000000000022d04
- (void)createMessageZoneIfNeededWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000022cc4
- (void)deleteAttachmentZone;	// IMP=0x0000000000022c93
- (void)createAttachmentZoneIfNeededWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000022c53
- (void)deleteChatZone;	// IMP=0x0000000000022c22
- (void)createChatZoneIfNeededWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000022be2
- (void)_deleteZone:(id)arg1 forDatabase:(id)arg2;	// IMP=0x0000000000022aba
- (void)_deleteZone:(id)arg1;	// IMP=0x0000000000022a68
- (void)_createRecordZoneIfNeeded:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000000022752
- (void)_createRecordZone:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000000022513
- (void)_checkRecordZoneExists:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000000000221e8
- (void)_createSubscriptionIfNeededForZoneID:(id)arg1 subscriptionID:(id)arg2 recordType:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;	// IMP=0x0000000000021fc9
- (void)_createSubscriptionForZoneID:(id)arg1 subscriptionID:(id)arg2 recordType:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;	// IMP=0x0000000000021e2c
- (void)_handleNotificationForZoneID:(id)arg1 subscriptionID:(id)arg2;	// IMP=0x0000000000021d7b
- (void)connection:(id)arg1 didReceiveIncomingMessage:(id)arg2;	// IMP=0x0000000000021c85
- (void)connection:(id)arg1 didReceivePublicToken:(id)arg2;	// IMP=0x0000000000021c57
- (void)_setUpPushConnection;	// IMP=0x0000000000021b33
- (void)dealloc;	// IMP=0x0000000000021a0f
- (id)init;	// IMP=0x00000000000217a2

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

