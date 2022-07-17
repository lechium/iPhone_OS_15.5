//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AuthenticationServices/ASAuthorizationPublicKeyCredentialDescriptor-Protocol.h>

@class ASCPublicKeyCredentialDescriptor, NSArray, NSData, NSString;

@interface ASAuthorizationSecurityKeyPublicKeyCredentialDescriptor : NSObject <ASAuthorizationPublicKeyCredentialDescriptor>
{
    NSData *_credentialID;	// 8 = 0x8
    NSArray *_transports;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000234ee
- (void).cxx_destruct;	// IMP=0x000000000002376c
@property(retain, nonatomic) NSArray *transports; // @synthesize transports=_transports;
@property(copy, nonatomic) NSData *credentialID; // @synthesize credentialID=_credentialID;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000002368a
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000023580
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000234f6
@property(readonly, nonatomic) ASCPublicKeyCredentialDescriptor *coreDescriptor;
- (id)initWithCredentialID:(id)arg1 transports:(id)arg2;	// IMP=0x00000000000233eb

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
