//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <GameController/GCDevice-Protocol.h>
#import <GameController/GCDeviceLegacy-Protocol.h>
#import <GameController/NSSecureCoding-Protocol.h>

@class GCController, GCKeyboardInput, GCPhysicalInputProfile, NSArray, NSString;
@protocol GCNamedProfile, OS_dispatch_queue;

@interface GCKeyboard : NSObject <NSSecureCoding, GCDeviceLegacy, GCDevice>
{
    GCController *_proxyController;	// 8 = 0x8
}

+ (id)coalescedKeyboard;	// IMP=0x00000000000826dd
+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000082b95
+ (id)keyboardWithKeyboardInput;	// IMP=0x0000000000082a55
+ (void)__setLogger__:(CDUnknownBlockType)arg1;	// IMP=0x000000000008298a
+ (void)__openXPC_and_CBApplicationDidBecomeActive__;	// IMP=0x0000000000082971
+ (void)__open__;	// IMP=0x0000000000082958
- (void).cxx_destruct;	// IMP=0x0000000000082948
@property(retain, nonatomic) GCController *proxyController; // @synthesize proxyController=_proxyController;
- (id)initWithProxyController:(id)arg1;	// IMP=0x00000000000828d2
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) GCPhysicalInputProfile *physicalInputProfile;
@property(readonly, copy, nonatomic) NSString *vendorName;
@property(readonly, nonatomic) NSString *productCategory;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *handlerQueue;
@property(readonly, nonatomic) GCKeyboardInput *keyboardInput;
- (id)_legacy_physicalInputProfile;	// IMP=0x0000000000082e91
- (id)_legacy_physicalInputProfileName;	// IMP=0x0000000000082e7b
- (void)_legacy_setPlayerIndex:(long long)arg1;	// IMP=0x0000000000082e65
- (long long)_legacy_playerIndex;	// IMP=0x0000000000082e4f
- (unsigned int)sampleRate;	// IMP=0x0000000000082e39
- (_Bool)isATVRemote;	// IMP=0x0000000000082e23
- (void)clearServiceRef;	// IMP=0x0000000000082e0d
- (void)removeServiceRef:(struct __IOHIDServiceClient *)arg1;	// IMP=0x0000000000082df7
- (_Bool)hasServiceRef:(struct __IOHIDServiceClient *)arg1;	// IMP=0x0000000000082de1
- (void)addServiceRef:(id)arg1;	// IMP=0x0000000000082dcb
- (void)addServiceRefsWithDevice:(id)arg1;	// IMP=0x0000000000082db5
- (void *)createInputBufferForDevice:(struct __IOHIDDevice *)arg1 withSize:(unsigned long long)arg2;	// IMP=0x0000000000082d9f
- (void)handleEvent:(struct __IOHIDEvent *)arg1;	// IMP=0x0000000000082d89
- (id)_legacy_description;	// IMP=0x0000000000082d73
- (_Bool)_legacy_isEqualToController:(id)arg1;	// IMP=0x0000000000082d5d
- (id)_legacy_productCategory;	// IMP=0x0000000000082d47
- (void)setVendorName:(id)arg1;	// IMP=0x0000000000082d31
- (id)_legacy_vendorName;	// IMP=0x0000000000082d1b
- (_Bool)_legacy_isAttachedToDevice;	// IMP=0x0000000000082d13
@property(nonatomic, getter=isPublished) _Bool published;
@property(nonatomic, getter=areAllHIDDevicesConnected) _Bool allHIDDevicesConnected;
@property(nonatomic, getter=isForwarded) _Bool forwarded;
@property(copy, nonatomic) NSString *debugName;
@property(readonly, nonatomic) unsigned long long deviceHash;
@property(retain, nonatomic) NSString *physicalDeviceUniqueID;
@property(readonly, nonatomic) unsigned int service;
@property(readonly, nonatomic) NSArray *hidServices;
@property(retain, nonatomic) NSString *uniqueIdentifier;
@property(retain, nonatomic) GCPhysicalInputProfile<GCNamedProfile> *profile;
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000082b1e
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000082afb
- (id)initWithServiceRef:(struct __IOHIDServiceClient *)arg1;	// IMP=0x00000000000829a3

// Remaining properties
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

