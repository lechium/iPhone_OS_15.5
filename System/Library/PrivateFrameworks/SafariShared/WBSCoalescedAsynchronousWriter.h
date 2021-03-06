//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString, NSURL;
@protocol OS_dispatch_group, OS_dispatch_queue, OS_dispatch_source, WBSCoalescedAsynchronousWriterDelegate;

@interface WBSCoalescedAsynchronousWriter : NSObject
{
    NSObject<OS_dispatch_queue> *_diskAccessQueue;	// 8 = 0x8
    NSURL *_fileURL;	// 16 = 0x10
    CDUnknownBlockType _writerBlock;	// 24 = 0x18
    CDUnknownBlockType _dataSourceBlock;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_dataSourceQueue;	// 40 = 0x28
    NSDictionary *_fileResourceValues;	// 48 = 0x30
    CDUnknownBlockType _plistDictionarySourceBlock;	// 56 = 0x38
    unsigned long long _plistFormat;	// 64 = 0x40
    NSObject<OS_dispatch_queue> *_internalQueue;	// 72 = 0x48
    NSObject<OS_dispatch_source> *_timer;	// 80 = 0x50
    double _writeDelayInterval;	// 88 = 0x58
    NSObject<OS_dispatch_group> *_writeGroup;	// 96 = 0x60
    struct unique_ptr<SafariShared::SuddenTerminationDisabler, std::default_delete<SafariShared::SuddenTerminationDisabler>> _suddenTerminationDisabler;	// 104 = 0x68
    _Bool _done;	// 112 = 0x70
    NSString *_name;	// 120 = 0x78
    id <WBSCoalescedAsynchronousWriterDelegate> _delegate;	// 128 = 0x80
}

- (id).cxx_construct;	// IMP=0x000000000003f21d
- (void).cxx_destruct;	// IMP=0x000000000003f17b
@property(nonatomic) __weak id <WBSCoalescedAsynchronousWriterDelegate> delegate; // @synthesize delegate=_delegate;
- (void)cancelPendingWriteSynchronously;	// IMP=0x000000000003f0da
- (void)completePendingWriteSynchronously;	// IMP=0x000000000003efa0
- (void)performScheduledWriteSynchronously;	// IMP=0x000000000003ee6c
- (void)startScheduledWriteNowWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000003ecf3
- (void)startScheduledWriteNow;	// IMP=0x000000000003ecdf
- (void)scheduleWrite;	// IMP=0x000000000003ec1a
- (void)_cancelPendingWriteSynchronouslyLeavingSuddenTerminationIntact;	// IMP=0x000000000003eb60
- (void)_asynchronouslyWriteData:(id)arg1 orPlistDictionary:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000003e8a8
- (void)_writeData:(id)arg1;	// IMP=0x000000000003e5a0
- (void)_waitForWriteCompletion;	// IMP=0x000000000003e563
- (id)_synchronousDataOnDataSourceQueue;	// IMP=0x000000000003e4c9
- (id)_dataForPlistDictionary:(id)arg1;	// IMP=0x000000000003e332
- (id)_plistDictionaryFromDataSourceOnDataSourceQueue;	// IMP=0x000000000003e30a
- (id)_dataFromDataSourceOnDataSourceQueue;	// IMP=0x000000000003e2e2
- (void)_scheduleTimer;	// IMP=0x000000000003e175
- (void)_timerFired;	// IMP=0x000000000003dfe1
- (void)_invalidateTimer;	// IMP=0x000000000003dfab
- (void)dealloc;	// IMP=0x000000000003dec1
- (id)_initWithName:(id)arg1 fileURL:(id)arg2 writerBlock:(CDUnknownBlockType)arg3 dataSourceQueue:(id)arg4 dataSourceBlock:(CDUnknownBlockType)arg5 plistDictionarySourceBlock:(CDUnknownBlockType)arg6 plistFormat:(unsigned long long)arg7 writeDelayInterval:(double)arg8 fileResourceValues:(id)arg9;	// IMP=0x000000000003db9a
- (id)_initWithName:(id)arg1 fileURL:(id)arg2 writerBlock:(CDUnknownBlockType)arg3 dataSourceQueue:(id)arg4 dataSourceBlock:(CDUnknownBlockType)arg5 writeDelayInterval:(double)arg6 fileResourceValues:(id)arg7;	// IMP=0x000000000003db76
- (id)initWithName:(id)arg1 writerBlock:(CDUnknownBlockType)arg2 dataSourceQueue:(id)arg3 plistFormat:(unsigned long long)arg4 plistDictionarySourceBlock:(CDUnknownBlockType)arg5;	// IMP=0x000000000003db41
- (id)initWithName:(id)arg1 fileURL:(id)arg2 dataSourceQueue:(id)arg3 plistFormat:(unsigned long long)arg4 plistDictionarySourceBlock:(CDUnknownBlockType)arg5;	// IMP=0x000000000003db0e
- (id)initWithName:(id)arg1 writerBlock:(CDUnknownBlockType)arg2 dataSourceQueue:(id)arg3 dataSourceBlock:(CDUnknownBlockType)arg4;	// IMP=0x000000000003dae1
- (id)initWithName:(id)arg1 fileURL:(id)arg2 dataSourceQueue:(id)arg3 dataSourceBlock:(CDUnknownBlockType)arg4 fileResourceValues:(id)arg5;	// IMP=0x000000000003dab5
- (id)initWithName:(id)arg1 fileURL:(id)arg2 dataSourceQueue:(id)arg3 dataSourceBlock:(CDUnknownBlockType)arg4;	// IMP=0x000000000003da8a
- (id)initWithName:(id)arg1 writerBlock:(CDUnknownBlockType)arg2 dataSourceBlock:(CDUnknownBlockType)arg3;	// IMP=0x000000000003da36
- (id)initWithName:(id)arg1 fileURL:(id)arg2 dataSourceBlock:(CDUnknownBlockType)arg3 writeDelayInterval:(double)arg4;	// IMP=0x000000000003d9d4
- (id)initWithName:(id)arg1 fileURL:(id)arg2 dataSourceBlock:(CDUnknownBlockType)arg3;	// IMP=0x000000000003d980

@end

