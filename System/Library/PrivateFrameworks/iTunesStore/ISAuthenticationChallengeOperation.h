//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class ISAuthenticationChallenge, NSURLCredential;

@interface ISAuthenticationChallengeOperation
{
    ISAuthenticationChallenge *_challenge;	// 136 = 0x88
    NSURLCredential *_credential;	// 144 = 0x90
}

+ (id)operationWithChallenge:(id)arg1;	// IMP=0x000000000003f9ff
@property(retain) NSURLCredential *credential; // @synthesize credential=_credential;
@property(retain) ISAuthenticationChallenge *challenge; // @synthesize challenge=_challenge;
- (id)_copyCredentialForSignInResponseDictionary:(id)arg1;	// IMP=0x000000000003fb5b
- (void)run;	// IMP=0x000000000003fabd
- (void)handleButtonSelected:(long long)arg1 withResponseDictionary:(id)arg2;	// IMP=0x000000000003fa38
- (void)dealloc;	// IMP=0x000000000003f9a8

@end

