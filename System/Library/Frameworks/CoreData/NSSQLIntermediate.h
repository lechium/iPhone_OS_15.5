//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSSQLEntity;

__attribute__((visibility("hidden")))
@interface NSSQLIntermediate : NSObject
{
    NSSQLIntermediate *_scope;	// 8 = 0x8
}

+ (_Bool)isSimpleKeypath:(id)arg1;	// IMP=0x0000000000186bc5
+ (_Bool)expressionIsBasicKeypath:(id)arg1;	// IMP=0x0000000000186b18
- (id)_generateSQLForVariableExpression:(id)arg1 allowToMany:(_Bool)arg2 inContext:(id)arg3;	// IMP=0x0000000000187ce9
- (id)_generateSQLForKeyPathExpression:(id)arg1 allowToMany:(_Bool)arg2 inContext:(id)arg3;	// IMP=0x000000000018742e
- (void)_promoteJoinsForSubqueryScopedKeypaths;	// IMP=0x00000000001871f4
- (void)_promoteJoinsForSubqueryScopedKeypath:(id)arg1;	// IMP=0x0000000000186e3c
- (id)_lastScopedItem;	// IMP=0x0000000000186e1d
- (_Bool)keypathExpressionIsSafeLHSForIn:(id)arg1;	// IMP=0x0000000000186e07
- (id)governingEntity;	// IMP=0x0000000000186df1
- (id)governingEntityForKeypathExpression:(id)arg1;	// IMP=0x0000000000186ddb
- (id)governingAliasForKeypathExpression:(id)arg1;	// IMP=0x0000000000186dc5
- (id)governingAlias;	// IMP=0x0000000000186daf
- (id)fetchIntermediateForKeypathExpression:(id)arg1;	// IMP=0x0000000000186b02
- (id)fetchIntermediate;	// IMP=0x0000000000186aec
- (void)setDisambiguatingEntity:(id)arg1 withKeypath:(id)arg2 hasToMany:(_Bool)arg3;	// IMP=0x0000000000186ad6
@property(readonly, nonatomic) _Bool disambiguationKeypathHasToMany;
@property(readonly, nonatomic) NSArray *disambiguationKeypath;
@property(readonly, nonatomic) NSSQLEntity *disambiguatingEntity;
- (_Bool)isIndexExpressionScoped;	// IMP=0x0000000000186a75
- (_Bool)isIndexScoped;	// IMP=0x0000000000186a56
- (_Bool)isUpdateColumnsScoped;	// IMP=0x0000000000186a37
- (_Bool)isWhereScoped;	// IMP=0x0000000000186a18
- (_Bool)isUpdateScoped;	// IMP=0x00000000001869f9
- (_Bool)isHavingScoped;	// IMP=0x00000000001869da
- (_Bool)isFunctionScoped;	// IMP=0x00000000001869bb
- (_Bool)isTargetColumnsScoped;	// IMP=0x000000000018699c
- (_Bool)isOrScoped;	// IMP=0x000000000018697d
- (id)generateSQLStringInContext:(id)arg1;	// IMP=0x000000000018694f
- (id)initWithScope:(id)arg1;	// IMP=0x0000000000186910

@end

