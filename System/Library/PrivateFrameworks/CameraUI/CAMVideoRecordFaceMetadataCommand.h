//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface CAMVideoRecordFaceMetadataCommand
{
    _Bool __enabled;	// 8 = 0x8
}

@property(readonly, nonatomic, getter=_isEnabled) _Bool _enabled; // @synthesize _enabled=__enabled;
- (void)_addMetadataConnectionForPortType:(id)arg1 videoDeviceInput:(id)arg2 movieFileOutput:(id)arg3 captureSession:(id)arg4;	// IMP=0x0000000000102170
- (id)_connectionForMovieFileOutput:(id)arg1 metadataPortType:(id)arg2;	// IMP=0x0000000000101e4a
- (void)executeWithContext:(id)arg1;	// IMP=0x000000000002246a
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000101df5
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000101d6f
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000101ce2
- (id)initWithEnabled:(_Bool)arg1;	// IMP=0x000000000001dd7a

@end

