//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMIVideoEventBuffer;

@interface HMIVideoTimeline : HMFObject
{
    HMIVideoEventBuffer *_buffer;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000000a4f2
- (double)timeIntervalSinceDateAtTime:(CDStruct_1b6d18a9)arg1;	// IMP=0x000000000000a464
- (id)dateAtTime:(CDStruct_1b6d18a9)arg1;	// IMP=0x000000000000a341
- (void)addDate:(id)arg1 atTime:(CDStruct_1b6d18a9)arg2;	// IMP=0x000000000000a2ac
- (id)initWithMaxCapacity:(long long)arg1;	// IMP=0x000000000000a235

@end

