//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <EmailCore/ECSASLAuthenticator.h>

@interface _MFLoginAuthenticator : ECSASLAuthenticator
{
    _Bool _justSentPassword;	// 8 = 0x8
}

- (_Bool)justSentPlainTextPassword;	// IMP=0x000000000015e5cc
- (id)responseForServerData:(id)arg1;	// IMP=0x000000000015e41b
- (id)saslName;	// IMP=0x000000000015e40e

@end

