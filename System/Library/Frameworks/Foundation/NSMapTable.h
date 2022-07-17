//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Foundation/NSCopying-Protocol.h>
#import <Foundation/NSFastEnumeration-Protocol.h>
#import <Foundation/NSSecureCoding-Protocol.h>

@class NSPointerFunctions;

@interface NSMapTable : NSObject <NSCopying, NSSecureCoding, NSFastEnumeration>
{
}

+ (_Bool)_subclassesMustBeExplicitlyMentionedWhenDecoded;	// IMP=0x00000000000cbd04
+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000cbceb
+ (id)weakToWeakObjectsMapTable;	// IMP=0x00000000000cbc7e
+ (id)strongToWeakObjectsMapTable;	// IMP=0x00000000000cbc48
+ (id)weakToStrongObjectsMapTable;	// IMP=0x00000000000cbc12
+ (id)strongToStrongObjectsMapTable;	// IMP=0x00000000000cbbdf
+ (id)mapTableWithWeakToWeakObjects;	// IMP=0x00000000000cbba6
+ (id)mapTableWithStrongToWeakObjects;	// IMP=0x00000000000cbb70
+ (id)mapTableWithWeakToStrongObjects;	// IMP=0x00000000000cbb3a
+ (id)mapTableWithStrongToStrongObjects;	// IMP=0x00000000000cbb07
+ (id)mapTableWithKeyOptions:(unsigned long long)arg1 valueOptions:(unsigned long long)arg2;	// IMP=0x00000000000cbac6
+ (id)allocWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000cbaa9
+ (id)alloc;	// IMP=0x00000000000cba8c
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000cc17e
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000cc16c
- (id)dictionaryRepresentation;	// IMP=0x00000000000cbffe
- (id)mutableDictionary;	// IMP=0x00000000000cbe90
- (void)removeAllObjects;	// IMP=0x00000000000cbe7e
- (unsigned long long)getKeys:(const void **)arg1 values:(const void **)arg2;	// IMP=0x00000000000cbe75
- (_Bool)mapMember:(const void *)arg1 originalKey:(const void **)arg2 value:(const void **)arg3;	// IMP=0x00000000000cbe6c
- (id)enumerator;	// IMP=0x00000000000cbe63
- (void)removeAllItems;	// IMP=0x00000000000cbe5a
- (id)allValues;	// IMP=0x00000000000cbe51
- (id)allKeys;	// IMP=0x00000000000cbe48
- (void)replaceItem:(const void *)arg1 forExistingKey:(const void *)arg2;	// IMP=0x00000000000cbe3f
- (void *)existingItemForSetItem:(const void *)arg1 forAbsentKey:(const void *)arg2;	// IMP=0x00000000000cbe36
- (void)setItem:(const void *)arg1 forKnownAbsentKey:(const void *)arg2;	// IMP=0x00000000000cbe2d
- (void)setItem:(const void *)arg1 forAbsentKey:(const void *)arg2;	// IMP=0x00000000000cbe24
- (void)setItem:(const void *)arg1 forKey:(const void *)arg2;	// IMP=0x00000000000cbe1b
- (void)removeObjectForKey:(id)arg1;	// IMP=0x00000000000cbe12
- (void)setObject:(id)arg1 forKey:(id)arg2;	// IMP=0x00000000000cbe09
- (id)objectForKey:(id)arg1;	// IMP=0x00000000000cbe00
@property(readonly, copy) NSPointerFunctions *valuePointerFunctions;
@property(readonly, copy) NSPointerFunctions *keyPointerFunctions;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;	// IMP=0x00000000000cbde5
- (id)copy;	// IMP=0x00000000000cbddc
- (id)objectEnumerator;	// IMP=0x00000000000cbdd3
- (id)keyEnumerator;	// IMP=0x00000000000cbdca
- (unsigned long long)__capacity;	// IMP=0x00000000000cbdc1
@property(readonly) unsigned long long count;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000cbdaf
- (id)description;	// IMP=0x00000000000cbda6
- (id)init;	// IMP=0x00000000000cbd9d
- (id)initWithKeyPointerFunctions:(id)arg1 valuePointerFunctions:(id)arg2 capacity:(unsigned long long)arg3;	// IMP=0x00000000000cbd94
- (id)initWithKeyOptions:(unsigned long long)arg1 valueOptions:(unsigned long long)arg2 capacity:(unsigned long long)arg3;	// IMP=0x00000000000cbd0c
- (Class)classForCoder;	// IMP=0x00000000000cbcf3
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000cbcb7

@end
