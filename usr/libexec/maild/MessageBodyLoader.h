//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class EFCancelationToken, MFActivityMonitor, MFInvocationQueue, MFMailMessage, MFMailMessageLibrary, MailAccount, NSCountedSet, NSDate, NSMutableArray, NSMutableDictionary, NSMutableSet, NSString;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface MessageBodyLoader : NSObject
{
    NSMutableArray *_clients;	// 8 = 0x8
    NSMutableArray *_newMessages;	// 16 = 0x10
    NSMutableSet *_newMessageSet;	// 24 = 0x18
    NSCountedSet *_newMessageMailboxQuota;	// 32 = 0x20
    NSMutableArray *_userViewingMessages;	// 40 = 0x28
    MFActivityMonitor *_currentMonitor;	// 48 = 0x30
    NSCountedSet *_watchedUids;	// 56 = 0x38
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 64 = 0x40
    MFInvocationQueue *_workQueue;	// 72 = 0x48
    EFCancelationToken *_cancelationToken;	// 80 = 0x50
    MFMailMessageLibrary *_library;	// 88 = 0x58
    NSObject<OS_dispatch_semaphore> *_waitReply;	// 96 = 0x60
    int _noNetworkFetching;	// 104 = 0x68
    int _isPaused;	// 108 = 0x6c
    NSDate *_resumeTime;	// 112 = 0x70
    unsigned int _isRunning:1;	// 120 = 0x78
    unsigned int _isWaitingForTask:1;	// 120 = 0x78
    unsigned int _shouldProcessQueues:1;	// 120 = 0x78
    unsigned int _holdingPowerAssertion:1;	// 120 = 0x78
    NSMutableDictionary *_bytesPerAccount;	// 128 = 0x80
    MFMailMessage *_currentMessage;	// 136 = 0x88
    MailAccount *_account;	// 144 = 0x90
}

+ (void)accountsDidChange;	// IMP=0x0020000000052b0f
+ (void)applicationWillResume;	// IMP=0x00100000000529a4
+ (void)applicationWillSuspend;	// IMP=0x0010000000052861
+ (id)copySummaryForMessage:(id)arg1 downloadIfNecessary:(_Bool)arg2;	// IMP=0x001000000004c853
+ (id)attachmentManager;	// IMP=0x001000000004c7e8
+ (void)resume;	// IMP=0x001000000004c73f
+ (void)pause;	// IMP=0x001000000004c696
+ (id)loaderForAccount:(id)arg1;	// IMP=0x001000000004c547
+ (void)_setSharedLoaderForTesting:(id)arg1 account:(id)arg2;	// IMP=0x001000000004c489
+ (void)initialize;	// IMP=0x001000000004c442
+ (id)log;	// IMP=0x001000000004c365
+ (id)signpostLog;	// IMP=0x001000000004c23f
- (void).cxx_destruct;	// IMP=0x0020000000053bb2
@property(retain, nonatomic) MailAccount *account; // @synthesize account=_account;
- (void)_releasePowerAssertion;	// IMP=0x0010000000053b1b
- (void)_retainPowerAssertion;	// IMP=0x0010000000053aa5
- (void)_clearResumeTime;	// IMP=0x00100000000539b4
- (void)_cancelSleepIfNeeded;	// IMP=0x001000000005390a
- (void)systemDidWake;	// IMP=0x00100000000538a9
- (void)systemWillSleep;	// IMP=0x00100000000538a3
- (void)assertionDidExpire;	// IMP=0x0010000000053557
- (void)_logStats:(_Bool)arg1;	// IMP=0x0010000000053209
- (void)_recordStats:(id)arg1;	// IMP=0x0010000000052d53
- (void)_applicationDidEnterBackground:(id)arg1;	// IMP=0x0010000000052aae
- (void)_applicationDidBecomeActive:(id)arg1;	// IMP=0x0010000000052a4d
- (void)applicationWillResume;	// IMP=0x001000000005290a
- (oneway void)disableNetworkFetching;	// IMP=0x00100000000527c0
- (oneway void)enableNetworkFetching;	// IMP=0x00100000000526e6
- (oneway void)resume;	// IMP=0x001000000005266f
- (oneway void)pause;	// IMP=0x001000000005265d
@property(readonly) _Bool isPaused;
- (void)_start;	// IMP=0x0010000000052456
- (_Bool)_isRunning;	// IMP=0x001000000005244b
- (void)_setIsRunning:(_Bool)arg1;	// IMP=0x001000000005213a
- (void)_blockingMessage;	// IMP=0x001000000005211f
- (void)_waitUntilNotRunning;	// IMP=0x0010000000052067
- (oneway void)userStoppedViewingMessages;	// IMP=0x0010000000052001
- (oneway void)userViewingMessages:(id)arg1;	// IMP=0x0010000000051f0c
- (oneway void)stopAddingNewMessagesForStore:(id)arg1;	// IMP=0x0010000000051da0
- (oneway void)beginAddingNewMessagesForStore:(id)arg1;	// IMP=0x0010000000051bd4
- (_Bool)_nts_isProcessingMessage:(id)arg1;	// IMP=0x0010000000051a7c
- (_Bool)isProcessingMessage:(id)arg1;	// IMP=0x001000000005197e
- (oneway void)addMessages:(id)arg1;	// IMP=0x00100000000518d6
- (oneway void)addMessages_nts:(id)arg1;	// IMP=0x001000000005164d
- (oneway void)addMessage:(id)arg1;	// IMP=0x00100000000515e2
- (void)_nts_sortClients;	// IMP=0x001000000005132b
- (void)_nts_removeClient:(id)arg1;	// IMP=0x00100000000511b8
- (void)_nts_insertClient:(id)arg1;	// IMP=0x0010000000050c23
- (oneway void)removeSingleMessageClient:(id)arg1;	// IMP=0x0010000000050b57
- (oneway void)addSingleMessageClient:(id)arg1;	// IMP=0x0010000000050a8d
- (void)_messageFlagsChanged:(id)arg1;	// IMP=0x001000000005070a
- (void)_messagesWillBeCompacted:(id)arg1;	// IMP=0x00100000000505cf
- (void)_removeViewingMessages:(id)arg1;	// IMP=0x0010000000050526
- (void)_removeNewMessages:(id)arg1;	// IMP=0x001000000005047e
- (void)_removeNewMessages_nts:(id)arg1;	// IMP=0x0010000000050269
- (void)_messagesAdded:(id)arg1;	// IMP=0x0010000000050143
- (void)_getNextClientOrMessageFinished:(id)arg1;	// IMP=0x001000000004f9ed
- (void)_messageLoadFinished:(id)arg1;	// IMP=0x001000000004f590
- (void)_clientLoadFinished:(id)arg1;	// IMP=0x001000000004f19d
- (void)_finishedCullingMessageList:(id)arg1;	// IMP=0x001000000004eff9
- (void)_getNextClientOrMessage;	// IMP=0x001000000004ee70
- (void)_tryProcessingQueues;	// IMP=0x001000000004ea6d
- (id)copyDiagnosticInformation;	// IMP=0x001000000004e84e
- (_Bool)networkFetchingAllowed;	// IMP=0x001000000004e733
- (void)dealloc;	// IMP=0x001000000004e65b
- (oneway void)startup;	// IMP=0x001000000004e524
- (id)initWithLibrary:(id)arg1;	// IMP=0x001000000004e137
- (id)init;	// IMP=0x001000000004e0c2
@property(readonly) unsigned long long signpostID;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
