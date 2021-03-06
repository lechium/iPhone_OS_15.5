//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <RunningBoardServices/NSCopying-Protocol.h>
#import <RunningBoardServices/RBSXPCSecureCoding-Protocol.h>

@class NSString;

@interface RBSProcessAssertionInfo : NSObject <NSCopying, RBSXPCSecureCoding>
{
    unsigned char _type;	// 8 = 0x8
    unsigned long long _reason;	// 16 = 0x10
    NSString *_explanation;	// 24 = 0x18
    NSString *_domain;	// 32 = 0x20
    NSString *_name;	// 40 = 0x28
}

+ (_Bool)supportsRBSXPCSecureCoding;	// IMP=0x000000000002aa60
- (void).cxx_destruct;	// IMP=0x000000000002ac7f
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSString *domain; // @synthesize domain=_domain;
@property(copy, nonatomic) NSString *explanation; // @synthesize explanation=_explanation;
@property(nonatomic) unsigned long long reason; // @synthesize reason=_reason;
@property(readonly, nonatomic) unsigned char type; // @synthesize type=_type;
- (id)initWithRBSXPCCoder:(id)arg1;	// IMP=0x000000000002ab19
- (void)encodeWithRBSXPCCoder:(id)arg1;	// IMP=0x000000000002aa68
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000002a9d4
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000002a844
@property(readonly) unsigned long long hash;
- (_Bool)isLegacyAssertionReason:(unsigned long long)arg1;	// IMP=0x000000000002a7c9
- (id)initWithType:(unsigned char)arg1;	// IMP=0x000000000002a7a5

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

