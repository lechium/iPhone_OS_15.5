//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Messages/NSSecureCoding-Protocol.h>

@class NSUUID;

@interface MSSession : NSObject <NSSecureCoding>
{
    NSUUID *_identifier;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000017aa7
- (void).cxx_destruct;	// IMP=0x0000000000017d96
@property(readonly, nonatomic) NSUUID *identifier; // @synthesize identifier=_identifier;
- (id)description;	// IMP=0x0000000000017ce9
- (unsigned long long)hash;	// IMP=0x0000000000017cd3
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000017c28
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000017c05
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000017b74
- (id)initWithIdentifier:(id)arg1;	// IMP=0x0000000000017b09
- (id)init;	// IMP=0x0000000000017aaf

@end

