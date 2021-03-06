//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol GEOMapItem;

__attribute__((visibility("hidden")))
@interface AddressBookAddressItemKey : NSObject
{
    NSString *_keyString;	// 8 = 0x8
    id <GEOMapItem> _geoMapItem;	// 16 = 0x10
    unsigned long long _geoMapItemHash;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x002000000077af7f
@property(nonatomic) unsigned long long geoMapItemHash; // @synthesize geoMapItemHash=_geoMapItemHash;
@property(retain, nonatomic) id <GEOMapItem> geoMapItem; // @synthesize geoMapItem=_geoMapItem;
@property(copy, nonatomic) NSString *keyString; // @synthesize keyString=_keyString;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000077af2c
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000077ad8c
@property(readonly) unsigned long long hash;
- (id)initWithAddressBookAddress:(id)arg1;	// IMP=0x001000000077ab89
- (id)init;	// IMP=0x001000000077ab7b

@end

