//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class OITSUIntegerKeyDictionary;

__attribute__((visibility("hidden")))
@interface EDKeyedCollection
{
    OITSUIntegerKeyDictionary *mMap;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000003aabaa
- (id)objectWithKey:(long long)arg1;	// IMP=0x0000000000135fd3
- (void)removeAllObjects;	// IMP=0x00000000003aab60
- (void)removeObjectAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000247a0e
- (void)replaceObjectAtIndex:(unsigned long long)arg1 withObject:(id)arg2;	// IMP=0x00000000003aaacd
- (void)insertObject:(id)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x0000000000125a96
- (unsigned long long)addObject:(id)arg1;	// IMP=0x0000000000115714
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000022d103
- (_Bool)isOverwritingKeyOK;	// IMP=0x00000000003aac3b
- (void)removeFromMap:(id)arg1;	// IMP=0x0000000000247ab2
- (void)insertIntoMap:(id)arg1;	// IMP=0x0000000000115845
- (_Bool)isObjectInMap:(id)arg1;	// IMP=0x00000000003aabbd

@end
