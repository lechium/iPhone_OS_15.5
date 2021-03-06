//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MPCPlayerResponse, MPModelGenericObject;

@interface MPCPlayerResponseSection : NSObject
{
    _Bool _autoPlaySection;	// 8 = 0x8
    MPCPlayerResponse *_response;	// 16 = 0x10
    MPModelGenericObject *_metadataObject;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000e196d
@property(readonly, nonatomic) MPModelGenericObject *metadataObject; // @synthesize metadataObject=_metadataObject;
@property(readonly, nonatomic) __weak MPCPlayerResponse *response; // @synthesize response=_response;
@property(readonly, nonatomic, getter=isAutoPlaySection) _Bool autoPlaySection; // @synthesize autoPlaySection=_autoPlaySection;
- (id)remove;	// IMP=0x00000000000e193c
- (id)initWithModelGenericObject:(id)arg1 sectionIndex:(long long)arg2 response:(id)arg3;	// IMP=0x00000000000e1835

@end

