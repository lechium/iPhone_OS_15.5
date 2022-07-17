//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSError, NSObject, NSString, NURenderContext, NURenderNode, NUSourceNode;
@protocol OS_dispatch_group, OS_dispatch_queue;

@interface NUCacheNode
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    NSObject<OS_dispatch_group> *_group;	// 16 = 0x10
    NURenderContext *_renderContext;	// 24 = 0x18
    NUSourceNode *_sourceNode;	// 32 = 0x20
    NSError *_sourceError;	// 40 = 0x28
    long long _subsampleFactor;	// 48 = 0x30
    NSString *_cachedCacheIdentifier;	// 56 = 0x38
}

+ (void)clearCacheDirectory;	// IMP=0x00000000001119db
+ (long long)_maxCacheDirectorySize;	// IMP=0x00000000001119c2
+ (void)_pruneCacheDirectory:(id)arg1 toSize:(long long)arg2;	// IMP=0x000000000011131a
+ (void)_ensureCacheDirectoryURL:(id)arg1;	// IMP=0x0000000000110d6b
+ (id)cacheDirectoryURL;	// IMP=0x0000000000110c86
+ (id)nodeWithInput:(id)arg1 settings:(id)arg2 pipelineState:(id)arg3 error:(out id *)arg4;	// IMP=0x0000000000110c1a
+ (id)registry;	// IMP=0x0000000000110bc3
- (void).cxx_destruct;	// IMP=0x0000000000110355
@property(retain) NSString *cachedCacheIdentifier; // @synthesize cachedCacheIdentifier=_cachedCacheIdentifier;
@property(readonly, nonatomic) long long subsampleFactor; // @synthesize subsampleFactor=_subsampleFactor;
- (_Bool)requiresAudioMix;	// IMP=0x0000000000110315
- (_Bool)requiresVideoComposition;	// IMP=0x000000000011030d
- (id)_evaluateVideoComposition:(out id *)arg1;	// IMP=0x00000000001102ae
- (id)_evaluateVideo:(out id *)arg1;	// IMP=0x000000000011024f
- (id)_evaluateImage:(out id *)arg1;	// IMP=0x00000000001101f0
- (id)_evaluateImageGeometry:(out id *)arg1;	// IMP=0x0000000000110179
- (void)resolveSourceWithResponse:(id)arg1;	// IMP=0x000000000010fcae
- (_Bool)installTemporaryURL:(id)arg1 intoPersistentURL:(id)arg2 error:(out id *)arg3;	// IMP=0x000000000010f730
- (id)newRenderRequestWithOriginalRequest:(id)arg1 error:(out id *)arg2;	// IMP=0x000000000010f3db
- (id)persistentURL;	// IMP=0x000000000010f08f
- (id)temporaryURLPrefix;	// IMP=0x000000000010ef81
- (id)persistentURLPrefix;	// IMP=0x000000000010eefa
@property(readonly, nonatomic) NSString *cacheIdentifier;
- (id)resolvedSourceNode:(out id *)arg1;	// IMP=0x000000000010e5d8
- (void)_resolveWithSourceNode:(id)arg1 error:(id)arg2;	// IMP=0x000000000010e3b2
- (void)resolveWithSourceNode:(id)arg1 error:(id)arg2;	// IMP=0x000000000010e2f3
- (_Bool)isResolved;	// IMP=0x000000000010e25e
- (id)evaluateRenderDependenciesWithRequest:(id)arg1 error:(out id *)arg2;	// IMP=0x000000000010da17
- (_Bool)tryLoadPersistentURL:(id)arg1 error:(out id *)arg2;	// IMP=0x000000000010da0f
- (long long)sampleMode;	// IMP=0x000000000010d99a
- (long long)subsampleFactorForScale:(CDStruct_912cb5d2)arg1;	// IMP=0x000000000010d96d
- (id)nodeByReplayingAgainstCache:(id)arg1 pipelineState:(id)arg2 error:(out id *)arg3;	// IMP=0x000000000010d20f
- (_Bool)isEqualToRenderNode:(id)arg1;	// IMP=0x000000000010d194
- (void)nu_updateDigest:(id)arg1;	// IMP=0x000000000010d102
- (unsigned long long)_hash;	// IMP=0x000000000010d0c6
@property(readonly, nonatomic) NURenderNode *inputNode;
- (id)descriptionSubClassHook;	// IMP=0x000000000010cfa6
- (id)initWithInput:(id)arg1 settings:(id)arg2 subsampleFactor:(long long)arg3;	// IMP=0x000000000010c83f
- (id)initWithInput:(id)arg1 settings:(id)arg2;	// IMP=0x000000000010c82a
- (id)initWithSettings:(id)arg1 inputs:(id)arg2;	// IMP=0x000000000010c4a4

@end
