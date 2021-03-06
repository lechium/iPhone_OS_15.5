//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ReminderKit/REMAuxiliaryChangeInfoObject-Protocol.h>

@class NSDictionary, NSString, REMObjectID;

@interface REMAuxiliaryChangeInfoType : NSObject <REMAuxiliaryChangeInfoObject>
{
    REMObjectID *remObjectID;	// 8 = 0x8
    NSDictionary *_storage;	// 16 = 0x10
}

+ (_Bool)resolveInstanceMethod:(SEL)arg1;	// IMP=0x0000000000035889
+ (id)objectIDWithUUID:(id)arg1;	// IMP=0x0000000000035773
+ (id)newObjectID;	// IMP=0x0000000000035711
+ (id)cdEntityName;	// IMP=0x0000000000035634
- (void).cxx_destruct;	// IMP=0x00000000000359ad
@property(retain, nonatomic) NSDictionary *storage; // @synthesize storage=_storage;
@property(retain, nonatomic) REMObjectID *remObjectID; // @synthesize remObjectID;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;	// IMP=0x0000000000035883
- (id)valueForUndefinedKey:(id)arg1;	// IMP=0x0000000000035800
- (id)initWithREMObjectID:(id)arg1;	// IMP=0x00000000000356a4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

