//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <iTunesCloud/NSCopying-Protocol.h>
#import <iTunesCloud/NSSecureCoding-Protocol.h>

@class ICClientInfo, ICDeviceInfo, ICNetworkConstraints, ICURLResponseAuthenticationProvider, NSString;

@interface ICRequestContext : NSObject <NSCopying, NSSecureCoding>
{
    unsigned int _allowsMutation:1;	// 8 = 0x8
    ICNetworkConstraints *_networkConstraints;	// 16 = 0x10
    ICClientInfo *_clientInfo;	// 24 = 0x18
    ICDeviceInfo *_deviceInfo;	// 32 = 0x20
    ICURLResponseAuthenticationProvider *_authenticationProvider;	// 40 = 0x28
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000f5c6b
- (void).cxx_destruct;	// IMP=0x00000000000f5a1c
@property(readonly, nonatomic) ICURLResponseAuthenticationProvider *authenticationProvider; // @synthesize authenticationProvider=_authenticationProvider;
@property(readonly, nonatomic) ICDeviceInfo *deviceInfo; // @synthesize deviceInfo=_deviceInfo;
@property(readonly, copy, nonatomic) ICClientInfo *clientInfo; // @synthesize clientInfo=_clientInfo;
@property(readonly, copy, nonatomic) ICNetworkConstraints *networkConstraints; // @synthesize networkConstraints=_networkConstraints;
- (_Bool)_allowsMutation;	// IMP=0x00000000000f59e9
@property(readonly, copy, nonatomic) NSString *userAgent;
- (void)setNetworkConstraints:(id)arg1;	// IMP=0x00000000000f5888
- (void)setDeviceInfo:(id)arg1;	// IMP=0x00000000000f57dd
- (void)setClientInfo:(id)arg1;	// IMP=0x00000000000f5714
- (void)setAuthenticationProvider:(id)arg1;	// IMP=0x00000000000f5669
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000f549e
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000f51a1
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000f5196
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000f50a0
- (unsigned long long)hash;	// IMP=0x00000000000f2dd5
- (id)description;	// IMP=0x00000000000f2d1d
- (id)copyWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000000f2c6b
- (id)initWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000000f2b7e
- (id)initWithClientInfo:(id)arg1 authenticationProvider:(id)arg2;	// IMP=0x00000000000f2abc
- (id)initWithClientInfo:(id)arg1;	// IMP=0x00000000000f2a3b

@end
