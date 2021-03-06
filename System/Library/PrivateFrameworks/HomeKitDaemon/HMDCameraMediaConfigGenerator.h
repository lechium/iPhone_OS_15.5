//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/HMFLogging-Protocol.h>

@class NSString;

@interface HMDCameraMediaConfigGenerator : HMFObject <HMFLogging>
{
}

+ (id)logCategory;	// IMP=0x00000000003b830b
- (void)_loadMiscConfig:(id)arg1;	// IMP=0x00000000003ba746
- (_Bool)_loadConfig:(id)arg1 cipherCuite:(id)arg2;	// IMP=0x00000000003ba6b6
- (void)_loadConfig:(id)arg1 sendSrtpParameters:(id)arg2 receiveSrtpParameters:(id)arg3;	// IMP=0x00000000003ba546
- (_Bool)extractReselectedConfigFromVideoTier:(id)arg1 videoStreamConfig:(id *)arg2;	// IMP=0x00000000003ba26f
- (_Bool)_loadAVCVideoStreamConfig:(id)arg1 protocolParameters:(id)arg2;	// IMP=0x00000000003b93a0
- (_Bool)_loadAVCAudioStreamConfig:(id)arg1 protocolParameters:(id)arg2;	// IMP=0x00000000003b856a
- (_Bool)extractSelectedConfigFromProtocolParameters:(id)arg1 videoStreamConfig:(id *)arg2 audioStreamConfig:(id *)arg3;	// IMP=0x00000000003b8372

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

