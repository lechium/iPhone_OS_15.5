//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <UserNotificationsServer/UNSNotificationRepositoryObserver-Protocol.h>
#import <UserNotificationsServer/UNSPendingNotificationRepositoryObserver-Protocol.h>

@class NSString, UNSAttachmentsRepository, UNSNotificationRepository, UNSNotificationSchedulingService, UNSPendingNotificationRepository;
@protocol OS_dispatch_queue;

@interface UNSAttachmentsService : NSObject <UNSNotificationRepositoryObserver, UNSPendingNotificationRepositoryObserver>
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    UNSAttachmentsRepository *_attachmentsRepository;	// 16 = 0x10
    UNSNotificationRepository *_notificationRepository;	// 24 = 0x18
    UNSNotificationSchedulingService *_notificationSchedulingService;	// 32 = 0x20
    UNSPendingNotificationRepository *_pendingNotificationRepository;	// 40 = 0x28
}

+ (id)_attachmentURLsRemovedByReplaceUpdate:(id)arg1;	// IMP=0x000000000000d907
+ (id)_notificationIdentifiersForNotificationRecords:(id)arg1;	// IMP=0x000000000000d8d6
+ (id)_stagingDirectory;	// IMP=0x000000000000d880
- (void).cxx_destruct;	// IMP=0x000000000000db17
- (void)_notificationIdentifiersForBundleIdentifier:(id)arg1 replyOnQueue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000000d6ae
- (void)_repositoryDidPerformUpdates:(id)arg1 forBundleIdentifier:(id)arg2;	// IMP=0x000000000000d1a6
- (void)_beginObservingNotificationChanges;	// IMP=0x000000000000d156
- (void)pendingNotificationRepository:(id)arg1 didPerformUpdates:(id)arg2 forBundleIdentifier:(id)arg3;	// IMP=0x000000000000d13e
- (void)notificationRepository:(id)arg1 didPerformUpdates:(id)arg2 forBundleIdentifier:(id)arg3;	// IMP=0x000000000000d126
- (void)_queue_applicationDidUninstall:(id)arg1;	// IMP=0x000000000000d0a7
- (void)_queue_notificationSourcesDidUninstall:(id)arg1;	// IMP=0x000000000000cf57
- (void)notificationSourcesDidUninstall:(id)arg1;	// IMP=0x000000000000cead
- (void)_queue_deleteAttachmentDataForNotificationRecord:(id)arg1 bundleIdentifier:(id)arg2;	// IMP=0x000000000000cc94
- (void)_queue_deleteAttachmentDataForNotificationRecords:(id)arg1 bundleIdentifier:(id)arg2;	// IMP=0x000000000000cb17
- (id)_temporaryAttachmentFileURL;	// IMP=0x000000000000ca67
- (id)_queue_resolvedFileURLForNotificationAttachment:(id)arg1 request:(id)arg2 bundleIdentifier:(id)arg3 bundleProxy:(id)arg4 error:(id *)arg5;	// IMP=0x000000000000c213
- (id)_queue_validatedRepositoryURLForNotificationAttachment:(id)arg1 request:(id)arg2 bundleIdentifier:(id)arg3 bundleProxy:(id)arg4 error:(id *)arg5;	// IMP=0x000000000000bf4e
- (id)_queue_resolvedURLForNotificationAttachment:(id)arg1 request:(id)arg2 bundleIdentifier:(id)arg3 bundleProxy:(id)arg4 error:(id *)arg5;	// IMP=0x000000000000bd97
- (id)_queue_resolveAttachmentsForRequest:(id)arg1 bundleIdentifier:(id)arg2 bundleProxy:(id)arg3 continueOnFailure:(_Bool)arg4 error:(id *)arg5;	// IMP=0x000000000000afa4
- (id)resolveAttachmentsSkippingErrorsForRequest:(id)arg1 bundleIdentifier:(id)arg2 bundleProxy:(id)arg3;	// IMP=0x000000000000acb7
- (id)resolveAttachmentsForRequest:(id)arg1 bundleIdentifier:(id)arg2 bundleProxy:(id)arg3 error:(id *)arg4;	// IMP=0x000000000000a8f5
- (void)_queue_ensureIntegrityWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000000a497
- (void)ensureIntegrityWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000000a2d4
- (void)contentProtectionStateChangedForFirstUnlock:(_Bool)arg1;	// IMP=0x000000000000a268
- (id)initWithAttachmentsRepository:(id)arg1 notificationRepository:(id)arg2 notificationSchedulingService:(id)arg3 pendingNotificationRepository:(id)arg4;	// IMP=0x000000000000a130

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
