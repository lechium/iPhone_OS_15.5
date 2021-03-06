//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface PLiPhotoMigrationSupport : NSObject
{
    _Atomic int _inFlightMigrationCount;	// 8 = 0x8
}

+ (id)sharedInstance;	// IMP=0x000000000002996d
- (void)_migrateiPhotoLibraryWithProgressHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000002cfea
- (void)fireMigrationOfiPhotoLibraryWithProgressHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000002ce14
- (void)_migrateiPhotoLibraryWorkerWithProgressHandler:(CDUnknownBlockType)arg1 iPhotoLibraryDir:(id)arg2;	// IMP=0x000000000002af79
- (id)_iPhotoToPhotosUuidMapTable;	// IMP=0x000000000002acac
- (id)_iPhotoMediaDirUuidListSortedByDateCreatedWithDir:(id)arg1;	// IMP=0x000000000002a794
- (id)_migratediPhotoDir;	// IMP=0x000000000002a707
- (id)_preMigratediPhotoDir;	// IMP=0x000000000002a67a
- (void)_deleteiPhotoSubDirectoryWithDirectoryPath:(id)arg1 subDirectoryName:(id)arg2 description:(id)arg3;	// IMP=0x000000000002a505
- (_Bool)_createParentDirectoryIfNecessaryWithPath:(id)arg1;	// IMP=0x000000000002a3f6
- (id)_firstFilePathWithAnyExtensionAtPath:(id)arg1 extension:(id *)arg2;	// IMP=0x000000000002a07f
- (id)_displayableUuidWithUuid:(id)arg1;	// IMP=0x0000000000029f8e
- (_Bool)_validateUuid:(id)arg1;	// IMP=0x0000000000029f22
- (id)_inFlightMigrationMarkerFilePath;	// IMP=0x0000000000029e95
- (_Bool)_isMigrating;	// IMP=0x0000000000029e87
- (void)_decrementInFlightMigrationCount;	// IMP=0x0000000000029e43
- (void)_incrementInFlightMigrationCount;	// IMP=0x0000000000029dfc
@property(readonly, nonatomic) _Bool migrationWasInterrupted;
- (void)migrateEachPreMigratediPhotoLibrary:(CDUnknownBlockType)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000029c1c
- (void)checkForUnmigratediPhotoContentWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000000299fa

@end

