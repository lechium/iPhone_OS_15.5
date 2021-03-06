//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class EDMessagePersistence, _EDThreadPersistence_SQLHelper;
@protocol EFSQLExpressable;

@interface _EDThreadPersistence_ThreadScope : NSObject
{
    _Bool _didCreateTempScopeView;	// 8 = 0x8
    EDMessagePersistence *_messagePersistence;	// 16 = 0x10
    long long _threadScopeDatabaseID;	// 24 = 0x18
    id <EFSQLExpressable> _threadScopeExpression;	// 32 = 0x20
    _EDThreadPersistence_SQLHelper *_sqlHelper;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000016a36b
@property(readonly, nonatomic) _EDThreadPersistence_SQLHelper *sqlHelper; // @synthesize sqlHelper=_sqlHelper;
@property(readonly, nonatomic) id <EFSQLExpressable> threadScopeExpression; // @synthesize threadScopeExpression=_threadScopeExpression;
@property(readonly, nonatomic) long long threadScopeDatabaseID; // @synthesize threadScopeDatabaseID=_threadScopeDatabaseID;
@property(readonly, nonatomic) EDMessagePersistence *messagePersistence; // @synthesize messagePersistence=_messagePersistence;
- (void)dropTemporaryView;	// IMP=0x000000000016a1fc
- (void)_ensureTempScopeView;	// IMP=0x000000000016a059
- (id)createMessagesWithThreadObjectID:(id)arg1 wrappedMessages:(id)arg2;	// IMP=0x0000000000169f1c
- (id)initWithCache:(id)arg1 messagePersistence:(id)arg2 threadScopeDatabaseID:(long long)arg3 threadScopeExpression:(id)arg4;	// IMP=0x0000000000169e08

@end

