//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSURL, PQLConnection;

__attribute__((visibility("hidden")))
@interface BRCDatabaseBackupStorage : NSObject
{
    PQLConnection *_database;	// 8 = 0x8
    NSURL *_databaseURL;	// 16 = 0x10
    NSArray *_urlPropertiesToFetch;	// 24 = 0x18
    NSURL *_attachedDatabaseURL;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000000f4945
@property(retain, nonatomic) NSURL *attachedDatabaseURL; // @synthesize attachedDatabaseURL=_attachedDatabaseURL;
@property(retain, nonatomic) NSArray *urlPropertiesToFetch; // @synthesize urlPropertiesToFetch=_urlPropertiesToFetch;
@property(retain, nonatomic) NSURL *databaseURL; // @synthesize databaseURL=_databaseURL;
@property(retain, nonatomic) PQLConnection *database; // @synthesize database=_database;
- (_Bool)fixUpClientState:(id)arg1;	// IMP=0x00000000000f4641
- (_Bool)fixUpBackupDetector:(id)arg1;	// IMP=0x00000000000f42ef
- (_Bool)clearStagedIDs:(id)arg1;	// IMP=0x00000000000f419c
- (_Bool)updateIDs:(id)arg1;	// IMP=0x00000000000f3e7f
- (_Bool)negateIDs:(id)arg1;	// IMP=0x00000000000f3d2c
- (_Bool)setForeignKeys:(id)arg1 enabled:(_Bool)arg2;	// IMP=0x00000000000f3c58
- (_Bool)updateAttachedDatabase;	// IMP=0x00000000000f3985
- (id)docIDForURL:(id)arg1;	// IMP=0x00000000000f3885
- (_Bool)attachDatabase:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000f34a7
- (void)populateNewColumnsInDatabase:(id)arg1 forRecord:(id)arg2 basePath:(id)arg3;	// IMP=0x00000000000f3003
- (void)populateNewColumnsWithBasePath:(id)arg1;	// IMP=0x00000000000f2d28
- (id)backupManifestEnumerator:(id)arg1;	// IMP=0x00000000000f2c80
- (void)flushAndClose;	// IMP=0x00000000000f2a44
- (_Bool)addRecord:(id)arg1;	// IMP=0x00000000000f2829
- (_Bool)setUpDatabaseWithError:(id *)arg1;	// IMP=0x00000000000f2661
- (void)dealloc;	// IMP=0x00000000000f24b9
- (id)initWithDatabaseURL:(id)arg1;	// IMP=0x00000000000f2305

@end

