//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class BCCloudDataSyncManager;

@interface BCCloudKitSyncToCKTransaction
{
    BCCloudDataSyncManager *_syncManager;	// 8 = 0x8
}

+ (id)transactionNameForEntityName:(id)arg1;	// IMP=0x0000000000051b35
- (void).cxx_destruct;	// IMP=0x0000000000051c01
@property(retain, nonatomic) BCCloudDataSyncManager *syncManager; // @synthesize syncManager=_syncManager;
- (double)transactionLifetimeTimout;	// IMP=0x0000000000051bce
- (double)coalescingDelay;	// IMP=0x0000000000051bc0
- (void)performWorkWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000051b4e
- (id)initWithEntityName:(id)arg1 syncManager:(id)arg2 delegate:(id)arg3;	// IMP=0x0000000000051ab3

@end

