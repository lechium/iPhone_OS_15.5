//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface AXLoggingSubsystem : NSObject
{
    _Bool _ignoreLogging;	// 8 = 0x8
}

+ (_Bool)willLogDebug;	// IMP=0x00000000000a7fc5
+ (_Bool)willLogInfo;	// IMP=0x00000000000a7f8a
+ (_Bool)willLog;	// IMP=0x00000000000a7f5f
+ (int)defaultLogLevel;	// IMP=0x00000000000a7f54
+ (double)threshold;	// IMP=0x00000000000a7f4b
+ (_Bool)shouldProcessMessageForLogs;	// IMP=0x00000000000a7f43
+ (_Bool)shouldIncludeFileLineAndFunctionInLogs;	// IMP=0x00000000000a7f3b
+ (_Bool)shouldIncludeBacktraceInLogs;	// IMP=0x00000000000a7f33
+ (id)identifier;	// IMP=0x00000000000a7f26
+ (id)wrapError:(id)arg1 description:(id)arg2;	// IMP=0x00000000000a7dcf
+ (id)errorWithDescription:(id)arg1;	// IMP=0x00000000000a7ca1
+ (id)_errorWithMessage:(id)arg1 underlyingError:(id)arg2;	// IMP=0x00000000000a7b8c
+ (id)subsystems;	// IMP=0x00000000000a7b58
+ (void)initializeSubsytem;	// IMP=0x00000000000a7a61
+ (void)initialize;	// IMP=0x00000000000a79ef
+ (id)sharedInstance;	// IMP=0x00000000000a7962
@property(nonatomic) _Bool ignoreLogging;

@end
