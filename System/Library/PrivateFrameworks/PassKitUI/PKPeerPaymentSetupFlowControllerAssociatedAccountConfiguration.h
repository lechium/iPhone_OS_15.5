//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PassKitUI/PKPeerPaymentSetupFlowControllerConfiguration-Protocol.h>

@class NSString, PKFamilyMember, PKPeerPaymentPreferences;
@protocol PKPeerPaymentAssociatedAccountSetupDelegate;

@interface PKPeerPaymentSetupFlowControllerAssociatedAccountConfiguration : NSObject <PKPeerPaymentSetupFlowControllerConfiguration>
{
    NSString *_firstName;	// 8 = 0x8
    NSString *_lastName;	// 16 = 0x10
    PKFamilyMember *_familyMember;	// 24 = 0x18
    PKPeerPaymentPreferences *_updatedPreferences;	// 32 = 0x20
    long long _setupType;	// 40 = 0x28
    id <PKPeerPaymentAssociatedAccountSetupDelegate> _associatedAccountSetupDelegate;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00000000000e5861
@property(readonly, nonatomic) id <PKPeerPaymentAssociatedAccountSetupDelegate> associatedAccountSetupDelegate; // @synthesize associatedAccountSetupDelegate=_associatedAccountSetupDelegate;
@property(readonly, nonatomic) long long setupType; // @synthesize setupType=_setupType;
@property(retain, nonatomic) PKPeerPaymentPreferences *updatedPreferences; // @synthesize updatedPreferences=_updatedPreferences;
@property(readonly, nonatomic) PKFamilyMember *familyMember; // @synthesize familyMember=_familyMember;
@property(copy, nonatomic) NSString *lastName; // @synthesize lastName=_lastName;
@property(copy, nonatomic) NSString *firstName; // @synthesize firstName=_firstName;
- (unsigned long long)peerPaymentSetupConfigurationType;	// IMP=0x00000000000e57eb
- (id)initWithFamilyMember:(id)arg1 associatedAccountSetupDelegate:(id)arg2 setupType:(long long)arg3;	// IMP=0x00000000000e56f9

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

