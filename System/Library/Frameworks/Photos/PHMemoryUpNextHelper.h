//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface PHMemoryUpNextHelper : NSObject
{
}

+ (_Bool)_isAcceptableUserFeedbackForMemory:(id)arg1 keyAsset:(id)arg2 userFeedbackCalculator:(id)arg3;	// IMP=0x000000000006d23a
+ (id)fetchFallbackMemoryCandidatesInPhotoLibrary:(id)arg1 memoryLocalIdentifiersToAvoid:(id)arg2;	// IMP=0x000000000006cebe
+ (id)_memoryTriggerTypesToAvoid;	// IMP=0x000000000006ce8e
+ (_Bool)_hasInvalidMemoryTriggerForMemory:(id)arg1;	// IMP=0x000000000006cd6c
+ (_Bool)_isMomentFetchResult:(id)arg1 overlappingWithFetchResults:(id)arg2;	// IMP=0x000000000006cbdd
+ (_Bool)isMomentFetchResult:(id)arg1 overlappingWithFetchResult:(id)arg2;	// IMP=0x000000000006c9ab
+ (id)fetchFallbackMemoriesForMemory:(id)arg1 targetCount:(unsigned long long)arg2 memoryLocalIdentifiersToAvoid:(id)arg3 error:(id *)arg4;	// IMP=0x000000000006b712

@end

