//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HLPReachability, NSString;
@protocol HLPReachabilityManagerDelegate;

@interface HLPReachabilityManager : NSObject
{
    _Bool _notifying;	// 8 = 0x8
    _Bool _hostActive;	// 9 = 0x9
    _Bool _reachabilityInitialized;	// 10 = 0xa
    _Bool _connected;	// 11 = 0xb
    _Bool _internetActive;	// 12 = 0xc
    id <HLPReachabilityManagerDelegate> _delegate;	// 16 = 0x10
    HLPReachability *_internetReachability;	// 24 = 0x18
    HLPReachability *_hostReachability;	// 32 = 0x20
    NSString *_hostName;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000001b1a6
@property(retain, nonatomic) NSString *hostName; // @synthesize hostName=_hostName;
@property(retain, nonatomic) HLPReachability *hostReachability; // @synthesize hostReachability=_hostReachability;
@property(retain, nonatomic) HLPReachability *internetReachability; // @synthesize internetReachability=_internetReachability;
@property(nonatomic) __weak id <HLPReachabilityManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool internetActive; // @synthesize internetActive=_internetActive;
@property(nonatomic) _Bool connected; // @synthesize connected=_connected;
@property(nonatomic) _Bool reachabilityInitialized; // @synthesize reachabilityInitialized=_reachabilityInitialized;
- (void)reachabilityChanged:(id)arg1;	// IMP=0x000000000001afeb
- (void)stopNotifier;	// IMP=0x000000000001af57
- (void)startNotifier;	// IMP=0x000000000001ae7b
- (_Bool)isNetworkError:(id)arg1;	// IMP=0x000000000001ae52
- (id)init;	// IMP=0x000000000001adcf
- (void)dealloc;	// IMP=0x000000000001ad91

@end

