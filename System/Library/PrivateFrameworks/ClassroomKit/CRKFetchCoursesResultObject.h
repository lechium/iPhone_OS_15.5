//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <DeviceManagement/CATTaskResultObject.h>

@class NSArray;

@interface CRKFetchCoursesResultObject : CATTaskResultObject
{
    NSArray *_courses;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000009ad33
- (void).cxx_destruct;	// IMP=0x000000000009aeea
@property(copy, nonatomic) NSArray *courses; // @synthesize courses=_courses;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000009ae2d
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000009ad3b

@end

