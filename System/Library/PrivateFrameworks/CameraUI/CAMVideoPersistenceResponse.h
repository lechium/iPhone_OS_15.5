//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CameraUI/CAMTransientAssetConvertible-Protocol.h>

@class NSDate, NSDictionary, NSString, NSURL, UIImage;

@interface CAMVideoPersistenceResponse <CAMTransientAssetConvertible>
{
    long long _captureMode;	// 8 = 0x8
    NSString *_stillPersistenceUUID;	// 16 = 0x10
    CDStruct_1b6d18a9 _duration;	// 24 = 0x18
    CDStruct_1b6d18a9 _stillDisplayTime;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000000013d8e8
@property(readonly, nonatomic) CDStruct_1b6d18a9 stillDisplayTime; // @synthesize stillDisplayTime=_stillDisplayTime;
@property(readonly, copy, nonatomic) NSString *stillPersistenceUUID; // @synthesize stillPersistenceUUID=_stillPersistenceUUID;
@property(readonly, nonatomic) CDStruct_1b6d18a9 duration; // @synthesize duration=_duration;
@property(readonly, nonatomic) long long captureMode; // @synthesize captureMode=_captureMode;
@property(readonly, nonatomic) CDStruct_1b6d18a9 irisStillDisplayTime;
@property(readonly, nonatomic) NSURL *irisVideoPersistenceURL;
@property(readonly, nonatomic, getter=isExpectingPairedVideo) _Bool expectingPairedVideo;
@property(readonly, nonatomic) NSString *irisStillImageUUID;
@property(readonly, nonatomic, getter=isTransientAssetTemporaryPlaceholder) _Bool transientAssetTemporaryPlaceholder;
@property(readonly, nonatomic) struct CGSize finalExpectedPixelSize;
@property(readonly, nonatomic) unsigned long long numberOfRepresentedAssets;
@property(readonly, copy, nonatomic) NSString *burstIdentifier;
@property(readonly, copy, nonatomic) NSDictionary *stillImageMetadata;
@property(readonly, nonatomic) UIImage *placeholderImage;
@property(readonly, nonatomic) NSDate *captureDate;
@property(readonly, nonatomic) NSString *uuid;
@property(readonly, nonatomic) unsigned long long mediaSubtypes;
@property(readonly, nonatomic) unsigned long long mediaType;
- (id)initWithUUID:(id)arg1 captureMode:(long long)arg2 captureSession:(unsigned short)arg3 url:(id)arg4 creationDate:(id)arg5 scrubberImage:(id)arg6 finalExpectedPixelSize:(struct CGSize)arg7 duration:(CDStruct_1b6d18a9)arg8 stillPersistenceUUID:(id)arg9 stillDisplayTime:(CDStruct_1b6d18a9)arg10 coordinationInfo:(id)arg11;	// IMP=0x000000000013d696

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, copy, nonatomic) NSURL *persistenceURL;
@property(readonly, nonatomic) unsigned short sessionIdentifier;
@property(readonly) Class superclass;

@end
