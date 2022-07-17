//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableArray;

@interface PDASMSyncOperation
{
    NSMutableArray *;	// 32 = 0x20
    NSMutableArray *_initialSyncZoneNames;	// 40 = 0x28
    _Bool _firstRun;	// 48 = 0x30
}

+ (_Bool)isResponsibleForZoneWithName:(id)arg1;	// IMP=0x004000000014a0ee
- (void).cxx_destruct;	// IMP=0x002000000014bbe7
- (void)abortWithError:(id)arg1;	// IMP=0x001000000014bb26
- (void)rescheduleOperation;	// IMP=0x001000000014bab9
- (_Bool)processResponseZone:(id)arg1;	// IMP=0x001000000014b472
- (_Bool)processResponseObject:(id)arg1 error:(id *)arg2;	// IMP=0x001000000014af92
- (id)requestData;	// IMP=0x001000000014a7f0
- (_Bool)wantsToExecute;	// IMP=0x001000000014a624
- (void)execute;	// IMP=0x001000000014a5c7
- (void)prepare;	// IMP=0x001000000014a20c
- (id)initWithDatabase:(id)arg1 withZoneName:(id)arg2;	// IMP=0x001000000014a135
- (id)initWithDatabase:(id)arg1;	// IMP=0x001000000014a0f6
- (Class)expectedResponseClass;	// IMP=0x001000000014a0dd
- (id)acceptContentType;	// IMP=0x001000000014a0d0
- (id)requestContentType;	// IMP=0x001000000014a0c3
- (id)endpointIdentifier;	// IMP=0x001000000014a0b6
- (id)logSubsystem;	// IMP=0x001000000014a0a2

@end
