//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MKFCKAppleMediaAccessoryResident, NSDictionary, NSNumber;

@interface MKFCKAppleMediaAccessory
{
}

+ (id)fetchRequest;	// IMP=0x0000000000b91c06
- (_Bool)exportFromLocalModel:(id)arg1 updatedProperties:(id)arg2 context:(id)arg3;	// IMP=0x00000000007e25de
- (_Bool)importIntoLocalModel:(id)arg1 updatedProperties:(id)arg2 context:(id)arg3;	// IMP=0x00000000007e2020
- (id)_encodeSettingGroup:(id)arg1;	// IMP=0x0000000000516842

// Remaining properties
@property(retain, nonatomic) MKFCKAppleMediaAccessoryResident *resident; // @dynamic resident;
@property(retain, nonatomic) NSDictionary *settings; // @dynamic settings;
@property(copy, nonatomic) NSNumber *variant; // @dynamic variant;

@end

