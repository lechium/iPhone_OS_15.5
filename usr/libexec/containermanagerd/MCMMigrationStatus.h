//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSURL;

@interface MCMMigrationStatus : NSObject
{
    NSMutableDictionary *_migrationInfo;	// 8 = 0x8
    NSURL *_migrationFileURL;	// 16 = 0x10
}

+ (id)currentBuildVersion;	// IMP=0x00400000000a103b
- (void).cxx_destruct;	// IMP=0x00200000000a0fd5
@property(retain, nonatomic) NSURL *migrationFileURL; // @synthesize migrationFileURL=_migrationFileURL;
@property(retain, nonatomic) NSMutableDictionary *migrationInfo; // @synthesize migrationInfo=_migrationInfo;
- (id)_iso8601DateFormatter;	// IMP=0x00100000000a0f6f
- (_Bool)isBuildUpgrade;	// IMP=0x00100000000a08aa
- (void)writeCurrentBuildInfoToDisk;	// IMP=0x00100000000a06de
- (void)setMigrationCompleteForType:(id)arg1;	// IMP=0x00100000000a03f0
- (_Bool)hasMigrationOccurredForType:(id)arg1;	// IMP=0x00100000000a0366
- (_Bool)_writeMigrationStatusToDisk;	// IMP=0x00100000000a0098
- (id)_readMigrationStatusFromDisk;	// IMP=0x001000000009fdaf
- (void)_migrateFromManyMarkerFilesToOneWithLibraryPath:(id)arg1;	// IMP=0x001000000009fbcb
- (void)_removeMarkerFileWithName:(id)arg1 libraryPath:(id)arg2;	// IMP=0x001000000009f991
- (void)_readStatusFromMarkerFileWithName:(id)arg1 andSetAsType:(id)arg2 libraryPath:(id)arg3;	// IMP=0x001000000009f6b9
- (id)init;	// IMP=0x001000000009f6a7
- (id)initForMobileUserMigration;	// IMP=0x001000000009f3ac
- (id)initForSystemMigration;	// IMP=0x001000000009f09c

@end

