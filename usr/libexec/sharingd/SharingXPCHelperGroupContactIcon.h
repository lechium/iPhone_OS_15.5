//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray;

__attribute__((visibility("hidden")))
@interface SharingXPCHelperGroupContactIcon
{
    NSArray *_contacts;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x002000000002c9f4
- (void).cxx_destruct;	// IMP=0x002000000002ce99
@property(readonly, retain, nonatomic) NSArray *contacts; // @synthesize contacts=_contacts;
- (id)description;	// IMP=0x001000000002cdda
- (id)contactIDs;	// IMP=0x001000000002cc08
- (void)encodeWithCoder:(id)arg1;	// IMP=0x001000000002cb94
- (id)initWithCoder:(id)arg1;	// IMP=0x001000000002cb14
- (id)initWithContacts:(id)arg1 icon:(struct CGImage *)arg2 atIndex:(long long)arg3 cacheLookupKey:(id)arg4;	// IMP=0x001000000002ca88
- (id)initWithContacts:(id)arg1 iconData:(id)arg2 atIndex:(long long)arg3 cacheLookupKey:(id)arg4;	// IMP=0x001000000002c9fc

@end
