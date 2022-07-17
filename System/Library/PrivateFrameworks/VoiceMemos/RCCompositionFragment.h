//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <VoiceMemos/NSCopying-Protocol.h>
#import <VoiceMemos/NSMutableCopying-Protocol.h>
#import <VoiceMemos/RCDictionaryPListRepresentationCoding-Protocol.h>

@class NSString, NSURL;

@interface RCCompositionFragment : NSObject <NSMutableCopying, NSCopying, RCDictionaryPListRepresentationCoding>
{
    CDStruct_73a5d3ca _timeRangeInContentToUse;	// 8 = 0x8
    NSURL *_AVOutputURL;	// 24 = 0x18
    double _contentDuration;	// 32 = 0x20
    CDStruct_73a5d3ca _timeRangeInComposition;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000000008177
@property(nonatomic) CDStruct_73a5d3ca timeRangeInContentToUse; // @synthesize timeRangeInContentToUse=_timeRangeInContentToUse;
@property(nonatomic) CDStruct_73a5d3ca timeRangeInComposition; // @synthesize timeRangeInComposition=_timeRangeInComposition;
@property(nonatomic) double contentDuration; // @synthesize contentDuration=_contentDuration;
@property(retain, nonatomic) NSURL *AVOutputURL; // @synthesize AVOutputURL=_AVOutputURL;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000000807e
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000007fe6
- (id)dictionaryPListRepresentation;	// IMP=0x0000000000007e1a
- (id)initWithDictionaryPListRepresentation:(id)arg1;	// IMP=0x0000000000007c1c
- (id)fragmentByIntersectingTimeRangeInCompositionWithTimeRange:(CDStruct_73a5d3ca)arg1;	// IMP=0x0000000000007afa
- (unsigned long long)fileSizeOfAssetsIncludingRelatedResources:(_Bool)arg1;	// IMP=0x000000000000785d
- (void)moveAssetsToFragment:(id)arg1;	// IMP=0x0000000000007674
- (void)deleteFromFilesystem;	// IMP=0x000000000000752a
@property(readonly, nonatomic) NSURL *waveformURL;
@property(readonly, copy) NSString *description;
- (id)initWithAVOutputURL:(id)arg1 contentDuration:(double)arg2 timeRangeInContentToUse:(CDStruct_73a5d3ca)arg3 timeRangeInComposition:(CDStruct_73a5d3ca)arg4;	// IMP=0x00000000000071d3

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
