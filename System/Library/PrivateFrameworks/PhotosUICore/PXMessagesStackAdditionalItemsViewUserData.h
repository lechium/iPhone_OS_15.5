//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotosUICore/PXGViewUserData-Protocol.h>

@class NSString;

@interface PXMessagesStackAdditionalItemsViewUserData : NSObject <PXGViewUserData>
{
    CDStruct_15189878 _additionalItemsCount;	// 8 = 0x8
}

@property(readonly, nonatomic) CDStruct_15189878 additionalItemsCount; // @synthesize additionalItemsCount=_additionalItemsCount;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000004f23d1
- (id)init;	// IMP=0x00000000004f2357
- (id)initWithAdditionalItemsCount:(CDStruct_15189878)arg1;	// IMP=0x00000000004f230f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
