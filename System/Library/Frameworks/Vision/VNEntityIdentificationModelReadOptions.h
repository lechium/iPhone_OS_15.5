//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Vision/NSCopying-Protocol.h>
#import <Vision/NSSecureCoding-Protocol.h>

@class NSIndexSet;

@interface VNEntityIdentificationModelReadOptions : NSObject <NSCopying, NSSecureCoding>
{
    NSIndexSet *_acceptableVersions;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000001f2f4d
- (void).cxx_destruct;	// IMP=0x00000000001f2f3d
@property(copy) NSIndexSet *acceptableVersions; // @synthesize acceptableVersions=_acceptableVersions;
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000001f2e83
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000001f2e60
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001f2e25
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001f2d43
- (unsigned long long)hash;	// IMP=0x00000000001f2d2d

@end

