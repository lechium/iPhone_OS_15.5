//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class QLSqliteDatabase;

@interface QLCacheIndexDatabaseGenericEnumerator : NSObject
{
    QLSqliteDatabase *_sqliteDatabase;	// 8 = 0x8
    struct sqlite3_stmt *_stmt;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000001a8be
- (void)dealloc;	// IMP=0x000000000001a871
- (id)initWithSqliteDatabase:(id)arg1;	// IMP=0x000000000001a806

@end
