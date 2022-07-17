//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Vision/NSCopying-Protocol.h>
#import <Vision/NSSecureCoding-Protocol.h>
#import <Vision/VNOriginatingRequestSpecifierProviding-Protocol.h>

@class VNRequestSpecifier;

@interface VNFaceScreenGaze : NSObject <NSCopying, NSSecureCoding, VNOriginatingRequestSpecifierProviding>
{
    struct CGPoint _screenGaze;	// 8 = 0x8
    VNRequestSpecifier *_originatingRequestSpecifier;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000001abd67
- (void).cxx_destruct;	// IMP=0x00000000001abcb1
@property(readonly) VNRequestSpecifier *originatingRequestSpecifier;
- (struct CGPoint)screenGazeRawOutputInCentimeters;	// IMP=0x00000000001abc93
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000001abb25
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000001abab2
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001abaa7
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001ab910
- (unsigned long long)hash;	// IMP=0x00000000001ab8ad

@end
