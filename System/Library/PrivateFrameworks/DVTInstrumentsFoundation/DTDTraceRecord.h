//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface DTDTraceRecord : NSObject
{
    int _pid;	// 8 = 0x8
    unsigned long long _type;	// 16 = 0x10
    unsigned long long _timestamp;	// 24 = 0x18
    const char *_eventText;	// 32 = 0x20
    unsigned long long _eventTextLength;	// 40 = 0x28
    const unsigned long long *_userStackFrames;	// 48 = 0x30
    unsigned long long _numUserFrames;	// 56 = 0x38
    const unsigned long long *_kernelStackFrames;	// 64 = 0x40
    unsigned long long _numKernelFrames;	// 72 = 0x48
    NSString *_consoleMessage;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x0000000000066f4a
@property(retain, nonatomic) NSString *consoleMessage; // @synthesize consoleMessage=_consoleMessage;
@property(nonatomic) unsigned long long numKernelFrames; // @synthesize numKernelFrames=_numKernelFrames;
@property(nonatomic) const unsigned long long *kernelStackFrames; // @synthesize kernelStackFrames=_kernelStackFrames;
@property(nonatomic) unsigned long long numUserFrames; // @synthesize numUserFrames=_numUserFrames;
@property(nonatomic) const unsigned long long *userStackFrames; // @synthesize userStackFrames=_userStackFrames;
@property(nonatomic) int pid; // @synthesize pid=_pid;
@property(nonatomic) unsigned long long eventTextLength; // @synthesize eventTextLength=_eventTextLength;
@property(nonatomic) const char *eventText; // @synthesize eventText=_eventText;
@property(nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;

@end

