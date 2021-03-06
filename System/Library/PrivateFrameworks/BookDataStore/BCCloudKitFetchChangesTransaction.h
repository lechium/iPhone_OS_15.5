//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class BCCloudKitController;

@interface BCCloudKitFetchChangesTransaction
{
    BCCloudKitController *_cloudKitController;	// 8 = 0x8
}

+ (id)transactionNameForEntityName:(id)arg1;	// IMP=0x00000000000106eb
- (void).cxx_destruct;	// IMP=0x000000000001089a
@property(nonatomic) __weak BCCloudKitController *cloudKitController; // @synthesize cloudKitController=_cloudKitController;
- (double)transactionLifetimeTimout;	// IMP=0x000000000001085f
- (double)coalescingDelay;	// IMP=0x0000000000010851
- (void)performWorkWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000010704
- (id)initWithCloudKitController:(id)arg1 delegate:(id)arg2;	// IMP=0x0000000000010673

@end

