//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreData/NSManagedObject.h>

@class NSData, NSSet, NSString;

__attribute__((visibility("hidden")))
@interface SecCDKeychainManagedItemType : NSManagedObject
{
}

+ (id)fetchRequest;	// IMP=0x00200000001d28ae

// Remaining properties
@property(retain, nonatomic) NSSet *items; // @dynamic items;
@property(copy, nonatomic) NSString *name; // @dynamic name;
@property(retain, nonatomic) NSData *primaryKeys; // @dynamic primaryKeys;
@property(retain, nonatomic) NSData *syncableKeys; // @dynamic syncableKeys;
@property(nonatomic) int version; // @dynamic version;

@end
