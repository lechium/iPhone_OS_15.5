//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface NSWeakObjectValue
{
    void *_value;	// 8 = 0x8
    id _object;	// 16 = 0x10
    _Bool _useFallback;	// 24 = 0x18
}

- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000162725
- (id)weakObjectValue;	// IMP=0x0000000000162707
- (void)getValue:(void *)arg1 size:(unsigned long long)arg2;	// IMP=0x0000000000162661
- (void)getValue:(void *)arg1;	// IMP=0x0000000000162635
- (id)nonretainedObjectValue;	// IMP=0x0000000000162624
- (const char *)objCType;	// IMP=0x0000000000162617
- (unsigned long long)hash;	// IMP=0x0000000000162606
- (_Bool)isEqualToValue:(id)arg1;	// IMP=0x00000000001625c8
- (void)dealloc;	// IMP=0x0000000000162559
- (id)initWithObject:(id)arg1;	// IMP=0x00000000001624cc

@end
