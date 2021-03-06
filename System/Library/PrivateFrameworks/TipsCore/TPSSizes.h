//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TipsCore/NSCopying-Protocol.h>
#import <TipsCore/NSSecureCoding-Protocol.h>

@class TPSSize;

@interface TPSSizes <NSCopying, NSSecureCoding>
{
    TPSSize *_compact;	// 8 = 0x8
    TPSSize *_regular;	// 16 = 0x10
}

+ (id)na_identity;	// IMP=0x0000000000042f09
+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000042f01
- (void).cxx_destruct;	// IMP=0x00000000000436d2
@property(copy, nonatomic) TPSSize *regular; // @synthesize regular=_regular;
@property(copy, nonatomic) TPSSize *compact; // @synthesize compact=_compact;
- (id)description;	// IMP=0x0000000000043589
- (double)heightToWidthRatioForViewMode:(long long)arg1;	// IMP=0x00000000000434af
- (unsigned long long)hash;	// IMP=0x0000000000043454
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000433de
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000004330a
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000004321b
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000004316a
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000043038

@end

