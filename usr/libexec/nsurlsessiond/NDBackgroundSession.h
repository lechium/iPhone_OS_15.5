//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NDApplication, NDCallbackQueue, NDCredentialStorage, NSMutableArray, NSMutableDictionary, NSString, NSURL, NSURLSession, NSUUID, NSXPCConnection;
@protocol NDBackgroundSessionDelegate, NSXPCProxyCreating><NDBackgroundSessionClient, OS_dispatch_queue;

@interface NDBackgroundSession : NSObject
{
    NSURLSession *_userInitiatedSession;	// 8 = 0x8
    NSURLSession *_discretionaryPrioritySession;	// 16 = 0x10
    NDCredentialStorage *_credentialStorage;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_archiveQueue;	// 32 = 0x20
    NDApplication *_clientApplication;	// 40 = 0x28
    NDApplication *_connectedExtension;	// 48 = 0x30
    NSMutableDictionary *_tasksToIdentifiers;	// 56 = 0x38
    NSMutableDictionary *_identifiersToTasks;	// 64 = 0x40
    NSMutableDictionary *_identifiersToMonitors;	// 72 = 0x48
    NSMutableDictionary *_identifiersToStreams;	// 80 = 0x50
    NSMutableDictionary *_identifiersToStreamQueues;	// 88 = 0x58
    NSMutableArray *_outstandingTaskIDs;	// 96 = 0x60
    double _lastArchiveTime;	// 104 = 0x68
    _Bool _archiveWasDeferred;	// 112 = 0x70
    NSURL *_sessionDirectory;	// 120 = 0x78
    NSURL *_downloadDirectory;	// 128 = 0x80
    NSURL *_uploadsDirectory;	// 136 = 0x88
    _Bool _performsEVCertCheck;	// 144 = 0x90
    _Bool _clientImplementsWillSendRequest;	// 145 = 0x91
    _Bool _clientImplementsWillBeginDelayedRequest;	// 146 = 0x92
    _Bool _clientImplementsSessionChallenge;	// 147 = 0x93
    _Bool _clientImplementsTaskChallenge;	// 148 = 0x94
    _Bool _sendsLaunchEvents;	// 149 = 0x95
    _Bool _discretionary;	// 150 = 0x96
    _Bool _obliterated;	// 151 = 0x97
    _Bool _cleanedUp;	// 152 = 0x98
    _Bool _hasBeenSignalledToDeliverPendingEvents;	// 153 = 0x99
    _Bool _infersDiscretionary;	// 154 = 0x9a
    _Bool _shouldPullInitialCredentials;	// 155 = 0x9b
    CDUnknownBlockType _completeReconnectionBlock;	// 160 = 0xa0
    int _clientPID;	// 168 = 0xa8
    NSXPCConnection *_xpcConn;	// 176 = 0xb0
    NSString *_watchExtensionBundleIdentifier;	// 184 = 0xb8
    _Bool _retryDataTasks;	// 192 = 0xc0
    NSObject<OS_dispatch_queue> *_workQueue;	// 200 = 0xc8
    NDCallbackQueue *_callbackQueue;	// 208 = 0xd0
    NDApplication *_monitoredApplication;	// 216 = 0xd8
    NSMutableDictionary *_identifiersToTaskInfo;	// 224 = 0xe0
    id <NSXPCProxyCreating><NDBackgroundSessionClient> _clientProxy;	// 232 = 0xe8
    id <NDBackgroundSessionDelegate> _delegate;	// 240 = 0xf0
    NSUUID *_uuid;	// 248 = 0xf8
    NSString *_identifier;	// 256 = 0x100
    NSString *_clientBundleID;	// 264 = 0x108
    NSString *_monitoredAppBundleID;	// 272 = 0x110
    NSString *_secondaryID;	// 280 = 0x118
    CDUnknownBlockType _invalidateReply;	// 288 = 0x120
    NSString *_sharedContainerIdentifier;	// 296 = 0x128
}

