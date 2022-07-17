//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ReminderKit/NSSecureCoding-Protocol.h>

@class NSString;

@interface REMMigrationResult : NSObject <NSSecureCoding>
{
    _Bool _isObserver;	// 8 = 0x8
    NSString *_state;	// 16 = 0x10
    double _timeElapsed;	// 24 = 0x18
    unsigned long long _listsMigrated;	// 32 = 0x20
    unsigned long long _remindersMigrated;	// 40 = 0x28
    NSString *_log;	// 48 = 0x30
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000005230a
- (void).cxx_destruct;	// IMP=0x00000000000527ef
@property(readonly, nonatomic) NSString *log; // @synthesize log=_log;
@property(readonly, nonatomic) unsigned long long remindersMigrated; // @synthesize remindersMigrated=_remindersMigrated;
@property(readonly, nonatomic) unsigned long long listsMigrated; // @synthesize listsMigrated=_listsMigrated;
@property(readonly, nonatomic) double timeElapsed; // @synthesize timeElapsed=_timeElapsed;
@property(readonly, nonatomic) _Bool isObserver; // @synthesize isObserver=_isObserver;
@property(readonly, nonatomic) NSString *state; // @synthesize state=_state;
- (id)description;	// IMP=0x000000000005258a
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000005244c
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000052312
- (id)initWithState:(id)arg1 IsObserver:(_Bool)arg2 timeElapsed:(double)arg3 listsMigrated:(unsigned long long)arg4 remindersMigrated:(unsigned long long)arg5 log:(id)arg6;	// IMP=0x000000000005223a

@end
