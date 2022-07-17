//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AMSURLAction, AMSURLRequestProperties, AMSURLSession, NSData, NSError, NSMutableData, NSMutableSet, NSSet, NSURLResponse, NSURLSessionTask, NSURLSessionTaskMetrics;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface AMSURLTaskInfo : NSObject
{
    NSMutableData *_data;	// 8 = 0x8
    NSMutableSet *_retryIdentifiers;	// 16 = 0x10
    CDUnknownBlockType _completionBlock;	// 24 = 0x18
    NSError *_error;	// 32 = 0x20
    NSURLSessionTaskMetrics *_metrics;	// 40 = 0x28
    unsigned long long _previousAuthorizationCredentialSource;	// 48 = 0x30
    AMSURLRequestProperties *_properties;	// 56 = 0x38
    AMSURLAction *_receivedAction;	// 64 = 0x40
    NSURLResponse *_response;	// 72 = 0x48
    long long _retryCount;	// 80 = 0x50
    AMSURLSession *_session;	// 88 = 0x58
    NSURLSessionTask *_task;	// 96 = 0x60
    struct os_unfair_recursive_lock_s _taskLock;	// 104 = 0x68
    NSObject<OS_dispatch_queue> *_taskQueue;	// 112 = 0x70
}

+ (id)sharedTaskQueue;	// IMP=0x000000000024848b
+ (id)sharedTaskStore;	// IMP=0x0000000000248436
+ (void)removeTaskInfoForTask:(id)arg1;	// IMP=0x000000000024790f
+ (id)createTaskInfoForTask:(id)arg1;	// IMP=0x00000000002476cc
+ (id)taskInfoForTask:(id)arg1;	// IMP=0x00000000002474f4
- (void).cxx_destruct;	// IMP=0x000000000024852a
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *taskQueue; // @synthesize taskQueue=_taskQueue;
@property(readonly, nonatomic) struct os_unfair_recursive_lock_s taskLock; // @synthesize taskLock=_taskLock;
@property(readonly, nonatomic) NSURLSessionTask *task; // @synthesize task=_task;
- (void)performSyncBlockWithExclusiveAccess:(CDUnknownBlockType)arg1;	// IMP=0x0000000000248329
- (void)performSyncBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000248296
- (void)performAsyncBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000248236
- (void)migrateFromTaskInfo:(id)arg1;	// IMP=0x000000000024810b
- (id)createMetricsContextForDecodedObject:(id)arg1;	// IMP=0x0000000000248066
- (void)assertIsOnPrivateQueue;	// IMP=0x0000000000248031
- (void)assertHasExclusiveAccess;	// IMP=0x0000000000247fee
- (void)appendData:(id)arg1;	// IMP=0x0000000000247f95
- (void)addRetryIdentifier:(id)arg1;	// IMP=0x0000000000247f3c
@property(retain, nonatomic) AMSURLSession *session; // @synthesize session=_session;
@property(nonatomic) long long retryCount; // @synthesize retryCount=_retryCount;
@property(retain, nonatomic) NSURLResponse *response; // @synthesize response=_response;
@property(retain, nonatomic) AMSURLAction *receivedAction; // @synthesize receivedAction=_receivedAction;
@property(retain, nonatomic) AMSURLRequestProperties *properties; // @synthesize properties=_properties;
@property(nonatomic) unsigned long long previousAuthorizationCredentialSource; // @synthesize previousAuthorizationCredentialSource=_previousAuthorizationCredentialSource;
@property(retain, nonatomic) NSURLSessionTaskMetrics *metrics; // @synthesize metrics=_metrics;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property(readonly, nonatomic) NSSet *retryIdentifiers;
@property(readonly, nonatomic) NSData *data;
- (id)initWithTask:(id)arg1;	// IMP=0x00000000002473f6

@end
