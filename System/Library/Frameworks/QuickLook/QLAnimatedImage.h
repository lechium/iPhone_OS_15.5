//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class QLImageData, UIImage;

@interface QLAnimatedImage : NSObject
{
    QLImageData *_imageData;	// 8 = 0x8
    unsigned long long _durationsCount;	// 16 = 0x10
    struct QLFrameDurationInformation *_durations;	// 24 = 0x18
    double _duration;	// 32 = 0x20
    UIImage *_lastImage;	// 40 = 0x28
    unsigned long long _lastImageIndex;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00000000000779ed
- (id)frameAtTime:(double)arg1;	// IMP=0x0000000000077906
- (_Bool)time:(double)arg1 belongsToIndex:(unsigned long long)arg2;	// IMP=0x00000000000778d6
- (long long)indexForTime:(double)arg1;	// IMP=0x00000000000778a0
- (double)duration;	// IMP=0x0000000000077895
- (unsigned long long)frameCount;	// IMP=0x000000000007788b
- (void)generateDurations;	// IMP=0x0000000000077757
- (id)initWithImageSource:(struct CGImageSource *)arg1;	// IMP=0x0000000000077691
- (void)dealloc;	// IMP=0x0000000000077657

@end

