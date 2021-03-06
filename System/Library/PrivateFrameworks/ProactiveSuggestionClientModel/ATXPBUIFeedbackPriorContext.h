//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <ProactiveSuggestionClientModel/NSCopying-Protocol.h>

@class NSData, NSMutableArray, NSString;

@interface ATXPBUIFeedbackPriorContext : PBCodable <NSCopying>
{
    NSMutableArray *_blendingModelCacheUpdates;	// 8 = 0x8
    NSMutableArray *_cacheUpdateOrderings;	// 16 = 0x10
    NSMutableArray *_clientModelCacheUpdates;	// 24 = 0x18
    NSData *_context;	// 32 = 0x20
    NSString *_contextClassString;	// 40 = 0x28
    NSString *_pinnedBlendingModelUICacheUpdateUUID;	// 48 = 0x30
}

+ (Class)clientModelCacheUpdatesType;	// IMP=0x000000000001fa85
+ (Class)blendingModelCacheUpdatesType;	// IMP=0x000000000001f9b3
+ (Class)cacheUpdateOrderingType;	// IMP=0x000000000001f8e1
- (void).cxx_destruct;	// IMP=0x0000000000021456
@property(retain, nonatomic) NSString *pinnedBlendingModelUICacheUpdateUUID; // @synthesize pinnedBlendingModelUICacheUpdateUUID=_pinnedBlendingModelUICacheUpdateUUID;
@property(retain, nonatomic) NSString *contextClassString; // @synthesize contextClassString=_contextClassString;
@property(retain, nonatomic) NSData *context; // @synthesize context=_context;
@property(retain, nonatomic) NSMutableArray *clientModelCacheUpdates; // @synthesize clientModelCacheUpdates=_clientModelCacheUpdates;
@property(retain, nonatomic) NSMutableArray *blendingModelCacheUpdates; // @synthesize blendingModelCacheUpdates=_blendingModelCacheUpdates;
@property(retain, nonatomic) NSMutableArray *cacheUpdateOrderings; // @synthesize cacheUpdateOrderings=_cacheUpdateOrderings;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000020fe2
- (unsigned long long)hash;	// IMP=0x0000000000020f24
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000020d90
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000208c1
- (void)copyTo:(id)arg1;	// IMP=0x000000000002066d
- (void)writeTo:(id)arg1;	// IMP=0x0000000000020319
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000002030c
- (id)dictionaryRepresentation;	// IMP=0x000000000001fb84
- (id)description;	// IMP=0x000000000001fad5
@property(readonly, nonatomic) _Bool hasPinnedBlendingModelUICacheUpdateUUID;
@property(readonly, nonatomic) _Bool hasContextClassString;
@property(readonly, nonatomic) _Bool hasContext;
- (id)clientModelCacheUpdatesAtIndex:(unsigned long long)arg1;	// IMP=0x000000000001fa68
- (unsigned long long)clientModelCacheUpdatesCount;	// IMP=0x000000000001fa4b
- (void)addClientModelCacheUpdates:(id)arg1;	// IMP=0x000000000001f9e1
- (void)clearClientModelCacheUpdates;	// IMP=0x000000000001f9c4
- (id)blendingModelCacheUpdatesAtIndex:(unsigned long long)arg1;	// IMP=0x000000000001f996
- (unsigned long long)blendingModelCacheUpdatesCount;	// IMP=0x000000000001f979
- (void)addBlendingModelCacheUpdates:(id)arg1;	// IMP=0x000000000001f90f
- (void)clearBlendingModelCacheUpdates;	// IMP=0x000000000001f8f2
- (id)cacheUpdateOrderingAtIndex:(unsigned long long)arg1;	// IMP=0x000000000001f8c4
- (unsigned long long)cacheUpdateOrderingsCount;	// IMP=0x000000000001f8a7
- (void)addCacheUpdateOrdering:(id)arg1;	// IMP=0x000000000001f83d
- (void)clearCacheUpdateOrderings;	// IMP=0x000000000001f820

@end

