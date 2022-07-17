//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, WBSSQLiteDatabase;

@interface WBSSQLiteStatementCache : NSObject
{
    WBSSQLiteDatabase *_database;	// 8 = 0x8
    NSMutableDictionary *_statements;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000029176
- (void)dealloc;	// IMP=0x0000000000029147
- (void)invalidate;	// IMP=0x0000000000028fde
- (id)statementForQuery:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000028f14
- (id)_createStatementForQuery:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000028d82
- (void)setCachedStatement:(id)arg1 forQuery:(id)arg2;	// IMP=0x0000000000028d6b
- (id)cachedStatementForQuery:(id)arg1;	// IMP=0x0000000000028d45
- (id)initWithDatabase:(id)arg1;	// IMP=0x0000000000028c75
- (id)init;	// IMP=0x0000000000028c67

@end
