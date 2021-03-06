//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CNContactFormatter, CNContactStore;

@interface FMFContactUtility : NSObject
{
    CNContactStore *_contactStore;	// 8 = 0x8
    CNContactFormatter *_contactFormatter;	// 16 = 0x10
}

+ (id)sharedInstance;	// IMP=0x0000000000029bc6
- (void).cxx_destruct;	// IMP=0x000000000002abbc
@property(retain, nonatomic) CNContactFormatter *contactFormatter; // @synthesize contactFormatter=_contactFormatter;
@property(retain, nonatomic) CNContactStore *contactStore; // @synthesize contactStore=_contactStore;
- (id)contactKeys;	// IMP=0x000000000002a931
- (id)findOptimalContactInContacts:(id)arg1;	// IMP=0x000000000002a69a
- (id)getContactForHandle:(id)arg1 keysToFetch:(id)arg2;	// IMP=0x000000000002a375
- (id)getContactForHandle:(id)arg1;	// IMP=0x000000000002a2f8
- (id)displayNameForContact:(id)arg1 andHandle:(id)arg2;	// IMP=0x000000000002a060
- (id)shortDisplayNameForContact:(id)arg1 andHandle:(id)arg2;	// IMP=0x0000000000029dbe

@end

