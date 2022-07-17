//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SafariSharedUI/WBSDataCacheDelegate-Protocol.h>
#import <SafariSharedUI/WBSSQLiteStoreDelegate-Protocol.h>

@class NSMapTable, NSString, NSURL, WBSFaviconProviderDatabaseController, WBSFaviconProviderPrivateCache, WBSFaviconProviderRecordCache, WBSOnDiskDataCache;
@protocol OS_dispatch_queue;

@interface WBSFaviconProviderPersistenceController : NSObject <WBSDataCacheDelegate, WBSSQLiteStoreDelegate>
{
    NSURL *_baseURL;	// 8 = 0x8
    WBSOnDiskDataCache *_faviconDiskCache;	// 16 = 0x10
    WBSFaviconProviderDatabaseController *_faviconDatabase;	// 24 = 0x18
    WBSFaviconProviderRecordCache *_recordsCache;	// 32 = 0x20
    WBSFaviconProviderPrivateCache *_privateCache;	// 40 = 0x28
    NSMapTable *_inMemoryImageCache;	// 48 = 0x30
    CDUnknownBlockType _setUpCompletionHandler;	// 56 = 0x38
    NSObject<OS_dispatch_queue> *_internalQueue;	// 64 = 0x40
    long long _controllerState;	// 72 = 0x48
    struct CGSize _preferredIconSize;	// 80 = 0x50
    _Bool _isReadOnly;	// 96 = 0x60
    NSURL *_databaseURL;	// 104 = 0x68
    NSURL *_diskCacheURL;	// 112 = 0x70
}

- (void).cxx_destruct;	// IMP=0x0000000000055799
@property(readonly, nonatomic) NSURL *diskCacheURL; // @synthesize diskCacheURL=_diskCacheURL;
@property(readonly, nonatomic) NSURL *databaseURL; // @synthesize databaseURL=_databaseURL;
- (void)sqliteStoreDidFallBackToInMemoryStore:(id)arg1;	// IMP=0x000000000005574d
- (void)sqliteStoreDidFailDatabaseIntegrityCheck:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000555a7
- (void)dataCacheDidSetUp:(id)arg1;	// IMP=0x0000000000055593
- (void)pageURLStringsPrefixedWithVariantsOfDomainString:(id)arg1 includingPrivateData:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000055305
- (void)firstIconForVariantsOfDomainString:(id)arg1 includingPrivateData:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000054f81
- (void)firstIconForVariantsOfPageURLString:(id)arg1 includingPrivateData:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000054b3d
- (void)iconInfoForIconURLString:(id)arg1 includingPrivateData:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000054761
- (void)iconInfoForPageURLString:(id)arg1 includingPrivateData:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000054393
- (void)_iconForIconUUID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000054228
- (void)iconForIconURLString:(id)arg1 includingPrivateData:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000053d8d
- (void)iconForPageURLString:(id)arg1 includingPrivateData:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000000538f2
- (void)removeIconFilesNotReferencedInDatabaseWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000005383b
- (void)removeIconsWithURLStringsNotFoundIn:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000053132
- (void)removeAllIconsWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000052ef1
- (void)removeIconWithPageURLString:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000052b11
- (void)linkPageURLString:(id)arg1 toIconURLString:(id)arg2 isPrivate:(_Bool)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000000000526fb
- (void)rejectedResourceInfosForPageURLString:(id)arg1 iconURLString:(id)arg2 includingPrivateData:(_Bool)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000000000524f6
- (void)setIconIsRejectedResource:(_Bool)arg1 forPageURLString:(id)arg2 iconURLString:(id)arg3 isPrivate:(_Bool)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x0000000000052273
- (void)setIconData:(id)arg1 forPageURLString:(id)arg2 iconURLString:(id)arg3 iconSize:(struct CGSize)arg4 hasGeneratedResolutions:(_Bool)arg5 isPrivate:(_Bool)arg6 completionHandler:(CDUnknownBlockType)arg7;	// IMP=0x0000000000051866
- (id)_imageFromURL:(id)arg1;	// IMP=0x0000000000051738
- (long long)_faviconStatusFromWBSSQLStoreStatus:(long long)arg1;	// IMP=0x0000000000051724
- (void)_finishSetUpWithStatus:(long long)arg1;	// IMP=0x000000000005165a
- (void)flushPrivateDataFromMemoryWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000000515b1
- (void)savePendingChangesBeforeTermination;	// IMP=0x00000000000514e5
- (void)closeWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000005126b
- (void)openAndCheckIntegrity:(_Bool)arg1 createIfNeeded:(_Bool)arg2 fallBackToMemoryStoreIfError:(_Bool)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0000000000050fa5
- (id)initWithPersistenceBaseURL:(id)arg1 databaseName:(id)arg2 preferredIconSize:(struct CGSize)arg3 isReadOnly:(_Bool)arg4;	// IMP=0x0000000000050d0a
- (id)init;	// IMP=0x0000000000050cfc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
