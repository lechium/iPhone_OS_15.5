//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotosUICore/PXGTextureAtlasManagerDelegate-Protocol.h>
#import <PhotosUICore/PXGTextureProviderDelegate-Protocol.h>

@class NSArray, NSDictionary, NSHashTable, NSIndexSet, NSMapTable, NSMutableDictionary, NSMutableSet, NSString, PXGEntityManager, PXGTextureManagerPreheatingStrategy, PXGViewEnvironment;
@protocol OS_dispatch_queue, PXGMutableSpriteTexture, PXGTextureConverter, PXGTextureManagerDelegate;

@interface PXGTextureManager : NSObject <PXGTextureProviderDelegate, PXGTextureAtlasManagerDelegate>
{
    NSObject<OS_dispatch_queue> *_requestQueue;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_workQueue;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_processQueue;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_adjustQueue;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_deallocationsQueue;	// 40 = 0x28
    struct os_unfair_lock_s _lookupLock;	// 48 = 0x30
    NSMapTable *_lookupLock_textureByKeyByPresentationType[2];	// 56 = 0x38
    struct unordered_map<int, PXGRequestDetails, std::hash<int>, std::equal_to<int>, std::allocator<std::pair<const int, PXGRequestDetails>>> _lookupLock_requestDetailsByRequestID;	// 72 = 0x48
    NSHashTable *_spriteTexturesInUse;	// 112 = 0x70
    NSMapTable *_pendingSpriteTextureByRequestID;	// 120 = 0x78
    NSDictionary *_textureConverterByPresentationType;	// 128 = 0x80
    id <PXGTextureConverter> _atlasTextureConverter;	// 136 = 0x88
    int _atlasPresentationType;	// 144 = 0x90
    _Bool _didSwitchTextureConverter;	// 148 = 0x94
    NSMutableDictionary *_textureProviderByMediaKind;	// 152 = 0x98
    NSMapTable *_textureProvidersDisplayLinkRegistrationState;	// 160 = 0xa0
    struct unordered_map<int, unsigned int, std::hash<int>, std::equal_to<int>, std::allocator<std::pair<const int, unsigned int>>> _spriteIndexByRequestID;	// 168 = 0xa8
    NSIndexSet *_loadedSpriteIndexes;	// 208 = 0xd0
    CDStruct_92e0aee2 *_streamInfoBySpriteIndex;	// 216 = 0xd8
    unsigned long long _streamInfoBySpriteIndexCount;	// 224 = 0xe0
    unsigned long long _streamInfoBySpriteIndexCapacity;	// 232 = 0xe8
    _Atomic unsigned char _isPerformingUpdateFromRequestQueue;	// 240 = 0xf0
    unsigned long long _requestQueue_pendingSetNeedsUpdate;	// 248 = 0xf8
    id <PXGMutableSpriteTexture> _emptyTexture;	// 256 = 0x100
    NSMutableSet *_placeholderTextures;	// 264 = 0x108
    NSArray *_trackedComponents;	// 272 = 0x110
    _Bool _lowMemoryMode;	// 280 = 0x118
    _Bool _isInactive;	// 281 = 0x119
    id <PXGTextureManagerDelegate> _delegate;	// 288 = 0x120
    PXGEntityManager *_entityManager;	// 296 = 0x128
    NSObject<OS_dispatch_queue> *_layoutQueue;	// 304 = 0x130
    NSArray *_textureConverters;	// 312 = 0x138
    PXGTextureManagerPreheatingStrategy *_preheatingStrategy;	// 320 = 0x140
    PXGViewEnvironment *_viewEnvironment;	// 328 = 0x148
    NSDictionary *_texturesByPresentationType;	// 336 = 0x150
    NSArray *_textureAtlasManagers;	// 344 = 0x158
    long long _streamCount;	// 352 = 0x160
}

