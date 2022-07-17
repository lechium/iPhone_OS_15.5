//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <IdentityLookup/NSSecureCoding-Protocol.h>

@class NSString;

@interface ILMessageFilterQueryResponse : NSObject <NSSecureCoding>
{
    long long _action;	// 8 = 0x8
    NSString *_version;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000000734b
- (void).cxx_destruct;	// IMP=0x000000000000753c
@property(copy, nonatomic) NSString *version; // @synthesize version=_version;
@property(nonatomic) long long action; // @synthesize action=_action;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000000743a
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000007353
- (unsigned long long)hash;	// IMP=0x00000000000072e9
- (_Bool)isEqualToQueryResponse:(id)arg1;	// IMP=0x0000000000007232
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000071d5
- (id)description;	// IMP=0x0000000000007131

@end
