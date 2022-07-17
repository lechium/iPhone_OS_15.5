//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <NewsCore/NSCopying-Protocol.h>
#import <NewsCore/NSFastEnumeration-Protocol.h>
#import <NewsCore/NSSecureCoding-Protocol.h>

@class NSMapTable, NSPointerFunctions, NSString;

@interface FCMapTable : NSObject <NSCopying, NSSecureCoding, NSFastEnumeration>
{
    NSMapTable *_mapTable;	// 8 = 0x8
    NSString *_keyClassName;	// 16 = 0x10
    NSString *_valueClassName;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000002d157d
+ (id)weakToWeakObjectsMapTable;	// IMP=0x00000000002d133f
+ (id)strongToWeakObjectsMapTable;	// IMP=0x00000000002d12dc
+ (id)weakToStrongObjectsMapTable;	// IMP=0x00000000002d1279
+ (id)strongToStrongObjectsMapTable;	// IMP=0x00000000002d1216
+ (id)mapTableWithKeyOptions:(unsigned long long)arg1 valueOptions:(unsigned long long)arg2;	// IMP=0x00000000002d11a8
- (void).cxx_destruct;	// IMP=0x00000000002d1644
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;	// IMP=0x00000000002d162e
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000002d159b
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000002d1585
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000002d1519
- (id)dictionaryRepresentation;	// IMP=0x00000000002d1503
- (void)removeAllObjects;	// IMP=0x00000000002d14ed
- (id)objectEnumerator;	// IMP=0x00000000002d14d7
- (id)keyEnumerator;	// IMP=0x00000000002d14c1
@property(readonly) unsigned long long count;
- (void)setObject:(id)arg1 forKey:(id)arg2;	// IMP=0x00000000002d13fa
- (void)removeObjectForKey:(id)arg1;	// IMP=0x00000000002d13e4
- (id)objectForKey:(id)arg1;	// IMP=0x00000000002d13ce
@property(readonly, copy) NSPointerFunctions *valuePointerFunctions;
@property(readonly, copy) NSPointerFunctions *keyPointerFunctions;
- (id)initWithKeyPointerFunctions:(id)arg1 valuePointerFunctions:(id)arg2 capacity:(unsigned long long)arg3;	// IMP=0x00000000002d110b
- (id)initWithKeyOptions:(unsigned long long)arg1 valueOptions:(unsigned long long)arg2 capacity:(unsigned long long)arg3;	// IMP=0x00000000002d1097
- (id)init;	// IMP=0x00000000002d1057
- (void)dealloc;	// IMP=0x00000000002d0f9e
- (id)initWithMapTable:(id)arg1;	// IMP=0x00000000002d0f33

@end
