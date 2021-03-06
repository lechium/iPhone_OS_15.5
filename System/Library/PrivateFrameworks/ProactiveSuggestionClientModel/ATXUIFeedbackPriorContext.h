//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ProactiveSuggestionClientModel/ATXProtoBufWrapper-Protocol.h>
#import <ProactiveSuggestionClientModel/NSSecureCoding-Protocol.h>

@class NSDictionary, NSMutableDictionary, NSMutableOrderedSet, NSOrderedSet, NSUUID;
@protocol ATXProactiveSuggestionFeedbackContextProtocol;

@interface ATXUIFeedbackPriorContext : NSObject <NSSecureCoding, ATXProtoBufWrapper>
{
    NSMutableOrderedSet *_cacheUpdateOrdering;	// 8 = 0x8
    NSMutableDictionary *_blendingModelCacheUpdates;	// 16 = 0x10
    NSMutableDictionary *_clientModelCacheUpdates;	// 24 = 0x18
    id <ATXProactiveSuggestionFeedbackContextProtocol> _context;	// 32 = 0x20
    NSUUID *_pinnedBlendingModelUICacheUpdateUUID;	// 40 = 0x28
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000001698c
- (void).cxx_destruct;	// IMP=0x0000000000016dd9
@property(readonly, nonatomic) NSUUID *pinnedBlendingModelUICacheUpdateUUID; // @synthesize pinnedBlendingModelUICacheUpdateUUID=_pinnedBlendingModelUICacheUpdateUUID;
@property(readonly, nonatomic) id <ATXProactiveSuggestionFeedbackContextProtocol> context; // @synthesize context=_context;
@property(readonly, nonatomic) NSDictionary *clientModelCacheUpdates; // @synthesize clientModelCacheUpdates=_clientModelCacheUpdates;
@property(readonly, nonatomic) NSDictionary *blendingModelCacheUpdates; // @synthesize blendingModelCacheUpdates=_blendingModelCacheUpdates;
@property(readonly, nonatomic) NSOrderedSet *cacheUpdateOrdering; // @synthesize cacheUpdateOrdering=_cacheUpdateOrdering;
- (unsigned long long)hash;	// IMP=0x0000000000016d18
- (_Bool)isEqualToATXUIFeedbackPriorContext:(id)arg1;	// IMP=0x0000000000016b7f
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000016b17
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000016a0d
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000016994
- (id)encodeAsProto;	// IMP=0x000000000001693c
- (id)proto;	// IMP=0x00000000000166b1
- (id)initWithProto:(id)arg1;	// IMP=0x0000000000015e9c
- (id)initWithProtoData:(id)arg1;	// IMP=0x0000000000015e00
- (id)validContextClassNames;	// IMP=0x0000000000015dab
- (id)_referencedClientModelCaches;	// IMP=0x0000000000015bb6
- (void)_validateCacheUpdateOrderingAndCacheDictMapping;	// IMP=0x00000000000155d6
- (void)pruneUnreferencedClientModelCachesIfPossible;	// IMP=0x0000000000015057
- (void)_pruneBlendingModelCachesOlderThanUUID:(id)arg1;	// IMP=0x0000000000014d3c
- (void)pruneBlendingModelCachesOverMaxNum;	// IMP=0x0000000000014ab0
- (void)pruneContextStateOlderThanBlendingUUID:(id)arg1;	// IMP=0x00000000000149f9
- (id)clientModelCacheUpdatesForUICacheUpdateUUID:(id)arg1;	// IMP=0x0000000000014721
- (id)blendingModelUICacheUpdateForUUID:(id)arg1;	// IMP=0x00000000000146f2
- (void)updatePinnedBlendingModelUICacheUpdateUUID:(id)arg1;	// IMP=0x00000000000146af
- (void)addContext:(id)arg1;	// IMP=0x000000000001469e
- (void)addBlendingModelUICacheUpdate:(id)arg1;	// IMP=0x00000000000144d7
- (void)addClientModelCacheUpdate:(id)arg1;	// IMP=0x0000000000014310
- (id)initWithCacheUpdateOrdering:(id)arg1 blendingModelCacheUpdates:(id)arg2 clientModelCacheUpdates:(id)arg3 context:(id)arg4 pinnedBlendingModelUICacheUpdateUUID:(id)arg5;	// IMP=0x00000000000141e6
- (id)init;	// IMP=0x0000000000014156

@end

