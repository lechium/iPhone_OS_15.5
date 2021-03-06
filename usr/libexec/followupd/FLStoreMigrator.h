//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class FLSQLiteExecutor;

@interface FLStoreMigrator : NSObject
{
    FLSQLiteExecutor *_queryExecutor;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0020000000012a14
@property(retain) FLSQLiteExecutor *queryExecutor; // @synthesize queryExecutor=_queryExecutor;
- (void)_dropTables;	// IMP=0x0010000000012957
- (void)_createCurrentDatabaseWithTableSuffix:(id)arg1;	// IMP=0x0010000000012780
- (void)_migrateFujitailToCurrent;	// IMP=0x00100000000122dc
- (void)_migrateToCurrentFrom:(long long)arg1;	// IMP=0x0010000000011558
- (void)_createCleanCurrentDatabase;	// IMP=0x0010000000011523
- (void)_migrateSchema:(long long)arg1 toSchema:(long long)arg2;	// IMP=0x0010000000011360
- (long long)_schemaVersion;	// IMP=0x0010000000011223
- (void)migrateSchemeIfNecessary;	// IMP=0x00100000000111e2
- (id)initWithExecutor:(id)arg1;	// IMP=0x0010000000011188

@end

