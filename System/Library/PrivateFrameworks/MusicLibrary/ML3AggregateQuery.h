//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MusicLibrary/NSSecureCoding-Protocol.h>

@class NSString;

@interface ML3AggregateQuery <NSSecureCoding>
{
    Class _aggregateEntityClass;	// 72 = 0x48
    NSString *_foreignPersistentIDProperty;	// 80 = 0x50
    _Bool _isFastCountable;	// 88 = 0x58
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000009dce0
- (void).cxx_destruct;	// IMP=0x000000000009dccd
@property(nonatomic) _Bool isFastCountable; // @synthesize isFastCountable=_isFastCountable;
@property(readonly, nonatomic) NSString *foreignPersistentIDProperty; // @synthesize foreignPersistentIDProperty=_foreignPersistentIDProperty;
@property(readonly, nonatomic) Class aggregateEntityClass; // @synthesize aggregateEntityClass=_aggregateEntityClass;
- (_Bool)sectionsPersistentIDColumnIsDistinct;	// IMP=0x000000000009dc83
- (id)selectPersistentIDsSQLAndProperties:(id)arg1 ordered:(_Bool)arg2;	// IMP=0x000000000009da65
- (unsigned long long)countOfEntities;	// IMP=0x000000000009d9ec
- (_Bool)hasEntities;	// IMP=0x000000000009d9d6
- (id)persistentIDProperty;	// IMP=0x000000000009d9c1
- (Class)entityClass;	// IMP=0x000000000009d9ac
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000009d8d0
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000009d7c0
- (void)dealloc;	// IMP=0x000000000009d776
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000009d719
- (id)initWithUnitQuery:(id)arg1 aggregateEntityClass:(Class)arg2 foreignPersistentIDProperty:(id)arg3;	// IMP=0x000000000009d599

@end

