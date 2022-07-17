//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NTKJetsamInfoFetcher;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface NTKJetsamMonitor : NSObject
{
    NSObject<OS_dispatch_queue> *_monitorQ;	// 8 = 0x8
    NSObject<OS_dispatch_source> *_monitorTimer;	// 16 = 0x10
    int _transactionCount;	// 24 = 0x18
    NTKJetsamInfoFetcher *_fetcher;	// 32 = 0x20
}

+ (id)sharedJetsamMonitor;	// IMP=0x000000000023bfec
- (void).cxx_destruct;	// IMP=0x000000000023c094
- (void)decrementTransactionCount;	// IMP=0x000000000023c08e
- (void)incrementTransactionCount;	// IMP=0x000000000023c088
- (id)init;	// IMP=0x000000000023c04d

@end
