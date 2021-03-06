//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SafariShared/NSSecureCoding-Protocol.h>

@class NSString, NSURL;

@interface WBSPasswordImportedCredential : NSObject <NSSecureCoding>
{
    NSString *_user;	// 8 = 0x8
    NSString *_password;	// 16 = 0x10
    NSURL *_url;	// 24 = 0x18
    NSURL *_otpAuthURL;	// 32 = 0x20
    NSString *_notesEntry;	// 40 = 0x28
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000072145
- (void).cxx_destruct;	// IMP=0x0000000000072208
@property(readonly, copy, nonatomic) NSString *notesEntry; // @synthesize notesEntry=_notesEntry;
@property(readonly, copy, nonatomic) NSURL *otpAuthURL; // @synthesize otpAuthURL=_otpAuthURL;
@property(readonly, nonatomic) NSURL *url; // @synthesize url=_url;
@property(readonly, copy, nonatomic) NSString *password; // @synthesize password=_password;
@property(readonly, copy, nonatomic) NSString *user; // @synthesize user=_user;
- (id)description;	// IMP=0x000000000007214d
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000007209c
- (id)init;	// IMP=0x0000000000072083
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000071ec5
- (id)encryptedURLCredentialWithPersistence:(unsigned long long)arg1;	// IMP=0x0000000000071ebd
- (id)urlCredentialWithPersistence:(unsigned long long)arg1;	// IMP=0x0000000000071e3e
- (unsigned long long)hash;	// IMP=0x0000000000071dc2
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000071c13
- (id)initWithUser:(id)arg1 password:(id)arg2 url:(id)arg3 sidecarData:(id)arg4;	// IMP=0x0000000000071ad4
- (id)initWithUser:(id)arg1 password:(id)arg2 url:(id)arg3;	// IMP=0x00000000000719e6

@end

