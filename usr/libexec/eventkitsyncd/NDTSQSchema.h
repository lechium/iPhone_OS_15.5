//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NDTSQFile, NSString;

@interface NDTSQSchema : NSObject
{
    NDTSQFile *_db;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0020000000065f30
@property(retain, nonatomic) NDTSQFile *db; // @synthesize db=_db;
- (unsigned long long)lastInsertedRowId;	// IMP=0x0010000000065ec1
- (long long)changes;	// IMP=0x0010000000065e6d
- (void)rollback;	// IMP=0x0010000000065e30
- (void)commit;	// IMP=0x0010000000065df3
- (void)begin;	// IMP=0x0010000000065db6
- (void)parseSql:(id)arg1 andRun:(CDUnknownBlockType)arg2;	// IMP=0x0010000000065d30
- (void)executeSql:(id)arg1;	// IMP=0x0010000000065cbe
- (void)migrateFrom:(long long)arg1;	// IMP=0x0010000000065cb8
- (void)databaseChangedExternally;	// IMP=0x0010000000065cb2
- (long long)currentVersion;	// IMP=0x0010000000065ca7
- (id)instanceName;	// IMP=0x0010000000065c9a
- (void)createTables;	// IMP=0x0010000000065c94

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

