//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CAMCaptureGraphConfiguration;

@interface CAMPreparePhotoSettingsCommand
{
    CAMCaptureGraphConfiguration *__desiredGraphConfiguration;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000046e86
@property(readonly, nonatomic) CAMCaptureGraphConfiguration *_desiredGraphConfiguration; // @synthesize _desiredGraphConfiguration=__desiredGraphConfiguration;
- (void)executeWithContext:(id)arg1;	// IMP=0x000000000002f21c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000017c216
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000017c17b
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000017c0d8
- (id)initWithGraphConfiguration:(id)arg1;	// IMP=0x000000000001e6f8

@end

