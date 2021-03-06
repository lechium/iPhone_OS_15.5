//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CKVSettings;

@interface CKVTaskController : NSObject
{
    CKVSettings *_settings;	// 8 = 0x8
    _Bool _taskExecutionAllowed;	// 16 = 0x10
}

+ (id)adminControllerWithSettings:(id)arg1;	// IMP=0x00000000000c8163
+ (id)daemonControllerWithSettings:(id)arg1;	// IMP=0x00000000000c8104
- (void).cxx_destruct;	// IMP=0x00000000000c80f4
@property _Bool taskExecutionAllowed; // @synthesize taskExecutionAllowed=_taskExecutionAllowed;
- (_Bool)shouldExecuteTask:(unsigned short)arg1;	// IMP=0x00000000000c7fc0
- (_Bool)isTaskExecutionAllowed;	// IMP=0x00000000000c7fae
- (void)prohibitTaskExecution;	// IMP=0x00000000000c7f9a
- (void)allowTaskExecution;	// IMP=0x00000000000c7f83
- (id)init;	// IMP=0x00000000000c7f3b
- (id)initWithSettings:(id)arg1 taskExecutionAllowed:(_Bool)arg2;	// IMP=0x00000000000c7ea3

@end

