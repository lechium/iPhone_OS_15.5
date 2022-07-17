//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

#import <HomeAI/NSCopying-Protocol.h>
#import <HomeAI/NSSecureCoding-Protocol.h>

@class NSSet, NSString, NSUUID;

@interface HMIPerson : HMFObject <NSCopying, NSSecureCoding>
{
    NSUUID *_UUID;	// 8 = 0x8
    NSString *_name;	// 16 = 0x10
    NSSet *_personLinks;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000006d9f1
+ (id)personFromHomePerson:(id)arg1;	// IMP=0x000000000006d6db
- (void).cxx_destruct;	// IMP=0x000000000006dd72
@property(readonly, copy) NSSet *personLinks; // @synthesize personLinks=_personLinks;
@property(readonly, copy) NSString *name; // @synthesize name=_name;
@property(readonly, copy) NSUUID *UUID; // @synthesize UUID=_UUID;
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000006dadc
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000006d9f9
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000006d9e6
- (unsigned long long)hash;	// IMP=0x000000000006d9a2
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000006d7fb
- (id)attributeDescriptions;	// IMP=0x000000000006d534
- (id)initWithUUID:(id)arg1 name:(id)arg2 personLinks:(id)arg3;	// IMP=0x000000000006d41c
- (id)initWithUUID:(id)arg1 name:(id)arg2;	// IMP=0x000000000006d385

@end
