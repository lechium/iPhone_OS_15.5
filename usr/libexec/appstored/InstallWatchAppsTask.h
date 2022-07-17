//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, RequestThrottle;

@interface InstallWatchAppsTask
{
    NSArray *_purchaseInfo;	// 8 = 0x8
    RequestThrottle *_requestThrottle;	// 16 = 0x10
    NSArray *_processedExternalIDs;	// 24 = 0x18
}

+ (id)_companionBundleIDForItemID:(id)arg1 requestToken:(id)arg2;	// IMP=0x00400000001cba70
+ (id)_appAlreadyRequestedForPurchaseInfo:(id)arg1;	// IMP=0x00100000001cb7e7
+ (_Bool)_appAlreadyInstalledForPurchaseInfo:(id)arg1 hasVersionOfBundleIDInstalled:(_Bool *)arg2;	// IMP=0x00100000001cb0f8
+ (id)taskWithXPCAppMetadata:(id)arg1 forDevice:(id)arg2 requestToken:(id)arg3 requestThrottle:(id)arg4;	// IMP=0x00100000001c8ff6
- (void).cxx_destruct;	// IMP=0x00200000001cba78
- (void)main;	// IMP=0x00100000001c9ea8
@property(readonly) NSArray *processedExternalIDs; // @synthesize processedExternalIDs=_processedExternalIDs;
- (id)initWithPurchaseInfo:(id)arg1 requestThrottle:(id)arg2;	// IMP=0x00100000001c9da5

@end
