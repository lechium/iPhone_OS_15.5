//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AppleMediaServices/AMSStorageDatabasePersistable-Protocol.h>

@class NSData, NSString;

@interface AMSDeviceOfferRegistrationItem : NSObject <AMSStorageDatabasePersistable>
{
    NSString *_model;	// 8 = 0x8
    NSString *_serialNumber;	// 16 = 0x10
    NSData *_validationData;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000010cabd
@property(readonly, nonatomic) NSData *validationData; // @synthesize validationData=_validationData;
@property(readonly, nonatomic) NSString *serialNumber; // @synthesize serialNumber=_serialNumber;
@property(readonly, nonatomic) NSString *model; // @synthesize model=_model;
- (_Bool)isEqualToRegistrationItem:(id)arg1;	// IMP=0x000000000010c7ce
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000010c761
@property(readonly) unsigned long long hash;
- (id)serializeToDictionary;	// IMP=0x000000000010c5a9
@property(readonly, copy) NSString *description;
- (id)initWithSerialNumber:(id)arg1 model:(id)arg2 validationData:(id)arg3;	// IMP=0x000000000010c435
- (id)initWithDatabaseEntry:(id)arg1;	// IMP=0x000000000010c33d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
