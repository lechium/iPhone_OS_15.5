//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ClassroomKit/CRKASMUser-Protocol.h>

@class NSDate, NSString;
@protocol CRKASMNameComponents, CRKClassKitPerson;

@interface CRKASMConcreteUser : NSObject <CRKASMUser>
{
    NSString *_identifier;	// 8 = 0x8
    NSString *_appleID;	// 16 = 0x10
    id <CRKASMNameComponents> _nameComponents;	// 24 = 0x18
    id <CRKClassKitPerson> _backingPerson;	// 32 = 0x20
    NSDate *_backingPersonInitialModificationDate;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000003329c
@property(readonly, nonatomic) NSDate *backingPersonInitialModificationDate; // @synthesize backingPersonInitialModificationDate=_backingPersonInitialModificationDate;
@property(readonly, nonatomic) id <CRKClassKitPerson> backingPerson; // @synthesize backingPerson=_backingPerson;
@property(readonly, nonatomic) id <CRKASMNameComponents> nameComponents; // @synthesize nameComponents=_nameComponents;
@property(readonly, copy, nonatomic) NSString *appleID; // @synthesize appleID=_appleID;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000033124
@property(readonly) unsigned long long hash;
- (_Bool)isEqualToConcreteUser:(id)arg1;	// IMP=0x0000000000032d10
- (id)initWithBackingPerson:(id)arg1;	// IMP=0x0000000000032c04

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
