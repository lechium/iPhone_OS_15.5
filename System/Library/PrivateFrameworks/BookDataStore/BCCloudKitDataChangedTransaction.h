//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface BCCloudKitDataChangedTransaction
{
    NSString *_notificationName;	// 8 = 0x8
}

+ (id)transactionNameForEntityName:(id)arg1;	// IMP=0x0000000000014454
- (void).cxx_destruct;	// IMP=0x0000000000014553
@property(copy, nonatomic) NSString *notificationName; // @synthesize notificationName=_notificationName;
- (double)coalescingDelay;	// IMP=0x0000000000014523
- (void)performWorkWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000001446d
- (id)initWithEntityName:(id)arg1 notificationName:(id)arg2 delegate:(id)arg3;	// IMP=0x00000000000143c6

@end

