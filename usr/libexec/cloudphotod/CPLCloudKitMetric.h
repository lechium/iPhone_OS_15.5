//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CKContainer, CKEventMetric, NSMutableSet, NSString;

@interface CPLCloudKitMetric : NSObject
{
    NSMutableSet *_outstandingOperations;	// 8 = 0x8
    CKEventMetric *_ckEventMetric;	// 16 = 0x10
    _Bool _submitted;	// 24 = 0x18
    NSString *_name;	// 32 = 0x20
    CKContainer *_container;	// 40 = 0x28
    long long _result;	// 48 = 0x30
    unsigned long long _outstandingBeginCount;	// 56 = 0x38
    NSString *_identifier;	// 64 = 0x40
}

+ (void)initialize;	// IMP=0x00400000000e81ce
- (void).cxx_destruct;	// IMP=0x00200000000e8dd2
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, nonatomic) _Bool submitted; // @synthesize submitted=_submitted;
@property(readonly, nonatomic) unsigned long long outstandingBeginCount; // @synthesize outstandingBeginCount=_outstandingBeginCount;
@property(nonatomic) long long result; // @synthesize result=_result;
@property(retain, nonatomic) CKContainer *container; // @synthesize container=_container;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
- (id)redactedDescription;	// IMP=0x00100000000e8ce6
- (id)description;	// IMP=0x00100000000e8c50
@property(readonly, nonatomic) NSString *resultDescription;
- (void)prepareCKEventMetric:(id)arg1;	// IMP=0x00100000000e8c0c
- (void)drop;	// IMP=0x00100000000e8bec
- (void)setError:(id)arg1;	// IMP=0x00100000000e8b76
- (void)end;	// IMP=0x00100000000e8a86
- (void)begin;	// IMP=0x00100000000e89c5
- (void)associatedOperationDidComplete:(id)arg1;	// IMP=0x00100000000e87e1
- (void)associateWithOperation:(id)arg1;	// IMP=0x00100000000e8693
- (void)_submitIfNecessary;	// IMP=0x00100000000e84d5
- (id)initWithName:(id)arg1;	// IMP=0x00100000000e8280

@end
