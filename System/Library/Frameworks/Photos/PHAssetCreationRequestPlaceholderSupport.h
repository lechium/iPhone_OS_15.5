//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSXPCConnection, PLClientServerTransaction;

@interface PHAssetCreationRequestPlaceholderSupport
{
    PLClientServerTransaction *_serverTransaction;	// 16 = 0x10
    NSXPCConnection *_clientConnection;	// 24 = 0x18
    long long _placeholderCreationMode;	// 32 = 0x20
    _Bool _downloadSourceMode_shouldBakeInAdjustments;	// 40 = 0x28
    _Bool _downloadSourceMode_shouldFlattenLivePhoto;	// 41 = 0x29
}

- (void).cxx_destruct;	// IMP=0x000000000005cc4b
@property(readonly, nonatomic) __weak NSXPCConnection *clientConnection; // @synthesize clientConnection=_clientConnection;
- (void)performTransactionCompletionHandlingInPhotoLibrary:(id)arg1;	// IMP=0x000000000005c71a
- (id)createManagedObjectForInsertIntoPhotoLibrary:(id)arg1 error:(id *)arg2;	// IMP=0x000000000005c5b1
- (_Bool)validateInsertIntoPhotoLibrary:(id)arg1 error:(id *)arg2;	// IMP=0x000000000005c439
- (id)_fetchOptionsForDuplicateAssetPhotoLibraryType:(id)arg1;	// IMP=0x000000000005c39f
- (void)_updateManagedAssetAfterResourceDownload:(id)arg1;	// IMP=0x000000000005c203
- (id)_createPlaceholderManagedAssetFromSourceManagedAsset:(id)arg1 inPhotoLibrary:(id)arg2 error:(id *)arg3;	// IMP=0x000000000005b4e3
- (unsigned short)_bundleScopeForPlaceholderAsset;	// IMP=0x000000000005b4c6
- (void)changeFailedOnDaemonWithLibrary:(id)arg1 error:(id)arg2;	// IMP=0x000000000005b42e
- (void)changeFailedOnClientWithLibrary:(id)arg1 error:(id)arg2;	// IMP=0x000000000005b39e
- (id)initWithXPCDict:(id)arg1 request:(id)arg2 clientAuthorization:(id)arg3;	// IMP=0x000000000005b324
- (id)initForNewObjectWithUUID:(id)arg1;	// IMP=0x000000000005b2a3

@end

