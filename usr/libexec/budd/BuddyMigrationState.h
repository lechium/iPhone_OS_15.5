//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate, NSString;

@interface BuddyMigrationState : NSObject
{
    NSString *_productBuild;	// 8 = 0x8
    unsigned long long _intent;	// 16 = 0x10
    NSDate *_persistDate;	// 24 = 0x18
}

+ (void)removeFromDisk;	// IMP=0x0040000000007e95
+ (_Bool)hasStateOnDisk;	// IMP=0x0010000000007ce6
+ (id)loadFromDisk;	// IMP=0x0010000000007b28
- (void).cxx_destruct;	// IMP=0x0020000000007fc5
@property(retain, nonatomic) NSDate *persistDate; // @synthesize persistDate=_persistDate;
@property(nonatomic) unsigned long long intent; // @synthesize intent=_intent;
@property(retain, nonatomic) NSString *productBuild; // @synthesize productBuild=_productBuild;
- (id)description;	// IMP=0x0010000000007ee2
- (void)persist;	// IMP=0x0010000000007d57
- (id)initWithProductBuild:(id)arg1 intent:(unsigned long long)arg2;	// IMP=0x0010000000007b13
- (id)initWithProductBuild:(id)arg1 intent:(unsigned long long)arg2 persistDate:(id)arg3;	// IMP=0x0010000000007a6e

@end
