//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PeopleSuggester/NSCopying-Protocol.h>
#import <PeopleSuggester/NSSecureCoding-Protocol.h>

@class NSMutableArray;

@interface _PSConfidenceModel : NSObject <NSCopying, NSSecureCoding>
{
    int _bufferHead;	// 8 = 0x8
    int _bufferSize;	// 12 = 0xc
    int _minimumInstanceCount;	// 16 = 0x10
    NSMutableArray *_circularBuffer;	// 24 = 0x18
    double _sum;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000466d4
- (void).cxx_destruct;	// IMP=0x0000000000046a77
@property int minimumInstanceCount; // @synthesize minimumInstanceCount=_minimumInstanceCount;
@property int bufferSize; // @synthesize bufferSize=_bufferSize;
@property double sum; // @synthesize sum=_sum;
@property int bufferHead; // @synthesize bufferHead=_bufferHead;
@property(retain, nonatomic) NSMutableArray *circularBuffer; // @synthesize circularBuffer=_circularBuffer;
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000004684b
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000466dc
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000046620
- (double)getConfidence;	// IMP=0x00000000000464b4
- (void)addEvent:(id)arg1;	// IMP=0x000000000004628e
- (void)resetBuffer;	// IMP=0x000000000004621b
- (id)initWithBufferSize:(int)arg1 sum:(double)arg2 circularBuffer:(id)arg3 bufferHead:(int)arg4;	// IMP=0x0000000000046166
- (id)initWithBufferSize:(int)arg1 minimumInstanceCount:(int)arg2;	// IMP=0x00000000000460c5

@end