- (id).cxx_construct;	// IMP=0x00000000007d427e
- (void).cxx_destruct;	// IMP=0x00000000007d4109
@property(readonly, nonatomic) long long streamCount; // @synthesize streamCount=_streamCount;
@property(retain) NSArray *textureAtlasManagers; // @synthesize textureAtlasManagers=_textureAtlasManagers;
@property(readonly, nonatomic) NSDictionary *texturesByPresentationType; // @synthesize texturesByPresentationType=_texturesByPresentationType;
@property(nonatomic) _Bool isInactive; // @synthesize isInactive=_isInactive;
@property(nonatomic) _Bool lowMemoryMode; // @synthesize lowMemoryMode=_lowMemoryMode;
@property(retain, nonatomic) PXGViewEnvironment *viewEnvironment; // @synthesize viewEnvironment=_viewEnvironment;
@property(retain, nonatomic) PXGTextureManagerPreheatingStrategy *preheatingStrategy; // @synthesize preheatingStrategy=_preheatingStrategy;
@property(copy, nonatomic) NSArray *textureConverters; // @synthesize textureConverters=_textureConverters;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *layoutQueue; // @synthesize layoutQueue=_layoutQueue;
@property(readonly, nonatomic) PXGEntityManager *entityManager; // @synthesize entityManager=_entityManager;
@property(nonatomic) __weak id <PXGTextureManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)textureAtlasManagerShouldPruneUnusedTextures:(id)arg1;	// IMP=0x00000000007d4014
- (void)textureProviderNeedsToUnregisterFromDisplayLinkUpdates:(id)arg1;	// IMP=0x00000000007d3f54
- (void)textureProviderNeedsToRegisterToDisplayLinkUpdates:(id)arg1;	// IMP=0x00000000007d3e94
- (void)textureProvider:(id)arg1 didProvidePayload:(id)arg2 forRequestID:(int)arg3;	// IMP=0x00000000007d3c57
- (void)textureProvider:(id)arg1 didProvideFailureWithError:(id)arg2 forRequestID:(int)arg3;	// IMP=0x00000000007d3b9f
- (void)textureProvider:(id)arg1 didProvideImageData:(id)arg2 withSpecAtIndex:(long long)arg3 size:(struct CGSize)arg4 bytesPerRow:(unsigned long long)arg5 contentsRect:(struct CGRect)arg6 forRequestID:(int)arg7;	// IMP=0x00000000007d39f4
- (void)textureProvider:(id)arg1 didProvidePixelBuffer:(struct __CVBuffer *)arg2 options:(CDStruct_05cac68f)arg3 forRequestID:(int)arg4;	// IMP=0x00000000007d3591
- (void)textureProvider:(id)arg1 didProvideCGImage:(struct CGImage *)arg2 options:(CDStruct_05cac68f)arg3 isDegraded:(_Bool)arg4 forRequestID:(int)arg5;	// IMP=0x00000000007d3014
- (void)textureProvider:(id)arg1 didProvideNothingForRequestID:(int)arg2;	// IMP=0x00000000007d2f9c
- (_Bool)_getRequestDetails:(out CDStruct_f1d50d6b *)arg1 forRequestID:(int)arg2;	// IMP=0x00000000007d2f0f
- (void)_applyAdjustment:(id)arg1 toTexture:(id)arg2 fromTextureProvider:(id)arg3 withTextureConverter:(id)arg4 forRequestID:(int)arg5 deliveryOrder:(unsigned int)arg6 requestDetails:(CDStruct_f1d50d6b)arg7;	// IMP=0x00000000007d2cd9
- (id)_createTextureForCVPixelBuffer:(struct __CVBuffer *)arg1 requestID:(int)arg2 requestDetails:(CDStruct_f1d50d6b)arg3 transform:(id)arg4 fromTextureProvider:(id)arg5 withTextureConverter: /* Error: Ran out of types for this method. */;	// IMP=0x00000000007d2a72
- (void)_processPixelBuffer:(struct __CVBuffer *)arg1 options:(CDStruct_05cac68f)arg2 fromTextureProvider:(id)arg3 withTextureConverter:(id)arg4 forRequestID:(int)arg5 requestDetails:(CDStruct_f1d50d6b)arg6 deliveryOrder:(unsigned int)arg7;	// IMP=0x00000000007d2754
- (id)_createTextureForCGImage:(struct CGImage *)arg1 requestID:(int)arg2 requestDetails:(CDStruct_f1d50d6b)arg3 transform:(id)arg4 fromTextureProvider:(id)arg5 withTextureConverter: /* Error: Ran out of types for this method. */;	// IMP=0x00000000007d25fe
- (void)_processCGImage:(struct CGImage *)arg1 options:(CDStruct_05cac68f)arg2 isDegraded:(_Bool)arg3 fromTextureProvider:(id)arg4 withTextureConverter:(id)arg5 requestID:(int)arg6 requestDetails:(CDStruct_f1d50d6b)arg7 deliveryOrder:(unsigned int)arg8;	// IMP=0x00000000007d22aa
- (void)_addTextureToTexturesInUse:(id)arg1;	// IMP=0x00000000007d202e
- (void)_handleProvidedSpriteTexture:(id)arg1 fromTextureProvider:(id)arg2 requestID:(int)arg3 deliveryOrder:(unsigned int)arg4;	// IMP=0x00000000007d1daf
- (id)_textureAtlasManagerForImageDataSpec:(CDStruct_6c943d2a)arg1;	// IMP=0x00000000007d1aaa
- (id)_storeTexture:(id)arg1 forPayload:(id)arg2;	// IMP=0x00000000007d1a88
- (id)_storeAdjustedTexture:(id)arg1 forSourceTexture:(id)arg2 adjustment:(id)arg3;	// IMP=0x00000000007d1987
- (id)_storeTexture:(id)arg1 forPixelBuffer:(struct __CVBuffer *)arg2;	// IMP=0x00000000007d1965
- (id)_storeTexture:(id)arg1 forCGImage:(struct CGImage *)arg2;	// IMP=0x00000000007d1943
- (id)_storeTexture:(id)arg1 forKey:(id)arg2;	// IMP=0x00000000007d183c
- (id)_existingTextureForPayload:(id)arg1 presentationType:(int)arg2;	// IMP=0x00000000007d181a
- (id)_existingAdjustedTextureForSourceTexture:(id)arg1 adjustment:(id)arg2 presentationType:(int)arg3;	// IMP=0x00000000007d174b
- (id)_existingTextureForPixelBuffer:(struct __CVBuffer *)arg1 presentationType:(int)arg2;	// IMP=0x00000000007d1739
- (id)_existingTextureForCGImage:(struct CGImage *)arg1 presentationType:(int)arg2;	// IMP=0x00000000007d1727
- (id)_existingTextureForKey:(id)arg1 presentationType:(int)arg2;	// IMP=0x00000000007d169d
- (void)_removeAllTexturesForPresentationType:(int)arg1;	// IMP=0x00000000007d1652
- (void)_enumerateTextureConverters:(CDUnknownBlockType)arg1;	// IMP=0x00000000007d159c
- (void)_enumerateTextureProviders:(CDUnknownBlockType)arg1;	// IMP=0x00000000007d14e6
- (void)_configureTextureProvider:(id)arg1;	// IMP=0x00000000007d146f
- (void)_configureAllTextureProviders;	// IMP=0x00000000007d141b
- (void)_configureTextureConverter:(id)arg1;	// IMP=0x00000000007d13c1
- (void)_configureAllTextureConverters;	// IMP=0x00000000007d136d
- (void)_updatePreheatingStrategy;	// IMP=0x00000000007d1307
- (void)simulateTextureLoad;	// IMP=0x00000000007d12a7
- (_Bool)streamUpdatedTexturesForDisplayLinkIfNeeded:(id)arg1;	// IMP=0x00000000007d101b
- (struct CGImage *)textureSnapshotForSpriteIndex:(unsigned int)arg1;	// IMP=0x00000000007d0f76
- (void)_enumerateSpriteTextures:(CDUnknownBlockType)arg1;	// IMP=0x00000000007d0d52
- (long long)_processTextureProviderResults;	// IMP=0x00000000007d0bfd
- (void)_lookupLock_requestTexturesForSpritesInRange:(struct _PXGSpriteIndexRange)arg1 textureProvider:(id)arg2 mediaKind:(int)arg3 presentationType:(int)arg4 isAppearing:(_Bool)arg5 layout:(id)arg6 leafSpriteIndexRange:(struct _PXGSpriteIndexRange)arg7 sprites:(CDStruct_d5f63e8f)arg8 textureStreamInfos:(CDStruct_92e0aee2 *)arg9 loadingStatus:(id)arg10;	// IMP=0x00000000007d0464
- (void)_blockOnThumbnailsIfNeededWithGeometries:(CDStruct_4f725fed *)arg1 visibleRect:(struct CGRect)arg2 interactionState:(CDStruct_da8e67cd)arg3 fences:(id)arg4;	// IMP=0x00000000007cfc90
- (void)_pruneTextures:(id)arg1;	// IMP=0x00000000007cfc0d
- (void)_streamTexturesForSpritesInDataStore:(id)arg1 presentationDataStore:(id)arg2 changeDetails:(id)arg3 layout:(id)arg4 interactionState:(CDStruct_da8e67cd)arg5 loadingStatus:(id)arg6;	// IMP=0x00000000007ce015
- (void)streamTexturesForSpritesInDataStore:(id)arg1 presentationDataStore:(id)arg2 changeDetails:(id)arg3 layout:(id)arg4 interactionState:(CDStruct_da8e67cd)arg5;	// IMP=0x00000000007cddf9
- (void)_resizeStorageIfNeededForSpriteCount:(long long)arg1;	// IMP=0x00000000007cdd9d
- (void)_requestQueue_scheduleUpdateIfAllowed;	// IMP=0x00000000007cdd05
- (void)_requestQueue_setNeedsUpdate;	// IMP=0x00000000007cdcec
- (void)_setNeedsUpdate;	// IMP=0x00000000007cdc5e
- (void)registerTextureProvider:(id)arg1 forMediaKind:(int)arg2;	// IMP=0x00000000007cda05
- (id)_textureConverterForPresentationType:(int)arg1 contentType:(unsigned long long)arg2;	// IMP=0x00000000007cd78b
- (void)_registerTextureConverter:(id)arg1 forPresentationType:(int)arg2;	// IMP=0x00000000007cd2b1
@property(readonly, copy) NSString *description;
- (void)dealloc;	// IMP=0x00000000007cc886
- (id)initWithEntityManager:(id)arg1 layoutQueue:(id)arg2;	// IMP=0x00000000007cc36c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

