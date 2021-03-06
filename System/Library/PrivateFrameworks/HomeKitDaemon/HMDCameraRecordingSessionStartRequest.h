//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class NSDictionary, NSNumber;

@interface HMDCameraRecordingSessionStartRequest : HMFObject
{
    NSDictionary *_homePresenceByPairingIdentity;	// 8 = 0x8
    NSNumber *_trigger;	// 16 = 0x10
    CDUnknownBlockType _responseHandler;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000006d5260
@property(readonly) CDUnknownBlockType responseHandler; // @synthesize responseHandler=_responseHandler;
@property(readonly, copy) NSNumber *trigger; // @synthesize trigger=_trigger;
@property(readonly, copy) NSDictionary *homePresenceByPairingIdentity; // @synthesize homePresenceByPairingIdentity=_homePresenceByPairingIdentity;
- (id)initWithHomePresenceByPairingIdentity:(id)arg1 trigger:(id)arg2 responseHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000006d514c

@end

