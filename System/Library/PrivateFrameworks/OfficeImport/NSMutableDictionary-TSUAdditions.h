//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSMutableDictionary.h>

@interface NSMutableDictionary (TSUAdditions)
+ (id)tsu_dictionaryByInvertingDictionary:(id)arg1;	// IMP=0x00000000002861cc
+ (id)tsu_dictionaryByInvertingDictionaryIfPossible:(id)arg1;	// IMP=0x000000000028607b
- (id)tsu_objectForKey:(id)arg1 withDefaultOfClass:(Class)arg2;	// IMP=0x0000000000286016
- (id)tsu_objectForKey:(id)arg1 withDefaultUsingBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000000285fc1
- (void)tsu_setNonNilObject:(id)arg1 forKey:(id)arg2;	// IMP=0x00000000002a6e52
- (void)tsu_setNonNilValueForKey:(id)arg1 fromDictionary:(id)arg2;	// IMP=0x00000000002a6e11
- (id)addToCacheAndReturnCssString:(id)arg1;	// IMP=0x000000000046f040
@end

