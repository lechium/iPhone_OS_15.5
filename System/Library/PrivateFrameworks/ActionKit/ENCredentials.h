//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ActionKit/NSCoding-Protocol.h>

@class NSDate, NSString;

@interface ENCredentials : NSObject <NSCoding>
{
    NSString *_host;	// 8 = 0x8
    NSString *_edamUserId;	// 16 = 0x10
    NSString *_noteStoreUrl;	// 24 = 0x18
    NSString *_webApiUrlPrefix;	// 32 = 0x20
    NSString *_authenticationToken;	// 40 = 0x28
    NSDate *_expirationDate;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000000019d149
@property(retain, nonatomic) NSDate *expirationDate; // @synthesize expirationDate=_expirationDate;
@property(copy, nonatomic) NSString *authenticationToken; // @synthesize authenticationToken=_authenticationToken;
@property(copy, nonatomic) NSString *webApiUrlPrefix; // @synthesize webApiUrlPrefix=_webApiUrlPrefix;
@property(copy, nonatomic) NSString *noteStoreUrl; // @synthesize noteStoreUrl=_noteStoreUrl;
@property(copy, nonatomic) NSString *edamUserId; // @synthesize edamUserId=_edamUserId;
@property(copy, nonatomic) NSString *host; // @synthesize host=_host;
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000019cf40
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000019cdf4
- (id)keychainQuery;	// IMP=0x000000000019ccde
- (_Bool)areValid;	// IMP=0x000000000019cc3a
- (void)deleteFromKeychain;	// IMP=0x000000000019cb54
- (_Bool)saveToKeychain;	// IMP=0x000000000019ca9f
- (id)initWithHost:(id)arg1 authenticationResult:(id)arg2;	// IMP=0x000000000019c8cd
- (id)initWithHost:(id)arg1 edamUserId:(id)arg2 noteStoreUrl:(id)arg3 webApiUrlPrefix:(id)arg4 authenticationToken:(id)arg5 expirationDate:(id)arg6;	// IMP=0x000000000019c7a1

@end
