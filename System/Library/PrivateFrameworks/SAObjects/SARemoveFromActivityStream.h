//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDate, NSString;

@interface SARemoveFromActivityStream
{
}

+ (id)removeFromActivityStreamWithDictionary:(id)arg1 context:(id)arg2;	// IMP=0x0000000000020161
+ (id)removeFromActivityStream;	// IMP=0x000000000002014f
- (_Bool)requiresResponse;	// IMP=0x0000000000020237
@property(copy, nonatomic) NSString *visibility;
@property(copy, nonatomic) NSDate *toDate;
@property(copy, nonatomic) NSString *taskType;
@property(copy, nonatomic) NSString *streamType;
@property(copy, nonatomic) NSDate *fromDate;
@property(copy, nonatomic) NSString *activityType;
- (id)encodedClassName;	// IMP=0x0000000000020142
- (id)groupIdentifier;	// IMP=0x000000000002012e

@end
