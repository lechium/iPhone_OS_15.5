//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface TUContactsDataProviderResult : NSObject
{
    int _legacyAddressBookIdentifier;	// 8 = 0x8
    NSString *_localizedName;	// 16 = 0x10
    NSString *_companyName;	// 24 = 0x18
    NSString *_contactLabel;	// 32 = 0x20
    NSArray *_contacts;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000004c8e0
@property(copy, nonatomic) NSArray *contacts; // @synthesize contacts=_contacts;
@property(nonatomic) int legacyAddressBookIdentifier; // @synthesize legacyAddressBookIdentifier=_legacyAddressBookIdentifier;
@property(copy, nonatomic) NSString *contactLabel; // @synthesize contactLabel=_contactLabel;
@property(copy, nonatomic) NSString *companyName; // @synthesize companyName=_companyName;
@property(copy, nonatomic) NSString *localizedName; // @synthesize localizedName=_localizedName;
- (id)description;	// IMP=0x000000000004c6a7

@end

