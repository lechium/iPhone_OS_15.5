//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Vision/NSCopying-Protocol.h>
#import <Vision/NSSecureCoding-Protocol.h>

@class NSIndexSet;

@interface VNPersonsModelReadOptions : NSObject <NSCopying, NSSecureCoding>
{
    NSIndexSet *_acceptableVersions;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000c762f
- (void).cxx_destruct;	// IMP=0x00000000000c761f
@property(copy, nonatomic) NSIndexSet *acceptableVersions; // @synthesize acceptableVersions=_acceptableVersions;
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000c7549
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000c7526
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000c74d7
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000c73bc
- (unsigned long long)hash;	// IMP=0x00000000000c73a6

@end

