//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface RMUserInteractionMonitor : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    CDUnknownBlockType _handler;	// 16 = 0x10
    double _lastUserInteractionUpdateTimestamp;	// 24 = 0x18
}

+ (id)userInteractionMonitor;	// IMP=0x0040000000005425
- (void).cxx_destruct;	// IMP=0x0020000000005774
@property(nonatomic) double lastUserInteractionUpdateTimestamp; // @synthesize lastUserInteractionUpdateTimestamp=_lastUserInteractionUpdateTimestamp;
@property(copy, nonatomic) CDUnknownBlockType handler; // @synthesize handler=_handler;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void)sendUserInteractionUpdate;	// IMP=0x001000000000556a
- (void)stopUserInteractionUpdates;	// IMP=0x0010000000005501
- (void)startUserInteractionUpdatesToQueue:(id)arg1 withHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000000542d

@end

