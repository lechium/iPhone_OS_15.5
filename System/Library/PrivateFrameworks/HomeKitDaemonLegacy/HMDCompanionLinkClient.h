//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HomeKitDaemonLegacy/HMDCompanionLinkClient-Protocol.h>

@class NSString, RPCompanionLinkClient;
@protocol OS_dispatch_queue;

@interface HMDCompanionLinkClient : NSObject <HMDCompanionLinkClient>
{
    RPCompanionLinkClient *_client;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000008d6c57
@property(retain, nonatomic) RPCompanionLinkClient *client; // @synthesize client=_client;
- (void)stop;	// IMP=0x00000000008d6bec
- (void)start;	// IMP=0x00000000008d6ba8
@property(copy, nonatomic) CDUnknownBlockType deviceLostHandler;
@property(copy, nonatomic) CDUnknownBlockType deviceChangedHandler;
@property(copy, nonatomic) CDUnknownBlockType deviceFoundHandler;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
- (void)dealloc;	// IMP=0x00000000008d6827

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
