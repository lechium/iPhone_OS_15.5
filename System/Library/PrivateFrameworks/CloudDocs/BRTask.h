//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface BRTask : NSObject
{
    NSArray *_argv;	// 8 = 0x8
    NSString *_redirectStdoutToFileAtPath;	// 16 = 0x10
    int _redirectStdoutToFileDescriptor;	// 24 = 0x18
    NSString *_redirectStderrToFileAtPath;	// 32 = 0x20
    int _redirectStderrToFileDescriptor;	// 40 = 0x28
    int _waitStatus;	// 44 = 0x2c
}

+ (id)sanitizeStringForFilename:(id)arg1;	// IMP=0x000000000005b348
+ (id)taskWithCommandWithArguments:(id)arg1;	// IMP=0x000000000005b2f2
+ (id)taskWithCommand:(id)arg1;	// IMP=0x000000000005b1cf
- (void).cxx_destruct;	// IMP=0x000000000005c48e
@property(readonly, nonatomic) int waitStatus; // @synthesize waitStatus=_waitStatus;
@property(nonatomic) int redirectStderrToFileDescriptor; // @synthesize redirectStderrToFileDescriptor=_redirectStderrToFileDescriptor;
@property(retain, nonatomic) NSString *redirectStderrToFileAtPath; // @synthesize redirectStderrToFileAtPath=_redirectStderrToFileAtPath;
@property(nonatomic) int redirectStdoutToFileDescriptor; // @synthesize redirectStdoutToFileDescriptor=_redirectStdoutToFileDescriptor;
@property(retain, nonatomic) NSString *redirectStdoutToFileAtPath; // @synthesize redirectStdoutToFileAtPath=_redirectStdoutToFileAtPath;
@property(retain, nonatomic) NSArray *argv; // @synthesize argv=_argv;
- (void)resetRedirect;	// IMP=0x000000000005c3ba
- (int)exec;	// IMP=0x000000000005b821
- (void)setCommandWithArguments:(id)arg1;	// IMP=0x000000000005b576
- (void)setCommand:(id)arg1;	// IMP=0x000000000005b465
- (id)init;	// IMP=0x000000000005b190

@end

