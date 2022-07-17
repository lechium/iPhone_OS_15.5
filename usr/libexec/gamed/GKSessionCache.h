//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CKRecordID, CKServerChangeToken, GKCloudPlayer, NSArray, NSDate, NSDictionary, NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

@interface GKSessionCache : NSObject
{
    NSObject<OS_dispatch_queue> *_cacheQueue;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_cacheUserQueue;	// 16 = 0x10
    _Bool _userHasSubscription;	// 24 = 0x18
    _Bool _friendRecordNeedsUpdate;	// 25 = 0x19
    CKRecordID *;	// 32 = 0x20
    double _lastSaveTimeStamp;	// 40 = 0x28
    NSMutableDictionary *_bundleIDsByContainerName;	// 48 = 0x30
    NSMutableDictionary *_bundleIDExpirations;	// 56 = 0x38
    struct sqlite3 *_database;	// 64 = 0x40
    NSString *_databasePath;	// 72 = 0x48
    NSDate *_expiration;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x002000000022dbcf
@property(retain, nonatomic) NSDate *expiration; // @synthesize expiration=_expiration;
@property(retain, nonatomic) NSString *databasePath; // @synthesize databasePath=_databasePath;
@property(nonatomic) struct sqlite3 *database; // @synthesize database=_database;
@property(retain, nonatomic) NSMutableDictionary *bundleIDExpirations; // @synthesize bundleIDExpirations=_bundleIDExpirations;
@property(retain, nonatomic) NSMutableDictionary *bundleIDsByContainerName; // @synthesize bundleIDsByContainerName=_bundleIDsByContainerName;
@property(retain, nonatomic) CKRecordID *userRecordID; // @synthesize userRecordID=_userRecordID;
- (double)doubleFromRowStatement:(struct sqlite3_stmt *)arg1 column:(int)arg2;	// IMP=0x001000000022db2f
- (int)intFromRowStatement:(struct sqlite3_stmt *)arg1 column:(int)arg2;	// IMP=0x001000000022db20
- (id)stringFromRowStatement:(struct sqlite3_stmt *)arg1 column:(int)arg2;	// IMP=0x001000000022dafa
- (id)dataFromRowStatement:(struct sqlite3_stmt *)arg1 column:(int)arg2;	// IMP=0x001000000022daae
- (_Bool)stepStatement:(id)arg1 parameters:(id)arg2 rowHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000022d4fb
- (_Bool)executeStatement:(id)arg1;	// IMP=0x001000000022d37e
- (void)closeDatabase;	// IMP=0x001000000022d35d
- (_Bool)openDatabase;	// IMP=0x001000000022d32b
- (id)sessionWithIdentifier:(id)arg1;	// IMP=0x001000000022d0da
- (id)sessionsInContainer:(id)arg1 ownerName:(id)arg2;	// IMP=0x001000000022cdc3
- (id)sessionsInContainer:(id)arg1;	// IMP=0x001000000022cdaf
- (id)sessionWithRecordID:(id)arg1;	// IMP=0x001000000022cd49
- (id)sessionFromData:(id)arg1;	// IMP=0x001000000022cc9d
- (void)updateWithChangedSessions:(id)arg1 removedSessions:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x001000000022bc2e
- (void)setFriendPlayers:(id)arg1 withEmails:(id)arg2;	// IMP=0x001000000022b6eb
@property(readonly, nonatomic) NSDictionary *friendEmailsByID; // @dynamic friendEmailsByID;
@property(readonly, nonatomic) NSArray *friendPlayers; // @dynamic friendPlayers;
- (void)_setToken:(id)arg1 forContainerName:(id)arg2 ownerName:(id)arg3;	// IMP=0x001000000022af46
- (void)updateWithChangedTokens:(id)arg1 removedTokenZoneIDs:(id)arg2;	// IMP=0x001000000022aac3
- (void)setToken:(id)arg1 forContainerName:(id)arg2 ownerName:(id)arg3;	// IMP=0x001000000022a985
- (id)tokenForContainerName:(id)arg1 ownerName:(id)arg2;	// IMP=0x001000000022a6f7
@property(retain, nonatomic) CKServerChangeToken *sharedDBToken; // @dynamic sharedDBToken;
@property(retain, nonatomic) CKServerChangeToken *privateDBToken; // @dynamic privateDBToken;
- (void)setToken:(id)arg1 forZoneID:(id)arg2;	// IMP=0x001000000022a5c6
- (id)tokenForZoneID:(id)arg1;	// IMP=0x001000000022a520
- (id)tokenFromData:(id)arg1;	// IMP=0x001000000022a474
@property(nonatomic) double lastSaveTimeStamp; // @synthesize lastSaveTimeStamp=_lastSaveTimeStamp;
@property(nonatomic) _Bool friendRecordNeedsUpdate; // @synthesize friendRecordNeedsUpdate=_friendRecordNeedsUpdate;
@property(nonatomic) _Bool userHasSubscription; // @synthesize userHasSubscription=_userHasSubscription;
- (_Bool)saveUserInfo;	// IMP=0x0010000000229f1b
- (void)readUserInfoFromDatabase;	// IMP=0x0010000000229dca
- (void)writeBundleIDsToDisk;	// IMP=0x0010000000229c7d
- (void)readBundleIDsFromDisk;	// IMP=0x0010000000229af1
- (id)bundleIDCacheURL;	// IMP=0x0010000000229a40
- (void)updateBundleIDs:(id)arg1 forContainerName:(id)arg2;	// IMP=0x001000000022989e
- (id)bundleIDsForContainerName:(id)arg1;	// IMP=0x00100000002296bc
- (void)updateUserWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x0010000000229117
@property(readonly, nonatomic) GKCloudPlayer *userPlayer; // @dynamic userPlayer;
- (void)createDatabaseIfNeeded;	// IMP=0x0010000000228b84
- (void)updateDatabasePath;	// IMP=0x0010000000228a5b
@property(nonatomic) _Bool isValid; // @dynamic isValid;
- (void)clearWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000002287f1
- (id)init;	// IMP=0x0010000000228715

@end
