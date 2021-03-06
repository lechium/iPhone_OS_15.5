//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDateFormatter, NSHashTable, NSMutableArray, NSMutableDictionary, NSMutableSet, NSObject, NSProgress, NSString, NSURL, PFTimeZoneLookup, PHImportOptions, PHPhotoLibrary;
@protocol OS_dispatch_queue;

@interface PHImportSource
{
    NSMutableDictionary *_assetsByImportIdentifier;	// 8 = 0x8
    NSMutableDictionary *_representationsByImportIdentifier;	// 16 = 0x10
    NSMutableDictionary *_audioByImportIdentifier;	// 24 = 0x18
    NSHashTable *_observers;	// 32 = 0x20
    struct os_unfair_lock_s _observersLock;	// 40 = 0x28
    struct os_unfair_lock_s _itemsLock;	// 44 = 0x2c
    double _assetLoadingStart;	// 48 = 0x30
    _Bool _ejecting;	// 56 = 0x38
    _Bool _canAutolaunch;	// 57 = 0x39
    unsigned char _sourceAccessState;	// 58 = 0x3a
    _Bool _rampBatchInterval;	// 59 = 0x3b
    _Bool _open;	// 60 = 0x3c
    _Bool _canShowProgress;	// 61 = 0x3d
    _Bool _deleteContentAllowed;	// 62 = 0x3e
    NSString *_uuid;	// 64 = 0x40
    NSURL *_autolaunchApplicationURL;	// 72 = 0x48
    PHPhotoLibrary *_library;	// 80 = 0x50
    unsigned long long _currentItemIndex;	// 88 = 0x58
    unsigned long long _nextItemIndex;	// 96 = 0x60
    unsigned long long _completedItems;	// 104 = 0x68
    NSObject<OS_dispatch_queue> *_controlQueue;	// 112 = 0x70
    NSObject<OS_dispatch_queue> *_itemQueue;	// 120 = 0x78
    NSObject<OS_dispatch_queue> *_batchQueue;	// 128 = 0x80
    NSObject<OS_dispatch_queue> *_dupPathCollectionQueue;	// 136 = 0x88
    CDUnknownBlockType _completion;	// 144 = 0x90
    NSMutableArray *_duplicateAssets;	// 152 = 0x98
    NSObject<OS_dispatch_queue> *_processingQueue;	// 160 = 0xa0
    NSObject<OS_dispatch_queue> *_itemProcessingQueue;	// 168 = 0xa8
    NSMutableArray *_removedSourceFileIdentifiers;	// 176 = 0xb0
    NSDateFormatter *_dupeDateFormatter;	// 184 = 0xb8
    NSMutableArray *_processed;	// 192 = 0xc0
    double _batchStart;	// 200 = 0xc8
    unsigned long long _batchCount;	// 208 = 0xd0
    NSMutableDictionary *_importIdentifierToLivePhotoStateMap;	// 216 = 0xd8
    unsigned long long _batchSize;	// 224 = 0xe0
    double _batchInterval;	// 232 = 0xe8
    NSMutableArray *_items;	// 240 = 0xf0
    NSMutableSet *_folders;	// 248 = 0xf8
    NSMutableArray *_errors;	// 256 = 0x100
    PHImportOptions *_options;	// 264 = 0x108
    NSMutableArray *_assets;	// 272 = 0x110
    NSProgress *_progress;	// 280 = 0x118
    long long _assetLoadOrder;	// 288 = 0x120
    NSString *_prefix;	// 296 = 0x128
    NSMutableDictionary *_pairedSidecarsByImportIdentifier;	// 304 = 0x130
    PFTimeZoneLookup *_timeZoneLookup;	// 312 = 0x138
}