- (void).cxx_destruct;	// IMP=0x002000000002e400
@property(copy) NSString *sharedContainerIdentifier; // @synthesize sharedContainerIdentifier=_sharedContainerIdentifier;
@property(copy) CDUnknownBlockType invalidateReply; // @synthesize invalidateReply=_invalidateReply;
@property(readonly) NSString *secondaryID; // @synthesize secondaryID=_secondaryID;
@property(readonly) NSString *monitoredAppBundleID; // @synthesize monitoredAppBundleID=_monitoredAppBundleID;
@property(readonly) NSString *clientBundleID; // @synthesize clientBundleID=_clientBundleID;
@property(readonly) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly) NSUUID *uuid; // @synthesize uuid=_uuid;
@property __weak id <NDBackgroundSessionDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_URLSession:(id)arg1 task:(id)arg2 getAuthHeadersForResponse:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x001000000002dc5e
- (void)_URLSession:(id)arg1 openFileAtPath:(id)arg2 mode:(int)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x001000000002d7dd
- (id)_URLSession:(id)arg1 downloadTaskNeedsDownloadDirectory:(id)arg2;	// IMP=0x001000000002d760
- (void)_URLSession:(id)arg1 downloadTask:(id)arg2 didReceiveResponse:(id)arg3;	// IMP=0x001000000002d46d
- (void)URLSession:(id)arg1 task:(id)arg2 _conditionalRequirementsChanged:(_Bool)arg3;	// IMP=0x001000000002d293
- (void)URLSession:(id)arg1 task:(id)arg2 _isWaitingForConnectionWithReason:(long long)arg3;	// IMP=0x001000000002d081
- (void)URLSession:(id)arg1 task:(id)arg2 _willSendRequestForEstablishedConnection:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x001000000002c860
- (void)URLSession:(id)arg1 downloadTask:(id)arg2 didWriteData:(long long)arg3 totalBytesWritten:(long long)arg4 totalBytesExpectedToWrite:(long long)arg5;	// IMP=0x001000000002c6b6
- (void)URLSession:(id)arg1 downloadTask:(id)arg2 didResumeAtOffset:(long long)arg3 expectedTotalBytes:(long long)arg4;	// IMP=0x001000000002c43e
- (void)URLSession:(id)arg1 downloadTask:(id)arg2 didFinishDownloadingToURL:(id)arg3;	// IMP=0x001000000002c162
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didBecomeDownloadTask:(id)arg3;	// IMP=0x001000000002bdb7
- (void)URLSession:(id)arg1 dataTask:(id)arg2 _didReceiveData:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x001000000002b873
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x001000000002b1ca
- (void)URLSession:(id)arg1 dataTask:(id)arg2 willCacheResponse:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x001000000002b1ba
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;	// IMP=0x0010000000029db1
- (void)URLSession:(id)arg1 task:(id)arg2 needNewBodyStream:(CDUnknownBlockType)arg3;	// IMP=0x00100000000299e3
- (void)URLSession:(id)arg1 task:(id)arg2 didSendBodyData:(long long)arg3 totalBytesSent:(long long)arg4 totalBytesExpectedToSend:(long long)arg5;	// IMP=0x00100000000298c7
- (void)URLSession:(id)arg1 task:(id)arg2 willPerformHTTPRedirection:(id)arg3 newRequest:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x0010000000028bce
- (void)URLSession:(id)arg1 task:(id)arg2 didReceiveChallenge:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0010000000027cad
- (_Bool)trustPassesExtendedValidation:(struct __SecTrust *)arg1;	// IMP=0x0010000000027a64
- (void)URLSession:(id)arg1 didBecomeInvalidWithError:(id)arg2;	// IMP=0x0010000000027919
- (void)invalidateWithReply:(CDUnknownBlockType)arg1;	// IMP=0x00100000000276f1
- (void)resetStorageWithReply:(CDUnknownBlockType)arg1;	// IMP=0x00100000000276a3
- (void)setTLSSessionCachePrefix:(id)arg1;	// IMP=0x001000000002763c
- (void)setDiscretionaryOverride:(long long)arg1 forTaskWithIdentifier:(unsigned long long)arg2;	// IMP=0x00100000000271c9
- (void)setTLSMaximumSupportedProtocolVersion:(unsigned short)arg1 forTaskWithIdentifier:(unsigned long long)arg2;	// IMP=0x0010000000027086
- (void)setTLSMinimumSupportedProtocolVersion:(unsigned short)arg1 forTaskWithIdentifier:(unsigned long long)arg2;	// IMP=0x0010000000026f43
- (void)setExpectedProgressTarget:(unsigned long long)arg1 forTaskWithIdentifier:(unsigned long long)arg2;	// IMP=0x0010000000026df7
- (void)setBytesPerSecondLimit:(long long)arg1 forTaskWithIdentifier:(unsigned long long)arg2;	// IMP=0x0010000000026b9d
- (void)setLoadingPoolPriority:(double)arg1 forTaskWithIdentifier:(unsigned long long)arg2;	// IMP=0x001000000002683e
- (void)setPriority:(long long)arg1 forTaskWithIdentifier:(unsigned long long)arg2;	// IMP=0x001000000002600a
- (void)setDescription:(id)arg1 forTask:(unsigned long long)arg2;	// IMP=0x0010000000025ea1
- (void)setPropertyOnStreamWithIdentifier:(unsigned long long)arg1 propDict:(id)arg2 propKey:(id)arg3 withReply:(CDUnknownBlockType)arg4;	// IMP=0x0010000000025bc4
- (void)resumeTaskWithIdentifier:(unsigned long long)arg1 withProperties:(id)arg2;	// IMP=0x0010000000025681
- (void)suspendTaskWithIdentifier:(unsigned long long)arg1;	// IMP=0x0010000000025464
- (void)cancelTaskWithIdentifier:(unsigned long long)arg1;	// IMP=0x0010000000025227
- (void)cancelTaskWithIdentifier:(unsigned long long)arg1 byProducingResumeData:(CDUnknownBlockType)arg2;	// IMP=0x0010000000025037
- (void)avAggregateAssetDownloadTaskWithDownloadToken:(unsigned long long)arg1 serializedMediaSelections:(id)arg2 assetTitle:(id)arg3 assetArtworkData:(id)arg4 options:(id)arg5 childDownloadSessionIdentifier:(id)arg6 identifier:(unsigned long long)arg7 uniqueIdentifier:(id)arg8 reply:(CDUnknownBlockType)arg9;	// IMP=0x0010000000025026
- (void)avAssetDownloadTaskWithDownloadToken:(unsigned long long)arg1 URL:(id)arg2 destinationURL:(id)arg3 temporaryDestinationURL:(id)arg4 assetTitle:(id)arg5 assetArtworkData:(id)arg6 options:(id)arg7 identifier:(unsigned long long)arg8 uniqueIdentifier:(id)arg9 taskKind:(unsigned long long)arg10 enableSPIDelegateCallbacks:(_Bool)arg11 reply:(CDUnknownBlockType)arg12;	// IMP=0x0010000000025015
- (void)dataTaskWithRequest:(id)arg1 originalRequest:(id)arg2 identifier:(unsigned long long)arg3 uniqueIdentifier:(id)arg4 reply:(CDUnknownBlockType)arg5;	// IMP=0x0010000000024c5f
- (void)uploadTaskWithRequest:(id)arg1 originalRequest:(id)arg2 fromFile:(id)arg3 sandboxExtensionData:(id)arg4 identifier:(unsigned long long)arg5 uniqueIdentifier:(id)arg6 potentialCredentials:(id)arg7 reply:(CDUnknownBlockType)arg8;	// IMP=0x00100000000244c4
- (void)downloadTaskWithRequest:(id)arg1 originalRequest:(id)arg2 downloadFilePath:(id)arg3 identifier:(unsigned long long)arg4 uniqueIdentifier:(id)arg5 reply:(CDUnknownBlockType)arg6;	// IMP=0x0010000000023eb5
- (void)downloadTaskWithResumeData:(id)arg1 identifier:(unsigned long long)arg2 uniqueIdentifier:(id)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x0010000000023a3f
- (void)pingForXPCObjectValidityWithReply:(CDUnknownBlockType)arg1;	// IMP=0x0010000000023a34
- (void)performCommonSetupForTask:(id)arg1 taskInfo:(id)arg2 identifier:(unsigned long long)arg3 discretionaryStatus:(_Bool)arg4;	// IMP=0x0010000000023602
- (void)setupDASPropertiesOnTask:(id)arg1 taskInfo:(id)arg2 discretionaryStatus:(_Bool)arg3;	// IMP=0x0010000000022e31
- (void)wakeUpClient:(long long)arg1;	// IMP=0x00100000000226c2
- (void)clientAcknowledgedTerminalCallbackForTask:(unsigned long long)arg1;	// IMP=0x00100000000223a4
- (void)errorOccurredDuringAuthCallbackDelivery:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000002225d
- (void)errorOccurredDuringFinishedCallbackDelivery:(id)arg1;	// IMP=0x0010000000022113
- (id)getClientProxy;	// IMP=0x0010000000022102
- (id)inputStreamWithFileHandle:(id)arg1 taskIdentifier:(unsigned long long)arg2;	// IMP=0x0010000000021f48
- (id)makeTempUploadFile:(id)arg1 withExtensionData:(id)arg2;	// IMP=0x0010000000021b46
- (void)requeueTask:(unsigned long long)arg1;	// IMP=0x0010000000021b32
- (void)requeueTask:(unsigned long long)arg1 skipResume:(_Bool)arg2;	// IMP=0x0010000000021add
- (void)removeOutstandingTaskWithIdentifier:(unsigned long long)arg1;	// IMP=0x0010000000021a75
- (void)addOutstandingTaskWithIdentifier:(unsigned long long)arg1;	// IMP=0x0010000000021a0d
- (void)enqueueTaskWithIdentifier:(unsigned long long)arg1;	// IMP=0x0010000000021841
- (void)taskShouldSuspend:(unsigned long long)arg1;	// IMP=0x001000000002159b
- (void)taskShouldResume:(unsigned long long)arg1;	// IMP=0x0010000000021215
- (MISSING_TYPE *)handleWillBeginDelayedRequestForTaskWithIdentifier:completionHandler: /* Error: Ran out of types for this method. */;	// IMP=0x00100000000209f1
- (void)handleEarliestBeginDateForTaskWithIdentifier:(unsigned long long)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000020470
- (void)cancelMonitorForTask:(unsigned long long)arg1;	// IMP=0x001000000002037b
- (_Bool)currentDiscretionaryStatus:(id)arg1 withOptionalTaskInfo:(id)arg2;	// IMP=0x001000000001f9ad
- (long long)priorityForDiscretionaryStatus:(_Bool)arg1;	// IMP=0x001000000001f997
- (id)getTLSSessionCachePrefix;	// IMP=0x001000000001f95c
- (id)getTasksForReconnection;	// IMP=0x001000000001f803
- (void)fillInPropertiesForTaskInfo:(id)arg1 withTaskID:(id)arg2;	// IMP=0x001000000001f73e
- (void)fillInByteCountsForTaskInfo:(id)arg1 withTaskID:(id)arg2;	// IMP=0x001000000001f638
- (void)allowReconnect;	// IMP=0x001000000001f5ea
- (void)reconnectClient:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x001000000001f2e5
- (void)clientDidDisconnect;	// IMP=0x001000000001ef81
- (void)cancelTasksRequiringClientConnectionAndResumeUnstartedTasks;	// IMP=0x001000000001e974
- (_Bool)finalizeTaskCompletionWithSuppressedWake:(_Bool)arg1;	// IMP=0x001000000001e8ee
- (void)handleCompletionOfTask:(id)arg1 identifier:(unsigned long long)arg2 taskInfo:(id)arg3 isRecoverable:(_Bool)arg4 suppressWake:(_Bool)arg5;	// IMP=0x001000000001e8ac
- (_Bool)clientIsActive;	// IMP=0x001000000001e758
- (_Bool)sessionHasOutstandingTasks;	// IMP=0x001000000001e641
- (void)removeUploadFileForTaskInfo:(id)arg1;	// IMP=0x001000000001e5da
- (void)removeDownloadFileForTaskInfo:(id)arg1;	// IMP=0x001000000001e480
- (_Bool)retryTask:(id)arg1 originalError:(id)arg2 transactionMetrics:(id)arg3;	// IMP=0x001000000001d9fa
- (id)clientErrorForError:(id)arg1;	// IMP=0x001000000001d7ab
- (id)restoreTasks:(_Bool *)arg1;	// IMP=0x001000000001d62b
- (id)restoreTasksFromArchivedInfo:(id)arg1;	// IMP=0x001000000001d53a
- (id)restoreTask:(id)arg1 isOutstanding:(_Bool *)arg2;	// IMP=0x001000000001cf57
- (id)restoreCompletedTask:(id)arg1;	// IMP=0x001000000001c852
- (id)restoreInProgressTask:(id)arg1;	// IMP=0x001000000001bfe6
- (id)createNewTaskFromInfo:(id)arg1;	// IMP=0x001000000001b921
- (void)ensureSessionDownloadDirectoryExists;	// IMP=0x001000000001b736
- (void)configureTask:(id)arg1 withTaskInfo:(id)arg2;	// IMP=0x001000000001b4b0
- (void)configureAdditionalPropertiesOnTask:(id)arg1 taskInfo:(id)arg2;	// IMP=0x001000000001b2e3
- (id)sanitizeTaskProperties:(id)arg1;	// IMP=0x001000000001a646
- (id)adjustDiscretionaryStatusForTaskInfo:(id)arg1;	// IMP=0x001000000001a5bd
- (void)updateTaskInfoBasedOnCurrentDiscretionaryStatus:(id)arg1;	// IMP=0x001000000001a384
- (id)requestWithAdjustedWindowForTaskInfo:(id)arg1;	// IMP=0x0010000000019fa0
- (id)descriptionForTCPConnectionWaitingReason:(long long)arg1;	// IMP=0x0010000000019e4a
- (id)descriptionForRequest:(id)arg1;	// IMP=0x0010000000019d0c
- (id)descriptionForTaskWithIdentifier:(unsigned long long)arg1;	// IMP=0x0010000000019c31
- (void)_onqueue_archiveTaskInfo;	// IMP=0x0010000000019b0f
- (void)archiveTimerFired;	// IMP=0x0010000000019ac4
- (void)archiveTaskInfo:(_Bool)arg1;	// IMP=0x0010000000019a62
- (id)tasksArchivePath;	// IMP=0x00100000000199f3
- (void)obliterate;	// IMP=0x001000000001972a
- (void)cleanupSessionWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000001954b
- (id)setupDownloadDirectory;	// IMP=0x0010000000019257
- (void)clientApplicationWasReinstalled;	// IMP=0x0010000000018c77
- (void)backgroundUpdatesEnabledForApplication:(id)arg1;	// IMP=0x0010000000018be9
- (void)applicationWasSuspended:(id)arg1;	// IMP=0x0010000000018b5b
- (_Bool)hasConnectedClient;	// IMP=0x00100000000189f8
- (void)setXPCConnection:(id)arg1;	// IMP=0x0010000000018658
- (id)sessionForDiscretionaryStatus:(_Bool)arg1;	// IMP=0x0010000000018647
- (id)initWithConfiguration:(id)arg1 bundleID:(id)arg2 isSpringBoardApp:(_Bool)arg3 downloadDirectory:(id)arg4 options:(id)arg5 clientProxy:(id)arg6 delegate:(id)arg7 workQueue:(id)arg8 archiveQueue:(id)arg9;	// IMP=0x0010000000016f8f
- (id)configurationWithClientConfiguration:(id)arg1 discretionary:(_Bool)arg2;	// IMP=0x00100000000160d0
- (double)defaultWindowDurationForResourceTimeout:(double)arg1;	// IMP=0x00100000000160b5

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
