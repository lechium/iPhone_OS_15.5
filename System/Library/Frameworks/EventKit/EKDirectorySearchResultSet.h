//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSSet;

@interface EKDirectorySearchResultSet : NSObject
{
    NSSet *_locations;	// 8 = 0x8
    NSSet *_groups;	// 16 = 0x10
    NSSet *_resources;	// 24 = 0x18
    NSSet *_people;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000000179c
@property(retain, nonatomic) NSSet *people; // @synthesize people=_people;
@property(retain, nonatomic) NSSet *resources; // @synthesize resources=_resources;
@property(retain, nonatomic) NSSet *groups; // @synthesize groups=_groups;
@property(retain, nonatomic) NSSet *locations; // @synthesize locations=_locations;

@end

