//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SAObjects/SAAceSerializable-Protocol.h>

@class NSArray, NSDate, NSDictionary, NSNumber, NSString;

@interface SAFetchActivityStream <SAAceSerializable>
{
}

+ (id)fetchActivityStreamWithDictionary:(id)arg1 context:(id)arg2;	// IMP=0x0000000000001882
+ (id)fetchActivityStream;	// IMP=0x0000000000001870
- (_Bool)requiresResponse;	// IMP=0x0000000000001a02
@property(copy, nonatomic) NSString *visibility;
@property(copy, nonatomic) NSDate *toDate;
@property(copy, nonatomic) NSString *taskType;
@property(copy, nonatomic) NSArray *streamTypes;
@property(copy, nonatomic) NSString *sortBy;
@property(copy, nonatomic) NSDictionary *matchingMetadataKeysAndStringValues;
@property(copy, nonatomic) NSArray *matchingMetadataKeys;
@property(copy, nonatomic) NSNumber *limit;
@property(copy, nonatomic) NSDate *fromDate;
@property(nonatomic) _Bool ascending;
@property(copy, nonatomic) NSString *activityType;
- (id)encodedClassName;	// IMP=0x0000000000001863
- (id)groupIdentifier;	// IMP=0x000000000000184f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
