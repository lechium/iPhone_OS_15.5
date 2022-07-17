//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreData/NSManagedObject.h>

@class NSData, NSDate, NSNumber, NSString, NSUUID;

@interface CNContactImageManagedObject : NSManagedObject
{
}

+ (CDUnknownBlockType)managedObjectToContactImageTransform;	// IMP=0x0000000000042d63
- (id)cropRectStringFromCGRect:(struct CGRect)arg1;	// IMP=0x0000000000042d59
- (void)setupWithContactImage:(id)arg1 contactIdentifier:(id)arg2;	// IMP=0x0000000000042c79
- (void)updateWithContactImage:(id)arg1;	// IMP=0x0000000000042a79

// Remaining properties
@property(retain, nonatomic) NSString *contactIdentifier; // @dynamic contactIdentifier;
@property(retain, nonatomic) NSString *cropRectString; // @dynamic cropRectString;
@property(retain, nonatomic) NSString *displayString; // @dynamic displayString;
@property(retain, nonatomic) NSUUID *identifier; // @dynamic identifier;
@property(retain, nonatomic) NSData *imageData; // @dynamic imageData;
@property(retain, nonatomic) NSDate *lastUsedDate; // @dynamic lastUsedDate;
@property(retain, nonatomic) NSData *poseConfigurationData; // @dynamic poseConfigurationData;
@property(retain, nonatomic) NSNumber *source; // @dynamic source;
@property(retain, nonatomic) NSString *sourceIdentifier; // @dynamic sourceIdentifier;
@property(retain, nonatomic) NSString *variant; // @dynamic variant;

@end
