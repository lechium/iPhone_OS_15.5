//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotosUICore/PXDisplayAsset-Protocol.h>

@class NSData, NSDate, NSDictionary, NSNumber, NSString;

@interface PXMockDisplayAsset : NSObject <PXDisplayAsset>
{
    NSDictionary *_backingDictionary;	// 8 = 0x8
}

+ (id)propertiesForVideoWithSize:(struct CGSize)arg1;	// IMP=0x000000000013efb9
+ (id)propertiesForLivePhotoWithSize:(struct CGSize)arg1;	// IMP=0x000000000013ee43
+ (id)propertiesForImageWithSize:(struct CGSize)arg1;	// IMP=0x000000000013ecf0
- (void).cxx_destruct;	// IMP=0x000000000013ece0
@property(readonly, nonatomic) NSDictionary *backingDictionary; // @synthesize backingDictionary=_backingDictionary;
@property(readonly, nonatomic) Class defaultImageProviderClass;
@property(readonly, nonatomic) long long playbackVariation;
@property(readonly, nonatomic) long long playbackStyle;
@property(readonly, nonatomic) CDStruct_1b6d18a9 livePhotoVideoDuration;
@property(readonly, nonatomic) double duration;
@property(readonly, nonatomic) NSString *uuid;
@property(readonly, nonatomic) struct CGRect faceAreaRect;
@property(readonly, nonatomic) struct CGRect acceptableCropRect;
@property(readonly, nonatomic) struct CGRect preferredCropRect;
@property(readonly, nonatomic) _Bool isEligibleForAutoPlayback;
- (long long)isContentEqualTo:(id)arg1;	// IMP=0x000000000013ea6b
@property(readonly, nonatomic) unsigned long long thumbnailIndex;
@property(readonly, nonatomic) unsigned long long pixelHeight;
@property(readonly, nonatomic) unsigned long long pixelWidth;
@property(readonly, nonatomic) _Bool isInCloud;
@property(readonly, nonatomic) _Bool representsBurst;
@property(readonly, nonatomic, getter=isFavorite) _Bool favorite;
@property(readonly, nonatomic) NSDate *localCreationDate;
@property(readonly, nonatomic) NSDate *creationDate;
@property(readonly, nonatomic) unsigned long long mediaSubtypes;
@property(readonly, nonatomic) long long mediaType;
- (id)_stringValueForKey:(id)arg1;	// IMP=0x000000000013e782
- (id)_dateValueForKey:(id)arg1;	// IMP=0x000000000013e58a
- (double)_doubleValueForKey:(id)arg1;	// IMP=0x000000000013e376
- (_Bool)_boolValueForKey:(id)arg1;	// IMP=0x000000000013e168
- (unsigned long long)_unsignedIntegerValueForKey:(id)arg1;	// IMP=0x000000000013df58
- (long long)_integerValueForKey:(id)arg1;	// IMP=0x000000000013dd48
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000013dd3d
- (id)initWithProperties:(id)arg1;	// IMP=0x000000000013dc4d
- (id)init;	// IMP=0x000000000013dbf3

// Remaining properties
@property(readonly, nonatomic) double aspectRatio;
@property(readonly, nonatomic) unsigned long long burstSelectionTypes;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) NSData *fetchColorNormalizationData;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSNumber *hdrGain;
@property(readonly, nonatomic) NSDate *importDate;
@property(readonly, nonatomic) _Bool isAutoPlaybackEligibilityEstimated;
@property(readonly, nonatomic) NSString *localizedGeoDescription;
@property(readonly) Class superclass;
@property(readonly, nonatomic) unsigned long long thumbnailVersion;

@end
