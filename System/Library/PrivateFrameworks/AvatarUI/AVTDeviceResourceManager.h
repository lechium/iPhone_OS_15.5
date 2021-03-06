//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AvatarUI/AVTDeviceResourceConsumerDelegate-Protocol.h>

@class NSMutableArray, NSString;
@protocol AVTUILogger, OS_dispatch_queue;

@interface AVTDeviceResourceManager : NSObject <AVTDeviceResourceConsumerDelegate>
{
    NSMutableArray *_consumers;	// 8 = 0x8
    id <AVTUILogger> _logger;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_stateLock;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000b6eb6
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *stateLock; // @synthesize stateLock=_stateLock;
@property(readonly, nonatomic) id <AVTUILogger> logger; // @synthesize logger=_logger;
@property(readonly, nonatomic) NSMutableArray *consumers; // @synthesize consumers=_consumers;
- (void)consumer:(id)arg1 willConsumeRenderingResourceForEstimatedDuration:(double)arg2;	// IMP=0x00000000000b6bf7
- (void)unregisterConsumer:(id)arg1;	// IMP=0x00000000000b6b07
- (void)registerConsumer:(id)arg1;	// IMP=0x00000000000b6a11
- (void)performWorkWithConsumers:(CDUnknownBlockType)arg1;	// IMP=0x00000000000b6921
- (id)initWithLogger:(id)arg1 lockProvider:(CDUnknownBlockType)arg2;	// IMP=0x00000000000b6843

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

