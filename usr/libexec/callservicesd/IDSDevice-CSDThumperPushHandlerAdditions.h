//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <IDS/IDSDevice.h>

@interface IDSDevice (CSDThumperPushHandlerAdditions)
+ (_Bool)isDeviceInAltMode;	// IMP=0x001000000019b665
+ (_Bool)pairedDeviceUniqueIDOverrideExists;	// IMP=0x001000000019b632
+ (id)pairedDeviceUniqueIDOverride;	// IMP=0x001000000019b5d3
- (id)normalizedDeviceType;	// IMP=0x001000000009661d
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000019b98b
- (_Bool)canReceiveMessagesForCallProvider:(id)arg1;	// IMP=0x001000000019b8d9
@property(readonly, nonatomic) _Bool canReceiveRelayedCalls;
@property(readonly, nonatomic) _Bool supportsRelayCallingWithoutLocalRelayCallingEnabled;
@property(readonly, nonatomic) _Bool supportsRestrictingSecondaryCalling;
@property(readonly, nonatomic, getter=isAudioAccessoryDevice) _Bool audioAccessoryDevice;
- (_Bool)isWatchDevice;	// IMP=0x001000000019b715
@property(readonly, nonatomic, getter=isPairedDevice) _Bool pairedDevice;
@end

