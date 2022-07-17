//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HealthDaemon/HDDeletedObjectIterator-Protocol.h>
#import <HealthDaemon/HDSampleIterator-Protocol.h>

@class HDProfile, HDQueryDescriptor, HKDeletedObject, HKSample, HKSortedQueryAnchor, NSArray, NSError, NSSet, NSString;

@interface HDSortedSampleIterator : NSObject <HDSampleIterator, HDDeletedObjectIterator>
{
    HDQueryDescriptor *_queryDescriptor;	// 8 = 0x8
    _Bool _includeDeletedObjects;	// 16 = 0x10
    NSArray *_sortDescriptors;	// 24 = 0x18
    HKSortedQueryAnchor *_anchor;	// 32 = 0x20
    long long _bufferSize;	// 40 = 0x28
    NSSet *_restrictedSourceEntities;	// 48 = 0x30
    HDProfile *_profile;	// 56 = 0x38
    NSError *_lastError;	// 64 = 0x40
    _Bool _isComplete;	// 72 = 0x48
    struct vector<std::tuple<long long, HKSample *>, std::allocator<std::tuple<long long, HKSample *>>> _sampleBuffer;	// 80 = 0x50
    struct vector<std::tuple<long long, HKDeletedObject *>, std::allocator<std::tuple<long long, HKDeletedObject *>>> _deletedObjectsBuffer;	// 104 = 0x68
    struct tuple<long long, HKSample *> _currentSample;	// 128 = 0x80
    struct tuple<long long, HKDeletedObject *> _currentDeletedObject;	// 144 = 0x90
    id _currentHead;	// 160 = 0xa0
}

- (id).cxx_construct;	// IMP=0x000000000012288c
- (void).cxx_destruct;	// IMP=0x0000000000122800
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000012266f
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001222e6
@property(readonly) unsigned long long hash;
@property(readonly, copy, nonatomic) HKSortedQueryAnchor *nextAnchor;
@property(readonly, nonatomic) long long objectID;
@property(readonly, nonatomic) HKDeletedObject *deletedObject;
@property(readonly, nonatomic) HKSample *sample;
- (id)object;	// IMP=0x000000000012204b
- (_Bool)advanceWithError:(id *)arg1;	// IMP=0x0000000000121950
- (id)initWithQueryDescriptor:(id)arg1 includeDeletedObjects:(_Bool)arg2 sortDescriptors:(id)arg3 anchor:(id)arg4 bufferSize:(long long)arg5 profile:(id)arg6;	// IMP=0x0000000000121567
- (id)init;	// IMP=0x00000000001214d0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end
