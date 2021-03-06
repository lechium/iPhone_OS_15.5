//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, OITSUNoCopyDictionary;

__attribute__((visibility("hidden")))
@interface OADGraphicFeatureCache : NSObject
{
    NSMutableArray *mFeatureUsageArray;	// 8 = 0x8
    OITSUNoCopyDictionary *mFeatureMap;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000034d4c3
- (id)featuresSortedByUsageCount;	// IMP=0x000000000034d4a6
- (id)countedFeatureAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000103144
- (unsigned long long)cacheFeature:(id)arg1;	// IMP=0x00000000000aedef
- (void)dealloc;	// IMP=0x00000000000b1da1
- (id)init;	// IMP=0x000000000000be95

@end

