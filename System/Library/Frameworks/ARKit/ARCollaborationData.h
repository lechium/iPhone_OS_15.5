//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ARKit/NSSecureCoding-Protocol.h>

@interface ARCollaborationData : NSObject <NSSecureCoding>
{
    long long _priority;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000000535e
@property(readonly, nonatomic) long long priority; // @synthesize priority=_priority;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000000537a
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000000536c
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000005366

@end
