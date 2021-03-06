//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <EmailDaemon/EDMailboxPredictor-Protocol.h>

@class NSCache, NSMutableDictionary, NSString;
@protocol EDMailboxPredictor;

@interface EDCachingMailboxPredictor : NSObject <EDMailboxPredictor>
{
    id <EDMailboxPredictor> _predictor;	// 8 = 0x8
    NSCache *_cache;	// 16 = 0x10
    NSMutableDictionary *_cacheKeysByProperty;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000018185
@property(retain, nonatomic) NSMutableDictionary *cacheKeysByProperty; // @synthesize cacheKeysByProperty=_cacheKeysByProperty;
@property(retain, nonatomic) NSCache *cache; // @synthesize cache=_cache;
@property(retain, nonatomic) id <EDMailboxPredictor> predictor; // @synthesize predictor=_predictor;
- (id)_propertyKeysForMessage:(id)arg1;	// IMP=0x0000000000017afc
- (void)_trackCacheKey:(id)arg1 forPropertyKey:(id)arg2;	// IMP=0x00000000000179a6
- (id)_cacheKeyForMessages:(id)arg1;	// IMP=0x00000000000178ed
- (void)removeAllPredictions;	// IMP=0x0000000000017862
- (void)invalidatePredictionsAffectedByMessage:(id)arg1;	// IMP=0x000000000001743a
- (id)predictMailboxIDsForMessages:(id)arg1 limit:(unsigned long long)arg2 diagnostics:(id *)arg3;	// IMP=0x0000000000016f65
- (id)initWithPredictor:(id)arg1;	// IMP=0x0000000000016e4d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

