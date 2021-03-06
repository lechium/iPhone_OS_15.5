//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData;

@interface _MFDigestMD5Authenticator
{
    unsigned int _maxbuf:16;	// 36 = 0x24
    unsigned int _securityLevel:2;	// 38 = 0x26
    NSData *_expectedResponse;	// 40 = 0x28
    void *_cryptInfo;	// 48 = 0x30
}

- (void)setExpectedResponse:(id)arg1;	// IMP=0x00000000000157c9
- (void)setCryptInfo:(void *)arg1;	// IMP=0x0000000000015780
- (void)setMaxBuffer:(unsigned int)arg1;	// IMP=0x000000000001576f
- (int)securityLevel;	// IMP=0x000000000001575b
- (void)setSecurityLevel:(int)arg1;	// IMP=0x0000000000015740
- (id)responseForServerData:(id)arg1;	// IMP=0x00000000000140b1
- (void)setAuthenticationState:(int)arg1;	// IMP=0x0000000000014034
- (void)dealloc;	// IMP=0x0000000000013fc4

@end

