//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, _bmFMDatabase;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface _bmFMDatabaseQueue : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    _bmFMDatabase *_db;	// 16 = 0x10
    int _openFlags;	// 24 = 0x18
    NSString *_path;	// 32 = 0x20
    NSString *_vfsName;	// 40 = 0x28
}

+ (Class)databaseClass;	// IMP=0x00000000000117b0
+ (id)databaseQueueWithURL:(id)arg1 flags:(int)arg2;	// IMP=0x0000000000011749
+ (id)databaseQueueWithPath:(id)arg1 flags:(int)arg2;	// IMP=0x00000000000116f1
+ (id)databaseQueueWithURL:(id)arg1;	// IMP=0x000000000001168f
+ (id)databaseQueueWithPath:(id)arg1;	// IMP=0x0000000000011646
- (void).cxx_destruct;	// IMP=0x0000000000012629
@property(copy) NSString *vfsName; // @synthesize vfsName=_vfsName;
@property(readonly) int openFlags; // @synthesize openFlags=_openFlags;
@property(retain) NSString *path; // @synthesize path=_path;
- (_Bool)checkpoint:(int)arg1 name:(id)arg2 logFrameCount:(int *)arg3 checkpointCount:(int *)arg4 error:(id *)arg5;	// IMP=0x0000000000012425
- (_Bool)checkpoint:(int)arg1 name:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000012400
- (_Bool)checkpoint:(int)arg1 error:(id *)arg2;	// IMP=0x00000000000123d9
- (id)inSavePoint:(CDUnknownBlockType)arg1;	// IMP=0x0000000000012062
- (void)inImmediateTransaction:(CDUnknownBlockType)arg1;	// IMP=0x0000000000012048
- (void)inExclusiveTransaction:(CDUnknownBlockType)arg1;	// IMP=0x0000000000012031
- (void)inDeferredTransaction:(CDUnknownBlockType)arg1;	// IMP=0x0000000000012017
- (void)inTransaction:(CDUnknownBlockType)arg1;	// IMP=0x0000000000012000
- (void)beginTransaction:(long long)arg1 withBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000000011e10
- (void)inDatabase:(CDUnknownBlockType)arg1;	// IMP=0x0000000000011cbe
- (id)database;	// IMP=0x0000000000011bf5
- (void)interrupt;	// IMP=0x0000000000011bb8
- (void)close;	// IMP=0x0000000000011b33
- (void)dealloc;	// IMP=0x0000000000011aeb
- (id)init;	// IMP=0x0000000000011ad7
- (id)initWithPath:(id)arg1;	// IMP=0x0000000000011abd
- (id)initWithURL:(id)arg1;	// IMP=0x0000000000011a67
- (id)initWithURL:(id)arg1 flags:(int)arg2;	// IMP=0x0000000000011a09
- (id)initWithPath:(id)arg1 flags:(int)arg2;	// IMP=0x00000000000119f4
- (id)initWithPath:(id)arg1 flags:(int)arg2 vfs:(id)arg3;	// IMP=0x0000000000011843
- (id)initWithURL:(id)arg1 flags:(int)arg2 vfs:(id)arg3;	// IMP=0x00000000000117c1

@end
