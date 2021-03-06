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

@interface NSPointerArray : NSObject <NSFastEnumeration, NSCopying, NSSecureCoding>
{
}

+ (_Bool)_subclassesMustBeExplicitlyMentionedWhenDecoded;	// IMP=0x00000000000fb1ee
+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000fb1d5
+ (id)allocWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000fb142
+ (id)pointerArrayWithPointerFunctions:(id)arg1;	// IMP=0x00000000000fb100
+ (id)pointerArrayWithOptions:(unsigned long long)arg1;	// IMP=0x00000000000fb0be
+ (id)weakObjectsPointerArray;	// IMP=0x00000000000fb2c2
+ (id)strongObjectsPointerArray;	// IMP=0x00000000000fb2a9
+ (id)pointerArrayWithWeakObjects;	// IMP=0x00000000000fb27b
+ (id)pointerArrayWithStrongObjects;	// IMP=0x00000000000fb262
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000fb259
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000fb250
@property unsigned long long count;
- (void)compact;	// IMP=0x00000000000fb235
- (void)replacePointerAtIndex:(unsigned long long)arg1 withPointer:(void *)arg2;	// IMP=0x00000000000fb22c
- (void)insertPointer:(void *)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x00000000000fb223
- (void)removePointerAtIndex:(unsigned long long)arg1;	// IMP=0x00000000000fb21a
- (void)addPointer:(void *)arg1;	// IMP=0x00000000000fb211
- (void *)pointerAtIndex:(unsigned long long)arg1;	// IMP=0x00000000000fb208
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;	// IMP=0x00000000000fb1ff
@property(readonly, copy) NSPointerFunctions *pointerFunctions;
- (Class)classForCoder;	// IMP=0x00000000000fb1dd
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000fb15f
- (id)initWithPointerFunctions:(id)arg1;	// IMP=0x00000000000fb0b5
- (id)initWithOptions:(unsigned long long)arg1;	// IMP=0x00000000000fb0ac
- (id)init;	// IMP=0x00000000000fb024
- (id)allObjects;	// IMP=0x00000000000fb2f9
- (id)mutableArray;	// IMP=0x00000000000fb2f0

@end

