//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <RunningBoardServices/NSSecureCoding-Protocol.h>
#import <RunningBoardServices/RBSXPCSecureCoding-Protocol.h>

@class NSString;

@interface RBSXPCServiceDefinition : NSObject <RBSXPCSecureCoding, NSSecureCoding>
{
    NSString *_identifier;	// 8 = 0x8
    long long _variant;	// 16 = 0x10
    long long _scope;	// 24 = 0x18
}

+ (_Bool)supportsRBSXPCSecureCoding;	// IMP=0x00000000000087ed
+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000087c1
+ (id)definitionWithIdentifier:(id)arg1 variant:(long long)arg2 scope:(long long)arg3;	// IMP=0x0000000000008544
- (void).cxx_destruct;	// IMP=0x0000000000008953
@property(readonly, nonatomic) long long scope; // @synthesize scope=_scope;
@property(readonly, nonatomic) long long variant; // @synthesize variant=_variant;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (id)initWithRBSXPCCoder:(id)arg1;	// IMP=0x000000000000887f
- (void)encodeWithRBSXPCCoder:(id)arg1;	// IMP=0x00000000000087f5
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000087db
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000087c9
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000008700
@property(readonly) unsigned long long hash;
@property(readonly, copy) NSString *description;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
