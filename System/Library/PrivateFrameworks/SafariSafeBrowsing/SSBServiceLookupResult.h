//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SafariSafeBrowsing/NSCopying-Protocol.h>
#import <SafariSafeBrowsing/NSSecureCoding-Protocol.h>

@class NSString, NSURL;

@interface SSBServiceLookupResult : NSObject <NSCopying, NSSecureCoding>
{
    struct LookupResult _lookupResult;	// 8 = 0x8
    NSString *_malwareDetailsBaseURLString;	// 16 = 0x10
    NSString *_reportAnErrorBaseURLString;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000039d85
- (id).cxx_construct;	// IMP=0x000000000003a0e2
- (void).cxx_destruct;	// IMP=0x000000000003a0ba
@property(readonly, nonatomic, getter=reportAnErrorBase) NSString *reportAnErrorBaseURLString; // @synthesize reportAnErrorBaseURLString=_reportAnErrorBaseURLString;
@property(readonly, nonatomic, getter=malwareDetailsBase) NSString *malwareDetailsBaseURLString; // @synthesize malwareDetailsBaseURLString=_malwareDetailsBaseURLString;
@property(readonly, nonatomic, getter=localizedProviderDisplayName) NSString *localizedProviderDisplayName;
- (id)reportAnErrorBaseURLString;	// IMP=0x0000000000039ef3
@property(readonly, nonatomic, getter=learnMoreURL) NSURL *learnMoreURL;
- (id)malwareDetailsBaseURLString;	// IMP=0x0000000000039e91
@property(readonly, nonatomic) NSString *provider;
@property(readonly, nonatomic, getter=isKnownToBeUnsafe) _Bool knownToBeUnsafe;
@property(readonly, nonatomic, getter=isUnwantedSoftware) _Bool unwantedSoftware;
@property(readonly, nonatomic, getter=isPhishing) _Bool phishing;
@property(readonly, nonatomic, getter=isMalware) _Bool malware;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000039d8d
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000039d7a
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000039ca8
- (id)_initWithLookupResult:(struct LookupResult)arg1;	// IMP=0x0000000000039c4f

@end

