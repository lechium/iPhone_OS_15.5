//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@protocol NSFastEnumeration;

@interface __NSFastEnumerationEnumerator
{
    id <NSFastEnumeration> _obj;	// 8 = 0x8
    id _origObj;	// 16 = 0x10
    unsigned long long _index;	// 24 = 0x18
    unsigned long long _count;	// 32 = 0x20
    unsigned long long _mut;	// 40 = 0x28
    id _objects[16];	// 48 = 0x30
    CDStruct_58648341 _state;	// 176 = 0xb0
}

+ (id)allocWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000114b62
- (void)dealloc;	// IMP=0x0000000000114d23
- (id)nextObject;	// IMP=0x0000000000114c0c
- (id)initWithObject:(id)arg1;	// IMP=0x0000000000114b79

@end
