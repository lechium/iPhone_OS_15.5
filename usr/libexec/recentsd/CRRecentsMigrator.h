//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol CRRecentsMigratorDelegate;

@interface CRRecentsMigrator : NSObject
{
    id <CRRecentsMigratorDelegate> _delegate;	// 8 = 0x8
    int _needsRebuild;	// 16 = 0x10
}

+ (_Bool)executeSQL:(id)arg1 database:(id)arg2;	// IMP=0x0040000000010d66
+ (void)setVersion:(int)arg1 ofDatabase:(id)arg2;	// IMP=0x0010000000010d3e
+ (int)versionOfDatabase:(id)arg1;	// IMP=0x0010000000010d21
+ (void)migrateLibraryFilesFrom:(id)arg1 to:(id)arg2;	// IMP=0x0010000000010a37
- (void)migrateMailEmbeddedLibraryToPath:(id)arg1;	// IMP=0x00200000000109c3
- (_Bool)migrateWithSQLiteConnection:(id)arg1 toVersion:(int)arg2;	// IMP=0x001000000000f2ea
- (_Bool)migrateWithSQLiteConnection:(id)arg1;	// IMP=0x001000000000f2d3
- (void)noteNeedsRebuild;	// IMP=0x001000000000f2c1
- (_Bool)needsRebuild;	// IMP=0x001000000000f2ac
- (void)dealloc;	// IMP=0x001000000000f275
- (id)initWithDelegate:(id)arg1;	// IMP=0x001000000000f238

@end

