//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface SQLitePredicate : NSObject
{
}

- (_Bool)isEqual:(id)arg1;	// IMP=0x004000000006fa1f
- (unsigned long long)hash;	// IMP=0x001000000006fa05
- (id)SQLJoinClausesForEntityClass:(Class)arg1;	// IMP=0x001000000006f9fd
- (id)SQLForEntityClass:(Class)arg1;	// IMP=0x001000000006f9f5
- (void)bindToStatement:(struct sqlite3_stmt *)arg1 bindingIndex:(inout int *)arg2;	// IMP=0x001000000006f9ef
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000006f9e4

@end

