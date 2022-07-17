//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class FPDServer, NSOperationQueue;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface FPDActionOperationEngine : NSObject
{
    FPDServer *_server;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
    NSOperationQueue *_operationQueue;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000008504d
- (void)dumpStateTo:(id)arg1;	// IMP=0x0000000000084e12
- (id)inFlightOperations;	// IMP=0x0000000000084dfc
- (void)scheduleActionOperationWithInfo:(id)arg1 request:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000084b45
- (id)initWithServer:(id)arg1;	// IMP=0x0000000000084a6e
- (id)init;	// IMP=0x00000000000849ae

@end
