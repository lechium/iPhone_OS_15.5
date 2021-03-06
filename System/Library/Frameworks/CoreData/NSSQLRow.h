//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreData/NSCopying-Protocol.h>

@class _CDSnapshot;

__attribute__((visibility("hidden")))
@interface NSSQLRow <NSCopying>
{
    _CDSnapshot *_snapshot;	// 40 = 0x28
}

+ (unsigned int)newBatchRowAllocation:(id *)arg1 count:(unsigned int)arg2 forSQLEntity:(id)arg3 withOwnedObjectIDs:(id *)arg4 andTimestamp:(double)arg5;	// IMP=0x00000000001e14df
+ (id)allocWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001e14d7
+ (void)initialize;	// IMP=0x00000000001e1338
- (id)_snapshot_;	// IMP=0x00000000001e35f8
- (const id *)knownKeyValuesPointer;	// IMP=0x00000000001e35e5
- (unsigned int)_versionNumber;	// IMP=0x00000000001e297c
- (void)setOptLock:(long long)arg1;	// IMP=0x00000000001e2968
- (unsigned long long)version;	// IMP=0x00000000001e294c
- (id)valueForKey:(id)arg1;	// IMP=0x00000000001e2536
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001e2306
- (void)setForeignOrderKeySlot:(unsigned int)arg1 orderKey:(unsigned int)arg2;	// IMP=0x00000000001e22de
- (void)setForeignEntityKeySlot:(unsigned int)arg1 entityKey:(unsigned int)arg2;	// IMP=0x00000000001e22a9
- (void)setForeignKeySlot:(unsigned int)arg1 int64:(long long)arg2;	// IMP=0x00000000001e21ef
- (void)setObjectID:(id)arg1;	// IMP=0x00000000001e21ab
- (id)objectID;	// IMP=0x00000000001e2196
- (id)description;	// IMP=0x00000000001e1bd0
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001e1bbe
- (id)copy;	// IMP=0x00000000001e1a56
- (id)newObjectIDForToOne:(id)arg1;	// IMP=0x00000000001e184a
- (void)dealloc;	// IMP=0x00000000001e1840
- (id)initWithSQLEntity:(id)arg1 ownedObjectID:(id)arg2 andTimestamp:(double)arg3;	// IMP=0x00000000001e1731
- (id)initWithSQLEntity:(id)arg1 objectID:(id)arg2;	// IMP=0x00000000001e16f0

@end

