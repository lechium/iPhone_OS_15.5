//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PHASE/MetaParameterValueProtocol-Protocol.h>

@class NSDictionary, PHASEEngine, PHASESoundPrototype;

@interface PHASESoundEvent : NSObject <MetaParameterValueProtocol>
{
    PHASEEngine *_engine;	// 8 = 0x8
    _Bool _startCalled;	// 16 = 0x10
    PHASESoundPrototype *_protoType;	// 24 = 0x18
    struct shared_ptr<Phase::ActionTreeObject> _actionTreeObject;	// 32 = 0x20
    struct vector<Phase::UniqueObjectId, std::allocator<Phase::UniqueObjectId>> _submixIds;	// 48 = 0x30
    _Bool _indefinite;	// 72 = 0x48
    _Bool _isIndefinite;	// 73 = 0x49
    long long _renderingState;	// 80 = 0x50
    long long _prepareState;	// 88 = 0x58
    NSDictionary *_metaParameters;	// 96 = 0x60
    NSDictionary *_mixers;	// 104 = 0x68
    NSDictionary *_pushStreamNodes;	// 112 = 0x70
}

+ (id)new;	// IMP=0x0000000000144260
- (id).cxx_construct;	// IMP=0x000000000014ae2b
- (void).cxx_destruct;	// IMP=0x000000000014adc9
@property(readonly, getter=isIndefinite) _Bool indefinite; // @synthesize indefinite=_indefinite;
@property(readonly, copy) NSDictionary *pushStreamNodes; // @synthesize pushStreamNodes=_pushStreamNodes;
@property(readonly, copy) NSDictionary *mixers; // @synthesize mixers=_mixers;
@property(readonly, copy) NSDictionary *metaParameters; // @synthesize metaParameters=_metaParameters;
- (void)seekToTime:(double)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000014a7c5
- (_Bool)seekToTime:(double)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000000014a7b0
- (_Bool)seekToTime:(double)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000014a6e6
- (id)internalGetActionTreePushStreamNodes:(id)arg1;	// IMP=0x000000000014a1ff
- (id)internalGetActionTreeMixersWithMixerParameters:(id)arg1 actionTreeAsset:(const void *)arg2 outError:(id *)arg3;	// IMP=0x0000000000149355
- (id)internalGetActionTreeMetaParameters;	// IMP=0x0000000000148fcd
- (id)getActionTreeMetaParameterNames;	// IMP=0x0000000000148e7f
- (_Bool)internalStartActionTreeWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000148a38
- (_Bool)internalPrepareActionTreeWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000001485f1
- (void)dealloc;	// IMP=0x0000000000148248
- (_Bool)indefinite;	// IMP=0x0000000000148204
@property(readonly) long long prepareState; // @synthesize prepareState=_prepareState;
@property(readonly) long long renderingState; // @synthesize renderingState=_renderingState;
- (void)setMetaParameter:(id)arg1 value:(id)arg2;	// IMP=0x0000000000147fe6
- (void)setMetaParameter:(id)arg1 value:(double)arg2 withTimeInterval:(double)arg3;	// IMP=0x0000000000147e94
- (void)unregisterTapSources;	// IMP=0x0000000000147ddf
- (void)registerTapSources;	// IMP=0x0000000000147a56
- (void)stopAndInvalidate;	// IMP=0x00000000001477ff
- (void)stopAndDestroy;	// IMP=0x00000000001477ed
- (void)resume;	// IMP=0x00000000001475a5
- (void)pause;	// IMP=0x000000000014735d
- (_Bool)startWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000147348
- (_Bool)startWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000147288
- (_Bool)startAndReturnError:(id *)arg1;	// IMP=0x0000000000147271
- (void)startWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000146d8d
- (void)prepareWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000146d7b
- (_Bool)prepareAndReturnError:(id *)arg1;	// IMP=0x0000000000146d64
- (void)prepareWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000146936
- (void)prepareWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000001464c3
- (unsigned long long)hash;	// IMP=0x000000000014648e
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000146411
- (id)initWithEngine:(id)arg1 registeredSoundEventNodeAsset:(id)arg2 source:(id)arg3 listener:(id)arg4 outError:(id *)arg5;	// IMP=0x0000000000146324
- (id)initWithEngine:(id)arg1 registeredSoundEventNodeAsset:(id)arg2 outError:(id *)arg3;	// IMP=0x000000000014628a
- (id)initWithEngine:(id)arg1 registeredSoundEventNodeAsset:(id)arg2 mixerParameters:(id)arg3 outError:(id *)arg4;	// IMP=0x00000000001461be
- (id)initWithEngine:(id)arg1 registeredActionTreeUID:(id)arg2 source:(id)arg3 listener:(id)arg4 outError:(id *)arg5;	// IMP=0x00000000001461ac
- (id)initWithEngine:(id)arg1 registeredSoundEventNodeAssetUID:(id)arg2 source:(id)arg3 listener:(id)arg4 outError:(id *)arg5;	// IMP=0x000000000014619a
- (id)initWithEngine:(id)arg1 assetIdentifier:(id)arg2 source:(id)arg3 listener:(id)arg4 error:(id *)arg5;	// IMP=0x0000000000146078
- (id)initWithEngine:(id)arg1 registeredActionTreeUID:(id)arg2 outError:(id *)arg3;	// IMP=0x0000000000146066
- (id)initWithEngine:(id)arg1 assetIdentifier:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000145f9e
- (id)initWithEngine:(id)arg1 registeredActionTreeUID:(id)arg2 mixerParameters:(id)arg3 outError:(id *)arg4;	// IMP=0x0000000000145f8c
- (id)initWithEngine:(id)arg1 assetIdentifier:(id)arg2 mixerParameters:(id)arg3 error:(id *)arg4;	// IMP=0x0000000000145ea2
- (id)initWithEngine:(id)arg1 registeredSoundEventNodeAssetUID:(id)arg2 mixerParameters:(id)arg3 error:(id *)arg4;	// IMP=0x0000000000145e90
- (id)initWithEngine:(id)arg1 actionTreeRootNode:(id)arg2 source:(id)arg3 listener:(id)arg4 outError:(id *)arg5;	// IMP=0x0000000000145e7e
- (id)initWithEngine:(id)arg1 rootNode:(id)arg2 source:(id)arg3 listener:(id)arg4 error:(id *)arg5;	// IMP=0x0000000000145d5c
- (id)initWithEngine:(id)arg1 actionTreeRootNode:(id)arg2 outError:(id *)arg3;	// IMP=0x0000000000145d4a
- (id)initWithEngine:(id)arg1 rootNode:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000145c82
- (id)initWithEngine:(id)arg1 actionTreeRootNode:(id)arg2 mixerParameters:(id)arg3 outError:(id *)arg4;	// IMP=0x0000000000145c70
- (id)initWithEngine:(id)arg1 rootNode:(id)arg2 mixerParameters:(id)arg3 error:(id *)arg4;	// IMP=0x0000000000145b86
- (id)initWithEngine:(id)arg1 soundPrototype:(id)arg2 source:(id)arg3 listener:(id)arg4 outError:(id *)arg5;	// IMP=0x0000000000145b74
- (id)initWithEngine:(id)arg1 soundPrototype:(id)arg2 source:(id)arg3 listener:(id)arg4 error:(id *)arg5;	// IMP=0x00000000001457ee
- (id)initWithEngine:(id)arg1 soundPrototype:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000145734
- (id)initWithEngine:(id)arg1 soundPrototype:(id)arg2 mixerParameters:(id)arg3 error:(id *)arg4;	// IMP=0x0000000000144278
- (id)init;	// IMP=0x0000000000144222

// Remaining properties
@property(readonly) _Bool isIndefinite; // @synthesize isIndefinite=_isIndefinite;

@end
