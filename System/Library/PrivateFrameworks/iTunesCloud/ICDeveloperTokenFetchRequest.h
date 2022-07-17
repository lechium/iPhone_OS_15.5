//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <iTunesCloud/NSSecureCoding-Protocol.h>

@class AMSMediaTokenService, ICClientInfo;

@interface ICDeveloperTokenFetchRequest <NSSecureCoding>
{
    ICClientInfo *_clientInfo;	// 8 = 0x8
    unsigned long long _options;	// 16 = 0x10
    AMSMediaTokenService *_mediaTokenService;	// 24 = 0x18
    long long _clientType;	// 32 = 0x20
}

+ (void)_invalidateCachedDeveloperTokenForClientInfo:(id)arg1 requester:(id)arg2 usingMediaTokenService:(id)arg3;	// IMP=0x000000000016df7d
+ (id)_createMediaTokenServiceForClientInfo:(id)arg1 clientType:(long long)arg2 requester:(id)arg3;	// IMP=0x000000000016dbb3
+ (void)invalidateCachedDeveloperTokenForClientInfo:(id)arg1 clientType:(long long)arg2 requester:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x000000000016dafa
+ (_Bool)supportsSecureCoding;	// IMP=0x000000000016daf2
- (void).cxx_destruct;	// IMP=0x000000000016d7d3
@property(nonatomic) long long clientType; // @synthesize clientType=_clientType;
- (void)_didFetchMediaToken:(id)arg1 withError:(id)arg2;	// IMP=0x000000000016d1cf
- (void)execute;	// IMP=0x000000000016cf92
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000016ced4
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000016cdec
- (void)performRequestWithResponseHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000016cd5a
- (id)initWithClientInfo:(id)arg1 options:(unsigned long long)arg2;	// IMP=0x000000000016ccbf
- (id)initWithClientInfo:(id)arg1;	// IMP=0x000000000016ccab

@end
