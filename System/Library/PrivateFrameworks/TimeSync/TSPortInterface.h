//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <TimeSync/TSgPTPNetworkPortClient-Protocol.h>

@class NSString, TSgPTPPort;
@protocol OS_dispatch_queue;

@interface TSPortInterface : NSObject <TSgPTPNetworkPortClient>
{
    NSObject<OS_dispatch_queue> *_notificationsQueue;	// 8 = 0x8
    CDUnknownFunctionPointerType _macLookupTimeoutCallback;	// 16 = 0x10
    void *_macLookupTimeoutRefcon;	// 24 = 0x18
    TSgPTPPort *_port;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000002cc89
@property(retain, nonatomic) TSgPTPPort *port; // @synthesize port=_port;
- (void)didTimeoutOnMACLookupForPort:(id)arg1;	// IMP=0x000000000002cbdd
- (void)setMACLookupTimeoutCallback:(CDUnknownFunctionPointerType)arg1 refcon:(void *)arg2;	// IMP=0x000000000002ca8d
- (id)initWithgPTPPort:(id)arg1 onClockIdentifier:(unsigned long long)arg2;	// IMP=0x000000000002c98e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

