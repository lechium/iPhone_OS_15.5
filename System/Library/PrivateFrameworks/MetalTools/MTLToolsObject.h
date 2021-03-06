//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MTLToolsDevice;
@protocol MTLDevice;

@interface MTLToolsObject : NSObject
{
    MTLToolsObject *_parent;	// 8 = 0x8
    MTLToolsObject *_baseObject;	// 16 = 0x10
    MTLToolsDevice *_device;	// 24 = 0x18
    _Atomic int _externalReferences;	// 32 = 0x20
}

@property(retain, nonatomic) id baseObject; // @synthesize baseObject=_baseObject;
- (id)strongParent;	// IMP=0x000000000002d96a
- (id)parent;	// IMP=0x000000000002d95b
- (void)setOriginalObject:(id)arg1;	// IMP=0x000000000002d8b9
- (id)originalObject;	// IMP=0x000000000002d84d
- (id)description;	// IMP=0x000000000002d7d8
- (void)dealloc;	// IMP=0x000000000002d714
- (id)initWithBaseObject:(id)arg1 parent:(id)arg2;	// IMP=0x000000000002d69a
@property(readonly) id <MTLDevice> device;

@end

