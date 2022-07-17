//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSFileManager, NSSet, PLInterLibraryTransferOptions, PLPhotoLibraryBundle;

@interface PLInterLibraryTransfer : NSObject
{
    PLPhotoLibraryBundle *_sourceBundle;	// 8 = 0x8
    PLPhotoLibraryBundle *_destinationBundle;	// 16 = 0x10
    PLInterLibraryTransferOptions *_options;	// 24 = 0x18
    NSFileManager *_fileManager;	// 32 = 0x20
    NSSet *_excludedEntityNames;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000044b4ca
@property(retain) NSSet *excludedEntityNames; // @synthesize excludedEntityNames=_excludedEntityNames;
@property(retain) NSFileManager *fileManager; // @synthesize fileManager=_fileManager;
@property(retain) PLInterLibraryTransferOptions *options; // @synthesize options=_options;
@property(retain) PLPhotoLibraryBundle *destinationBundle; // @synthesize destinationBundle=_destinationBundle;
@property(retain) PLPhotoLibraryBundle *sourceBundle; // @synthesize sourceBundle=_sourceBundle;
- (void)_validateSourceAsset:(id)arg1 destinationAsset:(id)arg2;	// IMP=0x000000000044afc6
- (void)_transferThumbnailsForSourceAsset:(id)arg1 toDestinationAsset:(id)arg2 filesCopied:(id)arg3;	// IMP=0x000000000044ab8e
- (_Bool)_copyFileFrom:(id)arg1 to:(id)arg2 error:(id *)arg3;	// IMP=0x000000000044a4ec
- (_Bool)_copyMasterThumbnailFrom:(id)arg1 toDestinationAsset:(id)arg2 filesCopied:(id)arg3 error:(id *)arg4;	// IMP=0x000000000044a0c1
- (_Bool)_copyFilesFromSourceAsset:(id)arg1 toDestinationAsset:(id)arg2 objectMap:(id)arg3 filesCopied:(id)arg4 error:(id *)arg5;	// IMP=0x000000000044965b
- (void)_setAttributes:(id)arg1 onObject:(id)arg2;	// IMP=0x00000000004494bd
- (void)_copyRelationship:(id)arg1 fromObject:(id)arg2 toObject:(id)arg3 inLibrary:(id)arg4 objectMap:(id)arg5;	// IMP=0x00000000004488e7
- (_Bool)_shouldSkipRelationship:(id)arg1;	// IMP=0x00000000004487f9
- (id)_createNewObjectWithEntity:(id)arg1 attributes:(id)arg2 inLibrary:(id)arg3;	// IMP=0x0000000000448601
- (id)_copyObject:(id)arg1 toDestinationObject:(id)arg2 toLibrary:(id)arg3 objectMap:(id)arg4;	// IMP=0x0000000000448129
- (id)_sourceAttributesFromObject:(id)arg1;	// IMP=0x000000000044802e
- (_Bool)_shouldSkipTransferWithSourceAsset:(id)arg1 destinationAsset:(id)arg2;	// IMP=0x00000000004478fd
- (id)_dedupedDestinationAssetWithSourceAsset:(id)arg1 destinationLibrary:(id)arg2;	// IMP=0x0000000000447490
- (_Bool)_deleteAsset:(id)arg1;	// IMP=0x00000000004472e0
- (id)_loadAssetWithValues:(id)arg1 forKeyPaths:(id)arg2 fromLibrary:(id)arg3 error:(id *)arg4;	// IMP=0x0000000000446ff8
- (id)_loadAssetWithUuid:(id)arg1 fromLibrary:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000446ee0
- (id)_loadDestinationLibraryWithError:(id *)arg1;	// IMP=0x0000000000446cbd
- (id)_loadSourceLibraryWithError:(id *)arg1;	// IMP=0x0000000000446a9a
- (_Bool)transferAssetWithUuid:(id)arg1 error:(id *)arg2;	// IMP=0x000000000044601a
- (id)initWithSourceBundle:(id)arg1 destinationBundle:(id)arg2 options:(id)arg3;	// IMP=0x0000000000445eb8

@end
