//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface ArcadeService : NSObject
{
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 8 = 0x8
}

+ (id)defaultService;	// IMP=0x00200000001f7d8a
- (void).cxx_destruct;	// IMP=0x00200000001f8db4
- (id);	// IMP=0x00100000001f8d33
- (void)removeHardwareOfferMetricsforOfferIDs:(id)arg1 replyHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000001f8ad7
- (void)removeHardwareOfferIDs:(id)arg1 replyHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000001f887b
- (void)removeAllHardwareOfferIDsWithReplyHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000001f868f
- (void)hardwareOfferCountWithReplyHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000001f84a7
- (void)allHardwareOfferMetricsWithReplyHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000001f8233
- (void)allHardwareOffersIDsWithReplyHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000001f7ffc
- (void)addHardwareOfferIDs:(id)arg1 replyHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000001f7ddf
- (id)init;	// IMP=0x00100000001f7d08

@end

