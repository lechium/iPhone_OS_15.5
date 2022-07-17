//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, NSURL, REMCDList;

@interface REMCDCalDAVNotification
{
}

+ (id)cdEntityName;	// IMP=0x0010000000048af8
+ (_Bool)isAbstract;	// IMP=0x0010000000048af0
+ (_Bool)shouldSyncToCloud;	// IMP=0x0010000000048ae8
+ (id)fetchRequest;	// IMP=0x00100000000427f1
- (_Bool)isConnectedToAccountObject:(id)arg1;	// IMP=0x0020000000048a71

// Remaining properties
@property(copy, nonatomic) NSURL *hostURL; // @dynamic hostURL;
@property(retain, nonatomic) REMCDList *owner; // @dynamic owner;
@property(copy, nonatomic) NSString *uuidString; // @dynamic uuidString;

@end
