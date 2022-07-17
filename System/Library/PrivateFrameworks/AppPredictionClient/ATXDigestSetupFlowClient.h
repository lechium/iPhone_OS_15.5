//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ATXNotificationDigestRankerClient;
@protocol OS_dispatch_queue;

@interface ATXDigestSetupFlowClient : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    ATXNotificationDigestRankerClient *_xpcClient;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000d78fa
- (id)sortDigestResponseWithNoNotificationVolume:(id)arg1;	// IMP=0x00000000000d72f8
- (void)_helperAppsSortedByNotificationsReceivedInPreviousNumDays:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000d6bb6
- (void)appsSortedByNotificationsReceivedInPreviousNumDays:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000d6b0f
- (void)appsSortedByNotificationsReceivedInPreviousNumDaysRaw:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000d6afd
- (id)init;	// IMP=0x00000000000d6a64

@end
