//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreData/NSManagedObject.h>

@class NSString;

@interface BCSaltVersionIdentifier : NSManagedObject
{
}

+ (id)fetchRequest;	// IMP=0x000000000004bb0e
- (id)initIntoManagedObjectContext:(id)arg1;	// IMP=0x000000000004bb2e

// Remaining properties
@property(retain, nonatomic) NSString *localSaltVersionIdentifier; // @dynamic localSaltVersionIdentifier;
@property(retain, nonatomic) NSString *serverSaltVersionIdentifier; // @dynamic serverSaltVersionIdentifier;

@end

