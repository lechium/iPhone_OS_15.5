//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;
@protocol CSDPinExchangeDelegate;

@interface CSDPinExchangeController : NSObject
{
    NSMutableDictionary *_pendingCodesToDevicesForApproval;	// 8 = 0x8
    id <CSDPinExchangeDelegate> _pinExchangeDelegate;	// 16 = 0x10
    NSString *_outgoingPinRequestIdentifier;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00200000000c1db3
@property(copy) NSString *outgoingPinRequestIdentifier; // @synthesize outgoingPinRequestIdentifier=_outgoingPinRequestIdentifier;
@property(retain) id <CSDPinExchangeDelegate> pinExchangeDelegate; // @synthesize pinExchangeDelegate=_pinExchangeDelegate;
// Error: Property attributes should begin with the type ('T') attribute, property name: pendingCodesToDevicesForApproval
// Property attributes: (null)

- (void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 didSendWithSuccess:(_Bool)arg4 error:(id)arg5;	// IMP=0x00100000000c1b59
- (void)service:(id)arg1 account:(id)arg2 incomingMessage:(id)arg3 fromID:(id)arg4 context:(id)arg5;	// IMP=0x00100000000c0f12
- (void)handlePINCodeEnteredSuccessfully:(_Bool)arg1 canceled:(_Bool)arg2 fromDevice:(id)arg3 isPrimaryDevice:(_Bool)arg4;	// IMP=0x00100000000c0e25
- (void)displaySlotsFullNotification;	// IMP=0x00100000000c0d52
- (void)displayMismatchedAccountsNotification;	// IMP=0x00100000000c0c61
- (void)displayPinErrorNotification;	// IMP=0x00100000000c0b8e
- (void)removeErrorNotifications;	// IMP=0x00100000000c0b43
- (void)displayErrorNotificationWithMessage:(id)arg1;	// IMP=0x00100000000c0975
- (unsigned long long)randomSixDigitCode;	// IMP=0x00100000000c095e
- (_Bool)sendIDSAction:(id)arg1 toDevices:(id)arg2;	// IMP=0x00100000000c0155
- (_Bool)sendIDSAction:(id)arg1 toDevice:(id)arg2;	// IMP=0x00100000000c0089
- (void)sendApprovalResponseToDevice:(id)arg1 enteredCorrectly:(_Bool)arg2 wasCancelled:(_Bool)arg3;	// IMP=0x00100000000c004f
- (_Bool)sendApprovalDisplayPinToDevice:(id)arg1;	// IMP=0x00100000000bfdcd
- (void)sendPinCodeAndPromptForResponseToDevice:(id)arg1 forSenderIdentityUUID:(id)arg2;	// IMP=0x00100000000bf7b5
- (id)allIDSTelephonyDevices;	// IMP=0x00100000000bf604
- (id)idsDeviceFromUniqueID:(id)arg1;	// IMP=0x00100000000bf40a
- (void)cancelPinRequests;	// IMP=0x00100000000bf279
- (void)requestPinFromDevice:(id)arg1;	// IMP=0x00100000000bf0a2
- (id)initWithDelegate:(id)arg1;	// IMP=0x00100000000bef8e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
