//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class EKObjectID, NSString, NSURL;

@interface EKNotification
{
}

+ (id)knownRelationshipSingleValueKeys;	// IMP=0x0000000000057352
+ (Class)frozenClass;	// IMP=0x0000000000057341
- (_Bool)save:(id *)arg1;	// IMP=0x0000000000057545
- (id)calendar;	// IMP=0x0000000000057529
@property(copy, nonatomic) NSString *UUID;
@property(copy, nonatomic) NSString *externalModificationTag;
@property(copy, nonatomic) NSURL *hostURL;
@property(copy, nonatomic) NSString *externalID;
@property(readonly, nonatomic) EKObjectID *objectID;

@end

