//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HomeKit/NSCopying-Protocol.h>
#import <HomeKit/NSSecureCoding-Protocol.h>

@class NSData;

@interface HMAccessoryOwnershipToken : NSObject <NSCopying, NSSecureCoding>
{
    NSData *_internalData;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000001b626d
- (void).cxx_destruct;	// IMP=0x00000000001b625d
@property(readonly, copy) NSData *internalData; // @synthesize internalData=_internalData;
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000001b60df
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000001b6066
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001b605b
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001b5f87
- (id)initWithData:(id)arg1;	// IMP=0x00000000001b5f14

@end

