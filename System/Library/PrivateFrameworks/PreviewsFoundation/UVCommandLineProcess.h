//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSTask, NSURL;

@interface UVCommandLineProcess : NSObject
{
    CDUnknownBlockType _terminationHandler;	// 8 = 0x8
    NSTask *_task;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000000274b
@property(retain) NSTask *task; // @synthesize task=_task;
@property long long qualityOfService;
@property(copy) CDUnknownBlockType terminationHandler;
@property(readonly) long long terminationReason;
@property(readonly) int terminationStatus;
@property(readonly, getter=isRunning) _Bool running;
@property(readonly) int processIdentifier;
- (_Bool)suspend;	// IMP=0x000000000000250b
- (_Bool)resume;	// IMP=0x00000000000024f5
- (void)terminate;	// IMP=0x00000000000024df
- (void)interrupt;	// IMP=0x00000000000024c9
- (_Bool)launchAndReturnError:(out id *)arg1;	// IMP=0x00000000000024b3
@property(retain) id standardError;
@property(retain) id standardOutput;
@property(retain) id standardInput;
@property(copy) NSURL *currentDirectoryURL;
@property(copy) NSDictionary *environment;
@property(copy) NSArray *arguments;
@property(copy) NSURL *executableURL;
- (void)dealloc;	// IMP=0x0000000000002326
- (id)initNoTask;	// IMP=0x00000000000022f7
- (id)initWithTask:(id)arg1;	// IMP=0x000000000000228c
- (id)init;	// IMP=0x000000000000224c

@end

