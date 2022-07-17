//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Portrait/NSCopying-Protocol.h>

@class PTCinematographyFocusFramesOptions, PTGlobalCinematographyMetadata;

@interface PTCinematographyRefinementOptions : NSObject <NSCopying>
{
    PTGlobalCinematographyMetadata *_globalMetadata;	// 8 = 0x8
    _Bool _disableDetectionSmoothing;	// 16 = 0x10
    PTCinematographyFocusFramesOptions *_focusFramesOptions;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000003b85f
@property(retain) PTCinematographyFocusFramesOptions *focusFramesOptions; // @synthesize focusFramesOptions=_focusFramesOptions;
@property(nonatomic) _Bool disableDetectionSmoothing; // @synthesize disableDetectionSmoothing=_disableDetectionSmoothing;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000003b737
@property(nonatomic) CDStruct_1b6d18a9 rackFocusPullTime;
@property(copy, nonatomic) PTGlobalCinematographyMetadata *globalMetadata;
- (id)init;	// IMP=0x000000000003b5ef

@end
