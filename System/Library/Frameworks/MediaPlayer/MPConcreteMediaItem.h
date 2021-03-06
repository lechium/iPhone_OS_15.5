//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MediaPlayer/MPCacheableConcreteMediaEntity-Protocol.h>
#import <MediaPlayer/NSCopying-Protocol.h>

@class MPConcreteMediaEntityPropertiesCache, MPMediaLibrary, NSObject;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface MPConcreteMediaItem <NSCopying, MPCacheableConcreteMediaEntity>
{
    MPMediaLibrary *_library;	// 8 = 0x8
    unsigned long long _persistentID;	// 16 = 0x10
    MPConcreteMediaEntityPropertiesCache *_propertiesCache;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_utilitySerialQueue;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000013d813
+ (id)createUncachedConcreteMediaItemWithPersistentID:(unsigned long long)arg1 library:(id)arg2;	// IMP=0x000000000013d7b4
+ (id)concreteMediaItemWithPersistentID:(unsigned long long)arg1 library:(id)arg2;	// IMP=0x000000000013d6c4
+ (id)concreteMediaItemWithPersistentID:(unsigned long long)arg1;	// IMP=0x000000000013d655
- (void).cxx_destruct;	// IMP=0x000000000013ca63
- (void)updateDateAccessedToCurrentDateWithWriteCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000013c9d1
- (_Bool)incrementPlayCountForStopTime:(double)arg1;	// IMP=0x000000000013c8f8
- (void)incrementPlayCountForPlayingToEnd;	// IMP=0x000000000013c8b9
- (void)incrementSkipCount;	// IMP=0x000000000013c85f
- (void)noteWasPlayedToTime:(double)arg1 skipped:(_Bool)arg2;	// IMP=0x000000000013c7cc
- (_Bool)didSkipWithPlayedToTime:(double)arg1;	// IMP=0x000000000013c72a
- (double)nominalHasBeenPlayedThreshold;	// IMP=0x000000000013c6ff
- (void)markNominalAmountHasBeenPlayed;	// IMP=0x000000000013c6e8
- (void)incrementPlayCount;	// IMP=0x000000000013c68e
- (void)enumerateValuesForProperties:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000000013c372
- (void)setValue:(id)arg1 forProperty:(id)arg2 withCompletionBlock:(CDUnknownBlockType)arg3;	// IMP=0x000000000013c0ed
- (_Bool)setValue:(id)arg1 forProperty:(id)arg2;	// IMP=0x000000000013bfc7
- (id)valuesForProperties:(id)arg1;	// IMP=0x000000000013bbe6
- (id)cachedValueForProperty:(id)arg1 isCached:(_Bool *)arg2;	// IMP=0x000000000013bbc9
- (id)valueForProperty:(id)arg1;	// IMP=0x000000000013b9f2
- (id)_nonBatchableOrCachedValueForProperty:(id)arg1 needsFetch:(_Bool *)arg2;	// IMP=0x000000000013b798
- (unsigned long long)persistentID;	// IMP=0x000000000013b787
- (id)mediaLibrary;	// IMP=0x000000000013b772
- (_Bool)existsInLibrary;	// IMP=0x000000000013b747
- (Class)classForCoder;	// IMP=0x000000000013b736
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000013b674
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000013b5b4
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000013b5a9
- (id)description;	// IMP=0x000000000013b52a
- (void)invalidateCachedProperties;	// IMP=0x000000000013b50d
@property(readonly, retain, nonatomic) MPConcreteMediaEntityPropertiesCache *cachedPropertyValues;
- (void)dealloc;	// IMP=0x000000000013b432
- (id)_initWithPersistentID:(unsigned long long)arg1 library:(id)arg2 propertiesCache:(id)arg3;	// IMP=0x000000000013b30c
- (id)initWithPersistentID:(unsigned long long)arg1 library:(id)arg2;	// IMP=0x000000000013b2d2
- (id)initWithPersistentID:(unsigned long long)arg1;	// IMP=0x000000000013b298
- (id)init;	// IMP=0x000000000013b259

@end

