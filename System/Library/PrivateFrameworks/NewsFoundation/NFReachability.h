//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue, OS_nw_path, OS_nw_path_monitor;

@interface NFReachability : NSObject
{
    long long _currentReachabilityStatus;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_observationQueue;	// 16 = 0x10
    NSObject<OS_nw_path_monitor> *_networkPathMonitor;	// 24 = 0x18
    NSObject<OS_nw_path> *_currentNetworkPath;	// 32 = 0x20
}

+ (id)sharedInstance;	// IMP=0x0000000000007cf5
- (void).cxx_destruct;	// IMP=0x0000000000008143
@property(retain, nonatomic) NSObject<OS_nw_path> *currentNetworkPath; // @synthesize currentNetworkPath=_currentNetworkPath;
@property(retain, nonatomic) NSObject<OS_nw_path_monitor> *networkPathMonitor; // @synthesize networkPathMonitor=_networkPathMonitor;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *observationQueue; // @synthesize observationQueue=_observationQueue;
@property long long currentReachabilityStatus; // @synthesize currentReachabilityStatus=_currentReachabilityStatus;
- (long long)_statusFromNetworkPath:(id)arg1;	// IMP=0x0000000000008028
- (void)_updateCurrentNetworkPath:(id)arg1;	// IMP=0x0000000000007f27
- (void)dealloc;	// IMP=0x0000000000007eed
- (id)init;	// IMP=0x0000000000007d52

@end

