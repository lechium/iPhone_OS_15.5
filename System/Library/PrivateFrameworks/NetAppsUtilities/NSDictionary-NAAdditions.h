//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSDictionary.h>

@interface NSDictionary (NAAdditions)
- (void)na_each:(CDUnknownBlockType)arg1;	// IMP=0x0000000000001f3a
- (_Bool)na_allSatisfy:(CDUnknownBlockType)arg1;	// IMP=0x0000000000001e23
- (_Bool)na_any:(CDUnknownBlockType)arg1;	// IMP=0x0000000000001d0c
- (id)na_dictionaryByMappingValues:(CDUnknownBlockType)arg1;	// IMP=0x0000000000001b81
- (id)na_filter:(CDUnknownBlockType)arg1;	// IMP=0x00000000000019ea
- (id)na_reduceWithInitialValue:(id)arg1 reducer:(CDUnknownBlockType)arg2;	// IMP=0x0000000000001814
- (id)na_flatMap:(CDUnknownBlockType)arg1;	// IMP=0x00000000000016dc
- (id)na_map:(CDUnknownBlockType)arg1;	// IMP=0x0000000000001554
- (id)na_firstKeyPassingTest:(CDUnknownBlockType)arg1;	// IMP=0x00000000000012c8
@end

