//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class _PASLock;

@interface _PASDatabaseMigrator : NSObject
{
    _PASLock *_contexts;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000001d4bc
- (unsigned char)_clearDatabase:(id)arg1;	// IMP=0x000000000001d3c2
- (void)_prepareContexts:(id)arg1;	// IMP=0x000000000001d25a
- (unsigned char)_runQuery:(id)arg1 context:(id)arg2 database:(id)arg3;	// IMP=0x000000000001cffe
- (unsigned char)_runQueries:(id)arg1 nextVersion:(unsigned int)arg2 context:(id)arg3;	// IMP=0x000000000001cf2a
- (unsigned char)_migrateOneStepToVersion:(unsigned int)arg1 contexts:(id)arg2;	// IMP=0x000000000001ca1f
- (_Bool)_allContextsAtVersionZeroWithContexts:(id)arg1;	// IMP=0x000000000001c8ce
- (_Bool)_anyContextHasMismatchedVersionWithContexts:(id)arg1;	// IMP=0x000000000001c6bf
- (_Bool)_anyContextHasFutureVersionWithContexts:(id)arg1;	// IMP=0x000000000001c4d4
- (unsigned char)_skipFromZeroSchemaWithContexts:(id)arg1;	// IMP=0x000000000001c181
- (_Bool)_canContinueMigratingWithContexts:(id)arg1;	// IMP=0x000000000001bdcc
- (_Bool)_migrationNeededWithContexts:(id)arg1 toVersion:(unsigned int)arg2;	// IMP=0x000000000001bbb4
- (unsigned char)_unmigrateDatabasesWithContexts:(id)arg1;	// IMP=0x000000000001b9b8
- (unsigned char)_migrateDatabasesWithContexts:(id)arg1 toVersion:(unsigned int)arg2;	// IMP=0x000000000001b2ec
- (id)_contextForMigrationObject:(id)arg1;	// IMP=0x000000000001b076
- (id)description;	// IMP=0x000000000001afa0
- (_Bool)migrationNeeded;	// IMP=0x000000000001aef6
- (unsigned char)unmigrateDatabases;	// IMP=0x000000000001ae4b
- (unsigned char)migrateDatabasesToVersion:(unsigned int)arg1;	// IMP=0x000000000001ad9a
- (unsigned char)migrateDatabases;	// IMP=0x000000000001ad83
- (id)init;	// IMP=0x000000000001ad7d
- (id)initWithMigrationObjects:(id)arg1;	// IMP=0x000000000001aa92

@end

