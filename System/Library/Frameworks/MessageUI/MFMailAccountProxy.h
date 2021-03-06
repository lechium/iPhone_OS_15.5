//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSString;

@interface MFMailAccountProxy : NSObject
{
    NSDictionary *_properties;	// 8 = 0x8
}

+ (id)log;	// IMP=0x0000000000075e17
- (void).cxx_destruct;	// IMP=0x000000000007647c
@property(readonly, nonatomic) id mailAccount;
- (_Bool)_isRestricted;	// IMP=0x000000000007638b
- (_Bool)_isActive;	// IMP=0x0000000000076325
@property(readonly, nonatomic) _Bool isManaged;
@property(readonly, nonatomic) _Bool supportsMailDrop;
@property(readonly, nonatomic) _Bool restrictsRepliesAndForwards;
@property(readonly, nonatomic) _Bool supportsThreadOperations;
@property(readonly, nonatomic) NSString *uniqueID;
- (id)_emailAddressesAndAliases;	// IMP=0x000000000007614d
@property(readonly, nonatomic) NSArray *fromEmailAddressesIncludingDisabled;
@property(readonly, nonatomic) NSArray *fromEmailAddresses;
@property(readonly, nonatomic) NSArray *emailAddresses;
@property(readonly, nonatomic) NSString *firstEmailAddress;
@property(readonly, nonatomic) NSString *username;
@property(readonly, nonatomic) NSString *fullUserName;
@property(readonly, nonatomic) _Bool isDefaultDeliveryAccount;
- (id)_initWithProperties:(id)arg1;	// IMP=0x0000000000075ef4

@end

