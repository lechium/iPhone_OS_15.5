//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AAJSON, MISSING_TYPE, NSString;

@interface AAProcessEvent : NSObject
{
    MISSING_TYPE *name;	// 8 = 0x8
    MISSING_TYPE *version;	// 24 = 0x18
    MISSING_TYPE *json;	// 40 = 0x28
    MISSING_TYPE *groupName;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000000002c1d0
- (id)init;	// IMP=0x000000000002c150
@property(nonatomic, readonly) NSString *groupName;
@property(nonatomic, readonly) AAJSON *json; // @synthesize json;
@property(nonatomic, readonly) NSString *version;
@property(nonatomic, readonly) NSString *name;

@end

