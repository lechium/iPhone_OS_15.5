//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <MailKit/NSSecureCoding-Protocol.h>

@interface MEMessageActionFlagChange : NSObject <NSSecureCoding>
{
    long long _flag;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000000b390
@property(readonly, nonatomic) long long flag; // @synthesize flag=_flag;
- (id)description;	// IMP=0x000000000000b53a
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000000b476
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000000b415
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000000b398
- (id)initWithFlag:(long long)arg1;	// IMP=0x000000000000b353

@end

