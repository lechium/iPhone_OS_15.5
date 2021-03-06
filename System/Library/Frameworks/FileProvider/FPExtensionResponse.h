//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <FileProvider/NSSecureCoding-Protocol.h>

@class NSDictionary, NSFileProviderDomainVersion, NSString;

@interface FPExtensionResponse : NSObject <NSSecureCoding>
{
    int _extensionPid;	// 8 = 0x8
    NSFileProviderDomainVersion *_domainVersion;	// 16 = 0x10
    NSDictionary *_domainUserInfo;	// 24 = 0x18
    long long _sequenceNumber;	// 32 = 0x20
    NSString *_callDescription;	// 40 = 0x28
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000002d0f
- (void).cxx_destruct;	// IMP=0x0000000000002fb3
@property(copy, nonatomic) NSString *callDescription; // @synthesize callDescription=_callDescription;
@property(nonatomic) long long sequenceNumber; // @synthesize sequenceNumber=_sequenceNumber;
@property(nonatomic) int extensionPid; // @synthesize extensionPid=_extensionPid;
@property(retain, nonatomic) NSDictionary *domainUserInfo; // @synthesize domainUserInfo=_domainUserInfo;
@property(retain, nonatomic) NSFileProviderDomainVersion *domainVersion; // @synthesize domainVersion=_domainVersion;
- (id)description;	// IMP=0x0000000000002efc
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000002e4b
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000002d17

@end

