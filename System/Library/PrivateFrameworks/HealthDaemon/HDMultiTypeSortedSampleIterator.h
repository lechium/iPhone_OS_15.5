//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HealthDaemon/HDDeletedObjectIterator-Protocol.h>
#import <HealthDaemon/HDRestorableIterator-Protocol.h>
#import <HealthDaemon/HDSampleIterator-Protocol.h>

@class HDProfile, HDSortedSampleIterator, HKDeletedObject, HKSample, HKSortedQueryAnchor, NSArray, NSMutableArray, NSString;

@interface HDMultiTypeSortedSampleIterator : NSObject <HDSampleIterator, HDDeletedObjectIterator, HDRestorableIterator>
{
    NSArray *_queryDescriptors;	// 8 = 0x8
    _Bool _includeDeletedObjects;	// 16 = 0x10
    NSArray *_sortDescriptors;	// 24 = 0x18
    long long _bufferSize;	// 32 = 0x20
    HDProfile *_profile;	// 40 = 0x28
    HKSortedQueryAnchor *_anchor;	// 48 = 0x30
    NSMutableArray *_iterators;	// 56 = 0x38
    HDSortedSampleIterator *_nextIterator;	// 64 = 0x40
    _Bool _isInitialized;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x0000000000418dc2
- (id)iteratorStateData;	// IMP=0x0000000000418ce0
- (_Bool)restoreIteratorStateFromData:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000418a5c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000418895
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000418770
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) long long objectID;
@property(readonly, nonatomic) HKDeletedObject *deletedObject;
@property(readonly, nonatomic) HKSample *sample;
- (id)object;	// IMP=0x0000000000418696
- (_Bool)advanceWithError:(id *)arg1;	// IMP=0x0000000000417e6d
- (id)initWithQueryDescriptors:(id)arg1 includeDeletedObjects:(_Bool)arg2 anchor:(id)arg3 sortDescriptors:(id)arg4 bufferSize:(long long)arg5 profile:(id)arg6;	// IMP=0x00000000004179a6
- (id)init;	// IMP=0x00000000004178bd

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

