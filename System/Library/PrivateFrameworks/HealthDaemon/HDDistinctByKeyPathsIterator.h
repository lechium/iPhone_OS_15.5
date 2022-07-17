//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HealthDaemon/HDDeletedObjectIterator-Protocol.h>
#import <HealthDaemon/HDRestorableIterator-Protocol.h>
#import <HealthDaemon/HDSampleIterator-Protocol.h>

@class HKDeletedObject, HKSample, NSArray, NSMutableSet, NSString;
@protocol HDSampleIterator><HDDeletedObjectIterator><HDRestorableIterator;

@interface HDDistinctByKeyPathsIterator : NSObject <HDSampleIterator, HDDeletedObjectIterator, HDRestorableIterator>
{
    id <HDSampleIterator><HDDeletedObjectIterator><HDRestorableIterator> _sourceIterator;	// 8 = 0x8
    NSArray *_keyPaths;	// 16 = 0x10
    NSMutableSet *_seenValues;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000491165
- (id)iteratorStateData;	// IMP=0x00000000004910a3
- (_Bool)restoreIteratorStateFromData:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000490dda
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000490d48
@property(readonly, nonatomic) HKDeletedObject *deletedObject;
@property(readonly, nonatomic) long long objectID;
@property(readonly, nonatomic) HKSample *sample;
- (id)object;	// IMP=0x0000000000490cf0
- (_Bool)advanceWithError:(id *)arg1;	// IMP=0x0000000000490973
- (id)initWithSourceIterator:(id)arg1 keyPaths:(id)arg2;	// IMP=0x00000000004907bf
- (id)init;	// IMP=0x0000000000490745

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
