//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <MapsSupport/MSPPositionSignpost-Protocol.h>
#import <MapsSupport/NSCopying-Protocol.h>
#import <MapsSupport/NSSecureCoding-Protocol.h>

@class NSArray, NSData, NSString;

@interface MSPPosition : NSObject <NSSecureCoding, NSCopying, MSPPositionSignpost>
{
    NSArray *_pathComponents;	// 8 = 0x8
}

+ (id)positionBetweenSignpost:(id)arg1 andSignpost:(id)arg2 clientIdentifier:(id)arg3;	// IMP=0x0000000000037474
+ (id)positionBetweenPosition:(id)arg1 andPosition:(id)arg2 clientIdentifier:(id)arg3;	// IMP=0x00000000000372f7
+ (_Bool)_hasSpaceForInsertionAtDepth:(unsigned long long)arg1 betweenEarlierPosition:(id)arg2 andLaterPosition:(id)arg3 clientIdentifier:(id)arg4;	// IMP=0x00000000000371ea
+ (long long)_strategyForAllocationAtDepth:(unsigned long long)arg1;	// IMP=0x0000000000037009
+ (_Bool)_randBoolForStrategy:(unsigned long long)arg1;	// IMP=0x0000000000036fcc
+ (id)finalSignpostWithClientIdentifier:(id)arg1;	// IMP=0x0000000000036c33
+ (id)initialSignpostWithClientIdentifier:(id)arg1;	// IMP=0x0000000000036c21
+ (id)finalPositionWithClientIdentifier:(id)arg1;	// IMP=0x0000000000036b3e
+ (id)initialPositionWithClientIdentifier:(id)arg1;	// IMP=0x0000000000036a5e
+ (id)_pathComponentsForSignpost:(id)arg1;	// IMP=0x0000000000036675
+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000075a6d
- (void).cxx_destruct;	// IMP=0x0000000000038316
@property(readonly, getter=_pathComponents) NSArray *pathComponents; // @synthesize pathComponents=_pathComponents;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000037f7d
@property(readonly) unsigned long long hash;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000037e2d
- (long long)compare:(id)arg1;	// IMP=0x0000000000037c09
- (_Bool)_isFinal;	// IMP=0x00000000000373be
- (_Bool)_isInitial;	// IMP=0x0000000000037309
- (id)_positionByTruncatingOrExtendingToDepth:(unsigned long long)arg1 clientIdentifier:(id)arg2;	// IMP=0x0000000000036e86
- (id)_addingDistanceAtEqualDepth:(long long)arg1 clientIdentifier:(id)arg2;	// IMP=0x0000000000036c45
- (id)_initWithIndexes:(id)arg1 originIdentifier:(id)arg2;	// IMP=0x0000000000036764
- (id)_initWithPathComponents:(id)arg1;	// IMP=0x00000000000366f1
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000075f94
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000075f07
- (id)initWithSerializedRepresentation:(id)arg1;	// IMP=0x0000000000075cf4
@property(readonly, nonatomic) NSData *serializedRepresentation;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
