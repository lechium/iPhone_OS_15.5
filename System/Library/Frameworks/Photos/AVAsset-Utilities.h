//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AVFoundation/AVAsset.h>

@class AVAssetTrack, NSString;

@interface AVAsset (Utilities)
- (_Bool)isMarkedNotSerializable;	// IMP=0x00000000001f9fcc
- (id)commonMetadataStringValueForKey:(id)arg1;	// IMP=0x00000000001f9ef8
- (_Bool)valuesForKeysAreFinishedLoading:(id)arg1;	// IMP=0x00000000001f9d9a
@property(readonly) struct CGSize scaleFactors;
@property(readonly) float mainVideoTrackNominalFrameRate;
@property(readonly) struct CGAffineTransform mainVideoTrackPreferredTransform;
@property(readonly) struct CGSize mainVideoTrackPreferredSize;
@property(readonly) struct CGSize mainVideoTrackNaturalSize;
@property(readonly) AVAssetTrack *mainAudioTrack;
@property(readonly) AVAssetTrack *mainVideoTrack;
@property(readonly) NSString *localizedDisplayName;
- (_Bool)canPassthroughExport;	// IMP=0x00000000001f9133
@end
