//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <NetworkServiceProxy/NSCopying-Protocol.h>
#import <NetworkServiceProxy/NSSecureCoding-Protocol.h>

@class NSData, NSPProxyTokenInfo, NSString;

@interface NSPCandidateProxyPath : NSObject <NSSecureCoding, NSCopying>
{
    NSPProxyTokenInfo *_ingressProxy;	// 8 = 0x8
    NSPProxyTokenInfo *_egressProxy;	// 16 = 0x10
    unsigned long long _proxyPathWeight;	// 24 = 0x18
    NSString *_preferredPathConfigURI;	// 32 = 0x20
    NSData *_domainFilter;	// 40 = 0x28
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000009c675
- (void).cxx_destruct;	// IMP=0x000000000009d8aa
@property(retain, nonatomic) NSData *domainFilter; // @synthesize domainFilter=_domainFilter;
@property(retain, nonatomic) NSString *preferredPathConfigURI; // @synthesize preferredPathConfigURI=_preferredPathConfigURI;
@property(nonatomic) unsigned long long proxyPathWeight; // @synthesize proxyPathWeight=_proxyPathWeight;
@property(retain, nonatomic) NSPProxyTokenInfo *egressProxy; // @synthesize egressProxy=_egressProxy;
@property(retain, nonatomic) NSPProxyTokenInfo *ingressProxy; // @synthesize ingressProxy=_ingressProxy;
- (void)fetchDomainFilter:(CDUnknownBlockType)arg1;	// IMP=0x000000000009ce48
- (_Bool)matchEgress:(id)arg1;	// IMP=0x000000000009ccbd
- (_Bool)matchIngress:(id)arg1;	// IMP=0x000000000009cb32
- (_Bool)proxyPathReady;	// IMP=0x000000000009c9d4
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000009c8ad
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000009c7a5
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000009c67d
- (id)initWithIngressProxy:(id)arg1 egressProxy:(id)arg2 proxyPathWeight:(unsigned long long)arg3 preferredPathConfigURI:(id)arg4;	// IMP=0x000000000009c4e3

@end
