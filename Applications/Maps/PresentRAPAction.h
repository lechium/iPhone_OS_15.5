//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class GEORPProblemStatusResponse, MKMapItem;

__attribute__((visibility("hidden")))
@interface PresentRAPAction
{
    GEORPProblemStatusResponse *_response;	// 8 = 0x8
    MKMapItem *_mapItem;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x002000000018a994
@property(retain, nonatomic) MKMapItem *mapItem; // @synthesize mapItem=_mapItem;
@property(retain, nonatomic) GEORPProblemStatusResponse *response; // @synthesize response=_response;
- (_Bool)isCompatibleWithRestorationTask;	// IMP=0x001000000018a942
- (id)initWithResponse:(id)arg1;	// IMP=0x001000000018a8d4
- (id)initWithMapItem:(id)arg1;	// IMP=0x001000000018a866

@end
