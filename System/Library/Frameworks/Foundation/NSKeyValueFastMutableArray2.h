//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSKeyValueGetter;

__attribute__((visibility("hidden")))
@interface NSKeyValueFastMutableArray2
{
    NSKeyValueGetter *_valueGetter;	// 32 = 0x20
}

- (id)objectsAtIndexes:(id)arg1;	// IMP=0x00000000000a4ae9
- (id)objectAtIndex:(unsigned long long)arg1;	// IMP=0x00000000000a4ab5
- (void)getObjects:(id *)arg1 range:(struct _NSRange)arg2;	// IMP=0x00000000000a4a6d
- (unsigned long long)count;	// IMP=0x00000000000a4a3f
- (id)_nonNilArrayValueWithSelector:(SEL)arg1;	// IMP=0x00000000000a499d
- (void)_proxyNonGCFinalize;	// IMP=0x00000000000a492c
- (id)_proxyInitWithContainer:(id)arg1 getter:(id)arg2;	// IMP=0x00000000000a489f

@end

