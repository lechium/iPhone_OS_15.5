//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface CAMColorSpaceCommand
{
    long long __colorSpace;	// 8 = 0x8
}

@property(readonly, nonatomic) long long _colorSpace; // @synthesize _colorSpace=__colorSpace;
- (void)executeWithContext:(id)arg1;	// IMP=0x0000000000023a40
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001042ca
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000104244
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000001041b4
- (id)initWithColorSpace:(long long)arg1;	// IMP=0x000000000001e11f

@end

