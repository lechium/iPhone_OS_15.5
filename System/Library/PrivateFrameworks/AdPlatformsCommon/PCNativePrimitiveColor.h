//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AdPlatformsCommon/NSSecureCoding-Protocol.h>

@interface PCNativePrimitiveColor : NSObject <NSSecureCoding>
{
    long long _rawValue;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000004905
@property(readonly, nonatomic) long long rawValue; // @synthesize rawValue=_rawValue;
@property(readonly, nonatomic) unsigned char alpha;
@property(readonly, nonatomic) unsigned char blue;
@property(readonly, nonatomic) unsigned char green;
@property(readonly, nonatomic) unsigned char red;
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000049a2
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000000494a
- (id)initWithRGBA:(long long)arg1;	// IMP=0x000000000000490d

@end

