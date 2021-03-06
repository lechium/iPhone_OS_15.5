//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface FigVideoCaptureConnectionConfiguration
{
    int _outputFormat;	// 44 = 0x2c
    int _outputWidth;	// 48 = 0x30
    int _outputHeight;	// 52 = 0x34
    int _videoStabilizationMethod;	// 56 = 0x38
    _Bool _mirroringEnabled;	// 60 = 0x3c
    _Bool _physicalMirroringForMovieRecordingEnabled;	// 61 = 0x3d
    int _orientation;	// 64 = 0x40
    int _retainedBufferCount;	// 68 = 0x44
    _Bool _cameraIntrinsicMatrixDeliveryEnabled;	// 72 = 0x48
    _Bool _livePhotoMetadataWritingEnabled;	// 73 = 0x49
}

@property(nonatomic) _Bool livePhotoMetadataWritingEnabled; // @synthesize livePhotoMetadataWritingEnabled=_livePhotoMetadataWritingEnabled;
@property(nonatomic) _Bool cameraIntrinsicMatrixDeliveryEnabled; // @synthesize cameraIntrinsicMatrixDeliveryEnabled=_cameraIntrinsicMatrixDeliveryEnabled;
@property(nonatomic) int retainedBufferCount; // @synthesize retainedBufferCount=_retainedBufferCount;
@property(nonatomic) int orientation; // @synthesize orientation=_orientation;
@property(nonatomic) _Bool physicalMirroringForMovieRecordingEnabled; // @synthesize physicalMirroringForMovieRecordingEnabled=_physicalMirroringForMovieRecordingEnabled;
@property(nonatomic) _Bool mirroringEnabled; // @synthesize mirroringEnabled=_mirroringEnabled;
@property(nonatomic) int videoStabilizationMethod; // @synthesize videoStabilizationMethod=_videoStabilizationMethod;
@property(nonatomic) int outputHeight; // @synthesize outputHeight=_outputHeight;
@property(nonatomic) int outputWidth; // @synthesize outputWidth=_outputWidth;
@property(nonatomic) int outputFormat; // @synthesize outputFormat=_outputFormat;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000057e4
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000005682
- (id)description;	// IMP=0x0000000000005460
- (void)dealloc;	// IMP=0x0000000000005431
- (id)copyXPCEncoding;	// IMP=0x00000000000052b5
- (id)initWithXPCEncoding:(id)arg1;	// IMP=0x0000000000005161

@end

