//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface HDSQLiteJoinClause : NSObject
{
    NSString *_joinAsName;	// 8 = 0x8
    NSString *_localTable;	// 16 = 0x10
    Class _targetEntityClass;	// 24 = 0x18
    NSString *_localReferenceProperty;	// 32 = 0x20
    NSString *_targetKeyProperty;	// 40 = 0x28
    long long _joinType;	// 48 = 0x30
}

+ (id)leftJoinClauseFromTable:(id)arg1 toTargetEntity:(Class)arg2 as:(id)arg3 localReference:(id)arg4 targetKey:(id)arg5;	// IMP=0x000000000003b92c
+ (id)innerJoinClauseFromTable:(id)arg1 toTargetEntity:(Class)arg2 as:(id)arg3 localReference:(id)arg4 targetKey:(id)arg5;	// IMP=0x0000000000039a31
- (void).cxx_destruct;	// IMP=0x000000000003a197
@property(readonly, nonatomic) long long joinType; // @synthesize joinType=_joinType;
@property(readonly, copy, nonatomic) NSString *targetKeyProperty; // @synthesize targetKeyProperty=_targetKeyProperty;
@property(readonly, copy, nonatomic) NSString *localReferenceProperty; // @synthesize localReferenceProperty=_localReferenceProperty;
@property(readonly, nonatomic) Class targetEntityClass; // @synthesize targetEntityClass=_targetEntityClass;
@property(readonly, copy, nonatomic) NSString *localTable; // @synthesize localTable=_localTable;
- (id)description;	// IMP=0x0000000000151c8c
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000039eab
- (unsigned long long)hash;	// IMP=0x0000000000039e08
@property(readonly, copy, nonatomic) NSString *joinAsName;
- (id)SQLJoinClause;	// IMP=0x000000000003a1e0
- (id)copyWithJoinType:(long long)arg1;	// IMP=0x0000000000151c2c

@end
