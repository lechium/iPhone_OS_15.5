//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSFileHandle;

@interface FPTask : NSObject
{
    int _waitStatus;	// 8 = 0x8
    NSArray *_argv;	// 16 = 0x10
    NSFileHandle *_standardOutput;	// 24 = 0x18
    NSFileHandle *_standardError;	// 32 = 0x20
}

+ (id)sanitizeStringForFilename:(id)arg1;	// IMP=0x00000000000d5799
+ (id)taskWithArguments:(id)arg1;	// IMP=0x00000000000d5747
+ (id)taskWithCommandWithArguments:(id)arg1;	// IMP=0x00000000000d56f1
+ (id)taskWithCommand:(id)arg1;	// IMP=0x00000000000d55ce
+ (id)taskWithRedirectedOutputAndCommand:(id)arg1;	// IMP=0x00000000000d5447
- (void).cxx_destruct;	// IMP=0x00000000000d6a52
@property(readonly, nonatomic) int waitStatus; // @synthesize waitStatus=_waitStatus;
@property(retain, nonatomic) NSFileHandle *standardError; // @synthesize standardError=_standardError;
@property(retain, nonatomic) NSFileHandle *standardOutput; // @synthesize standardOutput=_standardOutput;
@property(retain, nonatomic) NSArray *argv; // @synthesize argv=_argv;
- (void)resetRedirect;	// IMP=0x00000000000d69c6
- (int)exec;	// IMP=0x00000000000d62fd
- (int)execAsync;	// IMP=0x00000000000d5e5a
- (int)_prepareRedirections:(void **)arg1;	// IMP=0x00000000000d5c72
- (void)setCommandWithArguments:(id)arg1;	// IMP=0x00000000000d59c7
- (void)setCommand:(id)arg1;	// IMP=0x00000000000d58b6
- (id)init;	// IMP=0x00000000000d53e3

@end
