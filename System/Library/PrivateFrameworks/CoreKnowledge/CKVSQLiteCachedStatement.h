//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface CKVSQLiteCachedStatement : NSObject
{
    struct sqlite3_stmt *_stmt;	// 8 = 0x8
}

- (struct sqlite3_stmt *)stmt;	// IMP=0x00000000000cd0fe
- (void)dealloc;	// IMP=0x00000000000cd0b7
- (id)init;	// IMP=0x00000000000cd06f
- (id)initWithStmt:(struct sqlite3_stmt *)arg1;	// IMP=0x00000000000cd032

@end

