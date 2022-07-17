//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDate, NSString;

@interface PGGraphContactNode
{
    NSString *_name;	// 8 = 0x8
    NSString *_contactIdentifier;	// 16 = 0x10
    NSDate *_birthdayDate;	// 24 = 0x18
    NSDate *_potentialBirthdayDate;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000004c6fea
@property(readonly) NSDate *potentialBirthdayDate; // @synthesize potentialBirthdayDate=_potentialBirthdayDate;
@property(readonly) NSDate *birthdayDate; // @synthesize birthdayDate=_birthdayDate;
@property(readonly) NSString *contactIdentifier; // @synthesize contactIdentifier=_contactIdentifier;
@property(readonly) NSString *name; // @synthesize name=_name;
- (unsigned long long)sexHintForGivenName;	// IMP=0x00000000004c6e9f
- (unsigned short)domain;	// IMP=0x00000000004c6e94
- (id)label;	// IMP=0x00000000004c6e75
- (id)description;	// IMP=0x00000000004c6de8
- (id)propertyDictionary;	// IMP=0x00000000004c6cc0
- (_Bool)hasProperties:(id)arg1;	// IMP=0x00000000004c6ae5
- (void)setLocalProperties:(id)arg1;	// IMP=0x00000000004c6934
- (id)initWithLabel:(id)arg1 domain:(unsigned short)arg2 weight:(float)arg3 properties:(id)arg4;	// IMP=0x00000000004c67b5
- (id)initWithName:(id)arg1 contactIdentifier:(id)arg2 birthdayDate:(id)arg3 potentialBirthdayDate:(id)arg4;	// IMP=0x00000000004c66be

@end
