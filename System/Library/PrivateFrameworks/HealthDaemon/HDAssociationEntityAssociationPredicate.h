//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface HDAssociationEntityAssociationPredicate
{
    long long _assocationID;	// 8 = 0x8
}

+ (id)predicateWithAssociationID:(long long)arg1;	// IMP=0x0000000000186768
- (id)description;	// IMP=0x0000000000186906
- (void)bindToStatement:(struct sqlite3_stmt *)arg1 bindingIndex:(int *)arg2;	// IMP=0x00000000001868dc
- (id)SQLForEntityClass:(Class)arg1;	// IMP=0x0000000000186862
- (id)SQLJoinClausesForEntityClass:(Class)arg1;	// IMP=0x0000000000186797

@end
