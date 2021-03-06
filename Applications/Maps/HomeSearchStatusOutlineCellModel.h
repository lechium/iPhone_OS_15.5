//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, UICollectionViewCellRegistration;

__attribute__((visibility("hidden")))
@interface HomeSearchStatusOutlineCellModel : NSObject
{
    NSString *_errorString;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00200000000f2337
@property(readonly, copy, nonatomic) NSString *errorString; // @synthesize errorString=_errorString;
- (_Bool)needsReloadFromPreviousViewModel:(id)arg1;	// IMP=0x00100000000f2318
@property(readonly, nonatomic) UICollectionViewCellRegistration *cellRegistration;
- (id)_maps_diffableDataSourceIdentifier;	// IMP=0x00100000000f22f2
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000000f2264
@property(readonly) unsigned long long hash;
- (id)initWithErrorString:(id)arg1;	// IMP=0x00100000000f21e3

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