- (void).cxx_destruct;	// IMP=0x00000000001d61fc
@property(readonly) PFTimeZoneLookup *timeZoneLookup; // @synthesize timeZoneLookup=_timeZoneLookup;
@property(retain, nonatomic) NSMutableDictionary *pairedSidecarsByImportIdentifier; // @synthesize pairedSidecarsByImportIdentifier=_pairedSidecarsByImportIdentifier;
@property(retain, nonatomic) NSString *prefix; // @synthesize prefix=_prefix;
@property(nonatomic) long long assetLoadOrder; // @synthesize assetLoadOrder=_assetLoadOrder;
@property(retain, nonatomic) NSProgress *progress; // @synthesize progress=_progress;
@property(retain, nonatomic) NSMutableArray *assets; // @synthesize assets=_assets;
@property(retain, nonatomic) PHImportOptions *options; // @synthesize options=_options;
@property(nonatomic) _Bool deleteContentAllowed; // @synthesize deleteContentAllowed=_deleteContentAllowed;
@property(readonly) _Bool canShowProgress; // @synthesize canShowProgress=_canShowProgress;
@property(nonatomic) _Bool open; // @synthesize open=_open;
@property(retain) NSMutableArray *errors; // @synthesize errors=_errors;
@property(retain, nonatomic) NSMutableSet *folders; // @synthesize folders=_folders;
@property(retain, nonatomic) NSMutableArray *items; // @synthesize items=_items;
@property(nonatomic) double batchInterval; // @synthesize batchInterval=_batchInterval;
@property(nonatomic) unsigned long long batchSize; // @synthesize batchSize=_batchSize;
@property(retain, nonatomic) NSMutableDictionary *importIdentifierToLivePhotoStateMap; // @synthesize importIdentifierToLivePhotoStateMap=_importIdentifierToLivePhotoStateMap;
@property(nonatomic) _Bool rampBatchInterval; // @synthesize rampBatchInterval=_rampBatchInterval;
@property(nonatomic) unsigned long long batchCount; // @synthesize batchCount=_batchCount;
@property(nonatomic) double batchStart; // @synthesize batchStart=_batchStart;
@property(retain, nonatomic) NSMutableArray *processed; // @synthesize processed=_processed;
@property(retain, nonatomic) NSDateFormatter *dupeDateFormatter; // @synthesize dupeDateFormatter=_dupeDateFormatter;
@property(readonly, nonatomic) NSMutableArray *removedSourceFileIdentifiers; // @synthesize removedSourceFileIdentifiers=_removedSourceFileIdentifiers;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *itemProcessingQueue; // @synthesize itemProcessingQueue=_itemProcessingQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *processingQueue; // @synthesize processingQueue=_processingQueue;
@property(retain, nonatomic) NSMutableArray *duplicateAssets; // @synthesize duplicateAssets=_duplicateAssets;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dupPathCollectionQueue; // @synthesize dupPathCollectionQueue=_dupPathCollectionQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *batchQueue; // @synthesize batchQueue=_batchQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *itemQueue; // @synthesize itemQueue=_itemQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *controlQueue; // @synthesize controlQueue=_controlQueue;
@property(nonatomic) unsigned long long completedItems; // @synthesize completedItems=_completedItems;
@property(nonatomic) unsigned long long nextItemIndex; // @synthesize nextItemIndex=_nextItemIndex;
@property(nonatomic) unsigned long long currentItemIndex; // @synthesize currentItemIndex=_currentItemIndex;
@property(readonly, nonatomic) PHPhotoLibrary *library; // @synthesize library=_library;
@property(copy, nonatomic) NSURL *autolaunchApplicationURL; // @synthesize autolaunchApplicationURL=_autolaunchApplicationURL;
@property(nonatomic) unsigned char sourceAccessState; // @synthesize sourceAccessState=_sourceAccessState;
@property(readonly, nonatomic) _Bool canAutolaunch; // @synthesize canAutolaunch=_canAutolaunch;
@property(readonly, nonatomic, getter=isEjecting) _Bool ejecting; // @synthesize ejecting=_ejecting;
@property(retain, nonatomic) NSString *uuid; // @synthesize uuid=_uuid;
- (id)assetsDescription;	// IMP=0x00000000001d577c
- (void)findDuplicatesOfItems:(id)arg1 considerItemsInTheTrash:(_Bool)arg2;	// IMP=0x00000000001d5660
- (void)loadSidecarsFor:(id)arg1;	// IMP=0x00000000001d5194
- (_Bool)confirmAsset:(id)arg1 isSidecarOfAsset:(id)arg2;	// IMP=0x00000000001d512c
- (_Bool)confirmAsset:(id)arg1 isBaseOf:(id)arg2;	// IMP=0x00000000001d4f0f
- (_Bool)confirmAsset:(id)arg1 isSocOf:(id)arg2;	// IMP=0x00000000001d4c27
- (_Bool)confirmAsset:(id)arg1 isRenderOf:(id)arg2;	// IMP=0x00000000001d4a6f
- (void)setIsLivePhotoForImportIdentifier:(id)arg1;	// IMP=0x00000000001d456a
- (_Bool)processPotentialJpegAsset:(id)arg1 plusRawAsset:(id)arg2;	// IMP=0x00000000001d402f
- (_Bool)batchComplete;	// IMP=0x00000000001d3dfc
- (_Bool)date:(id)arg1 matchesDate:(id)arg2;	// IMP=0x00000000001d3cf9
- (id)deleteImportAssets:(id)arg1 isConfirmed:(_Bool)arg2 isCancelable:(_Bool)arg3 atEnd:(CDUnknownBlockType)arg4;	// IMP=0x00000000001d3cf1
- (void)removeAssets:(id)arg1;	// IMP=0x00000000001d3c5f
- (void)addSourceFileIdentifiersForRemovedFiles:(id)arg1;	// IMP=0x00000000001d3bcb
- (void)addItems:(id)arg1;	// IMP=0x00000000001d3ada
@property(readonly, nonatomic) _Bool stalled;
- (_Bool)isDone;	// IMP=0x00000000001d3994
- (id)nextItem;	// IMP=0x00000000001d38bd
- (void)accessItems:(CDUnknownBlockType)arg1;	// IMP=0x00000000001d387d
- (_Bool)isLivePhotoForImportIdentifier:(id)arg1;	// IMP=0x00000000001d37c8
- (void)addRepresentationsForAsset:(id)arg1;	// IMP=0x00000000001d2b70
- (void)processResource:(id)arg1;	// IMP=0x00000000001d12f4
- (void)processRepresentation:(id)arg1;	// IMP=0x00000000001d00d0
- (id)processAssets:(id)arg1;	// IMP=0x00000000001cfbd0
- (id)deleteImportAssets:(id)arg1 isConfirmed:(_Bool)arg2 atEnd:(CDUnknownBlockType)arg3;	// IMP=0x00000000001cfbc8
- (_Bool)isPairedSidecar:(id)arg1;	// IMP=0x00000000001cfaa7
- (void)addPairedSidecar:(id)arg1;	// IMP=0x00000000001cf8ed
- (void)endWork;	// IMP=0x00000000001cf07a
- (void)endBatch;	// IMP=0x00000000001ce6b7
- (id)assetsByProcessingItem:(id)arg1;	// IMP=0x00000000001ce63a
- (void)processNextItems;	// IMP=0x00000000001ce5e8
- (void)beginProcessingWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000001ce52f
- (void)beginWork;	// IMP=0x00000000001ce453
- (_Bool)containsSupportedMediaWithImportExceptions:(id *)arg1;	// IMP=0x00000000001ce42c
- (void)dispatchAssetDataRequestAsync:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000000001ce408
- (void)stopAssetLoading;	// IMP=0x00000000001ce3b6
- (void)resumeAssetLoading;	// IMP=0x00000000001ce364
- (void)pauseAssetLoading;	// IMP=0x00000000001ce312
- (id)loadAssetsForLibrary:(id)arg1 allowDuplicates:(_Bool)arg2 order:(long long)arg3 batchSize:(unsigned long long)arg4 batchInterval:(double)arg5 atEnd:(CDUnknownBlockType)arg6;	// IMP=0x00000000001cdf37
- (id)loadAssetsForLibrary:(id)arg1 allowDuplicates:(_Bool)arg2 order:(long long)arg3 batchInterval:(double)arg4 atEnd:(CDUnknownBlockType)arg5;	// IMP=0x00000000001cdf04
- (id)loadAssetsForLibrary:(id)arg1 allowDuplicates:(_Bool)arg2 order:(long long)arg3 batchSize:(unsigned long long)arg4 atEnd:(CDUnknownBlockType)arg5;	// IMP=0x00000000001cdeec
- (id)loadAssetsForLibrary:(id)arg1 allowDuplicates:(_Bool)arg2 order:(long long)arg3 atEnd:(CDUnknownBlockType)arg4;	// IMP=0x00000000001cdec7
@property(readonly, nonatomic) _Bool isOptimizedCPLStorage;
@property(readonly) _Bool canReference;
@property(readonly, nonatomic) _Bool canDeleteContent;
- (id)requestDeleteAssetsForRecords:(id)arg1;	// IMP=0x00000000001cdea7
- (void)eject;	// IMP=0x00000000001cdea1
@property(readonly, nonatomic) NSString *volumePath;
@property(readonly, nonatomic) _Bool isAvailable;
@property(readonly, nonatomic) _Bool isLibrary;
@property(readonly, nonatomic) _Bool isConnectedDevice;
@property(readonly, nonatomic) _Bool canEject;
@property(readonly, nonatomic) _Bool isAppleDevice;
@property(readonly, nonatomic) _Bool isCamera;
@property(readonly, nonatomic) struct CGImage *icon;
@property(readonly, nonatomic) NSString *path;
@property(readonly, nonatomic) NSString *productKind;
@property(readonly, nonatomic) NSString *name;
- (void)notifyObserversUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000001cdcda
- (void)removeImportSourceObserver:(id)arg1;	// IMP=0x00000000001cdc79
- (void)addImportSourceObserver:(id)arg1;	// IMP=0x00000000001cdc18
- (id)description;	// IMP=0x00000000001cdb90
- (id)init;	// IMP=0x00000000001cd8e0

@end

