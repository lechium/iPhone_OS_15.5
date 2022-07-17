//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ClassroomKit/CATRemoteConnectionDelegate-Protocol.h>

@class DMFControlSessionIdentifier, NSDate, NSString;

@interface CRKClassSession <CATRemoteConnectionDelegate>
{
    unsigned short _flags;	// 8 = 0x8
    DMFControlSessionIdentifier *_identifier;	// 16 = 0x10
    NSDate *_lastBeaconFoundDate;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000001271c
@property(retain, nonatomic) NSDate *lastBeaconFoundDate; // @synthesize lastBeaconFoundDate=_lastBeaconFoundDate;
@property(nonatomic) unsigned short flags; // @synthesize flags=_flags;
@property(readonly, nonatomic) DMFControlSessionIdentifier *identifier; // @synthesize identifier=_identifier;
- (id)lastMatchMessageForCurrentDate:(id)arg1;	// IMP=0x0000000000012622
- (void)logBeaconFound;	// IMP=0x00000000000124c1
- (void)lostBeacon;	// IMP=0x0000000000012298
- (id)stateDictionary;	// IMP=0x000000000001217e
- (void)foundBeaconWithFlags:(unsigned short)arg1;	// IMP=0x000000000001207b
- (id)initWithIdentifier:(id)arg1;	// IMP=0x0000000000011f6b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
