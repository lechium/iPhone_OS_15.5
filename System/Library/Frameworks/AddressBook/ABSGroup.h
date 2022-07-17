//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AddressBook/ABSRecord-Protocol.h>

@class ABSAddressBook, ABSSource, CNMutableGroup, NSString;

@interface ABSGroup : NSObject <ABSRecord>
{
    int _revertedRecordID;	// 8 = 0x8
    ABSAddressBook *_addressBook;	// 16 = 0x10
    ABSSource *_source;	// 24 = 0x18
    CNMutableGroup *_cnImpl;	// 32 = 0x20
}

+ (id)propertyKeyForPropertyID:(int)arg1;	// IMP=0x000000000001b9ff
+ (void)initialize;	// IMP=0x000000000001b15d
- (void).cxx_destruct;	// IMP=0x000000000001ba86
@property(nonatomic) int revertedRecordID; // @synthesize revertedRecordID=_revertedRecordID;
@property(retain, nonatomic) CNMutableGroup *cnImpl; // @synthesize cnImpl=_cnImpl;
@property(nonatomic) __weak ABSSource *source; // @synthesize source=_source;
@property(nonatomic) __weak ABSAddressBook *addressBook; // @synthesize addressBook=_addressBook;
- (void)replaceRecordStorageWithCNObject:(id)arg1;	// IMP=0x000000000001b921
- (void)updateAllValuesWithValuesFromGroup:(id)arg1;	// IMP=0x000000000001b6e0
- (_Bool)removeProperty:(int)arg1 withError:(id *)arg2;	// IMP=0x000000000001b630
- (_Bool)setValue:(void *)arg1 forProperty:(int)arg2 withError:(struct __CFError **)arg3;	// IMP=0x000000000001b560
- (const void *)copyValueForProperty:(int)arg1;	// IMP=0x000000000001b50e
@property(readonly, nonatomic) NSString *compositeName;
@property(readonly, nonatomic) unsigned int type;
@property(readonly, nonatomic) NSString *CNIdentifierString;
@property(readonly, nonatomic) int id;
- (unsigned long long)_cfTypeID;	// IMP=0x000000000001b293
- (id)init;	// IMP=0x000000000001b27f
- (id)initWithMutableGroup:(id)arg1;	// IMP=0x000000000001b1f7
- (id)initWithSource:(id)arg1;	// IMP=0x000000000001b1a0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
