//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ICConnectionConfiguration, JaliscoArtworkImporter, JaliscoLibrary, JaliscoMediaUpdateOperation, ML3MusicLibrary, NSMutableArray;
@protocol ICDCloudMusicLibraryJaliscoUpdateTaskHelper, OS_dispatch_queue;

@interface JaliscoRequestHandler : NSObject
{
    ICConnectionConfiguration *_configuration;	// 8 = 0x8
    ML3MusicLibrary *_musicLibrary;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_calloutQueue;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_updateLibraryQueue;	// 32 = 0x20
    id <ICDCloudMusicLibraryJaliscoUpdateTaskHelper> _updateTaskHelper;	// 40 = 0x28
    JaliscoLibrary *_jaliscoLibrary;	// 48 = 0x30
    JaliscoArtworkImporter *_artworkImporter;	// 56 = 0x38
    JaliscoMediaUpdateOperation *_updateLibraryOperation;	// 64 = 0x40
    NSMutableArray *_updateLibraryCompletionHandlers;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x002000000007d651
@property(readonly, copy, nonatomic) NSMutableArray *updateLibraryCompletionHandlers; // @synthesize updateLibraryCompletionHandlers=_updateLibraryCompletionHandlers;
@property(retain, nonatomic) JaliscoMediaUpdateOperation *updateLibraryOperation; // @synthesize updateLibraryOperation=_updateLibraryOperation;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *updateLibraryQueue; // @synthesize updateLibraryQueue=_updateLibraryQueue;
@property(readonly, nonatomic) JaliscoArtworkImporter *artworkImporter; // @synthesize artworkImporter=_artworkImporter;
- (id)_DAAPMediaKindFromJaliscoSupportedMediaKind:(long long)arg1;	// IMP=0x001000000007d5a1
- (void)_updateJaliscoLibraryWithClientIdentity:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000007d4df
- (void)_addLibraryOperation:(id)arg1 priority:(int)arg2 noLibraryHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000007d412
- (void)loadBooksForStoreIDs:(id)arg1 clientIdentity:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000007d24a
- (void)cancelAllOperationsAndWaitForOperationsToFinish:(_Bool)arg1;	// IMP=0x001000000007d11d
- (void)cancelAllOperations;	// IMP=0x001000000007d109
- (void)isMediaKindDisabledForJaliscoLibrary:(long long)arg1 withClientIdentity:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000007cfe8
- (void)updateJaliscoLibraryByRemovingMediaKind:(long long)arg1 withClientIdentity:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000007cec7
- (void)updateJaliscoLibraryWithClientIdentity:(id)arg1 byAddingMediaKind:(long long)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000007cda6
- (void)increasePriorityForAllOperations;	// IMP=0x001000000007cc30
- (void)decreasePriorityForAllOperations;	// IMP=0x001000000007caba
- (void)cancelOperationsWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000007c9ac
- (void)removeLibraryWithClientIdentity:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000007c836
- (void)loadMissingArtworkWithClientIdentity:(id)arg1;	// IMP=0x001000000007c820
- (void)loadScreenshotInfoForPurchaseHistoryIDs:(id)arg1 clientIdentity:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000007c249
- (void)loadArtworkInfoForPurchaseHistoryIDs:(id)arg1 clientIdentity:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000007bea7
- (void)deprioritizeScreenshotForPurchaseHistoryID:(unsigned long long)arg1;	// IMP=0x001000000007be56
- (void)deprioritizeItemArtworkForPurchaseHistoryID:(unsigned long long)arg1;	// IMP=0x001000000007be05
- (void)importScreenshotForPurchaseHistoryID:(unsigned long long)arg1 clientIdentity:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000007bce6
- (void)importItemArtworkForPurchaseHistoryID:(unsigned long long)arg1 clientIdentity:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000007bbc7
- (void)setItemProperties:(id)arg1 forPurchaseHistoryID:(unsigned long long)arg2 clientIdentity:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x001000000007b9c1
- (void)hideItemsWithPurchaseHistoryIDs:(id)arg1 clientIdentity:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000007b77f
- (void)updateLibraryWithClientIdentity:(id)arg1 reason:(long long)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000007ae7a
- (float)updateProgress;	// IMP=0x001000000007ada3
- (_Bool)isUpdateInProgressWithIsInitialImport:(_Bool *)arg1;	// IMP=0x001000000007ac83
- (id)jaliscoLibraryWithReason:(long long)arg1;	// IMP=0x001000000007a9ec
@property(readonly, nonatomic) JaliscoLibrary *jaliscoLibrary; // @synthesize jaliscoLibrary=_jaliscoLibrary;
- (void)cancelPendingChanges;	// IMP=0x001000000007a9c4
- (void)cancelPendingChangesWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000007a862
- (void)addOperation:(id)arg1 priority:(int)arg2;	// IMP=0x001000000007a7e4
- (void)dealloc;	// IMP=0x001000000007a64b
- (id)initWithConfiguration:(id)arg1 updateTaskHelper:(id)arg2;	// IMP=0x001000000007a4dc

@end

