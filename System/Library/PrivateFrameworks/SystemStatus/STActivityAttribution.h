//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SystemStatus/BSDescriptionProviding-Protocol.h>
#import <SystemStatus/NSSecureCoding-Protocol.h>

@class BSAuditToken, NSString;

@interface STActivityAttribution : NSObject <NSSecureCoding, BSDescriptionProviding>
{
    int _clientProvidedPID;	// 8 = 0x8
    BSAuditToken *_bsAuditToken;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000010bfb
+ (id)attributionWithPID:(int)arg1;	// IMP=0x0000000000010582
+ (id)attributionWithAuditToken:(CDStruct_4c969caf)arg1;	// IMP=0x0000000000010547
- (void).cxx_destruct;	// IMP=0x0000000000010d5c
@property(readonly, copy, nonatomic) BSAuditToken *bsAuditToken; // @synthesize bsAuditToken=_bsAuditToken;
@property(readonly, nonatomic) int clientProvidedPID; // @synthesize clientProvidedPID=_clientProvidedPID;
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000010ca0
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000010c03
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;	// IMP=0x0000000000010b4a
- (id)descriptionWithMultilinePrefix:(id)arg1;	// IMP=0x0000000000010afa
- (id)succinctDescriptionBuilder;	// IMP=0x0000000000010ade
- (id)succinctDescription;	// IMP=0x0000000000010a8e
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000001080a
@property(readonly, nonatomic) int pid;
@property(readonly, nonatomic) CDStruct_4c969caf auditToken;
- (id)initWithBSAuditToken:(id)arg1 clientProvidedPID:(int)arg2;	// IMP=0x00000000000106d2
- (id)initWithPID:(int)arg1;	// IMP=0x0000000000010654
- (id)initWithAuditToken:(CDStruct_4c969caf)arg1;	// IMP=0x00000000000105e1
- (id)init;	// IMP=0x00000000000105af

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
