//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ATXModeDuetHelper, NSDateFormatter, NSUserDefaults;
@protocol OS_dispatch_queue;

@interface ATXModeLogger : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    NSDateFormatter *_formatter;	// 16 = 0x10
    NSUserDefaults *_defaults;	// 24 = 0x18
    ATXModeDuetHelper *_duetHelper;	// 32 = 0x20
    _Bool _shareDiagnosticDataWrapper;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000000015576
@property _Bool shareDiagnosticDataWrapper; // @synthesize shareDiagnosticDataWrapper=_shareDiagnosticDataWrapper;
- (void)_updateLastSubmissionDate:(id)arg1;	// IMP=0x00000000000154d6
- (id)_lastSubmissionDate;	// IMP=0x0000000000015408
- (id)_userDefaults;	// IMP=0x0000000000015376
- (id)_userID;	// IMP=0x00000000000152bc
- (void)logEventsFromModeStream;	// IMP=0x0000000000014a76
- (id)stringForDate:(id)arg1;	// IMP=0x0000000000014a60
- (id)initWithDuetHelper:(id)arg1;	// IMP=0x0000000000014901

@end

