//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreData/NSManagedObject.h>

@class NSString, REMCDAccount;

@interface REMCKSharedObjectOwnerName : NSManagedObject
{
}

+ (id)fetchRequest;	// IMP=0x002000000003f880

// Remaining properties
@property(retain, nonatomic) REMCDAccount *account; // @dynamic account;
@property(copy, nonatomic) NSString *objectIdentifier; // @dynamic objectIdentifier;
@property(copy, nonatomic) NSString *ownerName; // @dynamic ownerName;

@end

