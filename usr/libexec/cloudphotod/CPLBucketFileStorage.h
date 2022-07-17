//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CloudPhotoLibrary/CPLPlatformObject.h>

@class NSCountedSet, NSFileManager, NSString, NSURL;

@interface CPLBucketFileStorage : CPLPlatformObject
{
    NSURL *_urlForFiles;	// 8 = 0x8
    NSFileManager *_fileManager;	// 16 = 0x10
    NSString *_logDomain;	// 24 = 0x18
    NSCountedSet *_temporarilyRetainedURLs;	// 32 = 0x20
    NSCountedSet *_temporarilyRetainedURLsAtTheStartOfTransaction;	// 40 = 0x28
    _Bool _trackAllStoresAndDeletes;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00200000000698ee
@property(nonatomic) _Bool trackAllStoresAndDeletes; // @synthesize trackAllStoresAndDeletes=_trackAllStoresAndDeletes;
- (void)writeTransactionDidSucceed;	// IMP=0x00100000000698ad
- (void)writeTransactionDidFail;	// IMP=0x0010000000069869
- (_Bool)fileManager:(id)arg1 shouldProceedAfterError:(id)arg2 removingItemAtURL:(id)arg3;	// IMP=0x0010000000069762
- (_Bool)fileManager:(id)arg1 shouldRemoveItemAtURL:(id)arg2;	// IMP=0x0010000000069626
- (_Bool)resetWithError:(id *)arg1;	// IMP=0x0010000000068d24
- (id)fileEnumeratorIncludingPropertiesForKeys:(id)arg1 errorHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000068b81
- (_Bool)addDeleteFlagToFileAtURL:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000068b6f
- (_Bool)markForDeleteFileWithIdentity:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000068a29
- (_Bool)deleteFileWithIdentity:(id)arg1 includingOriginal:(_Bool)arg2 error:(id *)arg3;	// IMP=0x0010000000068523
- (_Bool)_markURLForDelete:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000068409
- (_Bool)discardAllRetainedFileURLsWithError:(id *)arg1;	// IMP=0x0010000000068342
- (_Bool)releaseFileURL:(id)arg1 error:(id *)arg2;	// IMP=0x001000000006820c
- (id)retainFileURLForIdentity:(id)arg1 resourceType:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x0010000000067fa6
- (void)checkFileSizeForIdentity:(id)arg1;	// IMP=0x0010000000067ebb
- (_Bool)hasFileWithIdentity:(id)arg1;	// IMP=0x0010000000067e62
- (_Bool)storeUnretainedData:(id)arg1 identity:(id)arg2 isOriginal:(_Bool)arg3 error:(id *)arg4;	// IMP=0x00100000000678a0
- (_Bool)storeUnretainedFileAtURL:(id)arg1 identity:(id)arg2 isOriginal:(_Bool)arg3 error:(id *)arg4;	// IMP=0x00100000000672e4
- (_Bool)storeData:(id)arg1 identity:(id)arg2 isOriginal:(_Bool)arg3 needsCommit:(_Bool *)arg4 onNewFile:(CDUnknownBlockType)arg5 error:(id *)arg6;	// IMP=0x0010000000066c54
- (_Bool)storeFileAtURL:(id)arg1 identity:(id)arg2 isOriginal:(_Bool)arg3 moveIfPossible:(_Bool)arg4 needsCommit:(_Bool *)arg5 onNewFile:(CDUnknownBlockType)arg6 error:(id *)arg7;	// IMP=0x00100000000665a1
- (_Bool)_fixupStoredDestinationURL:(id)arg1 isOriginal:(_Bool)arg2 needsCommit:(_Bool *)arg3 error:(id *)arg4;	// IMP=0x001000000006638f
- (_Bool)_getIsOriginal:(_Bool *)arg1 markedForDelete:(_Bool *)arg2 forDestinationURL:(id)arg3 error:(id *)arg4;	// IMP=0x001000000006619b
- (_Bool)_setIsOriginal:(_Bool *)arg1 markedForDelete:(_Bool *)arg2 onDestinationURL:(id)arg3 clearFlags:(_Bool)arg4 error:(id *)arg5;	// IMP=0x0010000000065f36
- (void)_clearFlagsOnURL:(id)arg1;	// IMP=0x0010000000065dc8
- (void)_clearFlagsOnFd:(int)arg1 url:(id)arg2;	// IMP=0x0010000000065a7d
- (id)_destinationURLForIdentity:(id)arg1;	// IMP=0x0010000000065930
- (_Bool)closeWithError:(id *)arg1;	// IMP=0x0010000000065928
- (_Bool)openWithError:(id *)arg1;	// IMP=0x0010000000065866
- (id)initWithAbstractObject:(id)arg1;	// IMP=0x0010000000065748

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
