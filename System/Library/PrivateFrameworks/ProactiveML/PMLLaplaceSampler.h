//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ProactiveML/PMLSampler-Protocol.h>

@class NSString;

@interface PMLLaplaceSampler : NSObject <PMLSampler>
{
    CDStruct_9981aeec _rng;	// 8 = 0x8
    float _magnitude;	// 24 = 0x18
}

- (float)sample;	// IMP=0x0000000000011cc3
- (id)initWithMagnitude:(float)arg1;	// IMP=0x0000000000011c67
- (id)initWithMagnitude:(float)arg1 seed:(unsigned long long)arg2;	// IMP=0x0000000000011c06

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
