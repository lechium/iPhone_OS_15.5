//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CloudKit/CKFetchWhitelistedBundleIDsOperationCallbacks-Protocol.h>

@class NSArray;
@protocol CKFetchWhitelistedBundleIDsOperationCallbacks;

@interface CKFetchWhitelistedBundleIDsOperation <CKFetchWhitelistedBundleIDsOperationCallbacks>
{
    CDUnknownBlockType _fetchWhitelistedBundleIDsCompletionBlock;	// 8 = 0x8
    NSArray *_bundleIDs;	// 16 = 0x10
}

+ (SEL)daemonCallbackCompletionSelector;	// IMP=0x000000000015b6f2
+ (void)applyDaemonCallbackInterfaceTweaks:(id)arg1;	// IMP=0x000000000015b660
- (void).cxx_destruct;	// IMP=0x000000000015b721
@property(copy, nonatomic) NSArray *bundleIDs; // @synthesize bundleIDs=_bundleIDs;
- (void)_finishOnCallbackQueueWithError:(id)arg1;	// IMP=0x000000000015b212
- (void)handleOperationDidCompleteWithBundleIDs:(id)arg1 metrics:(id)arg2 error:(id)arg3;	// IMP=0x000000000015b070
- (void)performCKOperation;	// IMP=0x000000000015aca1
- (_Bool)hasCKOperationCallbacksSet;	// IMP=0x000000000015ac3d
- (id)activityCreate;	// IMP=0x000000000015ac14
@property(copy, nonatomic) CDUnknownBlockType fetchWhitelistedBundleIDsCompletionBlock; // @synthesize fetchWhitelistedBundleIDsCompletionBlock=_fetchWhitelistedBundleIDsCompletionBlock;

// Remaining properties
@property(readonly, nonatomic) id <CKFetchWhitelistedBundleIDsOperationCallbacks> clientOperationCallbackProxy; // @dynamic clientOperationCallbackProxy;

@end
