//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <StoreServices/NSCopying-Protocol.h>

@interface SSSQLitePredicate : NSObject <NSCopying>
{
}

- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001111af
- (unsigned long long)hash;	// IMP=0x0000000000111195
- (id)SQLJoinClausesForEntityClass:(Class)arg1;	// IMP=0x000000000011118d
- (id)SQLForEntityClass:(Class)arg1;	// IMP=0x0000000000111185
- (void)bindToStatement:(struct sqlite3_stmt *)arg1 bindingIndex:(inout int *)arg2;	// IMP=0x000000000011117f
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000111174

@end

