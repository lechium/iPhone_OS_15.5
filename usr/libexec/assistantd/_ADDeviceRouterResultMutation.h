//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ADDeviceRouterResult, ADPeerInfo, NSError, NSString, NSUUID;

@interface _ADDeviceRouterResultMutation : NSObject
{
    ADDeviceRouterResult *_baseModel;	// 8 = 0x8
    ADPeerInfo *_peerInfo;	// 16 = 0x10
    NSUUID *_contextIdentifier;	// 24 = 0x18
    long long _proximity;	// 32 = 0x20
    NSString *_commandRelayProxyIdentifier;	// 40 = 0x28
    NSError *_error;	// 48 = 0x30
    struct _mutationFlags {
        unsigned int isDirty:1;
        unsigned int hasPeerInfo:1;
        unsigned int hasContextIdentifier:1;
        unsigned int hasProximity:1;
        unsigned int hasCommandRelayProxyIdentifier:1;
        unsigned int hasError:1;
    } _mutationFlags;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00200000001a599e
- (id)generate;	// IMP=0x00100000001a57c9
- (void)setError:(id)arg1;	// IMP=0x00100000001a57a9
- (void)setCommandRelayProxyIdentifier:(id)arg1;	// IMP=0x00100000001a5789
- (void)setProximity:(long long)arg1;	// IMP=0x00100000001a577b
- (void)setContextIdentifier:(id)arg1;	// IMP=0x00100000001a575b
- (void)setPeerInfo:(id)arg1;	// IMP=0x00100000001a573b
- (id)initWithBaseModel:(id)arg1;	// IMP=0x00100000001a56d0
- (id)init;	// IMP=0x00100000001a56bc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
