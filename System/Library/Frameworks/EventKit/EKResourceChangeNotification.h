//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDate, NSSet;

@interface EKResourceChangeNotification
{
}

+ (id)knownRelationshipMultiValueKeys;	// IMP=0x00000000000898f5
+ (Class)frozenClass;	// IMP=0x00000000000898e4
- (void)removeResourceChange:(id)arg1;	// IMP=0x0000000000089afb
- (void)addResourceChange:(id)arg1;	// IMP=0x0000000000089a8f
@property(copy, nonatomic) NSSet *resourceChanges;
@property(copy, nonatomic) NSDate *lastModifiedDate;

@end
