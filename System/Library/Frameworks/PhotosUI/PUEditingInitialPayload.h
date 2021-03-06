//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotosUI/NSSecureCoding-Protocol.h>

@class CLLocation, NSData, NSDate, NSString, NSURL, PHAdjustmentData;

@interface PUEditingInitialPayload : NSObject <NSSecureCoding>
{
    int _fullSizeImageExifOrientation;	// 8 = 0x8
    long long _mediaType;	// 16 = 0x10
    unsigned long long _mediaSubtypes;	// 24 = 0x18
    long long _playbackStyle;	// 32 = 0x20
    NSDate *_creationDate;	// 40 = 0x28
    CLLocation *_location;	// 48 = 0x30
    PHAdjustmentData *_adjustmentData;	// 56 = 0x38
    long long _adjustmentBaseVersion;	// 64 = 0x40
    NSData *_placeholderImageData;	// 72 = 0x48
    NSData *_displaySizeImageData;	// 80 = 0x50
    NSURL *_videoURL;	// 88 = 0x58
    NSString *_videoPathSandboxExtensionToken;	// 96 = 0x60
    NSURL *_fullSizeImageURL;	// 104 = 0x68
    NSString *_fullSizeImageURLSandboxExtensionToken;	// 112 = 0x70
    NSString *_accessibilityDescription;	// 120 = 0x78
    NSString *_uniformTypeIdentifier;	// 128 = 0x80
    CDStruct_1b6d18a9 _livePhotoStillDisplayTime;	// 136 = 0x88
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000126bbd
- (void).cxx_destruct;	// IMP=0x0000000000126b2f
@property(copy, nonatomic) NSString *uniformTypeIdentifier; // @synthesize uniformTypeIdentifier=_uniformTypeIdentifier;
@property(copy, nonatomic) NSString *accessibilityDescription; // @synthesize accessibilityDescription=_accessibilityDescription;
@property(nonatomic) int fullSizeImageExifOrientation; // @synthesize fullSizeImageExifOrientation=_fullSizeImageExifOrientation;
@property(copy, nonatomic) NSString *fullSizeImageURLSandboxExtensionToken; // @synthesize fullSizeImageURLSandboxExtensionToken=_fullSizeImageURLSandboxExtensionToken;
@property(retain, nonatomic) NSURL *fullSizeImageURL; // @synthesize fullSizeImageURL=_fullSizeImageURL;
@property(nonatomic) CDStruct_1b6d18a9 livePhotoStillDisplayTime; // @synthesize livePhotoStillDisplayTime=_livePhotoStillDisplayTime;
@property(copy, nonatomic) NSString *videoPathSandboxExtensionToken; // @synthesize videoPathSandboxExtensionToken=_videoPathSandboxExtensionToken;
@property(retain, nonatomic) NSURL *videoURL; // @synthesize videoURL=_videoURL;
@property(copy, nonatomic) NSData *displaySizeImageData; // @synthesize displaySizeImageData=_displaySizeImageData;
@property(copy, nonatomic) NSData *placeholderImageData; // @synthesize placeholderImageData=_placeholderImageData;
@property(nonatomic) long long adjustmentBaseVersion; // @synthesize adjustmentBaseVersion=_adjustmentBaseVersion;
@property(retain, nonatomic) PHAdjustmentData *adjustmentData; // @synthesize adjustmentData=_adjustmentData;
@property(copy, nonatomic) CLLocation *location; // @synthesize location=_location;
@property(copy, nonatomic) NSDate *creationDate; // @synthesize creationDate=_creationDate;
@property(nonatomic) long long playbackStyle; // @synthesize playbackStyle=_playbackStyle;
@property(nonatomic) unsigned long long mediaSubtypes; // @synthesize mediaSubtypes=_mediaSubtypes;
@property(nonatomic) long long mediaType; // @synthesize mediaType=_mediaType;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000126779
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000001263b7

@end

