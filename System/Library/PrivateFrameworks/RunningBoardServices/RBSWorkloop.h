//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_workloop;

@interface RBSWorkloop : NSObject
{
    NSObject<OS_dispatch_workloop> *_calloutWorkloop;	// 8 = 0x8
    NSObject<OS_dispatch_workloop> *_backgroundWorkloop;	// 16 = 0x10
    NSObject<OS_dispatch_workloop> *_syncingWorkloop;	// 24 = 0x18
}

+ (id)createSyncingQueue:(id)arg1;	// IMP=0x0000000000004f25
+ (void)performBackgroundWorkWithServiceClass:(unsigned int)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x0000000000004eea
+ (void)performBackgroundWork:(CDUnknownBlockType)arg1;	// IMP=0x0000000000004e92
+ (id)createBackgroundQueue:(id)arg1;	// IMP=0x0000000000004e10
+ (id)sharedBackgroundWorkloop;	// IMP=0x0000000000004ddc
- (void).cxx_destruct;	// IMP=0x0000000000004fcd

@end
