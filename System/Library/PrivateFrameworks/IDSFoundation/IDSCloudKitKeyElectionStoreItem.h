//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ENGroupID, NSString;

@interface IDSCloudKitKeyElectionStoreItem : NSObject
{
    NSString *_groupName;	// 8 = 0x8
    ENGroupID *_groupID;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000009db10
@property(retain, nonatomic) ENGroupID *groupID; // @synthesize groupID=_groupID;
@property(retain, nonatomic) NSString *groupName; // @synthesize groupName=_groupName;
- (id)description;	// IMP=0x000000000009da24

@end
