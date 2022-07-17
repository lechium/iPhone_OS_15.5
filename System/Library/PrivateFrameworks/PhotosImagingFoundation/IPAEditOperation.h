//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotosImagingFoundation/NSCopying-Protocol.h>
#import <PhotosImagingFoundation/NSObject-Protocol.h>

@class NSString;

@interface IPAEditOperation : NSObject <NSObject, NSCopying>
{
}

+ (id)_mapDispatchQueue;	// IMP=0x0000000000013ddb
+ (id)_uuidForIdentifierMap;	// IMP=0x0000000000013dab
+ (id)_identifierForUUIDMap;	// IMP=0x0000000000013d7b
+ (id)operationUUIDForIdentifier:(id)arg1;	// IMP=0x0000000000013c3f
+ (id)operationIdentifierForUUID:(id)arg1;	// IMP=0x0000000000013b0e
+ (id)presetifyAdjustment:(id)arg1;	// IMP=0x0000000000014080
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
- (id)settingsDictionary;	// IMP=0x00000000000137f3
- (id)UUID;	// IMP=0x00000000000136f5
- (id)autoIdentifier;	// IMP=0x00000000000136ed
- (id)identifier;	// IMP=0x00000000000136b0
- (_Bool)isEqualToOperation:(id)arg1;	// IMP=0x0000000000013613
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000135ba
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000013572
- (id)initWithSettingsDictionary:(id)arg1;	// IMP=0x0000000000013524
- (id)initWithOperation:(id)arg1;	// IMP=0x0000000000013512
- (id)init;	// IMP=0x00000000000134e3
- (id)archivalRepresentation;	// IMP=0x0000000000014043

// Remaining properties
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
