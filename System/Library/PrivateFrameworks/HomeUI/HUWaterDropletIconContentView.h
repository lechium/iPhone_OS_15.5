//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HFPrimaryStateIconDescriptor, UIImageView;

@interface HUWaterDropletIconContentView
{
    UIImageView *_imageView;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000035a24b
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
- (long long)renderingModeForSubview:(id)arg1 suggestedRenderingMode:(long long)arg2;	// IMP=0x000000000035a21b
- (void)updateWithIconDescriptor:(id)arg1 displayStyle:(unsigned long long)arg2 animated:(_Bool)arg3;	// IMP=0x0000000000359e51
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000359c72

// Remaining properties
@property(readonly, nonatomic) HFPrimaryStateIconDescriptor *iconDescriptor; // @dynamic iconDescriptor;

@end
