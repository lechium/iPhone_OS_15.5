//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <MapsUI/MULRUCacheDelegate-Protocol.h>

@class MULRUCache, NSMutableDictionary, NSString;

@interface MUTimeExpirableLRUCache : NSObject <MULRUCacheDelegate>
{
    NSMutableDictionary *_timestampsByCacheKeys;	// 8 = 0x8
    MULRUCache *_valuesByCacheKeys;	// 16 = 0x10
    double _timeToLiveInSeconds;	// 24 = 0x18
    unsigned long long _maxSize;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000002e042
@property(readonly, nonatomic) unsigned long long maxSize; // @synthesize maxSize=_maxSize;
- (unsigned long long)numberOfTimestamps;	// IMP=0x000000000002e022
- (id)timestampForKey:(id)arg1;	// IMP=0x000000000002e00c
- (void)lruCache:(id)arg1 willEvictObject:(id)arg2 forKey:(id)arg3;	// IMP=0x000000000002dff3
- (void)setObject:(id)arg1 forKey:(id)arg2;	// IMP=0x000000000002df59
@property(readonly, nonatomic) unsigned long long count;
- (id)objectForKey:(id)arg1;	// IMP=0x000000000002de55
- (id)initWithMaxSize:(unsigned long long)arg1 timeToLive:(double)arg2;	// IMP=0x000000000002dd8a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
