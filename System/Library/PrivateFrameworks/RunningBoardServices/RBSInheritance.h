//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <RunningBoardServices/NSCopying-Protocol.h>
#import <RunningBoardServices/RBSXPCSecureCoding-Protocol.h>

@class NSString, RBSAssertionIdentifier;
@protocol OS_xpc_object;

@interface RBSInheritance : NSObject <RBSXPCSecureCoding, NSCopying>
{
    NSString *_endowmentNamespace;	// 8 = 0x8
    NSString *_environment;	// 16 = 0x10
    NSObject<OS_xpc_object> *_encodedEndowment;	// 24 = 0x18
    RBSAssertionIdentifier *_originatingIdentifier;	// 32 = 0x20
    unsigned long long _originatingAttributePath;	// 40 = 0x28
    unsigned long long _hash;	// 48 = 0x30
}

+ (_Bool)supportsRBSXPCSecureCoding;	// IMP=0x0000000000006cdc
- (void).cxx_destruct;	// IMP=0x0000000000007138
@property(readonly, nonatomic) NSObject<OS_xpc_object> *encodedEndowment; // @synthesize encodedEndowment=_encodedEndowment;
@property(readonly, copy, nonatomic) RBSAssertionIdentifier *originatingIdentifier; // @synthesize originatingIdentifier=_originatingIdentifier;
@property(readonly, nonatomic) NSString *environment; // @synthesize environment=_environment;
@property(readonly, copy, nonatomic) NSString *endowmentNamespace; // @synthesize endowmentNamespace=_endowmentNamespace;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000006f36
@property(readonly) unsigned long long hash;
- (id)initWithRBSXPCCoder:(id)arg1;	// IMP=0x0000000000006db8
- (void)encodeWithRBSXPCCoder:(id)arg1;	// IMP=0x0000000000006ce4
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000006cd1
- (id)endowment;	// IMP=0x0000000000006cc3
- (id)_initWithNamespace:(id)arg1 environment:(id)arg2 encodedEndowment:(id)arg3 originatingIdentifier:(id)arg4 attributePath:(unsigned long long)arg5;	// IMP=0x0000000000006a9f
- (id)init;	// IMP=0x0000000000006a18

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

