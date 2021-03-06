//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BUCoalescingCallBlock, CKContainer, CKDatabase, CKRecordID, CKServerChangeToken, NSArray, NSData, NSMapTable, NSMutableDictionary, NSMutableSet, NSString, NSURL;
@protocol OS_dispatch_queue;

@interface BCCloudKitDatabaseController : NSObject
{
    struct os_unfair_lock_s _zoneObserversLock;	// 8 = 0x8
    _Bool _hasSubscription;	// 12 = 0xc
    _Bool _attachedToContainer;	// 13 = 0xd
    _Bool _serverFetchPostponed;	// 14 = 0xe
    _Bool _fetchRecordZoneChangesSuccess;	// 15 = 0xf
    CKDatabase *_database;	// 16 = 0x10
    CKContainer *_container;	// 24 = 0x18
    NSString *_subscriptionID;	// 32 = 0x20
    NSURL *_archiveURL;	// 40 = 0x28
    NSArray *_desiredRecordZoneIDs;	// 48 = 0x30
    NSMutableSet *_changedRecordZoneIDs;	// 56 = 0x38
    NSObject<OS_dispatch_queue> *_accessQueue;	// 64 = 0x40
    BUCoalescingCallBlock *_coalescedArchive;	// 72 = 0x48
    NSString *_containerIdentifier;	// 80 = 0x50
    NSString *_appBundleIdentifier;	// 88 = 0x58
    CKRecordID *_userRecordID;	// 96 = 0x60
    CKServerChangeToken *_serverChangeToken;	// 104 = 0x68
    NSData *_recordIDSalt;	// 112 = 0x70
    NSMutableDictionary *_recordZones;	// 120 = 0x78
    NSMutableDictionary *_observers;	// 128 = 0x80
    NSMapTable *_zoneObservers;	// 136 = 0x88
    NSMutableDictionary *_tokenStores;	// 144 = 0x90
    BUCoalescingCallBlock *_coalescedZoneFetch;	// 152 = 0x98
    double _backOffInterval;	// 160 = 0xa0
}

