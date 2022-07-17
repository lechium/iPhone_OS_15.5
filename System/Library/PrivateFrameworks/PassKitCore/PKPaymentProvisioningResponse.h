//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSString, NSURL, PKContactInformation;

@interface PKPaymentProvisioningResponse
{
    _Bool _willProvisionWithAuthenticationDisabled;	// 8 = 0x8
    NSURL *_passURL;	// 16 = 0x10
    NSArray *_moreInfoURLs;	// 24 = 0x18
    PKContactInformation *_idmsContactInformation;	// 32 = 0x20
    NSString *_ownershipToken;	// 40 = 0x28
    NSString *_ownershipTokenIdentifier;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0000000000437e00
@property(readonly, copy, nonatomic) NSString *ownershipTokenIdentifier; // @synthesize ownershipTokenIdentifier=_ownershipTokenIdentifier;
@property(readonly, copy, nonatomic) NSString *ownershipToken; // @synthesize ownershipToken=_ownershipToken;
@property(readonly, nonatomic) PKContactInformation *idmsContactInformation; // @synthesize idmsContactInformation=_idmsContactInformation;
@property(readonly, nonatomic) _Bool willProvisionWithAuthenticationDisabled; // @synthesize willProvisionWithAuthenticationDisabled=_willProvisionWithAuthenticationDisabled;
@property(readonly, copy, nonatomic) NSArray *moreInfoURLs; // @synthesize moreInfoURLs=_moreInfoURLs;
@property(copy, nonatomic) NSURL *passURL; // @synthesize passURL=_passURL;
- (id)initWithData:(id)arg1;	// IMP=0x0000000000437858

@end
