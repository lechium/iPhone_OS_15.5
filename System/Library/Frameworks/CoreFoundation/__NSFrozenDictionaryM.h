//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface __NSFrozenDictionaryM
{
    CDStruct_bc24fd1e storage;	// 8 = 0x8
    _Atomic struct __cow_state_t *cow;	// 24 = 0x18
}

+ (id)allocWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000187bf0
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000187d61
- (id)mutableCopy;	// IMP=0x0000000000187cbe
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000187cb9
- (id)copy;	// IMP=0x0000000000187cb4
- (void)dealloc;	// IMP=0x0000000000187bf5
- (id)objectForKeyedSubscript:(id)arg1;	// IMP=0x0000000000187b05
- (id)keysOfEntriesWithOptions:(unsigned long long)arg1 passingTest:(CDUnknownBlockType)arg2;	// IMP=0x0000000000187ae4
- (id)keyOfEntryWithOptions:(unsigned long long)arg1 passingTest:(CDUnknownBlockType)arg2;	// IMP=0x00000000001878e1
- (void)enumerateKeysAndObjectsWithOptions:(unsigned long long)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000000018773d
- (unsigned long long)countByEnumeratingWithState:(CDStruct_58648341 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;	// IMP=0x00000000001876a2
- (void)__apply:(CDUnknownFunctionPointerType)arg1 context:(void *)arg2;	// IMP=0x00000000001875c0
- (id)objectForKey:(id)arg1;	// IMP=0x00000000001874d5
- (id)keyEnumerator;	// IMP=0x000000000018749f
- (void)getObjects:(id *)arg1 andKeys:(id *)arg2 count:(unsigned long long)arg3;	// IMP=0x00000000001873d5
- (unsigned long long)count;	// IMP=0x00000000001873c4

@end
