//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSHashTable, NSNumber;

@interface HMDModernTransportDeviceReachabilityObserverListenerContext : NSObject
{
    NSHashTable *_listeners;	// 8 = 0x8
    NSNumber *_reachability;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000082b44
@property(retain, nonatomic) NSNumber *reachability; // @synthesize reachability=_reachability;
@property(readonly, nonatomic) NSHashTable *listeners; // @synthesize listeners=_listeners;
- (id)init;	// IMP=0x0000000000082ab9

@end
