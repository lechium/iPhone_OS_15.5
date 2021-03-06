//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSDictionary.h>

@interface NSAttributeDictionary : NSDictionary
{
    unsigned long long numElements;	// 8 = 0x8
    struct _NSAttributeDictionaryElement elements[1];	// 16 = 0x10
}

+ (id)newWithDictionary:(id)arg1;	// IMP=0x000000000005831f
+ (id)emptyAttributeDictionary;	// IMP=0x0000000000058312
+ (void)initialize;	// IMP=0x0000000000057c96
- (_Bool)isEqualToDictionary:(id)arg1;	// IMP=0x0000000000059059
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000005904e
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000058f67
- (void)dealloc;	// IMP=0x0000000000058ee5
- (void)__apply:(CDUnknownFunctionPointerType)arg1 context:(void *)arg2;	// IMP=0x0000000000058e50
- (id)keyEnumerator;	// IMP=0x0000000000058e1a
- (void)getObjects:(id *)arg1 andKeys:(id *)arg2;	// IMP=0x0000000000058dc0
- (id)objectForKey:(id)arg1;	// IMP=0x0000000000058c6e
- (unsigned long long)count;	// IMP=0x0000000000058c5d
- (id)newWithKey:(id)arg1 object:(id)arg2;	// IMP=0x0000000000058733

@end

