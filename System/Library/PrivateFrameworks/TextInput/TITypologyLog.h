//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <TextInput/NSCopying-Protocol.h>

@class NSDate, NSDictionary, NSMutableSet, NSString, NSUUID, TIKeyboardState, TIRollingLog;
@protocol TITypologyLogDelegate;

@interface TITypologyLog : NSObject <NSCopying>
{
    id <TITypologyLogDelegate> _delegate;	// 8 = 0x8
    unsigned long long _version;	// 16 = 0x10
    NSUUID *_uuid;	// 24 = 0x18
    unsigned long long _partIndex;	// 32 = 0x20
    NSDate *_date;	// 40 = 0x28
    NSString *_systemVersion;	// 48 = 0x30
    NSString *_buildVersion;	// 56 = 0x38
    NSString *_clientIdentifier;	// 64 = 0x40
    NSDictionary *_config;	// 72 = 0x48
    TIRollingLog *_records;	// 80 = 0x50
    TIRollingLog *_traceLog;	// 88 = 0x58
    NSMutableSet *_loggedRecordClasses;	// 96 = 0x60
    TIKeyboardState *_lastKeyboardState;	// 104 = 0x68
}

- (void).cxx_destruct;	// IMP=0x0000000000043b0e
@property(retain, nonatomic) TIKeyboardState *lastKeyboardState; // @synthesize lastKeyboardState=_lastKeyboardState;
@property(retain, nonatomic) NSMutableSet *loggedRecordClasses; // @synthesize loggedRecordClasses=_loggedRecordClasses;
@property(readonly, nonatomic) TIRollingLog *traceLog; // @synthesize traceLog=_traceLog;
@property(readonly, nonatomic) TIRollingLog *records; // @synthesize records=_records;
@property(retain, nonatomic) NSDictionary *config; // @synthesize config=_config;
@property(copy, nonatomic) NSString *clientIdentifier; // @synthesize clientIdentifier=_clientIdentifier;
@property(readonly, nonatomic) NSString *buildVersion; // @synthesize buildVersion=_buildVersion;
@property(readonly, nonatomic) NSString *systemVersion; // @synthesize systemVersion=_systemVersion;
@property(readonly, nonatomic) NSDate *date; // @synthesize date=_date;
@property(readonly, nonatomic) unsigned long long partIndex; // @synthesize partIndex=_partIndex;
@property(readonly, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;
@property(readonly, nonatomic) unsigned long long version; // @synthesize version=_version;
@property(nonatomic) __weak id <TITypologyLogDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)loggedRecordOfClass:(Class)arg1;	// IMP=0x00000000000439e4
- (id)recordUUIDsIncludedInRange:(id)arg1 endUUID:(id)arg2;	// IMP=0x000000000004369e
- (id)recordsMatchingUUIDRange:(id)arg1 endUUID:(id)arg2;	// IMP=0x00000000000433d6
- (id)recordMatchingUUID:(id)arg1;	// IMP=0x00000000000431cb
- (void)enumerateHumanReadableTraceEntriesWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000043067
- (void)enumerateRecordsWithBlockIncludingStop:(CDUnknownBlockType)arg1;	// IMP=0x0000000000042eec
- (void)enumerateRecordsWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000042d88
- (void)logToHumanReadableTrace:(id)arg1;	// IMP=0x0000000000042d71
- (void)logRecord:(id)arg1 trace:(id)arg2;	// IMP=0x0000000000042d5f
- (void)logRecord:(id)arg1;	// IMP=0x0000000000042d4b
- (void)_logRecord:(id)arg1 trace:(id)arg2;	// IMP=0x00000000000429f6
- (id)recordSummary;	// IMP=0x0000000000042626
- (id)textSummary;	// IMP=0x000000000004243d
- (id)filename;	// IMP=0x000000000004232d
- (id)timestamp;	// IMP=0x000000000004225d
- (id)propertyList;	// IMP=0x0000000000041d9c
@property(readonly, nonatomic) unsigned long long maxNumRecords;
@property(readonly, nonatomic) unsigned long long numRecords;
- (id)initWithPropertyList:(id)arg1;	// IMP=0x0000000000041648
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000041600
- (id)initWithTypologyLog:(id)arg1;	// IMP=0x00000000000413fa
- (id)initWithUUID:(id)arg1 partIndex:(unsigned long long)arg2 date:(id)arg3 systemVersion:(id)arg4 buildVersion:(id)arg5 clientIdentifier:(id)arg6 config:(id)arg7;	// IMP=0x0000000000041254
- (id)init;	// IMP=0x0000000000041139

@end
