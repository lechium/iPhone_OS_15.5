//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CAMPanoramaCaptureRequest, NSMutableDictionary;
@protocol CAMPanoramaProcessorDelegate;

@interface CAMPanoramaProcessor : NSObject
{
    _Bool _capturingPanorama;	// 8 = 0x8
    id <CAMPanoramaProcessorDelegate> _delegate;	// 16 = 0x10
    CAMPanoramaCaptureRequest *_request;	// 24 = 0x18
    long long _photoEncodingBehavior;	// 32 = 0x20
    long long _direction;	// 40 = 0x28
    NSMutableDictionary *__initialMetadataByRequestUUID;	// 48 = 0x30
    struct CGSize _previewSize;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x0000000000115ca7
@property(readonly, nonatomic) NSMutableDictionary *_initialMetadataByRequestUUID; // @synthesize _initialMetadataByRequestUUID=__initialMetadataByRequestUUID;
@property(nonatomic, getter=isCapturingPanorama, setter=_setCapturingPanorama:) _Bool capturingPanorama; // @synthesize capturingPanorama=_capturingPanorama;
@property(nonatomic) long long direction; // @synthesize direction=_direction;
@property(readonly, nonatomic) struct CGSize previewSize; // @synthesize previewSize=_previewSize;
@property(readonly, nonatomic) long long photoEncodingBehavior; // @synthesize photoEncodingBehavior=_photoEncodingBehavior;
@property(retain, nonatomic, setter=_setRequest:) CAMPanoramaCaptureRequest *request; // @synthesize request=_request;
@property(readonly, nonatomic) __weak id <CAMPanoramaProcessorDelegate> delegate; // @synthesize delegate=_delegate;
- (void)invalidate;	// IMP=0x0000000000115c30
- (void)processSampleBuffer:(struct opaqueCMSampleBuffer *)arg1;	// IMP=0x0000000000115c2a
- (void)processPanoramaCaptureWithRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000115c14
- (void)stopPanoramaCapture;	// IMP=0x0000000000115c0e
- (void)startPanoramaCaptureWithRequest:(id)arg1;	// IMP=0x0000000000115c08
- (void)dealloc;	// IMP=0x0000000000115bc9
- (id)initWithDelegate:(id)arg1 encodingBehavior:(long long)arg2;	// IMP=0x0000000000115bbb

@end
