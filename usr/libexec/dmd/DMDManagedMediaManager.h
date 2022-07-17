//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface DMDManagedMediaManager
{
    NSObject<OS_dispatch_queue> *_memberQueue;	// 8 = 0x8
    NSMutableDictionary *_memberQueuePersistentIDToNonStoreBook;	// 16 = 0x10
    NSMutableDictionary *_memberQueueiTunesStoreIDToStoreBook;	// 24 = 0x18
}

+ (_Bool)shouldBypassVPPLicenseCheck;	// IMP=0x002000000006027c
+ (id)homeSharingCloudClient;	// IMP=0x001000000005c45d
+ (id)sharedManager;	// IMP=0x001000000005c3d8
- (void).cxx_destruct;	// IMP=0x002000000006246a
@property(retain, nonatomic) NSMutableDictionary *memberQueueiTunesStoreIDToStoreBook; // @synthesize memberQueueiTunesStoreIDToStoreBook=_memberQueueiTunesStoreIDToStoreBook;
@property(retain, nonatomic) NSMutableDictionary *memberQueuePersistentIDToNonStoreBook; // @synthesize memberQueuePersistentIDToNonStoreBook=_memberQueuePersistentIDToNonStoreBook;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *memberQueue; // @synthesize memberQueue=_memberQueue;
- (void)uprootWithAssertion:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x0010000000062032
- (void)removeStoreBookWithiTunesStoreID:(id)arg1 assertion:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;	// IMP=0x0010000000061e85
- (void)removeNonStoreBookWithPersistentID:(id)arg1 assertion:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;	// IMP=0x0010000000061935
- (void)moveTransientStatesForward;	// IMP=0x00100000000618ae
- (void)memberQueueMoveTransientStatesForward;	// IMP=0x0010000000061289
@property(readonly, copy, nonatomic) NSArray *nonStoreBooks;
@property(readonly, copy, nonatomic) NSArray *storeBooks;
- (void)installStoreBookWithiTunesStoreID:(id)arg1 originator:(id)arg2 assertion:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;	// IMP=0x00100000000609c7
- (void)searchBookPurchaseHistoryForiTunesStoreID:(id)arg1 assertion:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;	// IMP=0x00100000000609ac
- (void)searchBookPurchaseHistoryForiTunesStoreID:(id)arg1 assertion:(id)arg2 triesLeft:(int)arg3 completionBlock:(CDUnknownBlockType)arg4;	// IMP=0x001000000006036f
- (void)refreshBookPurchaseHistoryCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000000602c5
- (void)installNonStoreBook:(id)arg1 fileExtension:(id)arg2 URL:(id)arg3 assertion:(id)arg4 completionBlock:(CDUnknownBlockType)arg5;	// IMP=0x001000000005f1f4
- (void)cancelNonStoreDownloadsWithDownloadIdentifiers:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x001000000005ee28
- (void)setState:(id)arg1 forStoreBookWithiTunesStoreID:(id)arg2;	// IMP=0x001000000005ecc4
- (void)setState:(id)arg1 forNonStoreBookWithPersistentID:(id)arg2;	// IMP=0x001000000005eb60
- (void)setStoreManagedBook:(id)arg1;	// IMP=0x001000000005e9d5
- (void)setNonStoreManagedBook:(id)arg1;	// IMP=0x001000000005e84a
- (void)rereadStoreBooksManifestCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x001000000005e744
- (void)rereadNonStoreBooksManifestCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x001000000005e63e
- (void)memberQueueRereadStoreBooksManifest;	// IMP=0x001000000005e364
- (void)memberQueueRereadNonStoreBooksManifest;	// IMP=0x001000000005e08a
- (void)memberQueueCommitStoreBooksManifest;	// IMP=0x001000000005ddf5
- (void)memberQueueCommitNonStoreBooksManifest;	// IMP=0x001000000005da19
- (void)memberQueueCleanUp;	// IMP=0x001000000005c7f0
- (void)cleanUpWithAssertion:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x001000000005c693
- (id)init;	// IMP=0x001000000005c4b2

@end
