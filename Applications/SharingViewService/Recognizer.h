//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol RecognizerClassifier;

__attribute__((visibility("hidden")))
@interface Recognizer : NSObject
{
    id <RecognizerClassifier>;	// 8 = 0x8
    _Bool _detectionOutputIsDouble;	// 16 = 0x10
    double _confidence;	// 24 = 0x18
    double _threshold;	// 32 = 0x20
    CDStruct_1b6d18a9 _recognitionTime;	// 40 = 0x28
    CDStruct_1b6d18a9 _lastProcessedImageTime;	// 64 = 0x40
    struct CGRect _cropRect;	// 88 = 0x58
}

+ (id)recognizer_B520;	// IMP=0x004000000016a97c
+ (id)recognizer_B238;	// IMP=0x001000000016a933
- (void).cxx_destruct;	// IMP=0x002000000016a755
@property(nonatomic) _Bool detectionOutputIsDouble; // @synthesize detectionOutputIsDouble=_detectionOutputIsDouble;
@property(nonatomic) double threshold; // @synthesize threshold=_threshold;
@property(nonatomic) struct CGRect cropRect; // @synthesize cropRect=_cropRect;
@property(readonly, nonatomic) double confidence; // @synthesize confidence=_confidence;
@property(readonly, nonatomic) CDStruct_1b6d18a9 lastProcessedImageTime; // @synthesize lastProcessedImageTime=_lastProcessedImageTime;
@property(readonly, nonatomic) CDStruct_1b6d18a9 recognitionTime; // @synthesize recognitionTime=_recognitionTime;
- (id)getVisionFrameworkVersion;	// IMP=0x001000000016a694
- (_Bool)handleVNRequest:(id)arg1 withHandler:(id)arg2 error:(id *)arg3;	// IMP=0x001000000016a50a
- (id)getSceneprintForImage:(struct __CVBuffer *)arg1 error:(id *)arg2;	// IMP=0x001000000016a24e
- (_Bool)recognize:(struct __CVBuffer *)arg1 error:(id *)arg2;	// IMP=0x0010000000169fb5
- (void)processImage:(struct __CVBuffer *)arg1 withTimestamp:(CDStruct_1b6d18a9)arg2;	// IMP=0x0010000000169f3c
- (void)reset;	// IMP=0x0010000000169f18
- (id)initWithClassifier:(id)arg1;	// IMP=0x0010000000169e75

@end
