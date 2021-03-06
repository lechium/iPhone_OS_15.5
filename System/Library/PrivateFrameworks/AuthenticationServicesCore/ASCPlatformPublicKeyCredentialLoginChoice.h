//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AuthenticationServicesCore/ASCLoginChoiceProtocol-Protocol.h>

@class NSData, NSString;

@interface ASCPlatformPublicKeyCredentialLoginChoice : NSObject <ASCLoginChoiceProtocol>
{
    _Bool _isRegistrationRequest;	// 8 = 0x8
    NSString *_name;	// 16 = 0x10
    NSString *_displayName;	// 24 = 0x18
    NSData *_userHandle;	// 32 = 0x20
    NSString *_relyingPartyIdentifier;	// 40 = 0x28
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000005b8b
- (void).cxx_destruct;	// IMP=0x0000000000005e28
@property(readonly, nonatomic) _Bool isRegistrationRequest; // @synthesize isRegistrationRequest=_isRegistrationRequest;
@property(readonly, copy, nonatomic) NSString *relyingPartyIdentifier; // @synthesize relyingPartyIdentifier=_relyingPartyIdentifier;
@property(readonly, copy, nonatomic) NSData *userHandle; // @synthesize userHandle=_userHandle;
@property(readonly, copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000005c6f
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000005b93
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000005ab5
@property(readonly, nonatomic) unsigned long long loginChoiceKind;
- (id)initWithName:(id)arg1 displayName:(id)arg2 userHandle:(id)arg3 relyingPartyIdentifier:(id)arg4;	// IMP=0x0000000000005a7d
- (id)initWithName:(id)arg1 displayName:(id)arg2 userHandle:(id)arg3;	// IMP=0x0000000000005a4f
- (id)initRegistrationChoiceWithOptions:(id)arg1;	// IMP=0x0000000000005985
- (id)_initAsRegistrationChoice:(_Bool)arg1 withName:(id)arg2 displayName:(id)arg3 userHandle:(id)arg4 relyingPartyIdentifier:(id)arg5;	// IMP=0x0000000000005864

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

