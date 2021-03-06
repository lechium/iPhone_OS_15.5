//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AVAsset, CLLocation, NSDate, NSMutableArray, NSNumber, NSString, NSURL, PHAdjustmentData, PHLivePhoto, UIImage;
@protocol OS_dispatch_queue;

@interface PHContentEditingInput : NSObject
{
    NSObject<OS_dispatch_queue> *_avAssetIsolationQueue;	// 8 = 0x8
    NSMutableArray *_sandboxExtensionHandles;	// 16 = 0x10
    int _fullSizeImageOrientation;	// 24 = 0x18
    AVAsset *_avAsset;	// 32 = 0x20
    long long _mediaType;	// 40 = 0x28
    unsigned long long _mediaSubtypes;	// 48 = 0x30
    NSDate *_creationDate;	// 56 = 0x38
    CLLocation *_location;	// 64 = 0x40
    NSString *_uniformTypeIdentifier;	// 72 = 0x48
    long long _playbackStyle;	// 80 = 0x50
    PHAdjustmentData *_adjustmentData;	// 88 = 0x58
    UIImage *_displaySizeImage;	// 96 = 0x60
    NSURL *_fullSizeImageURL;	// 104 = 0x68
    PHLivePhoto *_livePhoto;	// 112 = 0x70
    long long _baseVersion;	// 120 = 0x78
    NSNumber *_originalResourceChoice;	// 128 = 0x80
    NSURL *_videoURL;	// 136 = 0x88
    NSURL *_overCapturePhotoURL;	// 144 = 0x90
    NSURL *_overCaptureVideoURL;	// 152 = 0x98
    NSURL *_frontSwappingImageRenderURL;	// 160 = 0xa0
    NSURL *_backSwappingImageRenderURL;	// 168 = 0xa8
    NSURL *_frontSwappingVideoRenderURL;	// 176 = 0xb0
    NSURL *_backSwappingVideoRenderURL;	// 184 = 0xb8
    PHAdjustmentData *_originalAdjustmentData;	// 192 = 0xc0
    NSString *_accessibilityDescription;	// 200 = 0xc8
}

- (void).cxx_destruct;	// IMP=0x00000000001bb0db
@property(copy, nonatomic) NSString *accessibilityDescription; // @synthesize accessibilityDescription=_accessibilityDescription;
@property(retain, nonatomic) PHAdjustmentData *originalAdjustmentData; // @synthesize originalAdjustmentData=_originalAdjustmentData;
@property(copy, nonatomic) NSURL *backSwappingVideoRenderURL; // @synthesize backSwappingVideoRenderURL=_backSwappingVideoRenderURL;
@property(copy, nonatomic) NSURL *frontSwappingVideoRenderURL; // @synthesize frontSwappingVideoRenderURL=_frontSwappingVideoRenderURL;
@property(copy, nonatomic) NSURL *backSwappingImageRenderURL; // @synthesize backSwappingImageRenderURL=_backSwappingImageRenderURL;
@property(copy, nonatomic) NSURL *frontSwappingImageRenderURL; // @synthesize frontSwappingImageRenderURL=_frontSwappingImageRenderURL;
@property(copy, nonatomic) NSURL *overCaptureVideoURL; // @synthesize overCaptureVideoURL=_overCaptureVideoURL;
@property(copy, nonatomic) NSURL *overCapturePhotoURL; // @synthesize overCapturePhotoURL=_overCapturePhotoURL;
@property(copy, nonatomic) NSURL *videoURL; // @synthesize videoURL=_videoURL;
@property(retain, nonatomic) NSNumber *originalResourceChoice; // @synthesize originalResourceChoice=_originalResourceChoice;
@property(nonatomic) long long baseVersion; // @synthesize baseVersion=_baseVersion;
@property(retain, nonatomic) PHLivePhoto *livePhoto; // @synthesize livePhoto=_livePhoto;
@property(nonatomic) int fullSizeImageOrientation; // @synthesize fullSizeImageOrientation=_fullSizeImageOrientation;
@property(copy, nonatomic) NSURL *fullSizeImageURL; // @synthesize fullSizeImageURL=_fullSizeImageURL;
@property(retain, nonatomic) UIImage *displaySizeImage; // @synthesize displaySizeImage=_displaySizeImage;
@property(retain, nonatomic) PHAdjustmentData *adjustmentData; // @synthesize adjustmentData=_adjustmentData;
@property(nonatomic) long long playbackStyle; // @synthesize playbackStyle=_playbackStyle;
@property(copy, nonatomic) NSString *uniformTypeIdentifier; // @synthesize uniformTypeIdentifier=_uniformTypeIdentifier;
@property(copy, nonatomic) CLLocation *location; // @synthesize location=_location;
@property(copy, nonatomic) NSDate *creationDate; // @synthesize creationDate=_creationDate;
@property(nonatomic) unsigned long long mediaSubtypes; // @synthesize mediaSubtypes=_mediaSubtypes;
@property(nonatomic) long long mediaType; // @synthesize mediaType=_mediaType;
- (id)description;	// IMP=0x00000000001bad8b
- (void)_invalidateAVAsset;	// IMP=0x00000000001bad40
@property(readonly) AVAsset *audiovisualAsset; // @synthesize audiovisualAsset=_avAsset;
@property(readonly) AVAsset *avAsset;
- (void)consumeSandboxExtensionToken:(id)arg1;	// IMP=0x00000000001baaf9
- (void)requestFullSizeImageURLWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000001baa77
- (id)videoComposition;	// IMP=0x00000000001baa6f
- (id)audioMix;	// IMP=0x00000000001baa67
- (id)imagePreview;	// IMP=0x00000000001baa55
- (void)loadFullSizeImageDataWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000001ba9c7
- (_Bool)isMediaSubtype:(unsigned long long)arg1;	// IMP=0x00000000001ba9b4
- (void)dealloc;	// IMP=0x00000000001ba817
- (id)init;	// IMP=0x00000000001ba7bf

@end

