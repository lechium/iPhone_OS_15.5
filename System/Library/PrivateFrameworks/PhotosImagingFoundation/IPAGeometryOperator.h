//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotosImagingFoundation/IPAGeometryOperator-Protocol.h>

@class NSString;

@interface IPAGeometryOperator : NSObject <IPAGeometryOperator>
{
    NSString *_identifer;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000013425
- (id)transformForGeometry:(id)arg1;	// IMP=0x00000000000133a9
- (id)identifier;	// IMP=0x000000000001339b
- (id)initWithIdentifier:(id)arg1;	// IMP=0x00000000000132dc
- (id)init;	// IMP=0x000000000001329b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
