//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CKRecord, CKServerChangeToken, NSArray, NSData, NSMutableArray;

@interface CloudBookmarksFetchResult : NSObject
{
    NSMutableArray *_mutableBookmarkListRecords;	// 8 = 0x8
    NSMutableArray *_mutableBookmarkLeafRecords;	// 16 = 0x10
    NSMutableArray *_mutableDeletedBookmarkRecords;	// 24 = 0x18
    CKServerChangeToken *_serverChangeToken;	// 32 = 0x20
    NSData *_clientChangeTokenData;	// 40 = 0x28
    NSArray *_itemConfigurations;	// 48 = 0x30
    CKRecord *_topBookmarkRecord;	// 56 = 0x38
    CKRecord *_migrationRecord;	// 64 = 0x40
    CKRecord *_encryptionRecord;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x00200000000297cd
@property(readonly, nonatomic) CKRecord *encryptionRecord; // @synthesize encryptionRecord=_encryptionRecord;
@property(readonly, nonatomic) CKRecord *migrationRecord; // @synthesize migrationRecord=_migrationRecord;
@property(readonly, nonatomic) CKRecord *topBookmarkRecord; // @synthesize topBookmarkRecord=_topBookmarkRecord;
@property(copy, nonatomic) NSArray *itemConfigurations; // @synthesize itemConfigurations=_itemConfigurations;
@property(copy, nonatomic) NSData *clientChangeTokenData; // @synthesize clientChangeTokenData=_clientChangeTokenData;
@property(retain, nonatomic) CKServerChangeToken *serverChangeToken; // @synthesize serverChangeToken=_serverChangeToken;
- (void)addDeletedRecordID:(id)arg1;	// IMP=0x001000000002974c
- (void)addRecord:(id)arg1;	// IMP=0x00100000000295bb
@property(readonly, copy, nonatomic) NSArray *allRecordIDs;
@property(readonly, copy, nonatomic) NSArray *deletedRecordIDs;
@property(readonly, copy, nonatomic) NSArray *bookmarkLeafRecords;
@property(readonly, copy, nonatomic) NSArray *bookmarkListRecords;
- (id)init;	// IMP=0x00100000000291c0

@end
