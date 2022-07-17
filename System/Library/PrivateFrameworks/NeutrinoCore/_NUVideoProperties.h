//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <NeutrinoCore/NUVideoProperties-Protocol.h>

@class NSArray, NSDictionary, NSString, NSURL;

@interface _NUVideoProperties : NSObject <NUVideoProperties>
{
    NSURL *_url;	// 8 = 0x8
    NSArray *_metadata;	// 16 = 0x10
    long long _orientation;	// 24 = 0x18
    NSDictionary *_colorProperties;	// 32 = 0x20
    CDStruct_d58201db _size;	// 40 = 0x28
    CDStruct_d58201db _originalSize;	// 56 = 0x38
    CDStruct_1b6d18a9 _livePhotoKeyFrameTime;	// 72 = 0x48
    CDStruct_1b6d18a9 _duration;	// 96 = 0x60
    CDStruct_996ac03c _cleanAperture;	// 120 = 0x78
    CDStruct_996ac03c _originalCleanAperture;	// 152 = 0x98
}

- (void).cxx_destruct;	// IMP=0x000000000016c1c1
@property(nonatomic) CDStruct_1b6d18a9 duration; // @synthesize duration=_duration;
@property(nonatomic) CDStruct_1b6d18a9 livePhotoKeyFrameTime; // @synthesize livePhotoKeyFrameTime=_livePhotoKeyFrameTime;
@property(retain, nonatomic) NSDictionary *colorProperties; // @synthesize colorProperties=_colorProperties;
@property(nonatomic) long long orientation; // @synthesize orientation=_orientation;
@property(nonatomic) CDStruct_996ac03c originalCleanAperture; // @synthesize originalCleanAperture=_originalCleanAperture;
@property(nonatomic) CDStruct_996ac03c cleanAperture; // @synthesize cleanAperture=_cleanAperture;
@property(nonatomic) CDStruct_912cb5d2 originalSize; // @synthesize originalSize=_originalSize;
@property(nonatomic) CDStruct_912cb5d2 size; // @synthesize size=_size;
@property(retain, nonatomic) NSArray *metadata; // @synthesize metadata=_metadata;
@property(retain, nonatomic) NSURL *url; // @synthesize url=_url;
@property(readonly, copy) NSString *description;
- (id)initWithProperties:(id)arg1;	// IMP=0x000000000016bc3e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
