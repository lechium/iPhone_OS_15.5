//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSDate, NSDictionary, WBSPersistentPropertyListStore;

@interface WBSPasswordBreachStore : NSObject
{
    WBSPersistentPropertyListStore *_store;	// 8 = 0x8
}

+ (_Bool)_readAndValidatePersistentIdentifierCanaryWithPersistentIdentifier:(id)arg1 expectedValue:(id)arg2;	// IMP=0x0000000000015cab
+ (id)_createPersistentIdentifierCanary;	// IMP=0x000000000001577a
- (void).cxx_destruct;	// IMP=0x0000000000015f23
- (void)saveAndCloseStoreSynchronously;	// IMP=0x0000000000015764
- (void)saveStoreSynchronously;	// IMP=0x000000000001574e
@property(retain, nonatomic) NSDate *lastSessionCompletionDate;
@property(nonatomic) unsigned long long rampIdentifier;
@property(retain, nonatomic) NSArray *recentlyBreachedPersistentIdentifiers;
@property(retain, nonatomic) NSArray *resultRecords;
@property(retain, nonatomic) NSDictionary *queuedPasswordBagManagerState;
- (id)initWithBackingStoreURL:(id)arg1;	// IMP=0x00000000000150fb

@end

