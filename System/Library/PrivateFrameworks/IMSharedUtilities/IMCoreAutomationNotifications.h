//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface IMCoreAutomationNotifications : NSObject
{
    long long _chatsWrittenCount;	// 8 = 0x8
    long long _messagesWrittenCount;	// 16 = 0x10
    long long _attachmentsWrittenCount;	// 24 = 0x18
}

+ (id)sharedInstance;	// IMP=0x0000000000067993
@property(readonly) long long attachmentsWrittenCount; // @synthesize attachmentsWrittenCount=_attachmentsWrittenCount;
@property(readonly) long long messagesWrittenCount; // @synthesize messagesWrittenCount=_messagesWrittenCount;
@property(readonly) long long chatsWrittenCount; // @synthesize chatsWrittenCount=_chatsWrittenCount;
- (void)addNewMessagesSyncedCount:(long long)arg1;	// IMP=0x0000000000068115
- (void)addNewAttachmentsSyncedCount:(long long)arg1;	// IMP=0x00000000000680b0
- (void)addNewChatsSyncedCount:(long long)arg1;	// IMP=0x000000000006804b
- (void)postCoreAutomationNotificationFinishedTapToDownload:(id)arg1 downloadedFromCloudKitSuccessfully:(_Bool)arg2;	// IMP=0x0000000000067f8d
- (void)postCoreAutomationNotificationFinishedPurgingAttachments:(id)arg1 withErrorString:(id)arg2;	// IMP=0x0000000000067eb1
- (void)postCoreAutomationNotificationWithDictionary:(id)arg1 withVerboseLogging:(_Bool)arg2;	// IMP=0x0000000000067dda
- (void)postCoreAutomationNotificationWithAction:(id)arg1;	// IMP=0x0000000000067d55
- (void)postCoreAutomationNotificationPeriodicSyncUpdateNotification;	// IMP=0x0000000000067c53
- (void)postCoreAutomationNotificationFinishedPeriodicSyncNotificationWithStartTime:(id)arg1 chatsDidsync:(_Bool)arg2 messagesDidSync:(_Bool)arg3 attachmentsDidSync:(_Bool)arg4;	// IMP=0x0000000000067a61
- (void)clearSyncCounts;	// IMP=0x0000000000067a24
- (id)init;	// IMP=0x00000000000679d8

@end
