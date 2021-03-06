//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSFileHandle, NSISO8601DateFormatter, NSString;
@protocol MSPJournaling, OS_dispatch_queue;

@interface MSPJournal : NSObject
{
    NSString *_path;	// 8 = 0x8
    NSFileHandle *_writeHandle;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_writeQueue;	// 24 = 0x18
    NSISO8601DateFormatter *_dateFormatter;	// 32 = 0x20
    _Bool _analyticsEnabled;	// 40 = 0x28
    _Bool _loggingEnabled;	// 41 = 0x29
    _Bool _journalEnabled;	// 42 = 0x2a
    NSString *_name;	// 48 = 0x30
    id <MSPJournaling> _delegate;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x000000000005f3fb
@property(nonatomic) __weak id <MSPJournaling> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
- (void)noteChangeWithState:(id)arg1 format:(id)arg2;	// IMP=0x000000000005f262
- (void)noteChangeWithState:(id)arg1 error:(id)arg2;	// IMP=0x000000000005f250
- (void)noteChangeWithState:(id)arg1 payload:(id)arg2;	// IMP=0x000000000005f23e
- (void)noteChangeWithState:(id)arg1 affectedObject:(id)arg2;	// IMP=0x000000000005f107
- (void)noteChangeWithState:(id)arg1;	// IMP=0x000000000005f0f3
- (void)sendTelemetryForState:(id)arg1 affectedObject:(id)arg2;	// IMP=0x000000000005ef93
- (void)appendToLog:(id)arg1 format:(id)arg2;	// IMP=0x000000000005ec70
- (void)appendToJournal:(id)arg1 format:(id)arg2;	// IMP=0x000000000005e62d
- (void)rotateLogIfNeeded;	// IMP=0x000000000005e4a0
- (id)filename;	// IMP=0x000000000005e42d
- (id)rotatedPath;	// IMP=0x000000000005e3fd
@property(readonly, nonatomic) NSString *path;
- (void)dealloc;	// IMP=0x000000000005e3ad
- (id)initWithName:(id)arg1 options:(unsigned long long)arg2;	// IMP=0x000000000005e21d
- (id)initWithName:(id)arg1;	// IMP=0x000000000005e204

@end

