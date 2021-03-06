//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Sharing/SFContinuityScanManagerObserver-Protocol.h>

@class NSString, NSUUID;
@protocol SFActivityScannerDelegate;

@interface SFActivityScanner : NSObject <SFContinuityScanManagerObserver>
{
    id <SFActivityScannerDelegate> _delegate;	// 8 = 0x8
    NSUUID *_identifier;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000046653
@property(retain) NSUUID *identifier; // @synthesize identifier=_identifier;
- (void)scanManager:(id)arg1 pairedDevicesChanged:(id)arg2;	// IMP=0x0000000000046550
- (void)scanManager:(id)arg1 lostDeviceWithDevice:(id)arg2;	// IMP=0x0000000000046470
- (void)scanManager:(id)arg1 foundDeviceWithDevice:(id)arg2;	// IMP=0x0000000000046390
- (void)scanManager:(id)arg1 receivedAdvertisement:(id)arg2;	// IMP=0x00000000000462b0
- (void)activityPayloadFromDevice:(id)arg1 forAdvertisementPayload:(id)arg2 command:(id)arg3 timeout:(long long)arg4 withCompletionHandler:(CDUnknownBlockType)arg5;	// IMP=0x000000000004608c
- (void)scanForTypes:(unsigned long long)arg1;	// IMP=0x0000000000046039
@property(readonly) id <SFActivityScannerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)dealloc;	// IMP=0x0000000000045f81
- (id)initWithDelegate:(id)arg1;	// IMP=0x0000000000045e9c
- (id)init;	// IMP=0x0000000000045e4b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

