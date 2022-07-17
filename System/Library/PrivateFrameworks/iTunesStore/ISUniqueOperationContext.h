//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSMutableSet;

@interface ISUniqueOperationContext : NSObject
{
    NSMutableSet *_operations;	// 8 = 0x8
    NSMutableDictionary *_uniqueOperations;	// 16 = 0x10
}

- (id)uniqueOperationForKey:(id)arg1;	// IMP=0x0000000000053a27
- (void)setUniqueOperation:(id)arg1 forKey:(id)arg2;	// IMP=0x00000000000539fb
- (void)removeOperation:(id)arg1;	// IMP=0x00000000000539e5
- (unsigned long long)countOfOperations;	// IMP=0x00000000000539cf
- (_Bool)containsOperation:(id)arg1;	// IMP=0x00000000000539b9
- (void)addOperation:(id)arg1;	// IMP=0x00000000000539a3
- (void)dealloc;	// IMP=0x000000000005394a
- (id)init;	// IMP=0x00000000000538ee

@end
