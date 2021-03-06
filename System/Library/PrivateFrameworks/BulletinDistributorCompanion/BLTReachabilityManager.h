//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <BulletinDistributorCompanion/PCInterfaceMonitorDelegate-Protocol.h>

@class NSString;
@protocol OS_dispatch_queue;

@interface BLTReachabilityManager : NSObject <PCInterfaceMonitorDelegate>
{
    NSObject<OS_dispatch_queue> *_updateQueue;	// 8 = 0x8
    _Bool _internetReachable;	// 16 = 0x10
}

+ (id)sharedInstance;	// IMP=0x0000000000043c67
- (void).cxx_destruct;	// IMP=0x00000000000443c2
@property(getter=isInternetReachable) _Bool internetReachable; // @synthesize internetReachable=_internetReachable;
- (void)interfaceRadioHotnessChanged:(id)arg1;	// IMP=0x00000000000442b3
- (void)interfaceLinkQualityChanged:(id)arg1 previousLinkQuality:(int)arg2;	// IMP=0x0000000000044180
- (void)interfaceReachabilityChanged:(id)arg1;	// IMP=0x0000000000043f83
- (id)init;	// IMP=0x0000000000043cec

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

