//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PrototypeTools/NSSecureCoding-Protocol.h>

@class NSString;

@interface PTDomainInfo : NSObject <NSSecureCoding>
{
    NSString *_uniqueIdentifier;	// 8 = 0x8
    NSString *_domainGroupName;	// 16 = 0x10
    NSString *_domainName;	// 24 = 0x18
    NSString *_settingsClassName;	// 32 = 0x20
    NSString *_settingsFrameworkBundlePath;	// 40 = 0x28
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000000a962
- (void).cxx_destruct;	// IMP=0x000000000000ab69
@property(readonly, nonatomic) NSString *settingsFrameworkBundlePath; // @synthesize settingsFrameworkBundlePath=_settingsFrameworkBundlePath;
@property(readonly, nonatomic) NSString *settingsClassName; // @synthesize settingsClassName=_settingsClassName;
@property(readonly, nonatomic) NSString *domainName; // @synthesize domainName=_domainName;
@property(readonly, nonatomic) NSString *domainGroupName; // @synthesize domainGroupName=_domainGroupName;
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000000a9ff
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000000a96a
- (unsigned long long)hash;	// IMP=0x000000000000a8b1
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000000a821
@property(readonly, nonatomic) NSString *uniqueIdentifier;
- (id)initWithDomain:(id)arg1;	// IMP=0x000000000000a5bb

@end

