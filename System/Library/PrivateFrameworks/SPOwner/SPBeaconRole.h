//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SPOwner/NSCopying-Protocol.h>
#import <SPOwner/NSSecureCoding-Protocol.h>

@class NSString;

@interface SPBeaconRole : NSObject <NSCopying, NSSecureCoding>
{
    long long _roleId;	// 8 = 0x8
    NSString *_role;	// 16 = 0x10
    NSString *_roleEmoji;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000041068
- (void).cxx_destruct;	// IMP=0x0000000000041265
@property(copy, nonatomic) NSString *roleEmoji; // @synthesize roleEmoji=_roleEmoji;
@property(copy, nonatomic) NSString *role; // @synthesize role=_role;
@property(nonatomic) long long roleId; // @synthesize roleId=_roleId;
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000041121
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000041070
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000040fc3
- (id)initWithRoleId:(long long)arg1 role:(id)arg2 roleEmoji:(id)arg3;	// IMP=0x0000000000040f0e

@end

