//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface CAMImageControlModeCommand
{
    _Bool __capturing;	// 8 = 0x8
    long long __captureMode;	// 16 = 0x10
}

@property(readonly, nonatomic) _Bool _capturing; // @synthesize _capturing=__capturing;
@property(readonly, nonatomic) long long _captureMode; // @synthesize _captureMode=__captureMode;
- (void)executeWithContext:(id)arg1;	// IMP=0x0000000000021991
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000105307
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000010525d
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000001051ad
- (id)initWithCaptureMode:(long long)arg1 capturing:(_Bool)arg2;	// IMP=0x000000000010513b

@end

