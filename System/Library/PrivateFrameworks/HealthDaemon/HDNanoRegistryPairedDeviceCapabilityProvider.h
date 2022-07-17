//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HealthDaemon/HDPairedDeviceCapabilityProviding-Protocol.h>

@protocol HDPairedDeviceCapabilityProvidingDelegate;

@interface HDNanoRegistryPairedDeviceCapabilityProvider : NSObject <HDPairedDeviceCapabilityProviding>
{
    int _pairedDeviceDidChangeCapabilitiesNotificationToken;	// 8 = 0x8
    id <HDPairedDeviceCapabilityProvidingDelegate> _delegate;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000098ca5
@property(nonatomic) __weak id <HDPairedDeviceCapabilityProvidingDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)isCapabilitySupported:(id)arg1 onDevice:(id)arg2;	// IMP=0x0000000000098c69
- (id)activePairedDevice;	// IMP=0x0000000000098bba
- (id)isCapabilitySupportedOnActivePairedDevice:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000098b17
- (void)_pairedOrActiveDevicesDidChange:(id)arg1;	// IMP=0x0000000000098a33
- (void)dealloc;	// IMP=0x00000000000989f5
- (void)startListeningForUpdates;	// IMP=0x00000000000985ae
- (id)init;	// IMP=0x0000000000098573

@end
