//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, NSUUID;

@interface NTKDCollectionStoreKey : NSObject
{
    NSString *_collectionIdentifier;	// 8 = 0x8
    NSUUID *_deviceUUID;	// 16 = 0x10
}

+ (id)keyWithCollectionIdentifier:(id)arg1 deviceUUID:(id)arg2;	// IMP=0x0020000000006795
- (void).cxx_destruct;	// IMP=0x00200000000069ce
@property(readonly, nonatomic) NSUUID *deviceUUID; // @synthesize deviceUUID=_deviceUUID;
// Error: Property attributes should begin with the type ('T') attribute, property name: collectionIdentifier
// Property attributes: (null)

- (id)description;	// IMP=0x00100000000069a8
- (id)plistRepresentation;	// IMP=0x001000000000691d
- (unsigned long long)hash;	// IMP=0x00100000000068de
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000000681d
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000006812

@end

