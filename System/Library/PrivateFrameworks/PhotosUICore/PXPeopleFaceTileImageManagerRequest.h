//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class PHAsset, PHFace, PHPerson;

@interface PXPeopleFaceTileImageManagerRequest : NSObject
{
    _Bool _synchronous;	// 8 = 0x8
    PHPerson *_person;	// 16 = 0x10
    PHFace *_face;	// 24 = 0x18
    PHAsset *_asset;	// 32 = 0x20
    long long _deliveryMode;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000000243f9b
@property(nonatomic) _Bool synchronous; // @synthesize synchronous=_synchronous;
@property(nonatomic) long long deliveryMode; // @synthesize deliveryMode=_deliveryMode;
@property(readonly, nonatomic) PHAsset *asset; // @synthesize asset=_asset;
@property(retain, nonatomic) PHFace *face; // @synthesize face=_face;
@property(readonly, nonatomic) PHPerson *person; // @synthesize person=_person;
- (id)description;	// IMP=0x0000000000243ef8
- (id)initWithFaceTile:(id)arg1;	// IMP=0x0000000000243e3a
- (id)initWithPerson:(id)arg1 face:(id)arg2 asset:(id)arg3;	// IMP=0x0000000000243d83
- (id)initWithPerson:(id)arg1;	// IMP=0x0000000000243d6c

@end

