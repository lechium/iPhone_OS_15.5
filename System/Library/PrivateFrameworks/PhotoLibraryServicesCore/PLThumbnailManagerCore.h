//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSLock, NSMutableDictionary, PLPhotoLibraryPathManager;
@protocol PLThumbPersistenceManager;

@interface PLThumbnailManagerCore : NSObject
{
    NSMutableDictionary *_thumbnailConfigurationDict;	// 8 = 0x8
    struct os_unfair_lock_s _ivarLock;	// 16 = 0x10
    NSLock *_thumbManagersLock;	// 24 = 0x18
    id <PLThumbPersistenceManager> _lastUsedThumbManager;	// 32 = 0x20
    unsigned short _lastUsedThumbManagerFormatID;	// 40 = 0x28
    NSArray *_fastImageTables;	// 48 = 0x30
    NSMutableDictionary *_thumbManagersByFormat;	// 56 = 0x38
    PLPhotoLibraryPathManager *_pathManager;	// 64 = 0x40
}

+ (id)supportedThumbnailFormatIDsForDeviceConfiguration:(id)arg1;	// IMP=0x000000000001649f
+ (void)stampThumbnailConfiguration:(id)arg1 toFile:(_Bool)arg2 withPathManager:(id)arg3;	// IMP=0x00000000000162e8
+ (_Bool)hasThumbnailConfigMismatchWithPathManager:(id)arg1 comparedToConfigPhase:(long long)arg2;	// IMP=0x0000000000015f37
+ (int)configurationThumbnailVersionWithPathManager:(id)arg1;	// IMP=0x0000000000015ec2
+ (_Bool)wantsTableOnlyRebuildForThumbnailConfigDict:(id)arg1;	// IMP=0x0000000000015e74
+ (void)markThumbnailConfigurationTableOnlyRebuildFinishedForThumbnailConfigDict:(id)arg1;	// IMP=0x0000000000015e58
+ (void)markThumbnailConfigurationForTableOnlyRebuildForThumbnailConfigDict:(id)arg1;	// IMP=0x0000000000015e35
+ (id)thumbnailConfigurationDictWithPathManager:(id)arg1;	// IMP=0x0000000000015d94
+ (id)thumbnailConfigurationPathWithPathManager:(id)arg1;	// IMP=0x0000000000015d2d
+ (void)removeThumbnailTablesUnsupportedOnly:(_Bool)arg1 withPathManager:(id)arg2;	// IMP=0x00000000000158eb
+ (_Bool)isMissingThumbnailTablesWithPathManager:(id)arg1;	// IMP=0x0000000000015530
+ (long long)requiredThumbnailResetTypeWithPathManager:(id)arg1 comparedToConfigPhase:(long long)arg2;	// IMP=0x00000000000152fe
+ (_Bool)_hasTableFormatsAndAllAreCompressedForFormatIDs:(id)arg1;	// IMP=0x00000000000151e4
+ (_Bool)_hasTableChangesOnlyFromFormatIDs:(id)arg1 toFormatIDs:(id)arg2;	// IMP=0x0000000000015114
+ (id)uncompressedImageTableSpecificationsWithPathManager:(id)arg1;	// IMP=0x0000000000015102
+ (id)tableThumbnailFormatsForConfigPhase:(long long)arg1 withPathManager:(id)arg2;	// IMP=0x0000000000014fe5
+ (id)thumbnailFormatsForConfigPhase:(long long)arg1 withPathManager:(id)arg2;	// IMP=0x0000000000014ec8
+ (id)thumbnailFormatIDsForConfigPhase:(long long)arg1 withPathManager:(id)arg2;	// IMP=0x0000000000014db8
+ (int)thumbnailVersionForConfigPhase:(long long)arg1 withPathManager:(id)arg2;	// IMP=0x0000000000014d1c
+ (void)invalidateIsSuppressingTargetConfigDueToPendingThumbMigrationForPathManager:(id)arg1;	// IMP=0x0000000000014cb3
+ (_Bool)isSuppressingTargetConfigDueToPendingThumbMigrationForPathManager:(id)arg1;	// IMP=0x0000000000014a23
+ (void)invalidateCachedConfig;	// IMP=0x00000000000149ec
+ (_Bool)_isSuppressingTargetConfigComparedToSavedConfigForPathManager:(id)arg1;	// IMP=0x00000000000148e9
+ (id)_formatIDsForIthmbFilesWithPathManager:(id)arg1;	// IMP=0x00000000000144ff
+ (id)_generateUncompressedImageTableSpecificationsForRunningConfigWithPathManager:(id)arg1;	// IMP=0x000000000001431d
+ (id)_configurationThumbnailFormatIDsWithPathManager:(id)arg1;	// IMP=0x0000000000013df3
+ (id)_generateTableFormatsFromFormatIDs:(id)arg1;	// IMP=0x00000000000138d8
+ (id)_thumbnailFormatsFromIDs:(id)arg1;	// IMP=0x00000000000136cb
- (void).cxx_destruct;	// IMP=0x0000000000013677
@property(readonly) PLPhotoLibraryPathManager *pathManager; // @synthesize pathManager=_pathManager;
@property(readonly) NSMutableDictionary *thumbManagersByFormat; // @synthesize thumbManagersByFormat=_thumbManagersByFormat;
- (id)fastThumbPersistenceManagers;	// IMP=0x000000000001336e
- (id)thumbManagerForFormatID:(unsigned short)arg1 thumbFileManagerClass:(Class)arg2;	// IMP=0x0000000000013022
- (void)dealloc;	// IMP=0x0000000000012fdf
- (id)initWithPhotoLibraryPathManager:(id)arg1;	// IMP=0x0000000000012c8b
- (id)_thumbManagerForFormatID:(unsigned short)arg1;	// IMP=0x0000000000012c58

@end
