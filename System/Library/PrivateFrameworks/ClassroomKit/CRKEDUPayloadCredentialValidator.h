//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CRKEDUPayload;

@interface CRKEDUPayloadCredentialValidator : NSObject
{
    _Bool _stub;	// 8 = 0x8
    _Bool _ephemeralMultiUserDevice;	// 9 = 0x9
    CRKEDUPayload *_payload;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000018043
@property(readonly, nonatomic, getter=isEphemeralMultiUserDevice) _Bool ephemeralMultiUserDevice; // @synthesize ephemeralMultiUserDevice=_ephemeralMultiUserDevice;
@property(readonly, nonatomic, getter=isStub) _Bool stub; // @synthesize stub=_stub;
@property(readonly, nonatomic) CRKEDUPayload *payload; // @synthesize payload=_payload;
- (_Bool)hasPayloadCertificate;	// IMP=0x0000000000017fc4
- (_Bool)isStudent;	// IMP=0x0000000000017d85
- (_Bool)isInstructor;	// IMP=0x0000000000017b46
- (_Bool)validateAnchorsWithKeyPath:(id)arg1 payloadKey:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000017a23
- (_Bool)validateLeaderAnchorsWithError:(id *)arg1;	// IMP=0x00000000000179fd
- (_Bool)validateMemberAnchorsWithError:(id *)arg1;	// IMP=0x00000000000179d7
- (_Bool)areCredentialsValidForOneToOneDeviceWithError:(id *)arg1;	// IMP=0x0000000000017830
- (_Bool)areCredentialsValidForSharediPadDeviceWithError:(id *)arg1;	// IMP=0x00000000000176e2
- (_Bool)areCredentialsValidWithError:(id *)arg1;	// IMP=0x0000000000017674
- (id)initWithPayload:(id)arg1 isStub:(_Bool)arg2 isEphemeralMultiUserDevice:(_Bool)arg3;	// IMP=0x00000000000175f3

@end
