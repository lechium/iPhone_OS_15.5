//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, SHSignature;

__attribute__((visibility("hidden")))
@interface SHSignatureBuffer : NSObject
{
    double _minimumSignatureDuration;	// 8 = 0x8
    double _maximumSignatureDuration;	// 16 = 0x10
    double _bufferMaxSize;	// 24 = 0x18
    NSMutableArray *_slots;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000010f56
@property(readonly, nonatomic) NSMutableArray *slots; // @synthesize slots=_slots;
@property(nonatomic) double bufferMaxSize; // @synthesize bufferMaxSize=_bufferMaxSize;
@property(nonatomic) double maximumSignatureDuration; // @synthesize maximumSignatureDuration=_maximumSignatureDuration;
@property(nonatomic) double minimumSignatureDuration; // @synthesize minimumSignatureDuration=_minimumSignatureDuration;
- (void)discardSignatureWithID:(id)arg1;	// IMP=0x0000000000010ba8
- (double)duration;	// IMP=0x0000000000010b2e
- (void)flow:(id)arg1 time:(id)arg2;	// IMP=0x000000000001069a
@property(readonly, nonatomic) SHSignature *currentSignature;
- (void)reset;	// IMP=0x00000000000104e1
- (id)initWithMinimumSignatureDuration:(double)arg1 maximumSignatureDuration:(double)arg2 bufferDuration:(double)arg3;	// IMP=0x0000000000010468

@end

