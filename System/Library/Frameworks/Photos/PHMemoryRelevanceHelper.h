//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface PHMemoryRelevanceHelper : NSObject
{
}

+ (double)_subcategoryWeightForMemory:(id)arg1;	// IMP=0x00000000000cb4f8
+ (double)_categoryWeightForMemory:(id)arg1;	// IMP=0x00000000000cb408
+ (double)_notificationLevelWeightForMemory:(id)arg1;	// IMP=0x00000000000cb37a
+ (_Bool)_isDate:(id)arg1 inSameDayAndMonthAsDate:(id)arg2;	// IMP=0x00000000000cb239
+ (_Bool)_isMemorySubcategoryTemporal:(unsigned long long)arg1;	// IMP=0x00000000000cb229
+ (_Bool)_isMemoryCategoryTemporal:(unsigned long long)arg1;	// IMP=0x00000000000cb208
+ (_Bool)_isMemoryTemporal:(id)arg1;	// IMP=0x00000000000cb185
+ (_Bool)isMemory:(id)arg1 proactiveWorthyAtDate:(id)arg2;	// IMP=0x00000000000cb0b5
+ (_Bool)isMemory:(id)arg1 relevantAtDate:(id)arg2;	// IMP=0x00000000000cb006
+ (double)relevanceScoreForMemory:(id)arg1 atDate:(id)arg2;	// IMP=0x00000000000caf43

@end
