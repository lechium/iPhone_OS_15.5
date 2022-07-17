//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HDAssertion, HDProfile, HDSampleAggregateCacheStore, HDSourceEntity, NSArray, NSDate, NSDateComponents, NSDateInterval, NSError, NSString;

@interface HDSampleAggregateCachingSession : NSObject
{
    HDSampleAggregateCacheStore *_cacheStore;	// 8 = 0x8
    HDProfile *_profile;	// 16 = 0x10
    Class _cachedClass;	// 24 = 0x18
    NSDateInterval *_queryInterval;	// 32 = 0x20
    NSString *_cachingIdentifier;	// 40 = 0x28
    HDSourceEntity *_sourceEntity;	// 48 = 0x30
    long long _generationNumber;	// 56 = 0x38
    NSDate *_anchorDate;	// 64 = 0x40
    NSDate *_persistentAnchorDate;	// 72 = 0x48
    NSDateComponents *_intervalComponents;	// 80 = 0x50
    long long _maxAnchor;	// 88 = 0x58
    NSError *_fatalError;	// 96 = 0x60
    long long _state;	// 104 = 0x68
    struct unordered_set<long, std::hash<long>, std::equal_to<long>, std::allocator<long>> _staleIndexes;	// 112 = 0x70
    _Bool _anchorSetOnInsert;	// 152 = 0x98
    _Bool _sampleAggregateCachingSessionQueue_insertSuccess;	// 153 = 0x99
    NSArray *_invalidationQueryDescriptors;	// 160 = 0xa0
    HDAssertion *_accessibilityAssertion;	// 168 = 0xa8
}

- (id).cxx_construct;	// IMP=0x00000000006f234f
- (void).cxx_destruct;	// IMP=0x00000000006f22b5
@property(retain, nonatomic) HDAssertion *accessibilityAssertion; // @synthesize accessibilityAssertion=_accessibilityAssertion;
@property(copy, nonatomic) NSArray *invalidationQueryDescriptors; // @synthesize invalidationQueryDescriptors=_invalidationQueryDescriptors;
- (void)finishWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000006f141c
- (void)insertCaches:(id)arg1 anchor:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000006f0a9e
- (_Bool)activateWithError:(id *)arg1 cacheHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000006f0130
- (long long)cachesExistWithError:(id *)arg1;	// IMP=0x00000000006f003d
- (id)persistentAnchorDateWithError:(id *)arg1;	// IMP=0x00000000006efae4
- (id)initWithProfile:(id)arg1 cachingIdentifier:(id)arg2 sourceEntity:(id)arg3 queryDescriptor:(id)arg4 cachedClass:(Class)arg5 queryInterval:(id)arg6 anchorDate:(id)arg7 intervalComponents:(id)arg8 timeIntervalToBucketIndex:(CDUnknownBlockType)arg9;	// IMP=0x00000000006ef838

@end
