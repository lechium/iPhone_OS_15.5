//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSMutableSet, NSSet;

__attribute__((visibility("hidden")))
@interface IKDataBinding : NSObject
{
    NSDictionary *_entriesByKey;	// 8 = 0x8
    NSMutableSet *_unresolvedKeys;	// 16 = 0x10
    NSDictionary *_keyValues;	// 24 = 0x18
    NSSet *_dataBoundKeys;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000000c5d5e
@property(readonly, nonatomic) NSSet *dataBoundKeys; // @synthesize dataBoundKeys=_dataBoundKeys;
@property(copy, nonatomic) NSDictionary *keyValues; // @synthesize keyValues=_keyValues;
- (void)markResolvedForKey:(id)arg1;	// IMP=0x00000000000c5d25
- (void)setNeedsResolutionForAllKeys;	// IMP=0x00000000000c5cb5
- (void)setNeedsResolutionForKey:(id)arg1;	// IMP=0x00000000000c5c9f
- (id)unresolvedKeysWithAnyOfAttributes:(unsigned long long)arg1;	// IMP=0x00000000000c5a38
- (id)dataBoundKeysWithAnyOfAttributes:(unsigned long long)arg1;	// IMP=0x00000000000c57d1
- (id)keysWithAnyOfAttributes:(unsigned long long)arg1;	// IMP=0x00000000000c556a
@property(readonly, nonatomic) NSSet *unresolvedKeys;
- (id)initWithEntries:(id)arg1;	// IMP=0x00000000000c509f

@end
