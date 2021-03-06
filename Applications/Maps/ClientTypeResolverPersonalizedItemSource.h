//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class AddressBookManager, CoreRoutineLocationOfInterestManager;

__attribute__((visibility("hidden")))
@interface ClientTypeResolverPersonalizedItemSource
{
    AddressBookManager *_addressBookManager;	// 8 = 0x8
    CoreRoutineLocationOfInterestManager *_locationOfInterestManager;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x002000000048dc8e
@property(retain, nonatomic) CoreRoutineLocationOfInterestManager *locationOfInterestManager; // @synthesize locationOfInterestManager=_locationOfInterestManager;
@property(retain, nonatomic) AddressBookManager *addressBookManager; // @synthesize addressBookManager=_addressBookManager;
- (void)addressOrLOIWithType:(int)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000048d8a6
- (id)cachedLOIWithType:(int)arg1;	// IMP=0x001000000048d846
- (id)cachedAddressWithType:(int)arg1;	// IMP=0x001000000048d7e6
- (id)cachedObjectWithType:(int)arg1;	// IMP=0x001000000048d5e7
- (void)objectWithType:(int)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000048ce7c
- (_Bool)hasObjectWithType:(int)arg1;	// IMP=0x001000000048cdef
- (id)knownTypes;	// IMP=0x001000000048cde2
- (_Bool)homeAndWorkEnabled;	// IMP=0x001000000048cdcb
- (id)initWithAddressBookManager:(id)arg1 locationOfInterestManager:(id)arg2;	// IMP=0x001000000048ccdd

@end

