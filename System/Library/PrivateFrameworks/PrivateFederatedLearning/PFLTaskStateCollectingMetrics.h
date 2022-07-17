//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PrivateFederatedLearning/PFLTaskState-Protocol.h>

@class NSArray, NSURL;

@interface PFLTaskStateCollectingMetrics : NSObject <PFLTaskState>
{
    NSURL *_compiledModelURL;	// 8 = 0x8
    NSArray *_validationIndicies;	// 16 = 0x10
    NSArray *_trainingIndicies;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000016623
- (void).cxx_destruct;	// IMP=0x00000000000175e3
@property(readonly, nonatomic) NSArray *trainingIndicies; // @synthesize trainingIndicies=_trainingIndicies;
@property(readonly, nonatomic) NSArray *validationIndicies; // @synthesize validationIndicies=_validationIndicies;
@property(readonly, nonatomic) NSURL *compiledModelURL; // @synthesize compiledModelURL=_compiledModelURL;
- (void)suspend;	// IMP=0x00000000000175bf
- (void)resume:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000168d5
- (id)initWithCompiledModelURL:(id)arg1 validationDataIndicies:(id)arg2 trainingDataIndicies:(id)arg3;	// IMP=0x000000000001681e
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000001670e
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000001662b
- (unsigned long long)tag;	// IMP=0x0000000000016618

@end
