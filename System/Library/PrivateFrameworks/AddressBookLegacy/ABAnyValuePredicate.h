//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface ABAnyValuePredicate
{
    int _property;	// 16 = 0x10
}

@property(nonatomic) int property; // @synthesize property=_property;
- (void)ab_bindWhereClauseComponentOfStatement:(struct CPSqliteStatement *)arg1 withBindingOffset:(int *)arg2 predicateIdentifier:(int)arg3;	// IMP=0x000000000003ba3f
- (id)queryWhereStringForPredicateIdentifier:(int)arg1;	// IMP=0x000000000003b9ef
- (id)queryGroupByProperties;	// IMP=0x000000000003b9cf
- (id)queryJoinsInCompound:(_Bool)arg1 predicateIdentifier:(int)arg2;	// IMP=0x000000000003b996
- (_Bool)isValid;	// IMP=0x000000000003b982
- (id)init;	// IMP=0x000000000003b940

@end
