//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <OSLog/OSLogEntryFromProcess-Protocol.h>

@class NSString;

@interface OSLogEntryActivity <OSLogEntryFromProcess>
{
    int _processIdentifier;	// 8 = 0x8
    unsigned long long _activityIdentifier;	// 16 = 0x10
    NSString *_process;	// 24 = 0x18
    NSString *_sender;	// 32 = 0x20
    unsigned long long _threadIdentifier;	// 40 = 0x28
    unsigned long long _parentActivityIdentifier;	// 48 = 0x30
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000009bb7
- (void).cxx_destruct;	// IMP=0x0000000000009b86
@property(readonly, nonatomic) unsigned long long parentActivityIdentifier; // @synthesize parentActivityIdentifier=_parentActivityIdentifier;
@property(readonly, nonatomic) unsigned long long threadIdentifier; // @synthesize threadIdentifier=_threadIdentifier;
@property(readonly, nonatomic) NSString *sender; // @synthesize sender=_sender;
@property(readonly, nonatomic) int processIdentifier; // @synthesize processIdentifier=_processIdentifier;
@property(readonly, nonatomic) NSString *process; // @synthesize process=_process;
@property(readonly, nonatomic) unsigned long long activityIdentifier; // @synthesize activityIdentifier=_activityIdentifier;
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000000993e
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000009757
- (id)initWithEventProxy:(id)arg1;	// IMP=0x0000000000009625

@end
