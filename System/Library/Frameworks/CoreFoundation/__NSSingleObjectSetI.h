//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface __NSSingleObjectSetI
{
    id element;	// 8 = 0x8
}

+ (id)allocWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000035395
+ (_Bool)automaticallyNotifiesObserversForKey:(id)arg1;	// IMP=0x0000000000034fee
- (void)dealloc;	// IMP=0x00000000000353a0
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000003539a
- (void)getObjects:(id *)arg1 count:(unsigned long long)arg2;	// IMP=0x0000000000035300
- (void)enumerateObjectsWithOptions:(unsigned long long)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000000000350d7
- (unsigned long long)countByEnumeratingWithState:(CDStruct_58648341 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;	// IMP=0x000000000003506f
- (unsigned long long)countForObject:(id)arg1;	// IMP=0x000000000003502f
- (_Bool)containsObject:(id)arg1;	// IMP=0x0000000000034ff1
- (id)objectEnumerator;	// IMP=0x0000000000034fad
- (id)member:(id)arg1;	// IMP=0x0000000000034f74
- (unsigned long long)count;	// IMP=0x0000000000034f6e

@end

