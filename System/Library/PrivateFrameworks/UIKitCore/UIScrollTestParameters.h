//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <UIKitCore/NSCopying-Protocol.h>

@class CADisplayLink, NSString;

@interface UIScrollTestParameters : NSObject <NSCopying>
{
    NSString *_testName;	// 8 = 0x8
    long long _iterations;	// 16 = 0x10
    double _delta;	// 24 = 0x18
    double _length;	// 32 = 0x20
    unsigned long long _axis;	// 40 = 0x28
    CDUnknownBlockType _extraResultsBlock;	// 48 = 0x30
    double _startOffset;	// 56 = 0x38
    CADisplayLink *_displayLink;	// 64 = 0x40
    CDUnknownBlockType _completionBlock;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x00000000012039bd
@property(copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property(retain, nonatomic) CADisplayLink *displayLink; // @synthesize displayLink=_displayLink;
@property(nonatomic) double startOffset; // @synthesize startOffset=_startOffset;
@property(copy, nonatomic) CDUnknownBlockType extraResultsBlock; // @synthesize extraResultsBlock=_extraResultsBlock;
@property(nonatomic) unsigned long long axis; // @synthesize axis=_axis;
@property(nonatomic) double length; // @synthesize length=_length;
@property(nonatomic) double delta; // @synthesize delta=_delta;
@property(nonatomic) long long iterations; // @synthesize iterations=_iterations;
@property(copy, nonatomic) NSString *testName; // @synthesize testName=_testName;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000012037e3
@property(readonly, nonatomic) double endOffset;
- (void)dealloc;	// IMP=0x0000000001203750
- (id)init;	// IMP=0x0000000001203701

@end

