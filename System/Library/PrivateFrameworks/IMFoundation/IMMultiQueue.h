//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface IMMultiQueue : NSObject
{
    NSMutableDictionary *_queueMap;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000004306b
- (id)loggableOverviewForKey:(id)arg1;	// IMP=0x0000000000042f79
- (id)loggableOverview;	// IMP=0x0000000000042d95
- (_Bool)_addBlock:(CDUnknownBlockType)arg1 withGUID:(id)arg2 forKey:(id)arg3 description:(id)arg4;	// IMP=0x0000000000042ba9
- (_Bool)addBlock:(CDUnknownBlockType)arg1 forKey:(id)arg2 description:(id)arg3;	// IMP=0x00000000000428e7
- (_Bool)addBlock:(CDUnknownBlockType)arg1 withTimeout:(double)arg2 forKey:(id)arg3 description:(id)arg4;	// IMP=0x00000000000424a5
- (void)_popEnqueuedBlockWithGUID:(id)arg1 key:(id)arg2;	// IMP=0x0000000000042319
- (id)initWithQueue:(id)arg1;	// IMP=0x00000000000422ae
- (id)init;	// IMP=0x000000000004227e

@end

