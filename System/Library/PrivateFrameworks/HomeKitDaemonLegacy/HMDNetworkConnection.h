//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HomeKitDaemonLegacy/HMDNetworkConnection-Protocol.h>

@class NSString;
@protocol OS_dispatch_queue, OS_nw_connection;

@interface HMDNetworkConnection : NSObject <HMDNetworkConnection>
{
    NSObject<OS_nw_connection> *_nwConnection;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000005a51df
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(readonly, nonatomic) NSObject<OS_nw_connection> *nwConnection; // @synthesize nwConnection=_nwConnection;
- (void)resetTrafficClass:(unsigned long long)arg1;	// IMP=0x00000000005a5124
- (void)setReadCloseHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000005a50c4
- (void)setStateChangedHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000005a5002
- (void)receiveMessageWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000005a4f59
- (void)receiveWithMinLength:(unsigned int)arg1 maxLength:(unsigned int)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000005a4ea1
- (void)sendData:(id)arg1 context:(id)arg2 isComplete:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00000000005a4dc1
- (void)cancel;	// IMP=0x00000000005a4d8c
- (void)start;	// IMP=0x00000000005a4d57
- (id)initWithEndpoint:(id)arg1 parameters:(id)arg2;	// IMP=0x00000000005a4cc7

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

