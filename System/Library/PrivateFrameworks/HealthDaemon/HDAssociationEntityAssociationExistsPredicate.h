//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface HDAssociationEntityAssociationExistsPredicate
{
    long long _assocationID;	// 8 = 0x8
    _Bool _exists;	// 16 = 0x10
}

+ (id)predicateWithAssociationID:(long long)arg1 exists:(_Bool)arg2;	// IMP=0x000000000018693d
- (id)description;	// IMP=0x0000000000186a99
- (void)bindToStatement:(struct sqlite3_stmt *)arg1 bindingIndex:(int *)arg2;	// IMP=0x0000000000186a6f
- (id)SQLForEntityClass:(Class)arg1;	// IMP=0x0000000000186979

@end

