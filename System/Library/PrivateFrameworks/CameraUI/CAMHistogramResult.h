//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CameraUI/CAMMetadataObjectResult-Protocol.h>

@class AVMetadataObject, AVMetadataVideoPreviewHistogramObject, NSString;

@interface CAMHistogramResult : NSObject <CAMMetadataObjectResult>
{
    NSString *_uniqueIdentifier;	// 8 = 0x8
    double _shadowClipping;	// 16 = 0x10
    double _highlightClipping;	// 24 = 0x18
    AVMetadataVideoPreviewHistogramObject *__metadataHistogramObject;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000118192
@property(retain, nonatomic) AVMetadataVideoPreviewHistogramObject *_metadataHistogramObject; // @synthesize _metadataHistogramObject=__metadataHistogramObject;
@property(readonly, nonatomic) double highlightClipping; // @synthesize highlightClipping=_highlightClipping;
@property(readonly, nonatomic) double shadowClipping; // @synthesize shadowClipping=_shadowClipping;
@property(readonly, copy, nonatomic) NSString *uniqueIdentifier; // @synthesize uniqueIdentifier=_uniqueIdentifier;
@property(readonly, copy, nonatomic) NSString *metadataType;
@property(readonly, nonatomic) AVMetadataObject *underlyingMetadataObject;
- (id)initWithHistogramObject:(id)arg1 forDeviceFormat:(id)arg2;	// IMP=0x0000000000117dd0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) unsigned long long syntheticFocusMode;

@end
