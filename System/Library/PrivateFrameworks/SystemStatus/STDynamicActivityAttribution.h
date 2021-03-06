//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SystemStatus/NSSecureCoding-Protocol.h>

@class NSString;

@interface STDynamicActivityAttribution : NSObject <NSSecureCoding>
{
    NSString *_bundleIdentifier;	// 8 = 0x8
    NSString *_localizationKey;	// 16 = 0x10
    NSString *_formattedString;	// 24 = 0x18
    NSString *_clientExecutablePath;	// 32 = 0x20
    NSString *_maskingClientExecutablePath;	// 40 = 0x28
    CDStruct_4c969caf _clientAuditToken;	// 48 = 0x30
    CDStruct_4c969caf _maskingClientAuditToken;	// 80 = 0x50
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000015db4
+ (id)attributionForClientAuditToken:(CDStruct_4c969caf)arg1 clientExecutablePath:(id)arg2 stringWithFormat:(id)arg3 maskingClientAuditToken:(CDStruct_4c969caf)arg4 maskingClientExecutablePath:(id)arg5;	// IMP=0x00000000000156f9
+ (id)attributionForClientAuditToken:(CDStruct_4c969caf)arg1 clientExecutablePath:(id)arg2 bundleID:(id)arg3 localizationKey:(id)arg4;	// IMP=0x00000000000154a3
- (void).cxx_destruct;	// IMP=0x0000000000016244
@property(readonly, copy, nonatomic) NSString *maskingClientExecutablePath; // @synthesize maskingClientExecutablePath=_maskingClientExecutablePath;
@property(readonly, nonatomic) CDStruct_4c969caf maskingClientAuditToken; // @synthesize maskingClientAuditToken=_maskingClientAuditToken;
@property(readonly, copy, nonatomic) NSString *clientExecutablePath; // @synthesize clientExecutablePath=_clientExecutablePath;
@property(readonly, nonatomic) CDStruct_4c969caf clientAuditToken; // @synthesize clientAuditToken=_clientAuditToken;
@property(readonly, copy, nonatomic) NSString *formattedString; // @synthesize formattedString=_formattedString;
@property(readonly, copy, nonatomic) NSString *localizationKey; // @synthesize localizationKey=_localizationKey;
@property(readonly, copy, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000015f22
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000015dbc
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;	// IMP=0x0000000000015da2
- (id)descriptionWithMultilinePrefix:(id)arg1;	// IMP=0x0000000000015d52
- (id)succinctDescriptionBuilder;	// IMP=0x0000000000015b83
- (id)succinctDescription;	// IMP=0x0000000000015b33
- (id)description;	// IMP=0x0000000000015b1f
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000159c3
- (id)_initWithclientAuditToken:(CDStruct_4c969caf)arg1 clientExecutablePath:(id)arg2 maskingClientAuditToken:(CDStruct_4c969caf)arg3 maskingClientExecutablePath:(id)arg4;	// IMP=0x0000000000015915
- (id)_initWithClientAuditToken:(CDStruct_4c969caf)arg1 clientExecutablePath:(id)arg2;	// IMP=0x00000000000158a8

@end

