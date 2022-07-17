//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface NSConcreteOrderedSetChanges
{
    CDStruct_29daef6c _changes;	// 8 = 0x8
}

- (void)addChange:(id)arg1;	// IMP=0x000000000011ebbc
- (void)enumerateChanges:(unsigned long long)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000000011eb67
- (void)enumerateChangesUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000011eb1a
- (void)_enumerateChanges:(unsigned long long)arg1 stop:(_Bool *)arg2 usingBlock:(CDUnknownBlockType)arg3;	// IMP=0x000000000011ea21
- (unsigned long long)changeCount;	// IMP=0x000000000011ea0f
- (void)sortRange:(struct _NSRange)arg1 options:(unsigned long long)arg2 usingComparator:(CDUnknownBlockType)arg3;	// IMP=0x000000000011e9f2
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;	// IMP=0x000000000011e9d8
- (void)getObjects:(id *)arg1 range:(struct _NSRange)arg2;	// IMP=0x000000000011e9be
- (id)objectAtIndex:(unsigned long long)arg1;	// IMP=0x000000000011e9aa
- (unsigned long long)count;	// IMP=0x000000000011e999
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000011e95b
- (void)dealloc;	// IMP=0x000000000011e8f8
- (id)initWithObjects:(const id *)arg1 count:(unsigned long long)arg2;	// IMP=0x000000000011e860
- (id)init;	// IMP=0x000000000011e7ce

@end
