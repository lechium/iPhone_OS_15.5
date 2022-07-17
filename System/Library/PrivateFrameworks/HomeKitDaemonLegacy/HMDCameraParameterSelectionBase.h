//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemonLegacy/HMFLogging-Protocol.h>

@class HMDCameraStreamSessionID, NSString;

@interface HMDCameraParameterSelectionBase : HMFObject <HMFLogging>
{
    HMDCameraStreamSessionID *_sessionID;	// 8 = 0x8
}

+ (id)logCategory;	// IMP=0x00000000007c626d
- (void).cxx_destruct;	// IMP=0x00000000007c625a
@property(readonly, nonatomic) HMDCameraStreamSessionID *sessionID; // @synthesize sessionID=_sessionID;
- (id)_selectSRTPParameters:(id)arg1;	// IMP=0x00000000007c5f67
- (id)_selectCryptoSuite:(id)arg1;	// IMP=0x00000000007c5ce4
- (id)_filterFor:(id)arg1 preferenceList:(id)arg2 deviceSupportedTypes:(id)arg3 cameraSupportedTypes:(id)arg4 localPreferences:(id)arg5;	// IMP=0x00000000007c580c
- (id)initWithSessionID:(id)arg1;	// IMP=0x00000000007c579e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
