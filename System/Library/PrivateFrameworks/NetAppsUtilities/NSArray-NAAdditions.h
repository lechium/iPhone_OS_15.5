//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSArray.h>

@interface NSArray (NAAdditions)
+ (id)na_arrayWithTerminator:(id)arg1 nullableObjects:(id)arg2;	// IMP=0x000000000000ee6b
+ (id)na_arrayWithSafeObject:(id)arg1;	// IMP=0x000000000000ee2d
+ (id)na_arrayByRepeatingWithCount:(unsigned long long)arg1 generatorBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000000000ed95
- (id)na_dictionaryByBucketingObjectsUsingKeyGenerator:(CDUnknownBlockType)arg1;	// IMP=0x000000000000eb4c
- (id)na_dictionaryWithKeyGenerator:(CDUnknownBlockType)arg1;	// IMP=0x000000000000e989
- (id)na_arrayByFlattening;	// IMP=0x000000000000e84f
- (void)na_each:(CDUnknownBlockType)arg1;	// IMP=0x000000000000e7b0
- (_Bool)na_allObjectsPassTest:(CDUnknownBlockType)arg1;	// IMP=0x000000000000e699
- (_Bool)na_all:(CDUnknownBlockType)arg1;	// IMP=0x000000000000e563
- (_Bool)na_any:(CDUnknownBlockType)arg1;	// IMP=0x000000000000e44c
- (id)na_filter:(CDUnknownBlockType)arg1;	// IMP=0x000000000000e376
- (id)na_flatMap:(CDUnknownBlockType)arg1;	// IMP=0x000000000000e1b4
- (id)na_map:(CDUnknownBlockType)arg1;	// IMP=0x000000000000dff2
- (id)na_arrayWithResultsOfBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000000debf
- (id)na_firstObjectPassingTest:(CDUnknownBlockType)arg1;	// IMP=0x000000000000dd52
- (id)na_reduceWithInitialValue:(id)arg1 reducer:(CDUnknownBlockType)arg2;	// IMP=0x000000000000dbb6
- (_Bool)na_safeContainsObject:(id)arg1;	// IMP=0x000000000000db9b
@end