+ (void)startInternetConnectionReachabilityNotifier;	// IMP=0x0020000000019232
+ (id)decodeRecordFromSystemFields:(id)arg1;	// IMP=0x0010000000019134
+ (id)encodeRecordSystemFields:(id)arg1;	// IMP=0x001000000001909a
- (void).cxx_destruct;	// IMP=0x002000000001af8d
@property(nonatomic) _Bool fetchRecordZoneChangesSuccess; // @synthesize fetchRecordZoneChangesSuccess=_fetchRecordZoneChangesSuccess;
@property(nonatomic) _Bool serverFetchPostponed; // @synthesize serverFetchPostponed=_serverFetchPostponed;
@property(nonatomic) double backOffInterval; // @synthesize backOffInterval=_backOffInterval;
@property(nonatomic) _Bool attachedToContainer; // @synthesize attachedToContainer=_attachedToContainer;
@property(retain, nonatomic) BUCoalescingCallBlock *coalescedZoneFetch; // @synthesize coalescedZoneFetch=_coalescedZoneFetch;
@property(retain, nonatomic) NSMutableDictionary *tokenStores; // @synthesize tokenStores=_tokenStores;
@property(retain, nonatomic) NSMapTable *zoneObservers; // @synthesize zoneObservers=_zoneObservers;
@property(retain, nonatomic) NSMutableDictionary *observers; // @synthesize observers=_observers;
@property(retain, nonatomic) NSMutableDictionary *recordZones; // @synthesize recordZones=_recordZones;
@property(retain, nonatomic) NSData *recordIDSalt; // @synthesize recordIDSalt=_recordIDSalt;
@property(retain, nonatomic) CKServerChangeToken *serverChangeToken; // @synthesize serverChangeToken=_serverChangeToken;
@property(retain, nonatomic) CKRecordID *userRecordID; // @synthesize userRecordID=_userRecordID;
@property(retain, nonatomic) NSString *appBundleIdentifier; // @synthesize appBundleIdentifier=_appBundleIdentifier;
@property(copy, nonatomic) NSString *containerIdentifier; // @synthesize containerIdentifier=_containerIdentifier;
@property(retain, nonatomic) BUCoalescingCallBlock *coalescedArchive; // @synthesize coalescedArchive=_coalescedArchive;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *accessQueue; // @synthesize accessQueue=_accessQueue;
@property(retain, nonatomic) NSMutableSet *changedRecordZoneIDs; // @synthesize changedRecordZoneIDs=_changedRecordZoneIDs;
@property(copy, nonatomic) NSArray *desiredRecordZoneIDs; // @synthesize desiredRecordZoneIDs=_desiredRecordZoneIDs;
@property(copy, nonatomic) NSURL *archiveURL; // @synthesize archiveURL=_archiveURL;
@property(nonatomic) _Bool hasSubscription; // @synthesize hasSubscription=_hasSubscription;
@property(copy, nonatomic) NSString *subscriptionID; // @synthesize subscriptionID=_subscriptionID;
@property(retain, nonatomic) CKContainer *container; // @synthesize container=_container;
@property(retain, nonatomic) CKDatabase *database; // @synthesize database=_database;
- (void)unregisterServerChangeTokenStore:(id)arg1;	// IMP=0x001000000001a9a0
- (void)registerServerChangeTokenStore:(id)arg1 forZoneID:(id)arg2;	// IMP=0x001000000001a40a
- (void)addObserver:(id)arg1 zoneID:(id)arg2;	// IMP=0x001000000001a20c
- (void)removeObserver:(id)arg1;	// IMP=0x0010000000019fb0
- (void)removeObserver:(id)arg1 recordType:(id)arg2;	// IMP=0x0010000000019ce4
- (void)addObserver:(id)arg1 recordType:(id)arg2;	// IMP=0x0010000000019a78
- (void)zonesTemporarilyUnreadableWithError:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000198f5
- (void)zonesUnreadableDueToMissingD2DEncryptionIdentity:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000001958a
- (void)_deleteRecordZonesWithIDs:(id)arg1 qualityOfService:(long long)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000019276
- (id)p_unarchiveFromData:(id)arg1;	// IMP=0x0010000000018e6a
- (id)p_archiveToData;	// IMP=0x0010000000018c71
- (void)p_unarchive;	// IMP=0x0010000000018bbc
- (void)p_scheduleArchiveWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000018b24
- (void)p_informObserversOfCompletedFetchOfZone:(id)arg1;	// IMP=0x001000000001876c
- (void)p_informObserversOfRecordsChanged:(id)arg1 forRecordType:(id)arg2;	// IMP=0x001000000001841e
- (void)p_informObserversOfSaltVersionIdentifierChanged:(id)arg1 forZones:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000017bcb
- (void)p_informObserversOfRecordsChanged:(id)arg1;	// IMP=0x0010000000017976
- (void)p_informObserversOfAttachmentChange;	// IMP=0x001000000001756b
- (void)p_internetReachabilityChanged:(id)arg1;	// IMP=0x0010000000017153
- (void)p_fetchRecordZoneChanges:(id)arg1 optionsByRecordZoneID:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000014cbf
- (void)p_updateRetryParametersFromFetchZoneChangesOperationError:(id)arg1;	// IMP=0x0010000000014af2
- (void)p_fetchRecordZoneChangesForRecordZoneIDs:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000001406f
- (void)p_fetchZoneChanges:(CDUnknownBlockType)arg1;	// IMP=0x0010000000013a9b
- (void)p_createRecordIDSaltWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000000125d7
- (void)p_createRecordZones:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000010656
- (void)p_fetchDatabaseChanges:(CDUnknownBlockType)arg1;	// IMP=0x001000000000faeb
- (void)p_subscribeWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000000f1d9
- (void)p_unsubscribeToContainer:(id)arg1;	// IMP=0x001000000000ed55
- (id)recordNameFromRecordType:(id)arg1 identifier:(id)arg2;	// IMP=0x001000000000ec60
- (_Bool)establishedSalt;	// IMP=0x001000000000ec2d
- (id)saltedAndHashedIDFromLocalID:(id)arg1;	// IMP=0x001000000000ea80
- (void)recordZoneWithName:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000000e812
- (void)getAttached:(CDUnknownBlockType)arg1;	// IMP=0x001000000000e6f7
- (void)detachWithError:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000000e4e2
- (void)detach;	// IMP=0x001000000000e4cc
- (void)attachToZones:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000000d1ec
- (void)connectUserTo:(id)arg1 container:(id)arg2 updateSubscription:(_Bool)arg3 completion:(CDUnknownBlockType)arg4 subscriptionCompletion:(CDUnknownBlockType)arg5;	// IMP=0x001000000000cb09
- (void)willAttachToContainer:(id)arg1 serviceMode:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000000c744
- (void)fetchRecordForRecordID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000000c3f7
- (void)fetchChangesWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000000bd46
- (id)initWithSubscriptionID:(id)arg1 appBundleIdentifier:(id)arg2 archiveURL:(id)arg3;	// IMP=0x001000000000b053

@end

