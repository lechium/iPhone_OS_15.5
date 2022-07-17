//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface CAMWhiteBalanceCommand
{
    _Bool __matchExposureMode;	// 8 = 0x8
    long long __whiteBalanceMode;	// 16 = 0x10
}

@property(readonly, nonatomic) long long _whiteBalanceMode; // @synthesize _whiteBalanceMode=__whiteBalanceMode;
@property(readonly, nonatomic) _Bool _matchExposureMode; // @synthesize _matchExposureMode=__matchExposureMode;
- (id)_descriptionForWhiteBalanceMode:(long long)arg1;	// IMP=0x000000000017580b
- (void)executeWithContext:(id)arg1;	// IMP=0x00000000000477d8
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000043e81
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000175761
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000001756ae
- (id)initWithMatchExposureMode;	// IMP=0x0000000000043e28
- (id)initWithWhiteBalanceMode:(long long)arg1;	// IMP=0x00000000000473cb

@end
