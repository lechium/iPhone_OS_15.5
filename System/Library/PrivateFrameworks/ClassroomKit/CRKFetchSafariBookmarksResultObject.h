//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <DeviceManagement/CATTaskResultObject.h>

@class NSArray;

@interface CRKFetchSafariBookmarksResultObject : CATTaskResultObject
{
    NSArray *_bookmarks;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000003b138
- (void).cxx_destruct;	// IMP=0x000000000003b2ef
@property(copy, nonatomic) NSArray *bookmarks; // @synthesize bookmarks=_bookmarks;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000003b232
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000003b140

@end
